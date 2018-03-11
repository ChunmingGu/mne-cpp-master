/****************************************************************************
** Meta object code from reading C++ file 'renderable3Dentity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../engine/model/3dhelpers/renderable3Dentity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'renderable3Dentity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DISP3DLIB__Renderable3DEntity_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DISP3DLIB__Renderable3DEntity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DISP3DLIB__Renderable3DEntity_t qt_meta_stringdata_DISP3DLIB__Renderable3DEntity = {
    {
QT_MOC_LITERAL(0, 0, 29), // "DISP3DLIB::Renderable3DEntity"
QT_MOC_LITERAL(1, 30, 12), // "scaleChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "scale"
QT_MOC_LITERAL(4, 50, 11), // "rotXChanged"
QT_MOC_LITERAL(5, 62, 4), // "rotX"
QT_MOC_LITERAL(6, 67, 11), // "rotYChanged"
QT_MOC_LITERAL(7, 79, 4), // "rotY"
QT_MOC_LITERAL(8, 84, 11), // "rotZChanged"
QT_MOC_LITERAL(9, 96, 4), // "rotZ"
QT_MOC_LITERAL(10, 101, 15), // "positionChanged"
QT_MOC_LITERAL(11, 117, 8) // "position"

    },
    "DISP3DLIB::Renderable3DEntity\0"
    "scaleChanged\0\0scale\0rotXChanged\0rotX\0"
    "rotYChanged\0rotY\0rotZChanged\0rotZ\0"
    "positionChanged\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DISP3DLIB__Renderable3DEntity[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,
       8,    1,   48,    2, 0x06 /* Public */,
      10,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::QVector3D,   11,

 // properties: name, type, flags
       3, QMetaType::Float, 0x00495103,
       5, QMetaType::Float, 0x00495103,
       7, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      11, QMetaType::QVector3D, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void DISP3DLIB::Renderable3DEntity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Renderable3DEntity *_t = static_cast<Renderable3DEntity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scaleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->rotXChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->rotYChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->rotZChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->positionChanged((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Renderable3DEntity::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Renderable3DEntity::scaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Renderable3DEntity::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Renderable3DEntity::rotXChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Renderable3DEntity::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Renderable3DEntity::rotYChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Renderable3DEntity::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Renderable3DEntity::rotZChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Renderable3DEntity::*_t)(QVector3D );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Renderable3DEntity::positionChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Renderable3DEntity *_t = static_cast<Renderable3DEntity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->scaleValue(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->rotX(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->rotY(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->rotZ(); break;
        case 4: *reinterpret_cast< QVector3D*>(_v) = _t->position(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Renderable3DEntity *_t = static_cast<Renderable3DEntity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScale(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setRotX(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setRotY(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setRotZ(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setPosition(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject DISP3DLIB::Renderable3DEntity::staticMetaObject = {
    { &Qt3DCore::QEntity::staticMetaObject, qt_meta_stringdata_DISP3DLIB__Renderable3DEntity.data,
      qt_meta_data_DISP3DLIB__Renderable3DEntity,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DISP3DLIB::Renderable3DEntity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DISP3DLIB::Renderable3DEntity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DISP3DLIB__Renderable3DEntity.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QEntity::qt_metacast(_clname);
}

int DISP3DLIB::Renderable3DEntity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QEntity::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DISP3DLIB::Renderable3DEntity::scaleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DISP3DLIB::Renderable3DEntity::rotXChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DISP3DLIB::Renderable3DEntity::rotYChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DISP3DLIB::Renderable3DEntity::rotZChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DISP3DLIB::Renderable3DEntity::positionChanged(QVector3D _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
