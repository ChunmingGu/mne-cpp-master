//=============================================================================================================
/**
* @file     shadermaterial.h
* @author   Lorenz Esch <Lorenz.Esch@tu-ilmenau.de>;
*           Matti Hamalainen <msh@nmr.mgh.harvard.edu>
* @version  1.0
* @date     January, 2017
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
* @brief    ShaderMaterial class declaration
*/

#ifndef SHADERMATERIAL_H
#define SHADERMATERIAL_H


//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include "../../../disp3D_global.h"


//*************************************************************************************************************
//=============================================================================================================
// QT INCLUDES
//=============================================================================================================

#include <Qt3DRender/qmaterial.h>
#include <QPointer>


//*************************************************************************************************************
//=============================================================================================================
// Eigen INCLUDES
//=============================================================================================================


//*************************************************************************************************************
//=============================================================================================================
// FORWARD DECLARATIONS
//=============================================================================================================

namespace Qt3DRender {
    class QMaterial;
    class QEffect;
    class QParameter;
    class QShaderProgram;
    class QMaterial;
    class QFilterKey;
    class QTechnique;
    class QRenderPass;
    class QNoDepthMask;
    class QBlendEquationArguments;
    class QBlendEquation;
    class QGraphicsApiFilter;
}


//*************************************************************************************************************
//=============================================================================================================
// DEFINE NAMESPACE DISP3DLIB
//=============================================================================================================

namespace DISP3DLIB
{


//*************************************************************************************************************
//=============================================================================================================
// FORWARD DECLARATIONS
//=============================================================================================================


//=============================================================================================================
/**
* ShaderMaterial is provides a Qt3D material with own shader support.
*
* @brief ShaderMaterial is provides a Qt3D material with own shader support.
*/
class DISP3DSHARED_EXPORT ShaderMaterial : public Qt3DRender::QMaterial
{
    Q_OBJECT

public:
    //=========================================================================================================
    /**
    * Default constructor.
    *
    * @param[in] parent         The parent of this class.
    */
    explicit ShaderMaterial(Qt3DCore::QNode *parent = 0);

    //=========================================================================================================
    /**
    * Default destructor.
    */
    ~ShaderMaterial();

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
    void setAlpha(float alpha);

    //=========================================================================================================
    /**
    * Sets the entity's material sahder. This is a convenient function.
    *
    * @param[in] sShader     The new shader. Must be present in the qrc resource file.
    *
    * @return If successful returns true, false otherwise.
    */
    void setShader(const QUrl& sShader);

private:
    //=========================================================================================================
    /**
    * Init the ShaderMaterial class.
    */
    void init();

    bool                                    m_bShaderInit;

    QPointer<Qt3DRender::QEffect>           m_pVertexEffect;

    QPointer<Qt3DRender::QFilterKey>        m_pFilterKey;

    QPointer<Qt3DRender::QTechnique>        m_pVertexGL4Technique;
    QPointer<Qt3DRender::QRenderPass>       m_pVertexGL4RenderPass;
    QPointer<Qt3DRender::QShaderProgram>    m_pVertexGL4Shader;

    QPointer<Qt3DRender::QNoDepthMask>                  m_pNoDepthMask;
    QPointer<Qt3DRender::QBlendEquationArguments>       m_pBlendState;
    QPointer<Qt3DRender::QBlendEquation>                m_pBlendEquation;
};

} // namespace DISP3DLIB

#endif // ShaderMaterial_H
