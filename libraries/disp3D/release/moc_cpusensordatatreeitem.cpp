/****************************************************************************
** Meta object code from reading C++ file 'cpusensordatatreeitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../engine/model/items/sensordata/cpusensordatatreeitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cpusensordatatreeitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DISP3DLIB__CpuSensorDataTreeItem_t {
    QByteArrayData data[4];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DISP3DLIB__CpuSensorDataTreeItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DISP3DLIB__CpuSensorDataTreeItem_t qt_meta_stringdata_DISP3DLIB__CpuSensorDataTreeItem = {
    {
QT_MOC_LITERAL(0, 0, 32), // "DISP3DLIB::CpuSensorDataTreeItem"
QT_MOC_LITERAL(1, 33, 18), // "rtVertColorChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 10) // "vertColors"

    },
    "DISP3DLIB::CpuSensorDataTreeItem\0"
    "rtVertColorChanged\0\0vertColors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DISP3DLIB__CpuSensorDataTreeItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

       0        // eod
};

void DISP3DLIB::CpuSensorDataTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CpuSensorDataTreeItem *_t = static_cast<CpuSensorDataTreeItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rtVertColorChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CpuSensorDataTreeItem::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CpuSensorDataTreeItem::rtVertColorChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DISP3DLIB::CpuSensorDataTreeItem::staticMetaObject = {
    { &SensorDataTreeItem::staticMetaObject, qt_meta_stringdata_DISP3DLIB__CpuSensorDataTreeItem.data,
      qt_meta_data_DISP3DLIB__CpuSensorDataTreeItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DISP3DLIB::CpuSensorDataTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DISP3DLIB::CpuSensorDataTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DISP3DLIB__CpuSensorDataTreeItem.stringdata0))
        return static_cast<void*>(this);
    return SensorDataTreeItem::qt_metacast(_clname);
}

int DISP3DLIB::CpuSensorDataTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SensorDataTreeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DISP3DLIB::CpuSensorDataTreeItem::rtVertColorChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
