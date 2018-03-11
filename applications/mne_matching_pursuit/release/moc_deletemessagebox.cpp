/****************************************************************************
** Meta object code from reading C++ file 'deletemessagebox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../deletemessagebox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deletemessagebox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeleteMessageBox_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeleteMessageBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeleteMessageBox_t qt_meta_stringdata_DeleteMessageBox = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DeleteMessageBox"
QT_MOC_LITERAL(1, 17, 18), // "on_btt_yes_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "on_btt_No_clicked"
QT_MOC_LITERAL(4, 55, 27), // "on_chb_NoMessageBox_toggled"
QT_MOC_LITERAL(5, 83, 7) // "checked"

    },
    "DeleteMessageBox\0on_btt_yes_clicked\0"
    "\0on_btt_No_clicked\0on_chb_NoMessageBox_toggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeleteMessageBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void DeleteMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeleteMessageBox *_t = static_cast<DeleteMessageBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btt_yes_clicked(); break;
        case 1: _t->on_btt_No_clicked(); break;
        case 2: _t->on_chb_NoMessageBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DeleteMessageBox::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DeleteMessageBox.data,
      qt_meta_data_DeleteMessageBox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DeleteMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeleteMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteMessageBox.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DeleteMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
