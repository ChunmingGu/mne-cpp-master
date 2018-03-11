/****************************************************************************
** Meta object code from reading C++ file 'noisereduction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../noisereduction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noisereduction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NoiseReductionPlugin__NoiseReduction_t {
    QByteArrayData data[19];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NoiseReductionPlugin__NoiseReduction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NoiseReductionPlugin__NoiseReduction_t qt_meta_stringdata_NoiseReductionPlugin__NoiseReduction = {
    {
QT_MOC_LITERAL(0, 0, 36), // "NoiseReductionPlugin::NoiseRe..."
QT_MOC_LITERAL(1, 37, 17), // "fiffInfoAvailable"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 20), // "setAcquisitionSystem"
QT_MOC_LITERAL(4, 77, 7), // "sSystem"
QT_MOC_LITERAL(5, 85, 13), // "setSpharaMode"
QT_MOC_LITERAL(6, 99, 5), // "state"
QT_MOC_LITERAL(7, 105, 18), // "setSpharaNBaseFcts"
QT_MOC_LITERAL(8, 124, 13), // "nBaseFctsGrad"
QT_MOC_LITERAL(9, 138, 12), // "nBaseFctsMag"
QT_MOC_LITERAL(10, 151, 16), // "updateProjection"
QT_MOC_LITERAL(11, 168, 17), // "updateCompensator"
QT_MOC_LITERAL(12, 186, 2), // "to"
QT_MOC_LITERAL(13, 189, 20), // "setFilterChannelType"
QT_MOC_LITERAL(14, 210, 5), // "sType"
QT_MOC_LITERAL(15, 216, 13), // "filterChanged"
QT_MOC_LITERAL(16, 230, 17), // "QList<FilterData>"
QT_MOC_LITERAL(17, 248, 10), // "filterData"
QT_MOC_LITERAL(18, 259, 15) // "filterActivated"

    },
    "NoiseReductionPlugin::NoiseReduction\0"
    "fiffInfoAvailable\0\0setAcquisitionSystem\0"
    "sSystem\0setSpharaMode\0state\0"
    "setSpharaNBaseFcts\0nBaseFctsGrad\0"
    "nBaseFctsMag\0updateProjection\0"
    "updateCompensator\0to\0setFilterChannelType\0"
    "sType\0filterChanged\0QList<FilterData>\0"
    "filterData\0filterActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NoiseReductionPlugin__NoiseReduction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       7,    2,   66,    2, 0x0a /* Public */,
      10,    0,   71,    2, 0x09 /* Protected */,
      11,    1,   72,    2, 0x09 /* Protected */,
      13,    1,   75,    2, 0x09 /* Protected */,
      15,    1,   78,    2, 0x09 /* Protected */,
      18,    1,   81,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void NoiseReductionPlugin::NoiseReduction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NoiseReduction *_t = static_cast<NoiseReduction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fiffInfoAvailable(); break;
        case 1: _t->setAcquisitionSystem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setSpharaMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setSpharaNBaseFcts((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->updateProjection(); break;
        case 5: _t->updateCompensator((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setFilterChannelType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->filterChanged((*reinterpret_cast< QList<FilterData>(*)>(_a[1]))); break;
        case 8: _t->filterActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<FilterData> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NoiseReduction::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NoiseReduction::fiffInfoAvailable)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject NoiseReductionPlugin::NoiseReduction::staticMetaObject = {
    { &IAlgorithm::staticMetaObject, qt_meta_stringdata_NoiseReductionPlugin__NoiseReduction.data,
      qt_meta_data_NoiseReductionPlugin__NoiseReduction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NoiseReductionPlugin::NoiseReduction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoiseReductionPlugin::NoiseReduction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NoiseReductionPlugin__NoiseReduction.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "scsharedlib/1.0"))
        return static_cast< SCSHAREDLIB::IAlgorithm*>(this);
    return IAlgorithm::qt_metacast(_clname);
}

int NoiseReductionPlugin::NoiseReduction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IAlgorithm::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void NoiseReductionPlugin::NoiseReduction::fiffInfoAvailable()
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
    'a',  'm',  'e',  0x00, 0x0e, 0x00, 'N',  'o', 
    'i',  's',  'e',  'R',  'e',  'd',  'u',  'c', 
    't',  'i',  'o',  'n',  0x1a, '@',  0xa1, 0x00,
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
    0x0e, 0x00, 'N',  'o',  'i',  's',  'e',  'R', 
    'e',  'd',  'u',  'c',  't',  'i',  'o',  'n', 
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x1a, '@',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    'h',  0x00, 0x00, 0x00, 't',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace NoiseReductionPlugin;
QT_MOC_EXPORT_PLUGIN(NoiseReductionPlugin::NoiseReduction, NoiseReduction)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
