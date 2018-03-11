//=============================================================================================================
/**
* @file     connectivity.cpp
* @author   Lorenz Esch <Lorenz.Esch@tu-ilmenau.de>;
*           Matti Hamalainen <msh@nmr.mgh.harvard.edu>
* @version  1.0
* @date     March, 2017
*
* @section  LICENSE
*
* Copyright (C) 2017, Lorenz Esch and Matti Hamalainen. All rights reserved.
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
* @brief    Connectivity class definition.
*
*/


//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include "connectivity.h"

#include "connectivitysettings.h"
#include "network/network.h"
#include "connectivitymeasures.h"

#include <fs/label.h>
#include <fs/annotationset.h>

#include <mne/mne_sourceestimate.h>

#include <inverse/minimumNorm/minimumnorm.h>


//*************************************************************************************************************
//=============================================================================================================
// QT INCLUDES
//=============================================================================================================


//*************************************************************************************************************
//=============================================================================================================
// Eigen INCLUDES
//=============================================================================================================


//*************************************************************************************************************
//=============================================================================================================
// USED NAMESPACES
//=============================================================================================================

using namespace CONNECTIVITYLIB;
using namespace FSLIB;
using namespace MNELIB;
using namespace INVERSELIB;


//*************************************************************************************************************
//=============================================================================================================
// DEFINE GLOBAL METHODS
//=============================================================================================================


//*************************************************************************************************************
//=============================================================================================================
// DEFINE MEMBER METHODS
//=============================================================================================================

Connectivity::Connectivity(const ConnectivitySettings& connectivitySettings)
: m_pConnectivitySettings(ConnectivitySettings::SPtr(new ConnectivitySettings(connectivitySettings)))
{
}


//*************************************************************************************************************

Network Connectivity::calculateConnectivity() const
{
    MatrixXd matData;
    MatrixX3f matNodePos;

    if(m_pConnectivitySettings->m_bDoSourceLoc) {
        generateSourceLevelData(matData, matNodePos);
    } else {
        generateSensorLevelData(matData, matNodePos);
    }

    if(m_pConnectivitySettings->m_sConnectivityMethod == "COR") {
        return ConnectivityMeasures::pearsonsCorrelationCoeff(matData, matNodePos);
    } else if(m_pConnectivitySettings->m_sConnectivityMethod == "XCOR") {
        return ConnectivityMeasures::crossCorrelation(matData, matNodePos);
    }

    return Network();
}


//*************************************************************************************************************

void Connectivity::generateSensorLevelData(MatrixXd& matData, MatrixX3f& matNodePos) const
{
    matData.resize(0,0);
    matData.resize(0,0);

    // Load data
    QPair<QVariant, QVariant> baseline(QVariant(), 0);
    QFile t_fileEvoked(m_pConnectivitySettings->m_sMeas);
    FiffEvoked evoked(t_fileEvoked, m_pConnectivitySettings->m_iAveIdx, baseline);

    bool bPick = false;
    qint32 unit;
    int counter = 0;

    for(int i = 0; i < evoked.info.chs.size(); ++i) {
        unit = evoked.info.chs.at(i).unit;

        if(unit == FIFF_UNIT_T_M &&
            m_pConnectivitySettings->m_sChType == "meg" &&
            m_pConnectivitySettings->m_sCoilType == "grad") {
            bPick = true;
        } else if(unit == FIFF_UNIT_T &&
                    m_pConnectivitySettings->m_sChType == "meg" &&
                    m_pConnectivitySettings->m_sCoilType == "mag") {
            bPick = true;
        } else if (unit == FIFF_UNIT_V &&
                    m_pConnectivitySettings->m_sChType == "eeg") {
            bPick = true;
        }

        if(bPick) {
            //Get the data
            matData.conservativeResize(matData.rows()+1, evoked.data.cols());
            matData.row(counter) = evoked.data.row(i);

            //Get the positions
            matNodePos.conservativeResize(matNodePos.rows()+1, 3);
            matNodePos(counter,0) = evoked.info.chs.at(i).chpos.r0(0);
            matNodePos(counter,1) = evoked.info.chs.at(i).chpos.r0(1);
            matNodePos(counter,2) = evoked.info.chs.at(i).chpos.r0(2);

            counter++;
        }

        bPick = false;
    }
}


