/****************************************************************************
** Meta object code from reading C++ file 'noisereductionoptionswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FormFiles/noisereductionoptionswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noisereductionoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NoiseReductionOptionsWidget_t {
    QByteArrayData data[18];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NoiseReductionOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NoiseReductionOptionsWidget_t qt_meta_stringdata_NoiseReductionOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 27), // "NoiseReductionOptionsWidget"
QT_MOC_LITERAL(1, 28, 20), // "projSelectionChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 11), // "compClicked"
QT_MOC_LITERAL(4, 62, 4), // "text"
QT_MOC_LITERAL(5, 67, 20), // "compSelectionChanged"
QT_MOC_LITERAL(6, 88, 2), // "to"
QT_MOC_LITERAL(7, 91, 17), // "showFilterOptions"
QT_MOC_LITERAL(8, 109, 5), // "state"
QT_MOC_LITERAL(9, 115, 19), // "updateConnectedView"
QT_MOC_LITERAL(10, 135, 24), // "onCheckProjStatusChanged"
QT_MOC_LITERAL(11, 160, 22), // "onEnableDisableAllProj"
QT_MOC_LITERAL(12, 183, 6), // "status"
QT_MOC_LITERAL(13, 190, 24), // "onCheckCompStatusChanged"
QT_MOC_LITERAL(14, 215, 8), // "compName"
QT_MOC_LITERAL(15, 224, 18), // "onNBaseFctsChanged"
QT_MOC_LITERAL(16, 243, 19), // "onShowFilterOptions"
QT_MOC_LITERAL(17, 263, 19) // "onUserFilterToggled"

    },
    "NoiseReductionOptionsWidget\0"
    "projSelectionChanged\0\0compClicked\0"
    "text\0compSelectionChanged\0to\0"
    "showFilterOptions\0state\0updateConnectedView\0"
    "onCheckProjStatusChanged\0"
    "onEnableDisableAllProj\0status\0"
    "onCheckCompStatusChanged\0compName\0"
    "onNBaseFctsChanged\0onShowFilterOptions\0"
    "onUserFilterToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NoiseReductionOptionsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    1,   70,    2, 0x06 /* Public */,
       5,    1,   73,    2, 0x06 /* Public */,
       7,    1,   76,    2, 0x06 /* Public */,
       9,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   80,    2, 0x09 /* Protected */,
      11,    1,   83,    2, 0x09 /* Protected */,
      13,    1,   86,    2, 0x09 /* Protected */,
      15,    0,   89,    2, 0x09 /* Protected */,
      16,    1,   90,    2, 0x09 /* Protected */,
      17,    1,   93,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void NoiseReductionOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NoiseReductionOptionsWidget *_t = static_cast<NoiseReductionOptionsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->projSelectionChanged(); break;
        case 1: _t->compClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->compSelectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->showFilterOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateConnectedView(); break;
        case 5: _t->onCheckProjStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onEnableDisableAllProj((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onCheckCompStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->onNBaseFctsChanged(); break;
        case 9: _t->onShowFilterOptions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onUserFilterToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NoiseReductionOptionsWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoiseReductionOptionsWidget::projSelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NoiseReductionOptionsWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoiseReductionOptionsWidget::compClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NoiseReductionOptionsWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoiseReductionOptionsWidget::compSelectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NoiseReductionOptionsWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoiseReductionOptionsWidget::showFilterOptions)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NoiseReductionOptionsWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoiseReductionOptionsWidget::updateConnectedView)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject NoiseReductionOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NoiseReductionOptionsWidget.data,
      qt_meta_data_NoiseReductionOptionsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NoiseReductionOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoiseReductionOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NoiseReductionOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NoiseReductionOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void NoiseReductionOptionsWidget::projSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NoiseReductionOptionsWidget::compClicked(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NoiseReductionOptionsWidget::compSelectionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NoiseReductionOptionsWidget::showFilterOptions(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NoiseReductionOptionsWidget::updateConnectedView()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
