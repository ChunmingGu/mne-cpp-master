/****************************************************************************
** Meta object code from reading C++ file 'rtcov.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rtProcessing/rtcov.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtcov.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_REALTIMELIB__RtCov_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_REALTIMELIB__RtCov_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_REALTIMELIB__RtCov_t qt_meta_stringdata_REALTIMELIB__RtCov = {
    {
QT_MOC_LITERAL(0, 0, 18), // "REALTIMELIB::RtCov"
QT_MOC_LITERAL(1, 19, 13), // "covCalculated"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "FIFFLIB::FiffCov::SPtr"
QT_MOC_LITERAL(4, 57, 6) // "p_pCov"

    },
    "REALTIMELIB::RtCov\0covCalculated\0\0"
    "FIFFLIB::FiffCov::SPtr\0p_pCov"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_REALTIMELIB__RtCov[] = {

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
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void REALTIMELIB::RtCov::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RtCov *_t = static_cast<RtCov *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->covCalculated((*reinterpret_cast< FIFFLIB::FiffCov::SPtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FIFFLIB::FiffCov::SPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RtCov::*_t)(FIFFLIB::FiffCov::SPtr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtCov::covCalculated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject REALTIMELIB::RtCov::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_REALTIMELIB__RtCov.data,
      qt_meta_data_REALTIMELIB__RtCov,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *REALTIMELIB::RtCov::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *REALTIMELIB::RtCov::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_REALTIMELIB__RtCov.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int REALTIMELIB::RtCov::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void REALTIMELIB::RtCov::covCalculated(FIFFLIB::FiffCov::SPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
