/****************************************************************************
** Meta object code from reading C++ file 'rtssssetupwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FormFiles/rtssssetupwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rtssssetupwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RtSssPlugin__RtSssSetupWidget_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RtSssPlugin__RtSssSetupWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RtSssPlugin__RtSssSetupWidget_t qt_meta_stringdata_RtSssPlugin__RtSssSetupWidget = {
    {
QT_MOC_LITERAL(0, 0, 29), // "RtSssPlugin::RtSssSetupWidget"
QT_MOC_LITERAL(1, 30, 14), // "signalNewLinRR"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 3), // "val"
QT_MOC_LITERAL(4, 50, 15), // "signalNewLoutRR"
QT_MOC_LITERAL(5, 66, 12), // "signalNewLin"
QT_MOC_LITERAL(6, 79, 13), // "signalNewLout"
QT_MOC_LITERAL(7, 93, 15), // "showAboutDialog"
QT_MOC_LITERAL(8, 109, 11), // "setNewLinRR"
QT_MOC_LITERAL(9, 121, 12), // "setNewLoutRR"
QT_MOC_LITERAL(10, 134, 9), // "setNewLin"
QT_MOC_LITERAL(11, 144, 10) // "setNewLout"

    },
    "RtSssPlugin::RtSssSetupWidget\0"
    "signalNewLinRR\0\0val\0signalNewLoutRR\0"
    "signalNewLin\0signalNewLout\0showAboutDialog\0"
    "setNewLinRR\0setNewLoutRR\0setNewLin\0"
    "setNewLout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RtSssPlugin__RtSssSetupWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,
       6,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   71,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
       9,    1,   75,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void RtSssPlugin::RtSssSetupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RtSssSetupWidget *_t = static_cast<RtSssSetupWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalNewLinRR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signalNewLoutRR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->signalNewLin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->signalNewLout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->showAboutDialog(); break;
        case 5: _t->setNewLinRR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setNewLoutRR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setNewLin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setNewLout((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RtSssSetupWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtSssSetupWidget::signalNewLinRR)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RtSssSetupWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtSssSetupWidget::signalNewLoutRR)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RtSssSetupWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtSssSetupWidget::signalNewLin)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (RtSssSetupWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RtSssSetupWidget::signalNewLout)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject RtSssPlugin::RtSssSetupWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RtSssPlugin__RtSssSetupWidget.data,
      qt_meta_data_RtSssPlugin__RtSssSetupWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RtSssPlugin::RtSssSetupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RtSssPlugin::RtSssSetupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RtSssPlugin__RtSssSetupWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RtSssPlugin::RtSssSetupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void RtSssPlugin::RtSssSetupWidget::signalNewLinRR(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RtSssPlugin::RtSssSetupWidget::signalNewLoutRR(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RtSssPlugin::RtSssSetupWidget::signalNewLin(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RtSssPlugin::RtSssSetupWidget::signalNewLout(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
