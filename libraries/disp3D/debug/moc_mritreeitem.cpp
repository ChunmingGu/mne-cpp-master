/****************************************************************************
** Meta object code from reading C++ file 'mritreeitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../engine/model/items/mri/mritreeitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mritreeitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DISP3DLIB__MriTreeItem_t {
    QByteArrayData data[6];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DISP3DLIB__MriTreeItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DISP3DLIB__MriTreeItem_t qt_meta_stringdata_DISP3DLIB__MriTreeItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DISP3DLIB::MriTreeItem"
QT_MOC_LITERAL(1, 23, 18), // "colorOriginChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "MatrixX3f"
QT_MOC_LITERAL(4, 53, 13), // "leftHemiColor"
QT_MOC_LITERAL(5, 67, 14) // "rightHemiColor"

    },
    "DISP3DLIB::MriTreeItem\0colorOriginChanged\0"
    "\0MatrixX3f\0leftHemiColor\0rightHemiColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DISP3DLIB__MriTreeItem[] = {

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
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void DISP3DLIB::MriTreeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MriTreeItem *_t = static_cast<MriTreeItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorOriginChanged((*reinterpret_cast< const MatrixX3f(*)>(_a[1])),(*reinterpret_cast< const MatrixX3f(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MriTreeItem::*_t)(const MatrixX3f & , const MatrixX3f & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MriTreeItem::colorOriginChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DISP3DLIB::MriTreeItem::staticMetaObject = {
    { &AbstractTreeItem::staticMetaObject, qt_meta_stringdata_DISP3DLIB__MriTreeItem.data,
      qt_meta_data_DISP3DLIB__MriTreeItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DISP3DLIB::MriTreeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DISP3DLIB::MriTreeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DISP3DLIB__MriTreeItem.stringdata0))
        return static_cast<void*>(this);
    return AbstractTreeItem::qt_metacast(_clname);
}

int DISP3DLIB::MriTreeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DISP3DLIB::MriTreeItem::colorOriginChanged(const MatrixX3f & _t1, const MatrixX3f & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
