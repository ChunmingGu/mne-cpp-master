/****************************************************************************
** Meta object code from reading C++ file 'realtimeevokedsetmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../helpers/realtimeevokedsetmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'realtimeevokedsetmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetModel_t {
    QByteArrayData data[8];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetModel_t qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetModel = {
    {
QT_MOC_LITERAL(0, 0, 33), // "SCDISPLIB::RealTimeEvokedSetM..."
QT_MOC_LITERAL(1, 34, 12), // "newSelection"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 13), // "QList<qint32>"
QT_MOC_LITERAL(4, 62, 9), // "selection"
QT_MOC_LITERAL(5, 72, 22), // "newAverageTypeReceived"
QT_MOC_LITERAL(6, 95, 48), // "QMap<double,QPair<QColor,QPai..."
QT_MOC_LITERAL(7, 144, 16) // "qMapAverageColor"

    },
    "SCDISPLIB::RealTimeEvokedSetModel\0"
    "newSelection\0\0QList<qint32>\0selection\0"
    "newAverageTypeReceived\0"
    "QMap<double,QPair<QColor,QPair<QString,bool> > >\0"
    "qMapAverageColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCDISPLIB__RealTimeEvokedSetModel[] = {

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
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SCDISPLIB::RealTimeEvokedSetModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RealTimeEvokedSetModel *_t = static_cast<RealTimeEvokedSetModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newSelection((*reinterpret_cast< QList<qint32>(*)>(_a[1]))); break;
        case 1: _t->newAverageTypeReceived((*reinterpret_cast< QMap<double,QPair<QColor,QPair<QString,bool> > >(*)>(_a[1]))); break;
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
            typedef void (RealTimeEvokedSetModel::*_t)(QList<qint32> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RealTimeEvokedSetModel::newSelection)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RealTimeEvokedSetModel::*_t)(QMap<double,QPair<QColor,QPair<QString,bool> > > );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RealTimeEvokedSetModel::newAverageTypeReceived)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SCDISPLIB::RealTimeEvokedSetModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetModel.data,
      qt_meta_data_SCDISPLIB__RealTimeEvokedSetModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SCDISPLIB::RealTimeEvokedSetModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCDISPLIB::RealTimeEvokedSetModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SCDISPLIB__RealTimeEvokedSetModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int SCDISPLIB::RealTimeEvokedSetModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
void SCDISPLIB::RealTimeEvokedSetModel::newSelection(QList<qint32> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SCDISPLIB::RealTimeEvokedSetModel::newAverageTypeReceived(QMap<double,QPair<QColor,QPair<QString,bool> > > _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
