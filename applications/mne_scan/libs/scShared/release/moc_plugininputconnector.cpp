/****************************************************************************
** Meta object code from reading C++ file 'plugininputconnector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Management/plugininputconnector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugininputconnector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SCSHAREDLIB__PluginInputConnector_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCSHAREDLIB__PluginInputConnector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCSHAREDLIB__PluginInputConnector_t qt_meta_stringdata_SCSHAREDLIB__PluginInputConnector = {
    {
QT_MOC_LITERAL(0, 0, 33), // "SCSHAREDLIB::PluginInputConne..."
QT_MOC_LITERAL(1, 34, 6), // "notify"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 31), // "SCMEASLIB::NewMeasurement::SPtr"
QT_MOC_LITERAL(4, 74, 12), // "pMeasurement"
QT_MOC_LITERAL(5, 87, 6) // "update"

    },
    "SCSHAREDLIB::PluginInputConnector\0"
    "notify\0\0SCMEASLIB::NewMeasurement::SPtr\0"
    "pMeasurement\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCSHAREDLIB__PluginInputConnector[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void SCSHAREDLIB::PluginInputConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginInputConnector *_t = static_cast<PluginInputConnector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notify((*reinterpret_cast< SCMEASLIB::NewMeasurement::SPtr(*)>(_a[1]))); break;
        case 1: _t->update((*reinterpret_cast< SCMEASLIB::NewMeasurement::SPtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SCMEASLIB::NewMeasurement::SPtr >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SCMEASLIB::NewMeasurement::SPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PluginInputConnector::*_t)(SCMEASLIB::NewMeasurement::SPtr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginInputConnector::notify)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SCSHAREDLIB::PluginInputConnector::staticMetaObject = {
    { &PluginConnector::staticMetaObject, qt_meta_stringdata_SCSHAREDLIB__PluginInputConnector.data,
      qt_meta_data_SCSHAREDLIB__PluginInputConnector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SCSHAREDLIB::PluginInputConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCSHAREDLIB::PluginInputConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SCSHAREDLIB__PluginInputConnector.stringdata0))
        return static_cast<void*>(this);
    return PluginConnector::qt_metacast(_clname);
}

int SCSHAREDLIB::PluginInputConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PluginConnector::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SCSHAREDLIB::PluginInputConnector::notify(SCMEASLIB::NewMeasurement::SPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
