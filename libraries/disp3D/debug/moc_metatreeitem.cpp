/****************************************************************************
** Meta object code from reading C++ file 'metatreeitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../engine/model/items/common/metatreeitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metatreeitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DISP3DLIB__MetaTreeItem_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DISP3DLIB__MetaTreeItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DISP3DLIB__MetaTreeItem_t qt_meta_stringdata_DISP3DLIB__MetaTreeItem = {
    {
QT_MOC_LITERAL(0, 0, 23), // "DISP3DLIB::MetaTreeItem"
QT_MOC_LITERAL(1, 24, 11), // "dataChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4) // "data"

    },
    "DISP3DLIB::MetaTreeItem\0dataChanged\0"
    "\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DISP3DLIB__MetaTreeItem[] = {

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
    QMetaType::Void, QMetaType::QVariant,    3,

       0        // eod
};

void DISP3DLIB::MetaTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MetaTreeItem *_t = static_cast<MetaTreeItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MetaTreeItem::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MetaTreeItem::dataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DISP3DLIB::MetaTreeItem::staticMetaObject = {
    { &AbstractTreeItem::staticMetaObject, qt_meta_stringdata_DISP3DLIB__MetaTreeItem.data,
      qt_meta_data_DISP3DLIB__MetaTreeItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DISP3DLIB::MetaTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DISP3DLIB::MetaTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DISP3DLIB__MetaTreeItem.stringdata0))
        return static_cast<void*>(this);
    return AbstractTreeItem::qt_metacast(_clname);
}

int DISP3DLIB::MetaTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractTreeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void DISP3DLIB::MetaTreeItem::dataChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
