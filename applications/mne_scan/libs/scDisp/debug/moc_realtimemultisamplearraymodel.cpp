/****************************************************************************
** Meta object code from reading C++ file 'realtimemultisamplearraymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../helpers/realtimemultisamplearraymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realtimemultisamplearraymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SCDISPLIB__RealTimeMultiSampleArrayModel_t {
    QByteArrayData data[11];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCDISPLIB__RealTimeMultiSampleArrayModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCDISPLIB__RealTimeMultiSampleArrayModel_t qt_meta_stringdata_SCDISPLIB__RealTimeMultiSampleArrayModel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "SCDISPLIB::RealTimeMultiSampl..."
QT_MOC_LITERAL(1, 41, 12), // "newSelection"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 13), // "QList<qint32>"
QT_MOC_LITERAL(4, 69, 9), // "selection"
QT_MOC_LITERAL(5, 79, 17), // "windowSizeChanged"
QT_MOC_LITERAL(6, 97, 10), // "windowSize"
QT_MOC_LITERAL(7, 108, 15), // "triggerDetected"
QT_MOC_LITERAL(8, 124, 22), // "numberDetectedTriggers"
QT_MOC_LITERAL(9, 147, 36), // "QMap<int,QList<QPair<int,doub..."
QT_MOC_LITERAL(10, 184, 19) // "mapDetectedTriggers"

    },
    "SCDISPLIB::RealTimeMultiSampleArrayModel\0"
    "newSelection\0\0QList<qint32>\0selection\0"
    "windowSizeChanged\0windowSize\0"
    "triggerDetected\0numberDetectedTriggers\0"
    "QMap<int,QList<QPair<int,double> > >\0"
    "mapDetectedTriggers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCDISPLIB__RealTimeMultiSampleArrayModel[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       7,    2,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,

       0        // eod
};

void SCDISPLIB::RealTimeMultiSampleArrayModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RealTimeMultiSampleArrayModel *_t = static_cast<RealTimeMultiSampleArrayModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newSelection((*reinterpret_cast< const QList<qint32>(*)>(_a[1]))); break;
        case 1: _t->windowSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->triggerDetected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QMap<int,QList<QPair<int,double> > >(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RealTimeMultiSampleArrayModel::*_t)(const QList<qint32> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RealTimeMultiSampleArrayModel::newSelection)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RealTimeMultiSampleArrayModel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RealTimeMultiSampleArrayModel::windowSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RealTimeMultiSampleArrayModel::*_t)(int , const QMap<int,QList<QPair<int,double> > > & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RealTimeMultiSampleArrayModel::triggerDetected)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SCDISPLIB::RealTimeMultiSampleArrayModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_SCDISPLIB__RealTimeMultiSampleArrayModel.data,
      qt_meta_data_SCDISPLIB__RealTimeMultiSampleArrayModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SCDISPLIB::RealTimeMultiSampleArrayModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCDISPLIB::RealTimeMultiSampleArrayModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SCDISPLIB__RealTimeMultiSampleArrayModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int SCDISPLIB::RealTimeMultiSampleArrayModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SCDISPLIB::RealTimeMultiSampleArrayModel::newSelection(const QList<qint32> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SCDISPLIB::RealTimeMultiSampleArrayModel::windowSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SCDISPLIB::RealTimeMultiSampleArrayModel::triggerDetected(int _t1, const QMap<int,QList<QPair<int,double> > > & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
