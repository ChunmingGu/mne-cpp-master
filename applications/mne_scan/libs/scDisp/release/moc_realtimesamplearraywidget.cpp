/****************************************************************************
** Meta object code from reading C++ file 'realtimesamplearraywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../realtimesamplearraywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realtimesamplearraywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SCDISPLIB__RealTimeSampleArrayWidget_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCDISPLIB__RealTimeSampleArrayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCDISPLIB__RealTimeSampleArrayWidget_t qt_meta_stringdata_SCDISPLIB__RealTimeSampleArrayWidget = {
    {
QT_MOC_LITERAL(0, 0, 36), // "SCDISPLIB::RealTimeSampleArra..."
QT_MOC_LITERAL(1, 37, 14), // "stopAnnotation"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 15), // "maxValueChanged"
QT_MOC_LITERAL(4, 69, 8), // "maxValue"
QT_MOC_LITERAL(5, 78, 15) // "minValueChanged"

    },
    "SCDISPLIB::RealTimeSampleArrayWidget\0"
    "stopAnnotation\0\0maxValueChanged\0"
    "maxValue\0minValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCDISPLIB__RealTimeSampleArrayWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void SCDISPLIB::RealTimeSampleArrayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RealTimeSampleArrayWidget *_t = static_cast<RealTimeSampleArrayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopAnnotation(); break;
        case 1: _t->maxValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->minValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SCDISPLIB::RealTimeSampleArrayWidget::staticMetaObject = {
    { &NewMeasurementWidget::staticMetaObject, qt_meta_stringdata_SCDISPLIB__RealTimeSampleArrayWidget.data,
      qt_meta_data_SCDISPLIB__RealTimeSampleArrayWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SCDISPLIB::RealTimeSampleArrayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCDISPLIB::RealTimeSampleArrayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SCDISPLIB__RealTimeSampleArrayWidget.stringdata0))
        return static_cast<void*>(this);
    return NewMeasurementWidget::qt_metacast(_clname);
}

int SCDISPLIB::RealTimeSampleArrayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NewMeasurementWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
