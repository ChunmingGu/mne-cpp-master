//=============================================================================================================
/**
* @file     spectrogram.h
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

#ifndef SPECTRA_H
#define SPECTRA_H

//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include "utils_global.h"


//*************************************************************************************************************
//=============================================================================================================
// Eigen INCLUDES
//=============================================================================================================

#include <Eigen/Core>


//*************************************************************************************************************
//=============================================================================================================
// Qt INCLUDES
//=============================================================================================================

#include <QString>
#include <QVector>


//*************************************************************************************************************
//=============================================================================================================
// DEFINE NAMESPACE UTILSLIB
//=============================================================================================================

namespace UTILSLIB
{

struct TaperedSpectralData {
    QVector<Eigen::MatrixXcd> vecData;
    Eigen::RowVectorXd vecFreqBins;
    Eigen::VectorXcd vecTaperWeights;
    QString sMethod;
    double dSampFreq;
    bool bMeanRemoved;
    int iSignalLength;
    int iNumTapers;
    int iNfft;
};

struct PsdData {
    Eigen::MatrixXd matPsd;
    Eigen::RowVectorXd vecFreqBins;
    QString sMethod;
    Eigen::RowVectorXi vecIndices;
};

struct CsdData {
    Eigen::MatrixXcd matCsd;
    Eigen::RowVectorXd vecFreqBins;
    QString sMethod;
    int iIndexSeed;
    Eigen::RowVectorXi vecIndices;
};

//=============================================================================================================
/**
* Computes spectral measures of input data such as spectra, power spectral density, cross-spectral density.
*
* @brief Computes spectral measures of input data.
*/
class UTILSSHARED_EXPORT Spectra
{

public:
    //=========================================================================================================
    /**
    * deleted default constructor (static class).
    */
    Spectra() = delete;

    //=========================================================================================================
    /**
    * Calculates the full tapered spectra of a given input data
    *
    * @param[in] matData        input data to calculate spectra of
    * @param[in] dSampFreq      sampling frequency of the input data
    * @param[in] sWindowType    type of the window function used to compute tapered spectra
    * @param[in] iNfft          FFT length
    * @param[in] bZeroPad       flag to indicate if zero-padding is to be applied in FFT
    * @param[in] bRemoveMean    flag to indicate if mean is to be removed
    *
    * @return tapered spectra of the input data
    */
    static TaperedSpectralData computeTaperedSpectra(const Eigen::MatrixXd &matData,
                                                     const double &dSampFreq,
                                                     const QString &sWindowType = "hanning",
                                                     int iNfft = -1,
                                                     bool bZeroPad = true,
                                                     bool bRemoveMean = true);

    //=========================================================================================================
    /**
    * Calculates the power spectral density of given tapered spectra (channel-wise)
    *
    * @param[in] structSpectral     tapered spectra
    * @param[in] vecIndices         channel indices
    *
    * @return power spectral density of given tapered spectra
    */
    static PsdData psdFromTaperedSpectra(const TaperedSpectralData &structSpectral,
                                         Eigen::RowVectorXi vecIndices = Eigen::RowVectorXi());

    //=========================================================================================================
    /**
    * Calculates the cross-spectral density of given tapered spectra
    *
    * @param[in] structSpectral     tapered spectra
    * @param[in] iIndexSeed         index of the seed
    * @param[in] vecIndices         channel indices
    *
    * @return cross-spectral density of given tapered spectra
    */
    static CsdData csdFromTaperedSpectra(const TaperedSpectralData &structSpectral,
                                         int iIndexSeed,
                                         Eigen::RowVectorXi vecIndices = Eigen::RowVectorXi());

private:

    //=========================================================================================================
    /**
    * Calculates a hanning window of given length
    *
    * @param[in] iSignalLength     length if the hanning window
    *
    * @return hanning window
    */
    static Eigen::MatrixXd hanningWindow(int iSignalLength);

};

}//namespace

#endif // SPECTRA_H

