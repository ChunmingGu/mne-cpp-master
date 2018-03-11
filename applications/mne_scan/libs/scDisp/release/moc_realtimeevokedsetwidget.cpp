/****************************************************************************
** Meta object code from reading C++ file 'realtimeevokedsetwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../realtimeevokedsetwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realtimeevokedsetwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetWidget_t {
    QByteArrayData data[19];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetWidget_t qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetWidget = {
    {
QT_MOC_LITERAL(0, 0, 34), // "SCDISPLIB::RealTimeEvokedSetW..."
QT_MOC_LITERAL(1, 35, 25), // "showSensorSelectionWidget"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 24), // "showSelectedChannelsOnly"
QT_MOC_LITERAL(4, 87, 16), // "selectedChannels"
QT_MOC_LITERAL(5, 104, 16), // "broadcastScaling"
QT_MOC_LITERAL(6, 121, 18), // "QMap<qint32,float>"
QT_MOC_LITERAL(7, 140, 8), // "scaleMap"
QT_MOC_LITERAL(8, 149, 17), // "broadcastSettings"
QT_MOC_LITERAL(9, 167, 15), // "QList<Modality>"
QT_MOC_LITERAL(10, 183, 12), // "modalityList"
QT_MOC_LITERAL(11, 196, 22), // "showQuickControlWidget"
QT_MOC_LITERAL(12, 219, 18), // "onSelectionChanged"
QT_MOC_LITERAL(13, 238, 16), // "showFilterWidget"
QT_MOC_LITERAL(14, 255, 5), // "state"
QT_MOC_LITERAL(15, 261, 33), // "onTableViewBackgroundColorCha..."
QT_MOC_LITERAL(16, 295, 15), // "backgroundColor"
QT_MOC_LITERAL(17, 311, 16), // "onMakeScreenshot"
QT_MOC_LITERAL(18, 328, 9) // "imageType"

    },
    "SCDISPLIB::RealTimeEvokedSetWidget\0"
    "showSensorSelectionWidget\0\0"
    "showSelectedChannelsOnly\0selectedChannels\0"
    "broadcastScaling\0QMap<qint32,float>\0"
    "scaleMap\0broadcastSettings\0QList<Modality>\0"
    "modalityList\0showQuickControlWidget\0"
    "onSelectionChanged\0showFilterWidget\0"
    "state\0onTableViewBackgroundColorChanged\0"
    "backgroundColor\0onMakeScreenshot\0"
    "imageType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCDISPLIB__RealTimeEvokedSetWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    1,   65,    2, 0x08 /* Private */,
       5,    1,   68,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    1,   76,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x28 /* Private | MethodCloned */,
      15,    1,   80,    2, 0x08 /* Private */,
      17,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   16,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void SCDISPLIB::RealTimeEvokedSetWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RealTimeEvokedSetWidget *_t = static_cast<RealTimeEvokedSetWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showSensorSelectionWidget(); break;
        case 1: _t->showSelectedChannelsOnly((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->broadcastScaling((*reinterpret_cast< QMap<qint32,float>(*)>(_a[1]))); break;
        case 3: _t->broadcastSettings((*reinterpret_cast< QList<Modality>(*)>(_a[1]))); break;
        case 4: _t->showQuickControlWidget(); break;
        case 5: _t->onSelectionChanged(); break;
        case 6: _t->showFilterWidget((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->showFilterWidget(); break;
        case 8: _t->onTableViewBackgroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 9: _t->onMakeScreenshot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SCDISPLIB::RealTimeEvokedSetWidget::staticMetaObject = {
    { &NewMeasurementWidget::staticMetaObject, qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetWidget.data,
      qt_meta_data_SCDISPLIB__RealTimeEvokedSetWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SCDISPLIB::RealTimeEvokedSetWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCDISPLIB::RealTimeEvokedSetWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetWidget.stringdata0))
        return static_cast<void*>(this);
    return NewMeasurementWidget::qt_metacast(_clname);
}

int SCDISPLIB::RealTimeEvokedSetWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NewMeasurementWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
