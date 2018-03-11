/****************************************************************************
** Meta object code from reading C++ file 'adaptivemp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mp/adaptivemp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adaptivemp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UTILSLIB__AdaptiveMp_t {
    QByteArrayData data[30];
    char stringdata0[422];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UTILSLIB__AdaptiveMp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UTILSLIB__AdaptiveMp_t qt_meta_stringdata_UTILSLIB__AdaptiveMp = {
    {
QT_MOC_LITERAL(0, 0, 20), // "UTILSLIB::AdaptiveMp"
QT_MOC_LITERAL(1, 21, 14), // "current_result"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "current_iteration"
QT_MOC_LITERAL(4, 55, 13), // "max_iteration"
QT_MOC_LITERAL(5, 69, 14), // "current_energy"
QT_MOC_LITERAL(6, 84, 10), // "max_energy"
QT_MOC_LITERAL(7, 95, 8), // "MatrixXd"
QT_MOC_LITERAL(8, 104, 8), // "residuum"
QT_MOC_LITERAL(9, 113, 18), // "adaptive_atom_list"
QT_MOC_LITERAL(10, 132, 9), // "atom_list"
QT_MOC_LITERAL(11, 142, 18), // "fix_dict_atom_list"
QT_MOC_LITERAL(12, 161, 13), // "fix_dict_list"
QT_MOC_LITERAL(13, 175, 13), // "finished_calc"
QT_MOC_LITERAL(14, 189, 12), // "send_warning"
QT_MOC_LITERAL(15, 202, 7), // "warning"
QT_MOC_LITERAL(16, 210, 16), // "matching_pursuit"
QT_MOC_LITERAL(17, 227, 24), // "QList<QList<GaborAtom> >"
QT_MOC_LITERAL(18, 252, 6), // "signal"
QT_MOC_LITERAL(19, 259, 14), // "max_iterations"
QT_MOC_LITERAL(20, 274, 7), // "epsilon"
QT_MOC_LITERAL(21, 282, 9), // "fix_phase"
QT_MOC_LITERAL(22, 292, 5), // "boost"
QT_MOC_LITERAL(23, 298, 10), // "simplex_it"
QT_MOC_LITERAL(24, 309, 18), // "simplex_reflection"
QT_MOC_LITERAL(25, 328, 17), // "simplex_expansion"
QT_MOC_LITERAL(26, 346, 19), // "simplex_contraction"
QT_MOC_LITERAL(27, 366, 24), // "simplex_full_contraction"
QT_MOC_LITERAL(28, 391, 16), // "trial_separation"
QT_MOC_LITERAL(29, 408, 13) // "recieve_input"

    },
    "UTILSLIB::AdaptiveMp\0current_result\0"
    "\0current_iteration\0max_iteration\0"
    "current_energy\0max_energy\0MatrixXd\0"
    "residuum\0adaptive_atom_list\0atom_list\0"
    "fix_dict_atom_list\0fix_dict_list\0"
    "finished_calc\0send_warning\0warning\0"
    "matching_pursuit\0QList<QList<GaborAtom> >\0"
    "signal\0max_iterations\0epsilon\0fix_phase\0"
    "boost\0simplex_it\0simplex_reflection\0"
    "simplex_expansion\0simplex_contraction\0"
    "simplex_full_contraction\0trial_separation\0"
    "recieve_input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UTILSLIB__AdaptiveMp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    7,   39,    2, 0x06 /* Public */,
      13,    0,   54,    2, 0x06 /* Public */,
      14,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,   11,   58,    2, 0x0a /* Public */,
      29,   11,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::QReal, 0x80000000 | 7, 0x80000000 | 9, 0x80000000 | 11,    3,    4,    5,    6,    8,   10,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

 // slots: parameters
    0x80000000 | 17, 0x80000000 | 7, QMetaType::Int, QMetaType::QReal, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::Bool,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::QReal, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::Bool,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,

       0        // eod
};

void UTILSLIB::AdaptiveMp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdaptiveMp *_t = static_cast<AdaptiveMp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->current_result((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< MatrixXd(*)>(_a[5])),(*reinterpret_cast< adaptive_atom_list(*)>(_a[6])),(*reinterpret_cast< fix_dict_atom_list(*)>(_a[7]))); break;
        case 1: _t->finished_calc(); break;
        case 2: _t->send_warning((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 3: { QList<QList<GaborAtom> > _r = _t->matching_pursuit((*reinterpret_cast< MatrixXd(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qreal(*)>(_a[7])),(*reinterpret_cast< qreal(*)>(_a[8])),(*reinterpret_cast< qreal(*)>(_a[9])),(*reinterpret_cast< qreal(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11])));
            if (_a[0]) *reinterpret_cast< QList<QList<GaborAtom> >*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->recieve_input((*reinterpret_cast< MatrixXd(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qreal(*)>(_a[7])),(*reinterpret_cast< qreal(*)>(_a[8])),(*reinterpret_cast< qreal(*)>(_a[9])),(*reinterpret_cast< qreal(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AdaptiveMp::*_t)(qint32 , qint32 , qreal , qreal , MatrixXd , adaptive_atom_list , fix_dict_atom_list );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdaptiveMp::current_result)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AdaptiveMp::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdaptiveMp::finished_calc)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AdaptiveMp::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AdaptiveMp::send_warning)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject UTILSLIB::AdaptiveMp::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_UTILSLIB__AdaptiveMp.data,
      qt_meta_data_UTILSLIB__AdaptiveMp,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UTILSLIB::AdaptiveMp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UTILSLIB::AdaptiveMp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UTILSLIB__AdaptiveMp.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int UTILSLIB::AdaptiveMp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void UTILSLIB::AdaptiveMp::current_result(qint32 _t1, qint32 _t2, qreal _t3, qreal _t4, MatrixXd _t5, adaptive_atom_list _t6, fix_dict_atom_list _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UTILSLIB::AdaptiveMp::finished_calc()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void UTILSLIB::AdaptiveMp::send_warning(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
