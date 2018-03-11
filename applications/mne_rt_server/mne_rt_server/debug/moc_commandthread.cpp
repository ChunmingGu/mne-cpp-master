/****************************************************************************
** Meta object code from reading C++ file 'commandthread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../commandthread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commandthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RTSERVER__CommandThread_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RTSERVER__CommandThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RTSERVER__CommandThread_t qt_meta_stringdata_RTSERVER__CommandThread = {
    {
QT_MOC_LITERAL(0, 0, 23), // "RTSERVER::CommandThread"
QT_MOC_LITERAL(1, 24, 5), // "error"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "QTcpSocket::SocketError"
QT_MOC_LITERAL(4, 55, 11), // "socketError"
QT_MOC_LITERAL(5, 67, 10), // "newCommand"
QT_MOC_LITERAL(6, 78, 10), // "p_sCommand"
QT_MOC_LITERAL(7, 89, 11) // "p_iThreadID"

    },
    "RTSERVER::CommandThread\0error\0\0"
    "QTcpSocket::SocketError\0socketError\0"
    "newCommand\0p_sCommand\0p_iThreadID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RTSERVER__CommandThread[] = {

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
       5,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,

       0        // eod
};

void RTSERVER::CommandThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommandThread *_t = static_cast<CommandThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->newCommand((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CommandThread::*_t)(QTcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandThread::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CommandThread::*_t)(QString , qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CommandThread::newCommand)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RTSERVER::CommandThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_RTSERVER__CommandThread.data,
      qt_meta_data_RTSERVER__CommandThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RTSERVER::CommandThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RTSERVER::CommandThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RTSERVER__CommandThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int RTSERVER::CommandThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RTSERVER::CommandThread::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RTSERVER::CommandThread::newCommand(QString _t1, qint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
