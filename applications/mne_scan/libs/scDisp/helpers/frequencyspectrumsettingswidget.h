//=============================================================================================================
/**
* @file     frequencyspectrumsettingswidget.h
* @author   Christoph Dinh <chdinh@nmr.mgh.harvard.edu>;
*           Matti Hamalainen <msh@nmr.mgh.harvard.edu>
* @version  1.0
* @date     May, 2014
*
* @section  LICENSE
*
* Copyright (C) 2014, Christoph Dinh and Matti Hamalainen. All rights reserved.
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
* @brief    Declaration of the FrequencySpectrumSettingsWidget Class.
*
*/

#ifndef FREQUENCYSPECTRUMSETTINGSWIDGET_H
#define FREQUENCYSPECTRUMSETTINGSWIDGET_H

//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================



//*************************************************************************************************************
//=============================================================================================================
// QT INCLUDES
//=============================================================================================================

#include <QWidget>
#include <QSlider>


//*************************************************************************************************************
//=============================================================================================================
// DEFINE NAMESPACE SCDISPLIB
//=============================================================================================================

namespace SCDISPLIB
{


//*************************************************************************************************************
//=============================================================================================================
// FORWARD DECLARATIONS
//=============================================================================================================

class FrequencySpectrumWidget;


//=============================================================================================================
/**
* DECLARE CLASS FrequencySpectrumWidget
*
* @brief The FrequencySpectrumWidget class provides the settings widget
*/
class FrequencySpectrumSettingsWidget : public QWidget
{
    Q_OBJECT

    friend class FrequencySpectrumWidget;

public:
    //=========================================================================================================
    /**
    * Constructs a FrequencySpectrumWidget which is a child of parent.
    *
    * @param [in] parent    parent of widget
    */
    FrequencySpectrumSettingsWidget(FrequencySpectrumWidget *toolbox);

    //=========================================================================================================
    /**
    * Update slider value
    *
    * @param [in] value    slider value
    */
    void updateValue(qint32 value);

signals:
    void settingsChanged();

private:
    FrequencySpectrumWidget * m_pFrequencySpectrumWidget; /**< Connected frequency spectrum widget */

    QSlider* m_pSliderLowerBound;   /**< Lower bound frequency */
    QSlider* m_pSliderUpperBound;   /**< Upper bound frequency */
};

} // NAMESPACE

#endif // FREQUENCYSPECTRUMSETTINGSWIDGET_H
