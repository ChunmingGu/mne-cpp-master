//=============================================================================================================
/**
* @file     subjecttreeitem.cpp
* @author   Lorenz Esch <Lorenz.Esch@tu-ilmenau.de>;
*           Matti Hamalainen <msh@nmr.mgh.harvard.edu>
* @version  1.0
* @date     May, 2016
*
* @section  LICENSE
*
* Copyright (C) 2016, Lorenz Esch and Matti Hamalainen. All rights reserved.
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
* @brief    SubjectTreeItem class definition.
*
*/

//*************************************************************************************************************
//=============================================================================================================
// INCLUDES
//=============================================================================================================

#include "subjecttreeitem.h"
#include "../measurement/measurementtreeitem.h"
#include "../mri/mritreeitem.h"
#include "../bem/bemsurfacetreeitem.h"
#include "../bem/bemtreeitem.h"
#include "../sensorspace/sensorsettreeitem.h"
#include "../sensorspace/sensorsurfacetreeitem.h"

//*************************************************************************************************************
//=============================================================================================================
// Qt INCLUDES
//=============================================================================================================


//*************************************************************************************************************
//=============================================================================================================
// Eigen INCLUDES
//=============================================================================================================

#include <Eigen/Core>


//*************************************************************************************************************
//=============================================================================================================
// USED NAMESPACES
//=============================================================================================================

using namespace FSLIB;
using namespace DISP3DLIB;


//*************************************************************************************************************
//=============================================================================================================
// DEFINE MEMBER METHODS
//=============================================================================================================

SubjectTreeItem::SubjectTreeItem(int iType, const QString& text)
: AbstractTreeItem(iType, text)
{
    initItem();
}


//*************************************************************************************************************

void SubjectTreeItem::initItem()
{
    this->setEditable(false);
    this->setCheckable(true);
    this->setCheckState(Qt::Checked);
    this->setToolTip("Subject");
}


//*************************************************************************************************************

void SubjectTreeItem::connectMeasurementToMriItems(MeasurementTreeItem* pMeasurementItem)
{
    //Connect mri item with the measurement tree items in case the real time color changes (i.e. rt source loc)
    //or the user changes the color origin
    QList<QStandardItem*> mriItemList = this->findChildren(Data3DTreeModelItemTypes::MriItem);

    foreach(QStandardItem* item, mriItemList) {
        if(MriTreeItem* pMriItem = dynamic_cast<MriTreeItem*>(item)) {
            connect(pMeasurementItem, &MeasurementTreeItem::sourceColorChanged,
                pMriItem, &MriTreeItem::setRtVertColor);
            connect(pMriItem, &MriTreeItem::colorOriginChanged,
                pMeasurementItem, &MeasurementTreeItem::setSourceColors);
        }
    }
}


//*************************************************************************************************************

void SubjectTreeItem::connectEEGMeasurementToBemHeadItems(MeasurementTreeItem* pMeasurementItem)
{
    //Connect bem head item with the measurement tree items in case the real time color changes (i.e. rt source loc)
    QList<QStandardItem*> bemItemList = this->findChildren(Data3DTreeModelItemTypes::BemItem);
    QList<QStandardItem*> bemSurfacesItemList;

    foreach(QStandardItem* item, bemItemList) {
        if(BemTreeItem* pBemItem = dynamic_cast<BemTreeItem*>(item)) {
            bemSurfacesItemList = pBemItem->findChildren(Data3DTreeModelItemTypes::BemSurfaceItem);

            foreach(QStandardItem* itemBemSurf, bemSurfacesItemList) {
                if(BemSurfaceTreeItem* pBemSurfItem = dynamic_cast<BemSurfaceTreeItem*>(itemBemSurf)) {
                    if(pBemSurfItem->text() == "Head") {
                        connect(pMeasurementItem, &MeasurementTreeItem::sensorEEGColorChanged,
                            pBemSurfItem, &BemSurfaceTreeItem::setVertColor);
                        connect(pBemSurfItem, &BemSurfaceTreeItem::colorOriginChanged,
                            pMeasurementItem, &MeasurementTreeItem::setSensorEEGColors);
                    }
                }
            }
        }
    }
}


//*************************************************************************************************************

void SubjectTreeItem::connectMEGMeasurementToSensorItems(MeasurementTreeItem* pMeasurementItem, QStandardItem* parent)
{
    //Connect bem sensor surface item with the measurement tree items in case the real time color changes (i.e. rt source loc)
    if(parent) {
        //Find sensor items which are stored as subejct items
        for(int j = 0; j < parent->rowCount(); ++j) {
            if(SubjectTreeItem* pSensorItem = dynamic_cast<SubjectTreeItem*>(parent->child(j))) {
                QList<QStandardItem*> sensorSetItemList = pSensorItem->findChildren(Data3DTreeModelItemTypes::SensorSetItem);
                QList<QStandardItem*> sensorSurfacesItemList;

                for(int i = 0; i < sensorSetItemList.size(); ++i) {
                    if(SensorSetTreeItem* pSensorSetItem = dynamic_cast<SensorSetTreeItem*>(sensorSetItemList.at(i))) {
                        sensorSurfacesItemList = pSensorSetItem->findChildren(Data3DTreeModelItemTypes::SensorSurfaceItem);

                        for(int k = 0; k < sensorSurfacesItemList.size(); ++k) {
                            if(SensorSurfaceTreeItem* pSensorSetSurfItem = dynamic_cast<SensorSurfaceTreeItem*>(sensorSurfacesItemList.at(k))) {
                                if(pSensorSetSurfItem->text() == "Sensor Surface") {
                                    connect(pMeasurementItem, &MeasurementTreeItem::sensorMEGColorChanged,
                                            pSensorSetSurfItem, &SensorSurfaceTreeItem::setVertColor);
                                    connect(pSensorSetSurfItem, &SensorSurfaceTreeItem::colorOriginChanged,
                                            pMeasurementItem, &MeasurementTreeItem::setSensorMEGColors);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
