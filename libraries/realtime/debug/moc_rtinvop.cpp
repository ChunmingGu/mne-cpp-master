/****************************************************************************
** Meta object code from reading C++ file 'rtinvop.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rtProcessing/rtinvop.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtinvop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_REALTIMELIB__RtInvOp_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_REALTIMELIB__RtInvOp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_REALTIMELIB__RtInvOp_t qt_meta_stringdata_REALTIMELIB__RtInvOp = {
    {
QT_MOC_LITERAL(0, 0, 20), // "REALTIMELIB::RtInvOp"
QT_MOC_LITERAL(1, 21, 21), // "invOperatorCalculated"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 32), // "MNELIB::MNEInverseOperator::SPtr"
QT_MOC_LITERAL(4, 77, 8) // "p_pInvOp"

    },
    "REALTIMELIB::RtInvOp\0invOperatorCalculated\0"
    "\0MNELIB::MNEInverseOperator::SPtr\0"
    "p_pInvOp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_REALTIMELIB__RtInvOp[] = {

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

void REALTIMELIB::RtInvOp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RtInvOp *_t = static_cast<RtInvOp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->invOperatorCalculated((*reinterpret_cast< MNELIB::MNEInverseOperator::SPtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MNELIB::MNEInverseOperator::SPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RtInvOp::*_t)(MNELIB::MNEInverseOperator::SPtr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtInvOp::invOperatorCalculated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject REALTIMELIB::RtInvOp::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_REALTIMELIB__RtInvOp.data,
      qt_meta_data_REALTIMELIB__RtInvOp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *REALTIMELIB::RtInvOp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *REALTIMELIB::RtInvOp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_REALTIMELIB__RtInvOp.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int REALTIMELIB::RtInvOp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void REALTIMELIB::RtInvOp::invOperatorCalculated(MNELIB::MNEInverseOperator::SPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