//*************************************************************************************************************

void Connectivity::generateSourceLevelData(MatrixXd& matData, MatrixX3f& matNodePos) const
{
    AnnotationSet tAnnotSet(m_pConnectivitySettings->m_sSubj,
                             2,
                             m_pConnectivitySettings->m_sAnnotType,
                             m_pConnectivitySettings->m_sSubjDir);

    QFile t_fileFwd(m_pConnectivitySettings->m_sFwd);
    MNEForwardSolution t_Fwd(t_fileFwd);
    MNEForwardSolution t_clusteredFwd;

    QFile t_fileCov(m_pConnectivitySettings->m_sCov);
    QFile t_fileEvoked(m_pConnectivitySettings->m_sMeas);

    // Load data
    QPair<QVariant, QVariant> baseline(QVariant(), 0);
    MNESourceEstimate sourceEstimate;
    FiffEvoked evoked(t_fileEvoked, m_pConnectivitySettings->m_iAveIdx, baseline);

    double snr = m_pConnectivitySettings->m_dSnr;
    double lambda2 = 1.0 / pow(snr, 2);
    QString method(m_pConnectivitySettings->m_sSourceLocMethod);

    t_fileEvoked.close();

    if(evoked.isEmpty() || t_Fwd.isEmpty()) {
        return;
    }

    FiffCov noise_cov(t_fileCov);

    // regularize noise covariance
    noise_cov = noise_cov.regularize(evoked.info, 0.05, 0.05, 0.1, true);

    // Cluster forward solution;
    if(m_pConnectivitySettings->m_bDoClust) {
        t_clusteredFwd = t_Fwd.cluster_forward_solution(tAnnotSet, 40);
    } else {
        t_clusteredFwd = t_Fwd;
    }

    // make an inverse operators
    FiffInfo info = evoked.info;

    MNEInverseOperator inverse_operator(info, t_clusteredFwd, noise_cov, 0.2f, 0.8f);

    // Compute inverse solution
    MinimumNorm minimumNorm(inverse_operator, lambda2, method);
    sourceEstimate = minimumNorm.calculateInverse(evoked);

    if(sourceEstimate.isEmpty()) {
        return;
    }

    matData = sourceEstimate.data;

    //Generate node vertices
    MatrixX3f matNodeVertLeft, matNodeVertRight;

    if(m_pConnectivitySettings->m_bDoClust) {
        matNodeVertLeft.resize(t_clusteredFwd.src[0].cluster_info.centroidVertno.size(),3);

        for(int j = 0; j < matNodeVertLeft.rows(); ++j) {
            matNodeVertLeft.row(j) = t_clusteredFwd.src[0].rr.row(t_clusteredFwd.src[0].cluster_info.centroidVertno.at(j));
        }

        matNodeVertRight.resize(t_clusteredFwd.src[1].cluster_info.centroidVertno.size(),3);
        for(int j = 0; j < matNodeVertRight.rows(); ++j) {
            matNodeVertRight.row(j) = t_clusteredFwd.src[1].rr.row(t_clusteredFwd.src[1].cluster_info.centroidVertno.at(j));
        }
    } else {
        matNodeVertLeft.resize(t_Fwd.src[0].vertno.rows(),3);
        for(int j = 0; j < matNodeVertLeft.rows(); ++j) {
            matNodeVertLeft.row(j) = t_clusteredFwd.src[0].rr.row(t_Fwd.src[0].vertno(j));
        }

        matNodeVertRight.resize(t_Fwd.src[1].vertno.rows(),3);
        for(int j = 0; j < matNodeVertRight.rows(); ++j) {
            matNodeVertRight.row(j) = t_clusteredFwd.src[1].rr.row(t_Fwd.src[1].vertno(j));
        }
    }

    matNodePos.resize(matNodeVertLeft.rows()+matNodeVertRight.rows(),3);
    matNodePos << matNodeVertLeft, matNodeVertRight;
}
