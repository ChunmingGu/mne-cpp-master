//=============================================================================================================
/**
* @file     gpuinterpolationmaterial.h
* @author   Lars Debor <lars.debor@tu-ilmenau.de>;
*           Matti Hamalainen <msh@nmr.mgh.harvard.edu>
* @version  1.0
* @date     October, 2017
*
* @section  LICENSE
*
* Copyright (C) 2017, Lars Debor and Matti Hamalainen. All rights reserved.
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
* @brief     GpuInterpolationMaterial class declaration.
*
*/

#ifndef DISP3DLIB_GPUINTERPOLATIONMATERIAL_H
#define DISP3DLIB_GPUINTERPOLATIONMATERIAL_H


//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include <disp3D_global.h>


//*************************************************************************************************************
//=============================================================================================================
// QT INCLUDES
//=============================================================================================================

#include <QSharedPointer>
#include <QPointer>
#include <Qt3DRender/QMaterial>


//*************************************************************************************************************
//=============================================================================================================
// Eigen INCLUDES
//=============================================================================================================

#include <Eigen/Core>
#include <Eigen/SparseCore>


//*************************************************************************************************************
//=============================================================================================================
// FORWARD DECLARATIONS
//=============================================================================================================

namespace QtCore {
        class QVector3D;
}
namespace Qt3DCore {
        class QNode;
}

namespace Qt3DRender {
        class QEffect;
        class QParameter;
        class QShaderProgram;
        class QRenderPass;
        class QFilterKey;
        class QTechnique;
        class QBuffer;
}


//*************************************************************************************************************
//=============================================================================================================
// DEFINE NAMESPACE DISPDLIB
//=============================================================================================================

namespace DISP3DLIB {


//*************************************************************************************************************
//=============================================================================================================
// DISP3DLIB FORWARD DECLARATIONS
//=============================================================================================================


//=============================================================================================================
/**
* This class stores the material used for interpolation with a compute shader.
*
* @brief Compute shader interpolation material.
*/

class DISP3DSHARED_EXPORT GpuInterpolationMaterial : public Qt3DRender::QMaterial
{
    Q_OBJECT

public:
    typedef QSharedPointer<GpuInterpolationMaterial> SPtr;            /**< Shared pointer type for GpuInterpolationMaterial. */
    typedef QSharedPointer<const GpuInterpolationMaterial> ConstSPtr; /**< Const shared pointer type for GpuInterpolationMaterial. */

    //=========================================================================================================
    /**
    * Default constructor.
    *
    * @param[in] parent         The parent of this class.
    */
    explicit GpuInterpolationMaterial(Qt3DCore::QNode *parent = 0);

    //=========================================================================================================
    /**
    * Default destructor.
    */
    ~GpuInterpolationMaterial();

    //=========================================================================================================
    /**
     * Set the new interpolation matrix for interpolation.
     *
     * @param pInterpolationMatrix      The weight matrix.
     */
    void setWeightMatrix(QSharedPointer<Eigen::SparseMatrix<double>> tInterpolationMatrix);

    //=========================================================================================================
    /**
    * Add a new vector with signal data form the sensors and push them into m_pSignalDataBuffer.
    *
    * @param tSignalVec                Vector with one float value for each sensor.
    */
    void addSignalData(const Eigen::VectorXf &tSignalVec);

    //=========================================================================================================
    /**
    * Get the current alpha value.
    *
    * @return The current alpha value.
    */
    float alpha();

    //=========================================================================================================
    /**
    * Set the current alpha value.
    *
    * @param[in] alpha  The new alpha value.
    */
    void setAlpha(const float tAlpha);

    //=========================================================================================================
    /**
    * This function set the normalization value.
    *
    * @param[in] vecThresholds              The new threshold values used for normalizing the data.
    */
    void setNormalization(const QVector3D& tVecThresholds);

    //=========================================================================================================
    /**
     * This function sets the colormap type
     *
     * @param tColormapType                     The new colormap name.
     */
    void setColormapType(const QString& tColormapType);

    //=========================================================================================================
    /**
     * This function returns a pointer to the output color buffer.
     */
    Qt3DRender::QBuffer *getOutputColorBuffer();

protected:

private:
    //=========================================================================================================
    /**
     * Init GpuInterpolationMaterial class.
     */
    void init();

