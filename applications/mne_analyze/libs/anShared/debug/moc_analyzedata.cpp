/****************************************************************************
** Meta object code from reading C++ file 'analyzedata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Management/analyzedata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analyzedata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ANSHAREDLIB__AnalyzeData_t {
    QByteArrayData data[6];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ANSHAREDLIB__AnalyzeData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ANSHAREDLIB__AnalyzeData_t qt_meta_stringdata_ANSHAREDLIB__AnalyzeData = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ANSHAREDLIB::AnalyzeData"
QT_MOC_LITERAL(1, 25, 17), // "stcChanged_signal"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 23), // "stcSampleChanged_signal"
QT_MOC_LITERAL(4, 68, 6), // "sample"
QT_MOC_LITERAL(5, 75, 20) // "ecdSetChanged_signal"

    },
    "ANSHAREDLIB::AnalyzeData\0stcChanged_signal\0"
    "\0stcSampleChanged_signal\0sample\0"
    "ecdSetChanged_signal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ANSHAREDLIB__AnalyzeData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       5,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void ANSHAREDLIB::AnalyzeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnalyzeData *_t = static_cast<AnalyzeData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stcChanged_signal(); break;
        case 1: _t->stcSampleChanged_signal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ecdSetChanged_signal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AnalyzeData::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalyzeData::stcChanged_signal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AnalyzeData::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalyzeData::stcSampleChanged_signal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AnalyzeData::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AnalyzeData::ecdSetChanged_signal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ANSHAREDLIB::AnalyzeData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ANSHAREDLIB__AnalyzeData.data,
      qt_meta_data_ANSHAREDLIB__AnalyzeData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ANSHAREDLIB::AnalyzeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ANSHAREDLIB::AnalyzeData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ANSHAREDLIB__AnalyzeData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ANSHAREDLIB::AnalyzeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ANSHAREDLIB::AnalyzeData::stcChanged_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ANSHAREDLIB::AnalyzeData::stcSampleChanged_signal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ANSHAREDLIB::AnalyzeData::ecdSetChanged_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
