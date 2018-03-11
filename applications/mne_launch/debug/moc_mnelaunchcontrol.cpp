/****************************************************************************
** Meta object code from reading C++ file 'mnelaunchcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mnelaunchcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mnelaunchcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MNELaunchControl_t {
    QByteArrayData data[7];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MNELaunchControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MNELaunchControl_t qt_meta_stringdata_MNELaunchControl = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MNELaunchControl"
QT_MOC_LITERAL(1, 17, 33), // "sampleDataAvailableChanged_Si..."
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 10), // "invokeScan"
QT_MOC_LITERAL(4, 63, 12), // "invokeBrowse"
QT_MOC_LITERAL(5, 76, 13), // "invokeAnalyze"
QT_MOC_LITERAL(6, 90, 19) // "sampleDataAvailable"

    },
    "MNELaunchControl\0sampleDataAvailableChanged_Signal\0"
    "\0invokeScan\0invokeBrowse\0invokeAnalyze\0"
    "sampleDataAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MNELaunchControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x02 /* Public */,
       4,    0,   36,    2, 0x02 /* Public */,
       5,    0,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void MNELaunchControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MNELaunchControl *_t = static_cast<MNELaunchControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sampleDataAvailableChanged_Signal(); break;
        case 1: _t->invokeScan(); break;
        case 2: _t->invokeBrowse(); break;
        case 3: _t->invokeAnalyze(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MNELaunchControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MNELaunchControl::sampleDataAvailableChanged_Signal)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MNELaunchControl *_t = static_cast<MNELaunchControl *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getSampleDataAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject MNELaunchControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MNELaunchControl.data,
      qt_meta_data_MNELaunchControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MNELaunchControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MNELaunchControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MNELaunchControl.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MNELaunchControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MNELaunchControl::sampleDataAvailableChanged_Signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
