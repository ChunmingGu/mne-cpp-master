/****************************************************************************
** Meta object code from reading C++ file 'rtsensordataworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../engine/model/workers/rtSensorData/rtsensordataworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtsensordataworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DISP3DLIB__RtSensorDataWorker_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DISP3DLIB__RtSensorDataWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DISP3DLIB__RtSensorDataWorker_t qt_meta_stringdata_DISP3DLIB__RtSensorDataWorker = {
    {
QT_MOC_LITERAL(0, 0, 29), // "DISP3DLIB::RtSensorDataWorker"
QT_MOC_LITERAL(1, 30, 9), // "newRtData"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "Eigen::MatrixX3f"
QT_MOC_LITERAL(4, 58, 11) // "colorMatrix"

    },
    "DISP3DLIB::RtSensorDataWorker\0newRtData\0"
    "\0Eigen::MatrixX3f\0colorMatrix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DISP3DLIB__RtSensorDataWorker[] = {

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

void DISP3DLIB::RtSensorDataWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RtSensorDataWorker *_t = static_cast<RtSensorDataWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newRtData((*reinterpret_cast< const Eigen::MatrixX3f(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Eigen::MatrixX3f >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RtSensorDataWorker::*_t)(const Eigen::MatrixX3f & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtSensorDataWorker::newRtData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DISP3DLIB::RtSensorDataWorker::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DISP3DLIB__RtSensorDataWorker.data,
      qt_meta_data_DISP3DLIB__RtSensorDataWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DISP3DLIB::RtSensorDataWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DISP3DLIB::RtSensorDataWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DISP3DLIB__RtSensorDataWorker.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int DISP3DLIB::RtSensorDataWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DISP3DLIB::RtSensorDataWorker::newRtData(const Eigen::MatrixX3f & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
