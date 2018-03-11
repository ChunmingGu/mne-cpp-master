/****************************************************************************
** Meta object code from reading C++ file 'fixdictmp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mp/fixdictmp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixdictmp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UTILSLIB__FixDictMp_t {
    QByteArrayData data[23];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UTILSLIB__FixDictMp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UTILSLIB__FixDictMp_t qt_meta_stringdata_UTILSLIB__FixDictMp = {
    {
QT_MOC_LITERAL(0, 0, 19), // "UTILSLIB::FixDictMp"
QT_MOC_LITERAL(1, 20, 14), // "current_result"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "current_iteration"
QT_MOC_LITERAL(4, 54, 13), // "max_iteration"
QT_MOC_LITERAL(5, 68, 14), // "current_energy"
QT_MOC_LITERAL(6, 83, 10), // "max_energy"
QT_MOC_LITERAL(7, 94, 8), // "MatrixXd"
QT_MOC_LITERAL(8, 103, 8), // "residuum"
QT_MOC_LITERAL(9, 112, 18), // "adaptive_atom_list"
QT_MOC_LITERAL(10, 131, 18), // "fix_dict_atom_list"
QT_MOC_LITERAL(11, 150, 13), // "finished_calc"
QT_MOC_LITERAL(12, 164, 15), // "parse_in_thread"
QT_MOC_LITERAL(13, 180, 12), // "send_warning"
QT_MOC_LITERAL(14, 193, 7), // "warning"
QT_MOC_LITERAL(15, 201, 16), // "matching_pursuit"
QT_MOC_LITERAL(16, 218, 6), // "signal"
QT_MOC_LITERAL(17, 225, 14), // "max_iterations"
QT_MOC_LITERAL(18, 240, 7), // "epsilon"
QT_MOC_LITERAL(19, 248, 5), // "boost"
QT_MOC_LITERAL(20, 254, 4), // "path"
QT_MOC_LITERAL(21, 259, 5), // "delta"
QT_MOC_LITERAL(22, 265, 13) // "recieve_input"

    },
    "UTILSLIB::FixDictMp\0current_result\0\0"
    "current_iteration\0max_iteration\0"
    "current_energy\0max_energy\0MatrixXd\0"
    "residuum\0adaptive_atom_list\0"
    "fix_dict_atom_list\0finished_calc\0"
    "parse_in_thread\0send_warning\0warning\0"
    "matching_pursuit\0signal\0max_iterations\0"
    "epsilon\0boost\0path\0delta\0recieve_input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UTILSLIB__FixDictMp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    7,   44,    2, 0x06 /* Public */,
      11,    0,   59,    2, 0x06 /* Public */,
      12,    0,   60,    2, 0x06 /* Public */,
      13,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    6,   64,    2, 0x0a /* Public */,
      22,    6,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::QReal, 0x80000000 | 7, 0x80000000 | 9, 0x80000000 | 10,    3,    4,    5,    6,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::QReal, QMetaType::Int, QMetaType::QString, QMetaType::QReal,   16,   17,   18,   19,   20,   21,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::QReal, QMetaType::Int, QMetaType::QString, QMetaType::QReal,   16,   17,   18,   19,   20,   21,

       0        // eod
};

void UTILSLIB::FixDictMp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FixDictMp *_t = static_cast<FixDictMp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->current_result((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< MatrixXd(*)>(_a[5])),(*reinterpret_cast< adaptive_atom_list(*)>(_a[6])),(*reinterpret_cast< fix_dict_atom_list(*)>(_a[7]))); break;
        case 1: _t->finished_calc(); break;
        case 2: _t->parse_in_thread(); break;
        case 3: _t->send_warning((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 4: _t->matching_pursuit((*reinterpret_cast< MatrixXd(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        case 5: _t->recieve_input((*reinterpret_cast< MatrixXd(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FixDictMp::*_t)(qint32 , qint32 , qreal , qreal , MatrixXd , adaptive_atom_list , fix_dict_atom_list );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixDictMp::current_result)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FixDictMp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixDictMp::finished_calc)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FixDictMp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixDictMp::parse_in_thread)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FixDictMp::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FixDictMp::send_warning)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject UTILSLIB::FixDictMp::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UTILSLIB__FixDictMp.data,
      qt_meta_data_UTILSLIB__FixDictMp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UTILSLIB::FixDictMp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UTILSLIB::FixDictMp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UTILSLIB__FixDictMp.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int UTILSLIB::FixDictMp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void UTILSLIB::FixDictMp::current_result(qint32 _t1, qint32 _t2, qreal _t3, qreal _t4, MatrixXd _t5, adaptive_atom_list _t6, fix_dict_atom_list _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UTILSLIB::FixDictMp::finished_calc()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UTILSLIB::FixDictMp::parse_in_thread()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void UTILSLIB::FixDictMp::send_warning(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
