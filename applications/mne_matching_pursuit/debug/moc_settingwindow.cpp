/****************************************************************************
** Meta object code from reading C++ file 'settingwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../settingwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_settingwindow_t {
    QByteArrayData data[20];
    char stringdata0[471];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_settingwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_settingwindow_t qt_meta_stringdata_settingwindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "settingwindow"
QT_MOC_LITERAL(1, 14, 17), // "change_info_label"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "on_btt_close_clicked"
QT_MOC_LITERAL(4, 54, 21), // "on_btt_cancel_clicked"
QT_MOC_LITERAL(5, 76, 29), // "on_btt_max_it_default_clicked"
QT_MOC_LITERAL(6, 106, 33), // "on_btt_reflection_default_cli..."
QT_MOC_LITERAL(7, 140, 32), // "on_btt_expansion_default_clicked"
QT_MOC_LITERAL(8, 173, 34), // "on_btt_contraction_default_cl..."
QT_MOC_LITERAL(9, 208, 39), // "on_btt_full_contraction_defau..."
QT_MOC_LITERAL(10, 248, 24), // "on_sl_boost_valueChanged"
QT_MOC_LITERAL(11, 273, 5), // "value"
QT_MOC_LITERAL(12, 279, 25), // "on_sl_boost_sliderPressed"
QT_MOC_LITERAL(13, 305, 32), // "on_sl_boost_fixDict_valueChanged"
QT_MOC_LITERAL(14, 338, 33), // "on_sl_boost_fixDict_sliderPre..."
QT_MOC_LITERAL(15, 372, 35), // "on_btt_delta_energy_default_c..."
QT_MOC_LITERAL(16, 408, 20), // "cb_selection_changed"
QT_MOC_LITERAL(17, 429, 7), // "topLeft"
QT_MOC_LITERAL(18, 437, 11), // "bottomRight"
QT_MOC_LITERAL(19, 449, 21) // "on_pushButton_clicked"

    },
    "settingwindow\0change_info_label\0\0"
    "on_btt_close_clicked\0on_btt_cancel_clicked\0"
    "on_btt_max_it_default_clicked\0"
    "on_btt_reflection_default_clicked\0"
    "on_btt_expansion_default_clicked\0"
    "on_btt_contraction_default_clicked\0"
    "on_btt_full_contraction_default_clicked\0"
    "on_sl_boost_valueChanged\0value\0"
    "on_sl_boost_sliderPressed\0"
    "on_sl_boost_fixDict_valueChanged\0"
    "on_sl_boost_fixDict_sliderPressed\0"
    "on_btt_delta_energy_default_clicked\0"
    "cb_selection_changed\0topLeft\0bottomRight\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_settingwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    1,   97,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    2,  106,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   17,   18,
    QMetaType::Void,

       0        // eod
};

void settingwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        settingwindow *_t = static_cast<settingwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->change_info_label(); break;
        case 1: _t->on_btt_close_clicked(); break;
        case 2: _t->on_btt_cancel_clicked(); break;
        case 3: _t->on_btt_max_it_default_clicked(); break;
        case 4: _t->on_btt_reflection_default_clicked(); break;
        case 5: _t->on_btt_expansion_default_clicked(); break;
        case 6: _t->on_btt_contraction_default_clicked(); break;
        case 7: _t->on_btt_full_contraction_default_clicked(); break;
        case 8: _t->on_sl_boost_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_sl_boost_sliderPressed(); break;
        case 10: _t->on_sl_boost_fixDict_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_sl_boost_fixDict_sliderPressed(); break;
        case 12: _t->on_btt_delta_energy_default_clicked(); break;
        case 13: _t->cb_selection_changed((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 14: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (settingwindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&settingwindow::change_info_label)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject settingwindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_settingwindow.data,
      qt_meta_data_settingwindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *settingwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *settingwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_settingwindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int settingwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void settingwindow::change_info_label()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
