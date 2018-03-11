//=============================================================================================================
/**
* @file     spectra_new.h
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
* @brief    Declaration of Spectra_new class.
*/

//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include "spectra_new.h"
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

QVector<Eigen::MatrixXcd> Spectra_new::computeTaperedSpectra_new(const Eigen::MatrixXd &matData,
                                                                 const Eigen::MatrixXd &matTaper,
                                                                 int iNfft)
{
    Eigen::FFT<double> fft;
    fft.SetFlag(fft.HalfSpectrum);

    //Check inputs
    if (matData.cols() != matTaper.cols()) {
        return QVector<Eigen::MatrixXcd>();
    }
    if (iNfft < matData.cols()) {
        return QVector<Eigen::MatrixXcd>();
    }

    //FFT for freq domain returning the half spectrum
    RowVectorXd vecInputFFT;
    RowVectorXcd vecTmpFreq;
    MatrixXcd matTmpFreq(matTaper.rows(), int(floor(iNfft / 2.0)) + 1);
    // MatrixXcd matTmpFreq(matTaper.rows(), iNfft);
    QVector<Eigen::MatrixXcd> vecData;
    for (int k = 0; k < matData.rows(); k++) {
         for (int i=0; i < matTaper.rows(); i++) {
            vecInputFFT = matData.row(k).cwiseProduct(matTaper.row(i));
            fft.fwd(vecTmpFreq, vecInputFFT, iNfft);
            matTmpFreq.row(i) = vecTmpFreq;
        }
        vecData.append(matTmpFreq);
    }

    return vecData;
}


//*************************************************************************************************************
QVector<Eigen::RowVectorXd> Spectra_new::psdFromTaperedSpectra_new(const QVector<Eigen::MatrixXcd> &vecTapSpectra,
                                                                   const Eigen::VectorXd &vecTapWeights,
                                                                   int iNfft)
{
    //Check inputs
    if (vecTapSpectra.at(0).rows() != vecTapWeights.rows()) {
        return QVector<Eigen::RowVectorXd>();
    }

    QVector<Eigen::RowVectorXd> vecPsd;
    double denom = vecTapWeights.cwiseAbs2().sum();
    for (int i=0; i < vecTapSpectra.length(); i++) {
        //Average over tapers
        MatrixXcd matTapSpectra = vecTapSpectra.at(i);
        RowVectorXd psd = (vecTapWeights.asDiagonal() * matTapSpectra).cwiseAbs2().colwise().sum() / denom;

        //multiply by 2 due to half spectrum
        psd *= 2.0;
        psd(0) /= 2.0;
        if (iNfft % 2 == 0){
            psd.tail(1) /= 2.0;
        }
        vecPsd.append(psd);
    }
    return vecPsd;
}


//*************************************************************************************************************

QVector<Eigen::MatrixXcd> Spectra_new::csdFromTaperedSpectra_new(const QVector<Eigen::MatrixXcd> &vecTapSpectra,
                                                                 const Eigen::VectorXd &vecTapWeights,
                                                                 int iNfft)
{
    //Check inputs
    if (vecTapSpectra.at(0).rows() != vecTapWeights.rows()) {
        return QVector<Eigen::MatrixXcd>();
    }

    QVector<Eigen::MatrixXcd> vecCsd;
    MatrixXcd matCsd = MatrixXcd::Zero(vecTapSpectra.length(), vecTapSpectra.at(0).cols());
    double denom = vecTapWeights.cwiseAbs2().sum();    //We use fix weights (adaptive weights not implemented)
    for (int i=0; i < vecTapSpectra.length(); i++) {
        for (int j=0; j < vecTapSpectra.length(); j++) {
            //Average over tapers
            MatrixXcd matTapSpectraSeed = vecTapSpectra.at(i);
            MatrixXcd matTapSpectraTarget = vecTapSpectra.at(j);
            RowVectorXcd csd = (vecTapWeights.asDiagonal() * matTapSpectraSeed).cwiseProduct((vecTapWeights.asDiagonal() * matTapSpectraTarget).conjugate()).colwise().sum();

            //multiply by 2 due to half spectrum
            csd *= 2.0;
            csd(0) /= 2.0;
            if (iNfft % 2 == 0){
                csd.tail(1) /= 2.0;
            }
            matCsd.row(j) = csd  / denom;
        }
        vecCsd.append(matCsd);
    }
    return vecCsd;
}


//*************************************************************************************************************

Eigen::VectorXd Spectra_new::calculateFFTFreqs_new(int iNfft, double dSampFreq)
{
    //Compute FFT frequencies
    RowVectorXd vecFFTFreqs;
    if (iNfft % 2 == 0){
        vecFFTFreqs = (dSampFreq / iNfft) * RowVectorXd::LinSpaced(iNfft / 2.0 + 1, 0.0, iNfft / 2.0);
    } else {
        vecFFTFreqs = (dSampFreq / iNfft) * RowVectorXd::LinSpaced((iNfft - 1) / 2.0 + 1, 0.0, (iNfft - 1) / 2.0);
    }
    return vecFFTFreqs;
}


//*************************************************************************************************************

QPair<MatrixXd, VectorXd> Spectra_new::generateWindow_new(int iSignalLength, const QString &sWindowType)
{
    QPair<MatrixXd, VectorXd> pairOut;
    if (sWindowType == "hanning") {
        pairOut.first = hanningWindow_new(iSignalLength);
        pairOut.second = VectorXd::Ones(1);
    } else if (sWindowType == "ones") {
        pairOut.first = MatrixXd::Ones(1, iSignalLength);
        pairOut.second = VectorXd::Ones(1);
    } else {
        pairOut.first = hanningWindow_new(iSignalLength);
        pairOut.second = VectorXd::Ones(1);    }
    return pairOut;
}


//*************************************************************************************************************

MatrixXd Spectra_new::hanningWindow_new(int iSignalLength)
{
    MatrixXd matHann = MatrixXd::Zero(1, iSignalLength);

    //Main step of building the hanning window
    for (int n = 0; n < iSignalLength; n++) {
        matHann(0, n) = 0.5 - 0.5 * cos(2.0 * M_PI * n / (iSignalLength - 1.0));
    }

    return matHann;
}
