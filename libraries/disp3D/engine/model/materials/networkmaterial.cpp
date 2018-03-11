//=============================================================================================================
/**
* @file     networkmaterial.cpp
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
* @brief    NetworkMaterial class definition
*/


//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include "networkmaterial.h"


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

NetworkMaterial::NetworkMaterial(QNode *parent)
: QMaterial(parent)
, m_pVertexEffect(new QEffect())
, m_pDiffuseParameter(new QParameter(QStringLiteral("kd"), QColor::fromRgbF(0.7f, 0.7f, 0.7f, 1.0f)))
, m_pSpecularParameter(new QParameter(QStringLiteral("ks"), QColor::fromRgbF(0.1f, 0.1f, 0.1f, 1.0f)))
, m_pShininessParameter(new QParameter(QStringLiteral("shininess"), 15.0f))
, m_pAlphaParameter(new QParameter("alpha", 0.5f))
, m_pVertexGL3Technique(new QTechnique())
, m_pVertexGL3RenderPass(new QRenderPass())
, m_pVertexGL3Shader(new QShaderProgram())
, m_pVertexGL2Technique(new QTechnique())
, m_pVertexGL2RenderPass(new QRenderPass())
, m_pVertexES2Technique(new QTechnique())
, m_pVertexES2RenderPass(new QRenderPass())
, m_pVertexES2Shader(new QShaderProgram())
, m_pFilterKey(new QFilterKey)
{
    this->init();
}


//*************************************************************************************************************

NetworkMaterial::~NetworkMaterial()
{
}


//*************************************************************************************************************

void NetworkMaterial::init()
{
    //Set shader
    m_pVertexGL3Shader->setVertexShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/gl3/network.vert"))));
    m_pVertexGL3Shader->setFragmentShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/gl3/network.frag"))));

    m_pVertexES2Shader->setVertexShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/es2/network.vert"))));
    m_pVertexES2Shader->setFragmentShaderCode(QShaderProgram::loadSource(QUrl(QStringLiteral("qrc:/engine/model/materials/shaders/es2/network.frag"))));

    m_pVertexGL3RenderPass->setShaderProgram(m_pVertexGL3Shader);
    m_pVertexGL2RenderPass->setShaderProgram(m_pVertexES2Shader);
    m_pVertexES2RenderPass->setShaderProgram(m_pVertexES2Shader);

    //Set OpenGL version
    m_pVertexGL3Technique->graphicsApiFilter()->setApi(QGraphicsApiFilter::OpenGL);
    m_pVertexGL3Technique->graphicsApiFilter()->setMajorVersion(3);
    m_pVertexGL3Technique->graphicsApiFilter()->setMinorVersion(2);
    m_pVertexGL3Technique->graphicsApiFilter()->setProfile(QGraphicsApiFilter::CoreProfile);

    m_pVertexGL2Technique->graphicsApiFilter()->setApi(QGraphicsApiFilter::OpenGL);
    m_pVertexGL2Technique->graphicsApiFilter()->setMajorVersion(2);
    m_pVertexGL2Technique->graphicsApiFilter()->setMinorVersion(0);
    m_pVertexGL2Technique->graphicsApiFilter()->setProfile(QGraphicsApiFilter::NoProfile);

    m_pVertexES2Technique->graphicsApiFilter()->setApi(QGraphicsApiFilter::OpenGLES);
    m_pVertexES2Technique->graphicsApiFilter()->setMajorVersion(2);
    m_pVertexES2Technique->graphicsApiFilter()->setMinorVersion(0);
    m_pVertexES2Technique->graphicsApiFilter()->setProfile(QGraphicsApiFilter::NoProfile);

    m_pVertexGL3Technique->addFilterKey(m_pFilterKey);
    m_pVertexGL2Technique->addFilterKey(m_pFilterKey);
    m_pVertexES2Technique->addFilterKey(m_pFilterKey);

    m_pVertexGL3Technique->addRenderPass(m_pVertexGL3RenderPass);
    m_pVertexGL2Technique->addRenderPass(m_pVertexGL2RenderPass);
    m_pVertexES2Technique->addRenderPass(m_pVertexES2RenderPass);

    m_pVertexEffect->addTechnique(m_pVertexGL3Technique);
    m_pVertexEffect->addTechnique(m_pVertexGL2Technique);
    m_pVertexEffect->addTechnique(m_pVertexES2Technique);

    m_pVertexEffect->addParameter(m_pDiffuseParameter);
    m_pVertexEffect->addParameter(m_pSpecularParameter);
    m_pVertexEffect->addParameter(m_pShininessParameter);
    m_pVertexEffect->addParameter(m_pAlphaParameter);

    this->setEffect(m_pVertexEffect);

    connect(m_pAlphaParameter.data(), &QParameter::valueChanged,
            this, &NetworkMaterial::onAlphaChanged);

    //Init filter keys
    m_pFilterKey->setName(QStringLiteral("renderingStyle"));
    onAlphaChanged(m_pAlphaParameter->value());
}


//*************************************************************************************************************

void NetworkMaterial::onAlphaChanged(const QVariant &fAlpha)
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

float NetworkMaterial::alpha()
{
    return m_pAlphaParameter->value().toFloat();
}


//*************************************************************************************************************

void NetworkMaterial::setAlpha(float alpha)
{
    m_pAlphaParameter->setValue(alpha);
}
