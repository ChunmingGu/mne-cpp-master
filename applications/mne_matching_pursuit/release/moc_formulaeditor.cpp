/****************************************************************************
** Meta object code from reading C++ file 'formulaeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../formulaeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formulaeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Formulaeditor_t {
    QByteArrayData data[17];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Formulaeditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Formulaeditor_t qt_meta_stringdata_Formulaeditor = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Formulaeditor"
QT_MOC_LITERAL(1, 14, 13), // "formula_saved"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "on_tb_A_textChanged"
QT_MOC_LITERAL(4, 49, 4), // "arg1"
QT_MOC_LITERAL(5, 54, 19), // "on_tb_B_textChanged"
QT_MOC_LITERAL(6, 74, 19), // "on_tb_C_textChanged"
QT_MOC_LITERAL(7, 94, 19), // "on_tb_D_textChanged"
QT_MOC_LITERAL(8, 114, 19), // "on_tb_E_textChanged"
QT_MOC_LITERAL(9, 134, 19), // "on_tb_F_textChanged"
QT_MOC_LITERAL(10, 154, 19), // "on_tb_G_textChanged"
QT_MOC_LITERAL(11, 174, 19), // "on_tb_H_textChanged"
QT_MOC_LITERAL(12, 194, 25), // "on_tb_Formula_textChanged"
QT_MOC_LITERAL(13, 220, 19), // "on_btt_Test_clicked"
QT_MOC_LITERAL(14, 240, 19), // "on_btt_Save_clicked"
QT_MOC_LITERAL(15, 260, 33), // "on_dsb_StartValue_editingFini..."
QT_MOC_LITERAL(16, 294, 32) // "on_dsb_StepWidth_editingFinished"

    },
    "Formulaeditor\0formula_saved\0\0"
    "on_tb_A_textChanged\0arg1\0on_tb_B_textChanged\0"
    "on_tb_C_textChanged\0on_tb_D_textChanged\0"
    "on_tb_E_textChanged\0on_tb_F_textChanged\0"
    "on_tb_G_textChanged\0on_tb_H_textChanged\0"
    "on_tb_Formula_textChanged\0on_btt_Test_clicked\0"
    "on_btt_Save_clicked\0"
    "on_dsb_StartValue_editingFinished\0"
    "on_dsb_StepWidth_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Formulaeditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   85,    2, 0x08 /* Private */,
       5,    1,   88,    2, 0x08 /* Private */,
       6,    1,   91,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
       8,    1,   97,    2, 0x08 /* Private */,
       9,    1,  100,    2, 0x08 /* Private */,
      10,    1,  103,    2, 0x08 /* Private */,
      11,    1,  106,    2, 0x08 /* Private */,
      12,    1,  109,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Formulaeditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Formulaeditor *_t = static_cast<Formulaeditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->formula_saved(); break;
        case 1: _t->on_tb_A_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_tb_B_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_tb_C_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_tb_D_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_tb_E_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_tb_F_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_tb_G_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_tb_H_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_tb_Formula_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_btt_Test_clicked(); break;
        case 11: _t->on_btt_Save_clicked(); break;
        case 12: _t->on_dsb_StartValue_editingFinished(); break;
        case 13: _t->on_dsb_StepWidth_editingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Formulaeditor::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Formulaeditor::formula_saved)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Formulaeditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Formulaeditor.data,
      qt_meta_data_Formulaeditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Formulaeditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Formulaeditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Formulaeditor.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Formulaeditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Formulaeditor::formula_saved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AtomPaintWindow_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AtomPaintWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AtomPaintWindow_t qt_meta_stringdata_AtomPaintWindow = {
    {
QT_MOC_LITERAL(0, 0, 15) // "AtomPaintWindow"

    },
    "AtomPaintWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AtomPaintWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AtomPaintWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AtomPaintWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AtomPaintWindow.data,
      qt_meta_data_AtomPaintWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AtomPaintWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AtomPaintWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AtomPaintWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AtomPaintWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
