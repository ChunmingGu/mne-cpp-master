/****************************************************************************
** Meta object code from reading C++ file 'plugingui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../plugingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MNESCAN__PluginGui_t {
    QByteArrayData data[8];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MNESCAN__PluginGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MNESCAN__PluginGui_t qt_meta_stringdata_MNESCAN__PluginGui = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MNESCAN::PluginGui"
QT_MOC_LITERAL(1, 19, 21), // "selectedPluginChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 26), // "SCSHAREDLIB::IPlugin::SPtr"
QT_MOC_LITERAL(4, 69, 7), // "pPlugin"
QT_MOC_LITERAL(5, 77, 25), // "selectedConnectionChanged"
QT_MOC_LITERAL(6, 103, 44), // "SCSHAREDLIB::PluginConnectorC..."
QT_MOC_LITERAL(7, 148, 11) // "pConnection"

    },
    "MNESCAN::PluginGui\0selectedPluginChanged\0"
    "\0SCSHAREDLIB::IPlugin::SPtr\0pPlugin\0"
    "selectedConnectionChanged\0"
    "SCSHAREDLIB::PluginConnectorConnection::SPtr\0"
    "pConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MNESCAN__PluginGui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void MNESCAN::PluginGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginGui *_t = static_cast<PluginGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedPluginChanged((*reinterpret_cast< SCSHAREDLIB::IPlugin::SPtr(*)>(_a[1]))); break;
        case 1: _t->selectedConnectionChanged((*reinterpret_cast< SCSHAREDLIB::PluginConnectorConnection::SPtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PluginGui::*_t)(SCSHAREDLIB::IPlugin::SPtr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginGui::selectedPluginChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PluginGui::*_t)(SCSHAREDLIB::PluginConnectorConnection::SPtr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PluginGui::selectedConnectionChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MNESCAN::PluginGui::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MNESCAN__PluginGui.data,
      qt_meta_data_MNESCAN__PluginGui,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MNESCAN::PluginGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MNESCAN::PluginGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MNESCAN__PluginGui.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MNESCAN::PluginGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MNESCAN::PluginGui::selectedPluginChanged(SCSHAREDLIB::IPlugin::SPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MNESCAN::PluginGui::selectedConnectionChanged(SCSHAREDLIB::PluginConnectorConnection::SPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
