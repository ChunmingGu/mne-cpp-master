/****************************************************************************
** Meta object code from reading C++ file 'babymeginfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../babymeginfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'babymeginfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BABYMEGPLUGIN__BabyMEGInfo_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BABYMEGPLUGIN__BabyMEGInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BABYMEGPLUGIN__BabyMEGInfo_t qt_meta_stringdata_BABYMEGPLUGIN__BabyMEGInfo = {
    {
QT_MOC_LITERAL(0, 0, 26), // "BABYMEGPLUGIN::BabyMEGInfo"
QT_MOC_LITERAL(1, 27, 17), // "fiffInfoAvailable"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 17), // "FIFFLIB::FiffInfo"
QT_MOC_LITERAL(4, 64, 15), // "SendDataPackage"
QT_MOC_LITERAL(5, 80, 4), // "DATA"
QT_MOC_LITERAL(6, 85, 14), // "SendCMDPackage"
QT_MOC_LITERAL(7, 100, 14) // "GainInfoUpdate"

    },
    "BABYMEGPLUGIN::BabyMEGInfo\0fiffInfoAvailable\0"
    "\0FIFFLIB::FiffInfo\0SendDataPackage\0"
    "DATA\0SendCMDPackage\0GainInfoUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BABYMEGPLUGIN__BabyMEGInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       7,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QStringList,    2,

       0        // eod
};

void BABYMEGPLUGIN::BabyMEGInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BabyMEGInfo *_t = static_cast<BabyMEGInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fiffInfoAvailable((*reinterpret_cast< FIFFLIB::FiffInfo(*)>(_a[1]))); break;
        case 1: _t->SendDataPackage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->SendCMDPackage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->GainInfoUpdate((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BabyMEGInfo::*_t)(FIFFLIB::FiffInfo );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BabyMEGInfo::fiffInfoAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BabyMEGInfo::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BabyMEGInfo::SendDataPackage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BabyMEGInfo::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BabyMEGInfo::SendCMDPackage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BabyMEGInfo::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BabyMEGInfo::GainInfoUpdate)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject BABYMEGPLUGIN::BabyMEGInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BABYMEGPLUGIN__BabyMEGInfo.data,
      qt_meta_data_BABYMEGPLUGIN__BabyMEGInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BABYMEGPLUGIN::BabyMEGInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BABYMEGPLUGIN::BabyMEGInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BABYMEGPLUGIN__BabyMEGInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BABYMEGPLUGIN::BabyMEGInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BABYMEGPLUGIN::BabyMEGInfo::fiffInfoAvailable(FIFFLIB::FiffInfo _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BABYMEGPLUGIN::BabyMEGInfo::SendDataPackage(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BABYMEGPLUGIN::BabyMEGInfo::SendCMDPackage(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BABYMEGPLUGIN::BabyMEGInfo::GainInfoUpdate(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
