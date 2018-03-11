//=============================================================================================================
/**
* @file     spectra.h
* @author   Daniel Strohmeier <daniel.strohmeier@tu-ilmenau.de>;
*           Lorenz Esch <lorenz.esch@tu-ilmenau.de>;
*           Matti Hamalainen <msh@nmr.mgh.harvard.edu>
* @version  1.0
* @date     January, 2018
*
* @section  LICENSE
*
* Copyright (C) 2018, Daniel Strohmeier, Lorenz Esch and Matti Hamalainen. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without modification, are permitted provided that
* the following conditions are met:
*     * Redistributions of source code must retain the above copyright notice, this list of conditions and the
*       following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and
*       the following disclaimer in the documentation and/or other materials provided with the distribution.
*     * Neither the name of MNE-CPP authors nor the names of its contributors may be used
*       to endorse or promote products derived from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
* PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
* NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
*
* @brief    Declaration of Spectra class.
*/

//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include "spectra.h"
#include "math.h"

#ifndef M_PI
    #define M_PI 3.14159265358979323846264338327950288
#endif


//*************************************************************************************************************
//=============================================================================================================
// Eigen INCLUDES
//=============================================================================================================

#include <unsupported/Eigen/FFT>


//*************************************************************************************************************
//=============================================================================================================
// USED NAMESPACES
//=============================================================================================================

using namespace UTILSLIB;
using namespace Eigen;

//*************************************************************************************************************
//=============================================================================================================
// DEFINE MEMBER METHODS
//=============================================================================================================

TaperedSpectralData Spectra::computeTaperedSpectra(const Eigen::MatrixXd &matData, const double &dSampFreq,
                                                   const QString &sWindowType, int iNfft, bool bZeroPad,
                                                   bool bRemoveMean)
{
    Eigen::FFT<double> fft;
    fft.SetFlag(fft.HalfSpectrum);

    //Initialize SpectralData struct
    TaperedSpectralData returnData;

    int iSignalLength = matData.cols();
    returnData.iSignalLength = iSignalLength;

    //Remove mean if requested
    MatrixXd matInputData = matData;
    if (bRemoveMean == true){
        for (int n = 0; n < matData.rows(); n++) {
            matInputData.row(n).array() -= matInputData.row(n).mean();
        }
    }
    else {
        matInputData = matData;
    }
    returnData.bMeanRemoved = bRemoveMean;

    //Compute the tapers
    MatrixXd matTapers;
    returnData.sMethod = sWindowType;
    if (sWindowType == "hanning") {
        matTapers = hanningWindow(iSignalLength);
        returnData.vecTaperWeights = VectorXcd::Ones(1);
    } else if (sWindowType == "ones") {
        matTapers = MatrixXd::Ones(1, iSignalLength);
        returnData.vecTaperWeights = VectorXcd::Ones(1);
    } else {
            matTapers = hanningWindow(iSignalLength);
            returnData.vecTaperWeights = VectorXcd::Ones(1);
            returnData.sMethod = "hanning";
    }
    returnData.iNumTapers = matTapers.rows();

    //Compute the FFT size
    if (iNfft < iSignalLength) {
        iNfft = iSignalLength;
    }
    if (bZeroPad == true) {
        int b = ceil(log2(2.0 * iNfft - 1));
        iNfft = pow(2,b);
    }
    returnData.iNfft = iNfft;

    //Compute FFT frequencies
    RowVectorXd vecFreqBins;
    if (iNfft % 2 == 0){
        vecFreqBins = (dSampFreq / iNfft) * RowVectorXd::LinSpaced(iNfft / 2.0 + 1, 0.0, iNfft / 2.0);
    } else {
        vecFreqBins = (dSampFreq / iNfft) * RowVectorXd::LinSpaced((iNfft - 1) / 2.0 + 1, 0.0, (iNfft - 1) / 2.0);
    }
    returnData.vecFreqBins = vecFreqBins;
    returnData.dSampFreq = dSampFreq;

    //FFT for freq domain returning the half spectrum
    RowVectorXcd vecTmpFreq;
    MatrixXcd matTmpFreq;
    RowVectorXcd vecInputFFT;
    for (int k = 0; k < matData.rows(); k++) {
         for (int i=0; i < returnData.iNumTapers; i++) {
            vecInputFFT = matData.row(k).cwiseProduct(matTapers.row(i));
            fft.fwd(vecTmpFreq, vecInputFFT, iNfft);
            matTmpFreq.row(i) = vecTmpFreq;
        }
        returnData.vecData.append(matTmpFreq);
    }

    return returnData;
}


