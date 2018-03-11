/****************************************************************************
** Meta object code from reading C++ file 'filterwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Windows/filterwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filterwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MNEBROWSE__FilterWindow_t {
    QByteArrayData data[9];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MNEBROWSE__FilterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MNEBROWSE__FilterWindow_t qt_meta_stringdata_MNEBROWSE__FilterWindow = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MNEBROWSE::FilterWindow"
QT_MOC_LITERAL(1, 24, 20), // "changeStateSpinBoxes"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 12), // "currentIndex"
QT_MOC_LITERAL(4, 59, 23), // "filterParametersChanged"
QT_MOC_LITERAL(5, 83, 11), // "applyFilter"
QT_MOC_LITERAL(6, 95, 10), // "undoFilter"
QT_MOC_LITERAL(7, 106, 16), // "exportFilterPlot"
QT_MOC_LITERAL(8, 123, 24) // "exportFilterCoefficients"

    },
    "MNEBROWSE::FilterWindow\0changeStateSpinBoxes\0"
    "\0currentIndex\0filterParametersChanged\0"
    "applyFilter\0undoFilter\0exportFilterPlot\0"
    "exportFilterCoefficients"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MNEBROWSE__FilterWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x09 /* Protected */,
       4,    0,   47,    2, 0x09 /* Protected */,
       5,    0,   48,    2, 0x09 /* Protected */,
       6,    0,   49,    2, 0x09 /* Protected */,
       7,    0,   50,    2, 0x09 /* Protected */,
       8,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MNEBROWSE::FilterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FilterWindow *_t = static_cast<FilterWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeStateSpinBoxes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->filterParametersChanged(); break;
        case 2: _t->applyFilter(); break;
        case 3: _t->undoFilter(); break;
        case 4: _t->exportFilterPlot(); break;
        case 5: _t->exportFilterCoefficients(); break;
        default: ;
        }
    }
}

const QMetaObject MNEBROWSE::FilterWindow::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_MNEBROWSE__FilterWindow.data,
      qt_meta_data_MNEBROWSE__FilterWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MNEBROWSE::FilterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MNEBROWSE::FilterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MNEBROWSE__FilterWindow.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int MNEBROWSE::FilterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
