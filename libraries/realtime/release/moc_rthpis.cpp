/****************************************************************************
** Meta object code from reading C++ file 'rthpis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rtProcessing/rthpis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rthpis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_REALTIMELIB__RtHPISWorker_t {
    QByteArrayData data[5];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_REALTIMELIB__RtHPISWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_REALTIMELIB__RtHPISWorker_t qt_meta_stringdata_REALTIMELIB__RtHPISWorker = {
    {
QT_MOC_LITERAL(0, 0, 25), // "REALTIMELIB::RtHPISWorker"
QT_MOC_LITERAL(1, 26, 11), // "resultReady"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "REALTIMELIB::FittingResult"
QT_MOC_LITERAL(4, 66, 9) // "fitResult"

    },
    "REALTIMELIB::RtHPISWorker\0resultReady\0"
    "\0REALTIMELIB::FittingResult\0fitResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_REALTIMELIB__RtHPISWorker[] = {

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

void REALTIMELIB::RtHPISWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RtHPISWorker *_t = static_cast<RtHPISWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultReady((*reinterpret_cast< const REALTIMELIB::FittingResult(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< REALTIMELIB::FittingResult >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RtHPISWorker::*_t)(const REALTIMELIB::FittingResult & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtHPISWorker::resultReady)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject REALTIMELIB::RtHPISWorker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_REALTIMELIB__RtHPISWorker.data,
      qt_meta_data_REALTIMELIB__RtHPISWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *REALTIMELIB::RtHPISWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *REALTIMELIB::RtHPISWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_REALTIMELIB__RtHPISWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int REALTIMELIB::RtHPISWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void REALTIMELIB::RtHPISWorker::resultReady(const REALTIMELIB::FittingResult & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_REALTIMELIB__RtHPIS_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_REALTIMELIB__RtHPIS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_REALTIMELIB__RtHPIS_t qt_meta_stringdata_REALTIMELIB__RtHPIS = {
    {
QT_MOC_LITERAL(0, 0, 19), // "REALTIMELIB::RtHPIS"
QT_MOC_LITERAL(1, 20, 25), // "newFittingResultAvailable"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 26), // "REALTIMELIB::FittingResult"
QT_MOC_LITERAL(4, 74, 9), // "fitResult"
QT_MOC_LITERAL(5, 84, 7), // "operate"
QT_MOC_LITERAL(6, 92, 15), // "Eigen::MatrixXd"
QT_MOC_LITERAL(7, 108, 7), // "matData"
QT_MOC_LITERAL(8, 116, 13), // "matProjectors"
QT_MOC_LITERAL(9, 130, 12), // "QVector<int>"
QT_MOC_LITERAL(10, 143, 6), // "vFreqs"
QT_MOC_LITERAL(11, 150, 33), // "QSharedPointer<FIFFLIB::FiffI..."
QT_MOC_LITERAL(12, 184, 9) // "pFiffInfo"

    },
    "REALTIMELIB::RtHPIS\0newFittingResultAvailable\0"
    "\0REALTIMELIB::FittingResult\0fitResult\0"
    "operate\0Eigen::MatrixXd\0matData\0"
    "matProjectors\0QVector<int>\0vFreqs\0"
    "QSharedPointer<FIFFLIB::FiffInfo>\0"
    "pFiffInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_REALTIMELIB__RtHPIS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    4,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 9, 0x80000000 | 11,    7,    8,   10,   12,

       0        // eod
};

void REALTIMELIB::RtHPIS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RtHPIS *_t = static_cast<RtHPIS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newFittingResultAvailable((*reinterpret_cast< const REALTIMELIB::FittingResult(*)>(_a[1]))); break;
        case 1: _t->operate((*reinterpret_cast< const Eigen::MatrixXd(*)>(_a[1])),(*reinterpret_cast< const Eigen::MatrixXd(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3])),(*reinterpret_cast< QSharedPointer<FIFFLIB::FiffInfo>(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< REALTIMELIB::FittingResult >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RtHPIS::*_t)(const REALTIMELIB::FittingResult & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtHPIS::newFittingResultAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RtHPIS::*_t)(const Eigen::MatrixXd & , const Eigen::MatrixXd & , const QVector<int> & , QSharedPointer<FIFFLIB::FiffInfo> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtHPIS::operate)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject REALTIMELIB::RtHPIS::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_REALTIMELIB__RtHPIS.data,
      qt_meta_data_REALTIMELIB__RtHPIS,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *REALTIMELIB::RtHPIS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *REALTIMELIB::RtHPIS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_REALTIMELIB__RtHPIS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int REALTIMELIB::RtHPIS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void REALTIMELIB::RtHPIS::newFittingResultAvailable(const REALTIMELIB::FittingResult & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void REALTIMELIB::RtHPIS::operate(const Eigen::MatrixXd & _t1, const Eigen::MatrixXd & _t2, const QVector<int> & _t3, QSharedPointer<FIFFLIB::FiffInfo> _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