    //=========================================================================================================
    /**
    * This function gets called whenever the alpha value is changed.
    * It handles the change between opaque and transparent depending on the new alpha.
    *
    * @param[in] fAlpha         The new alpha value.
    */
    void onAlphaChanged(const QVariant &fAlpha);

    //=========================================================================================================
    /**
     * Build the content of the weight matrix buffer.
     *
     * @param tInterpolationMatrix      The weight matrix.
     * @return                          Weight matrix is byte array form.
     */
    QByteArray buildWeightMatrixBuffer(QSharedPointer<Eigen::SparseMatrix<double>> tInterpolationMatrix);

    //=========================================================================================================
    /**
     * Build buffer filled with 0.0f.
     *
     * @param tSize         Number of zeros.
     * @return              Buffer content.
     */
    QByteArray buildZeroBuffer(const uint tSize);

    QPointer<Qt3DRender::QEffect>                       m_pEffect;                  /**< The effect of this material. */

    //Phongalpha parameter
    QPointer<Qt3DRender::QParameter>                    m_pDiffuseParameter;        /**< Parameter that determines the diffuse value. */
    QPointer<Qt3DRender::QParameter>                    m_pSpecularParameter;       /**< Parameter that determines the specular value. */
    QPointer<Qt3DRender::QParameter>                    m_pShininessParameter;      /**< Parameter that determines the shininess value. */
    QPointer<Qt3DRender::QParameter>                    m_pAlphaParameter;          /**< Parameter that determines the alpha value. */

    //Compute Part
    QPointer<Qt3DRender::QShaderProgram>                m_pComputeShader;           /**< Stores the shader program of the compute shader. */
    QPointer<Qt3DRender::QRenderPass>                   m_pComputeRenderPass;       /**< The render pass for the compute run. */
    QPointer<Qt3DRender::QFilterKey>                    m_pComputeFilterKey;        /**< The compute filter key. */
    QPointer<Qt3DRender::QTechnique>                    m_pComputeTechnique;        /**< The technique of the compute shader. This should match with the frame graph. */

    //Draw Part
    QPointer<Qt3DRender::QShaderProgram>                m_pDrawShader;              /**< Stores the shader program of the draw shader. */
    QPointer<Qt3DRender::QRenderPass>                   m_pDrawRenderPass;          /**< The render pass for the draw run. */
    QPointer<Qt3DRender::QFilterKey>                    m_pDrawFilterKey;           /**< The draw filter key. */
    QPointer<Qt3DRender::QTechnique>                    m_pDrawTechnique;           /**< The technique of the draw shader. This should match with the frame graph. */

    //Measurement signal
    QPointer<Qt3DRender::QBuffer>                       m_pSignalDataBuffer;        /**< This buffer stores signal input data. */
    QPointer<Qt3DRender::QParameter>                    m_pSignalDataParameter;     /**< This parameter holds the signal data buffer. */

    //Weight matrix parameter
    QPointer<Qt3DRender::QParameter>                    m_pColsParameter;           /**< This parameter holds the number of columns in the weight matrix. */
    QPointer<Qt3DRender::QParameter>                    m_pRowsParameter;           /**< This parameter holds the number of rows in the weight matrix. */
    QPointer<Qt3DRender::QParameter>                    m_pWeightMatParameter;      /**< This parameter holds the weight matrix buffer. */
    QPointer<Qt3DRender::QBuffer>                       m_pWeightMatBuffer;         /**< This buffer the interpolation matrix. */

    //Output parameter
    QPointer<Qt3DRender::QParameter>                    m_pOutputColorParameter;    /**< This parameter holds the output color buffer. */
    QPointer<Qt3DRender::QBuffer>                       m_pOutputColorBuffer;       /**< This buffer the color output from the compute shader. */

    //Lower and upper normalization threshold parameter
    QPointer<Qt3DRender::QParameter>                    m_pThresholdXParameter;     /**< This parameter holds the lower threshold value. */
    QPointer<Qt3DRender::QParameter>                    m_pThresholdZParameter;     /**< This parameter holds the upper threshold value. */

    //Colormap type
    QPointer<Qt3DRender::QParameter>                    m_pColormapParameter;       /**< This parameter stores the colormap type. */
};


//*************************************************************************************************************
//=============================================================================================================
// INLINE DEFINITIONS
//=============================================================================================================


} // namespace DISP3DLIB

#endif // DISP3DLIB_GPUINTERPOLATIONMATERIAL_H
