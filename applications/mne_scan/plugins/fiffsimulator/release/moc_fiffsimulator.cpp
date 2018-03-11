/****************************************************************************
** Meta object code from reading C++ file 'fiffsimulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fiffsimulator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fiffsimulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FIFFSIMULATORPLUGIN__FiffSimulator_t {
    QByteArrayData data[5];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FIFFSIMULATORPLUGIN__FiffSimulator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FIFFSIMULATORPLUGIN__FiffSimulator_t qt_meta_stringdata_FIFFSIMULATORPLUGIN__FiffSimulator = {
    {
QT_MOC_LITERAL(0, 0, 34), // "FIFFSIMULATORPLUGIN::FiffSimu..."
QT_MOC_LITERAL(1, 35, 20), // "cmdConnectionChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 9), // "p_bStatus"
QT_MOC_LITERAL(4, 67, 17) // "fiffInfoAvailable"

    },
    "FIFFSIMULATORPLUGIN::FiffSimulator\0"
    "cmdConnectionChanged\0\0p_bStatus\0"
    "fiffInfoAvailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FIFFSIMULATORPLUGIN__FiffSimulator[] = {

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
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void FIFFSIMULATORPLUGIN::FiffSimulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FiffSimulator *_t = static_cast<FiffSimulator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cmdConnectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fiffInfoAvailable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FiffSimulator::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiffSimulator::cmdConnectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FiffSimulator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FiffSimulator::fiffInfoAvailable)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FIFFSIMULATORPLUGIN::FiffSimulator::staticMetaObject = {
    { &SCSHAREDLIB::ISensor::staticMetaObject, qt_meta_stringdata_FIFFSIMULATORPLUGIN__FiffSimulator.data,
      qt_meta_data_FIFFSIMULATORPLUGIN__FiffSimulator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FIFFSIMULATORPLUGIN::FiffSimulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FIFFSIMULATORPLUGIN::FiffSimulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FIFFSIMULATORPLUGIN__FiffSimulator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "scsharedlib/1.0"))
        return static_cast< SCSHAREDLIB::ISensor*>(this);
    return SCSHAREDLIB::ISensor::qt_metacast(_clname);
}

int FIFFSIMULATORPLUGIN::FiffSimulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SCSHAREDLIB::ISensor::qt_metacall(_c, _id, _a);
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
void FIFFSIMULATORPLUGIN::FiffSimulator::cmdConnectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FIFFSIMULATORPLUGIN::FiffSimulator::fiffInfoAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
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
    'a',  'm',  'e',  0x00, 0x0d, 0x00, 'F',  'i', 
    'f',  'f',  'S',  'i',  'm',  'u',  'l',  'a', 
    't',  'o',  'r',  0x00, 0x1a, '@',  0xa1, 0x00,
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
    0x0d, 0x00, 'F',  'i',  'f',  'f',  'S',  'i', 
    'm',  'u',  'l',  'a',  't',  'o',  'r',  0x00,
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, '@',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace FIFFSIMULATORPLUGIN;
QT_MOC_EXPORT_PLUGIN(FIFFSIMULATORPLUGIN::FiffSimulator, FiffSimulator)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
