/****************************************************************************
** Meta object code from reading C++ file 'realtimesourceestimatewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../realtimesourceestimatewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realtimesourceestimatewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SCDISPLIB__RealTimeSourceEstimateWidget_t {
    QByteArrayData data[4];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCDISPLIB__RealTimeSourceEstimateWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCDISPLIB__RealTimeSourceEstimateWidget_t qt_meta_stringdata_SCDISPLIB__RealTimeSourceEstimateWidget = {
    {
QT_MOC_LITERAL(0, 0, 39), // "SCDISPLIB::RealTimeSourceEsti..."
QT_MOC_LITERAL(1, 40, 9), // "startInit"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 19) // "show3DControlWidget"

    },
    "SCDISPLIB::RealTimeSourceEstimateWidget\0"
    "startInit\0\0show3DControlWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCDISPLIB__RealTimeSourceEstimateWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SCDISPLIB::RealTimeSourceEstimateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RealTimeSourceEstimateWidget *_t = static_cast<RealTimeSourceEstimateWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startInit(); break;
        case 1: _t->show3DControlWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RealTimeSourceEstimateWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RealTimeSourceEstimateWidget::startInit)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SCDISPLIB::RealTimeSourceEstimateWidget::staticMetaObject = {
    { &NewMeasurementWidget::staticMetaObject, qt_meta_stringdata_SCDISPLIB__RealTimeSourceEstimateWidget.data,
      qt_meta_data_SCDISPLIB__RealTimeSourceEstimateWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SCDISPLIB::RealTimeSourceEstimateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCDISPLIB::RealTimeSourceEstimateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SCDISPLIB__RealTimeSourceEstimateWidget.stringdata0))
        return static_cast<void*>(this);
    return NewMeasurementWidget::qt_metacast(_clname);
}

int SCDISPLIB::RealTimeSourceEstimateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NewMeasurementWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SCDISPLIB::RealTimeSourceEstimateWidget::startInit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
