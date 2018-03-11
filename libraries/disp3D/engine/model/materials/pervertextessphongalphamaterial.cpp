//=============================================================================================================
/**
* @file     pervertextessphongalphamaterial.cpp
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
* @brief    PerVertexTessPhongAlphaMaterial class definition
*/


//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include "pervertextessphongalphamaterial.h"


//*************************************************************************************************************
//=============================================================================================================
// QT INCLUDES
//=============================================================================================================

#include <QColor>
#include <Qt3DRender/qeffect.h>
#include <Qt3DRender/qtechnique.h>
#include <Qt3DRender/qshaderprogram.h>
#include <Qt3DRender/qparameter.h>
#include <Qt3DRender/qrenderpass.h>
#include <QFilterKey>
#include <Qt3DRender/qdepthtest.h>
#include <Qt3DRender/qblendequation.h>
#include <Qt3DRender/qblendequationarguments.h>
#include <Qt3DRender/qnodepthmask.h>
#include <Qt3DRender/qgraphicsapifilter.h>

#include <QUrl>
#include <QVector3D>
#include <QVector4D>


//*************************************************************************************************************
//=============================================================================================================
// USED NAMESPACES
//=============================================================================================================

using namespace DISP3DLIB;
using namespace Qt3DRender;


//*************************************************************************************************************
//=============================================================================================================
// DEFINE MEMBER METHODS
//=============================================================================================================

PerVertexTessPhongAlphaMaterial::PerVertexTessPhongAlphaMaterial(QNode *parent)
: QMaterial(parent)
, m_pVertexEffect(new QEffect())
, m_pDiffuseParameter(new QParameter(QStringLiteral("kd"), QColor::fromRgbF(0.7f, 0.7f, 0.7f, 1.0f)))
, m_pSpecularParameter(new QParameter(QStringLiteral("ks"), QColor::fromRgbF(0.1f, 0.1f, 0.1f, 1.0f)))
, m_pShininessParameter(new QParameter(QStringLiteral("shininess"), 15.0f))
, m_pInnerTessParameter(new QParameter("innerTess", 1.0f))
, m_pOuterTessParameter(new QParameter("outerTess", 1.0f))
, m_pTriangleScaleParameter(new QParameter("triangleScale", 1.0f))
, m_pAlphaParameter(new QParameter("alpha", 0.5f))
, m_pVertexGL4Technique(new QTechnique())
, m_pVertexGL4RenderPass(new QRenderPass())
, m_pVertexGL4Shader(new QShaderProgram())
, m_pFilterKey(new QFilterKey)
{
    this->init();
}


//*************************************************************************************************************

PerVertexTessPhongAlphaMaterial::~PerVertexTessPhongAlphaMaterial()
{
}


//*************************************************************************************************************

void PerVertexTessPhongAlphaMaterial::init()
{
    //Set shader
    m_pVertexGL4Shader->setVertexShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/gl4/pervertextessphongalpha.vert"))));
    m_pVertexGL4Shader->setTessellationControlShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/gl4/pervertextessphongalpha.tcs"))));
    //m_pVertexGL4Shader->setTessellationEvaluationShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/gl4/pervertextessphongalpha_simple.tes"))));
    m_pVertexGL4Shader->setTessellationEvaluationShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/gl4/pervertextessphongalpha_pn_triangles.tes"))));
    m_pVertexGL4Shader->setGeometryShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/gl4/pervertextessphongalpha.geom"))));
    m_pVertexGL4Shader->setFragmentShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/gl4/pervertextessphongalpha.frag"))));

    m_pVertexGL4RenderPass->setShaderProgram(m_pVertexGL4Shader);

    //Set OpenGL version - This material can only be used with opengl 4.0 or higher since it is using tesselation
    m_pVertexGL4Technique->graphicsApiFilter()->setApi(QGraphicsApiFilter::OpenGL);
    m_pVertexGL4Technique->graphicsApiFilter()->setMajorVersion(4);
    m_pVertexGL4Technique->graphicsApiFilter()->setMinorVersion(0);
    m_pVertexGL4Technique->graphicsApiFilter()->setProfile(QGraphicsApiFilter::CoreProfile);

    m_pVertexGL4Technique->addFilterKey(m_pFilterKey);

    m_pVertexGL4Technique->addRenderPass(m_pVertexGL4RenderPass);

    m_pVertexEffect->addTechnique(m_pVertexGL4Technique);

    m_pVertexEffect->addParameter(m_pDiffuseParameter);
    m_pVertexEffect->addParameter(m_pSpecularParameter);
    m_pVertexEffect->addParameter(m_pShininessParameter);
    m_pVertexEffect->addParameter(m_pAlphaParameter);
    m_pVertexEffect->addParameter(m_pInnerTessParameter);
    m_pVertexEffect->addParameter(m_pOuterTessParameter);
    m_pVertexEffect->addParameter(m_pTriangleScaleParameter);

    this->setEffect(m_pVertexEffect);

    connect(m_pAlphaParameter.data(), &QParameter::valueChanged,
            this, &PerVertexTessPhongAlphaMaterial::onAlphaChanged);

    //Init draw filter key
    m_pFilterKey->setName(QStringLiteral("renderingStyle"));
    onAlphaChanged(m_pAlphaParameter->value());
}


//*************************************************************************************************************

void PerVertexTessPhongAlphaMaterial::onAlphaChanged(const QVariant &fAlpha)
{
    if(fAlpha.canConvert<float>())
    {
        float tempAlpha = fAlpha.toFloat();

        if(tempAlpha == 1.0f)
        {
            m_pFilterKey->setValue(QStringLiteral("forward"));
        }
        else
        {
            m_pFilterKey->setValue(QStringLiteral("forwardTransparent"));
        }
    }
}


//*************************************************************************************************************

float PerVertexTessPhongAlphaMaterial::alpha()
{
    return m_pAlphaParameter->value().toFloat();
}


//*************************************************************************************************************

void PerVertexTessPhongAlphaMaterial::setAlpha(float alpha)
{
    m_pAlphaParameter->setValue(alpha);
}
