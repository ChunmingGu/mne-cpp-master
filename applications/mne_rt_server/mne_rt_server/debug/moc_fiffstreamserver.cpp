/****************************************************************************
** Meta object code from reading C++ file 'fiffstreamserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fiffstreamserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fiffstreamserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RTSERVER__FiffStreamServer_t {
    QByteArrayData data[12];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RTSERVER__FiffStreamServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RTSERVER__FiffStreamServer_t qt_meta_stringdata_RTSERVER__FiffStreamServer = {
    {
QT_MOC_LITERAL(0, 0, 26), // "RTSERVER::FiffStreamServer"
QT_MOC_LITERAL(1, 27, 15), // "requestMeasInfo"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 2), // "ID"
QT_MOC_LITERAL(4, 47, 25), // "startMeasFiffStreamClient"
QT_MOC_LITERAL(5, 73, 24), // "stopMeasFiffStreamClient"
QT_MOC_LITERAL(6, 98, 13), // "remitMeasInfo"
QT_MOC_LITERAL(7, 112, 17), // "FIFFLIB::FiffInfo"
QT_MOC_LITERAL(8, 130, 10), // "p_fiffInfo"
QT_MOC_LITERAL(9, 141, 14), // "remitRawBuffer"
QT_MOC_LITERAL(10, 156, 31), // "QSharedPointer<Eigen::MatrixXf>"
QT_MOC_LITERAL(11, 188, 21) // "closeFiffStreamServer"

    },
    "RTSERVER::FiffStreamServer\0requestMeasInfo\0"
    "\0ID\0startMeasFiffStreamClient\0"
    "stopMeasFiffStreamClient\0remitMeasInfo\0"
    "FIFFLIB::FiffInfo\0p_fiffInfo\0"
    "remitRawBuffer\0QSharedPointer<Eigen::MatrixXf>\0"
    "closeFiffStreamServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RTSERVER__FiffStreamServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    2,   53,    2, 0x06 /* Public */,
       9,    1,   58,    2, 0x06 /* Public */,
      11,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    3,    8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,

       0        // eod
};

void RTSERVER::FiffStreamServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FiffStreamServer *_t = static_cast<FiffStreamServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestMeasInfo((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 1: _t->startMeasFiffStreamClient((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 2: _t->stopMeasFiffStreamClient((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 3: _t->remitMeasInfo((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< const FIFFLIB::FiffInfo(*)>(_a[2]))); break;
        case 4: _t->remitRawBuffer((*reinterpret_cast< QSharedPointer<Eigen::MatrixXf>(*)>(_a[1]))); break;
        case 5: _t->closeFiffStreamServer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FiffStreamServer::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiffStreamServer::requestMeasInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FiffStreamServer::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiffStreamServer::startMeasFiffStreamClient)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FiffStreamServer::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiffStreamServer::stopMeasFiffStreamClient)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FiffStreamServer::*_t)(qint32 , const FIFFLIB::FiffInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiffStreamServer::remitMeasInfo)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (FiffStreamServer::*_t)(QSharedPointer<Eigen::MatrixXf> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiffStreamServer::remitRawBuffer)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (FiffStreamServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiffStreamServer::closeFiffStreamServer)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject RTSERVER::FiffStreamServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_RTSERVER__FiffStreamServer.data,
      qt_meta_data_RTSERVER__FiffStreamServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RTSERVER::FiffStreamServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTSERVER::FiffStreamServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RTSERVER__FiffStreamServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int RTSERVER::FiffStreamServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RTSERVER::FiffStreamServer::requestMeasInfo(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RTSERVER::FiffStreamServer::startMeasFiffStreamClient(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RTSERVER::FiffStreamServer::stopMeasFiffStreamClient(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RTSERVER::FiffStreamServer::remitMeasInfo(qint32 _t1, const FIFFLIB::FiffInfo & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RTSERVER::FiffStreamServer::remitRawBuffer(QSharedPointer<Eigen::MatrixXf> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RTSERVER::FiffStreamServer::closeFiffStreamServer()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
