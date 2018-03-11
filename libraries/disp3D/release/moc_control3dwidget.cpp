/****************************************************************************
** Meta object code from reading C++ file 'control3dwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../engine/control/control3dwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control3dwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DISP3DLIB__Control3DWidget_t {
    QByteArrayData data[13];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DISP3DLIB__Control3DWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DISP3DLIB__Control3DWidget_t qt_meta_stringdata_DISP3DLIB__Control3DWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "DISP3DLIB::Control3DWidget"
QT_MOC_LITERAL(1, 27, 17), // "sceneColorChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "color"
QT_MOC_LITERAL(4, 52, 14), // "showFullScreen"
QT_MOC_LITERAL(5, 67, 15), // "bShowFullScreen"
QT_MOC_LITERAL(6, 83, 15), // "rotationChanged"
QT_MOC_LITERAL(7, 99, 16), // "bRotationChanged"
QT_MOC_LITERAL(8, 116, 13), // "showCoordAxis"
QT_MOC_LITERAL(9, 130, 14), // "bShowCoordAxis"
QT_MOC_LITERAL(10, 145, 17), // "lightColorChanged"
QT_MOC_LITERAL(11, 163, 21), // "lightIntensityChanged"
QT_MOC_LITERAL(12, 185, 5) // "value"

    },
    "DISP3DLIB::Control3DWidget\0sceneColorChanged\0"
    "\0color\0showFullScreen\0bShowFullScreen\0"
    "rotationChanged\0bRotationChanged\0"
    "showCoordAxis\0bShowCoordAxis\0"
    "lightColorChanged\0lightIntensityChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DISP3DLIB__Control3DWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
      10,    1,   56,    2, 0x06 /* Public */,
      11,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Double,   12,

       0        // eod
};

void DISP3DLIB::Control3DWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Control3DWidget *_t = static_cast<Control3DWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sceneColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->showFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->rotationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showCoordAxis((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->lightColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->lightIntensityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Control3DWidget::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control3DWidget::sceneColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Control3DWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control3DWidget::showFullScreen)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Control3DWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control3DWidget::rotationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Control3DWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control3DWidget::showCoordAxis)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Control3DWidget::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control3DWidget::lightColorChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Control3DWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control3DWidget::lightIntensityChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject DISP3DLIB::Control3DWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DISP3DLIB__Control3DWidget.data,
      qt_meta_data_DISP3DLIB__Control3DWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DISP3DLIB::Control3DWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DISP3DLIB::Control3DWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DISP3DLIB__Control3DWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DISP3DLIB::Control3DWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void DISP3DLIB::Control3DWidget::sceneColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DISP3DLIB::Control3DWidget::showFullScreen(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DISP3DLIB::Control3DWidget::rotationChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DISP3DLIB::Control3DWidget::showCoordAxis(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DISP3DLIB::Control3DWidget::lightColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DISP3DLIB::Control3DWidget::lightIntensityChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