//*************************************************************************************************************
PsdData Spectra::psdFromTaperedSpectra(const TaperedSpectralData &structSpectral, RowVectorXi vecIndices)
{
    //Initialize PsdData struct
    PsdData returnData;
    returnData.sMethod = structSpectral.sMethod;

    //Check whether half spectrum shall be returned
    returnData.vecFreqBins = structSpectral.vecFreqBins;
    int numFreqBins = returnData.vecFreqBins.cols();

    //Compute PSD for each channel in vecIndices (use all if empty)
    if (vecIndices.size() == 0) {
        vecIndices = RowVectorXi::LinSpaced(structSpectral.vecData.length(), 0, structSpectral.vecData.length() - 1);
    }
    MatrixXd matPsd = MatrixXd::Zero(vecIndices.cols(),numFreqBins);
    VectorXcd vecTaperWeights = structSpectral.vecTaperWeights;
    double denom = vecTaperWeights.cwiseAbs2().sum();
    for (int i=0; i < vecIndices.cols(); i++) {
        //Average over tapers
        MatrixXcd matTapSpectra = structSpectral.vecData.at(vecIndices(i));
        RowVectorXd psd = (vecTaperWeights.asDiagonal() * matTapSpectra.leftCols(numFreqBins)).cwiseAbs2().colwise().sum() / denom;

        //multiply by 2 due to half spectrum
        if (returnData.vecFreqBins.maxCoeff() == structSpectral.dSampFreq / 2.0) {
            psd = psd.segment(1, numFreqBins - 2) * 2.0;
        } else {
            psd = psd.segment(1, numFreqBins - 1) * 2.0;
        }
        matPsd.row(i) = psd;
    }
    returnData.matPsd = matPsd;
    returnData.vecIndices = vecIndices;
    return returnData;
}


//*************************************************************************************************************

CsdData Spectra::csdFromTaperedSpectra(const TaperedSpectralData &structSpectral, int iIndexSeed,
                                       RowVectorXi vecIndices)
{
    //Initialize PsdData struct
    CsdData returnData;
    returnData.sMethod = structSpectral.sMethod;

    //Check whether half spectrum shall be returned
    returnData.vecFreqBins = structSpectral.vecFreqBins.head(structSpectral.iNfft / 2 + 1);
    int numFreqBins = returnData.vecFreqBins.cols();

    //Compute CSD for each channel in vecIndices (use all if empty)
    if (vecIndices.size() == 0) {
        vecIndices = RowVectorXi::LinSpaced(structSpectral.vecData.length(), 0, structSpectral.vecData.length() - 1);
    }
    MatrixXcd matCsd = MatrixXcd::Zero(vecIndices.cols(),numFreqBins);
    VectorXcd vecTaperWeights = structSpectral.vecTaperWeights;
    MatrixXcd matTapSpectraSeed = structSpectral.vecData.at(iIndexSeed).leftCols(numFreqBins);
    double denom = vecTaperWeights.cwiseAbs2().sum();    //We use fix weights (adaptive weights not implemented)
    for (int i=0; i < vecIndices.cols(); i++) {
        //Average over tapers
        MatrixXcd matTapSpectra = structSpectral.vecData.at(vecIndices(i));
        RowVectorXcd csd = (vecTaperWeights.asDiagonal() * matTapSpectraSeed).cwiseProduct((vecTaperWeights.asDiagonal() * matTapSpectra).conjugate()).colwise().sum();

        //multiply by 2 due to half spectrum
        if (returnData.vecFreqBins.maxCoeff() == structSpectral.dSampFreq / 2.0) {
            csd = csd.segment(1, numFreqBins - 2) * 2.0;
        } else {
            csd = csd.segment(1, numFreqBins - 1) * 2.0;
        }
        matCsd.row(i) = csd  / denom;
    }
    returnData.matCsd = matCsd;
    returnData.iIndexSeed = iIndexSeed;
    returnData.vecIndices = vecIndices;

    return returnData;
}


//*************************************************************************************************************

MatrixXd Spectra::hanningWindow(int iSignalLength)
{
    MatrixXd matHann = MatrixXd::Zero(1, iSignalLength);

    //Main step of building the hanning window
    for (int n = 0; n < iSignalLength; n++) {
        matHann(1,n) = 0.5 * (1.0 - cos(2.0 * M_PI * n / (iSignalLength - 1.0)));
    }

    return matHann;
}
