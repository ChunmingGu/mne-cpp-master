/****************************************************************************
** Meta object code from reading C++ file 'dummytoolbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dummytoolbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dummytoolbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DUMMYTOOLBOXPLUGIN__DummyToolbox_t {
    QByteArrayData data[3];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DUMMYTOOLBOXPLUGIN__DummyToolbox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DUMMYTOOLBOXPLUGIN__DummyToolbox_t qt_meta_stringdata_DUMMYTOOLBOXPLUGIN__DummyToolbox = {
    {
QT_MOC_LITERAL(0, 0, 32), // "DUMMYTOOLBOXPLUGIN::DummyToolbox"
QT_MOC_LITERAL(1, 33, 17), // "fiffInfoAvailable"
QT_MOC_LITERAL(2, 51, 0) // ""

    },
    "DUMMYTOOLBOXPLUGIN::DummyToolbox\0"
    "fiffInfoAvailable\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DUMMYTOOLBOXPLUGIN__DummyToolbox[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void DUMMYTOOLBOXPLUGIN::DummyToolbox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DummyToolbox *_t = static_cast<DummyToolbox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fiffInfoAvailable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DummyToolbox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DummyToolbox::fiffInfoAvailable)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DUMMYTOOLBOXPLUGIN::DummyToolbox::staticMetaObject = {
    { &IAlgorithm::staticMetaObject, qt_meta_stringdata_DUMMYTOOLBOXPLUGIN__DummyToolbox.data,
      qt_meta_data_DUMMYTOOLBOXPLUGIN__DummyToolbox,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DUMMYTOOLBOXPLUGIN::DummyToolbox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DUMMYTOOLBOXPLUGIN::DummyToolbox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DUMMYTOOLBOXPLUGIN__DummyToolbox.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "scsharedlib/1.0"))
        return static_cast< SCSHAREDLIB::IAlgorithm*>(this);
    return IAlgorithm::qt_metacast(_clname);
}

int DUMMYTOOLBOXPLUGIN::DummyToolbox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IAlgorithm::qt_metacall(_c, _id, _a);
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
void DUMMYTOOLBOXPLUGIN::DummyToolbox::fiffInfoAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 's',  'c',  's',  'h',  'a',  'r', 
    'e',  'd',  'l',  'i',  'b',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0c, 0x00, 'D',  'u', 
    'm',  'm',  'y',  'T',  'o',  'o',  'l',  'b', 
    'o',  'x',  0x00, 0x00, 0x1a, '@',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x0f, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    '\\', 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x98, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 's',  'c',  's',  'h',  'a',  'r', 
    'e',  'd',  'l',  'i',  'b',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x95, 0x07, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x0c, 0x00, 'D',  'u',  'm',  'm',  'y',  'T', 
    'o',  'o',  'l',  'b',  'o',  'x',  0x00, 0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, '@',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace DUMMYTOOLBOXPLUGIN;
QT_MOC_EXPORT_PLUGIN(DUMMYTOOLBOXPLUGIN::DummyToolbox, DummyToolbox)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
