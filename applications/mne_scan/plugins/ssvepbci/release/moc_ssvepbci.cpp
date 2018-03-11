/****************************************************************************
** Meta object code from reading C++ file 'ssvepbci.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ssvepbci.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ssvepbci.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBci_t {
    QByteArrayData data[23];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBci_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBci_t qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBci = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SSVEPBCIPLUGIN::SsvepBci"
QT_MOC_LITERAL(1, 25, 9), // "SSVEPprob"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "MyQList"
QT_MOC_LITERAL(4, 44, 9), // "ssvepProb"
QT_MOC_LITERAL(5, 54, 20), // "classificationResult"
QT_MOC_LITERAL(6, 75, 11), // "classResult"
QT_MOC_LITERAL(7, 87, 18), // "getFrequencyLabels"
QT_MOC_LITERAL(8, 106, 13), // "frequencyList"
QT_MOC_LITERAL(9, 120, 15), // "removePowerLine"
QT_MOC_LITERAL(10, 136, 12), // "setPowerLine"
QT_MOC_LITERAL(11, 149, 9), // "powerLine"
QT_MOC_LITERAL(12, 159, 26), // "setFeatureExtractionMethod"
QT_MOC_LITERAL(13, 186, 6), // "useMEC"
QT_MOC_LITERAL(14, 193, 18), // "setThresholdValues"
QT_MOC_LITERAL(15, 212, 10), // "thresholds"
QT_MOC_LITERAL(16, 223, 27), // "setChangeSSVEPParameterFlag"
QT_MOC_LITERAL(17, 251, 15), // "setNumClassHits"
QT_MOC_LITERAL(18, 267, 12), // "numClassHits"
QT_MOC_LITERAL(19, 280, 17), // "setNumClassBreaks"
QT_MOC_LITERAL(20, 298, 14), // "numClassBreaks"
QT_MOC_LITERAL(21, 313, 16), // "setSizeClassList"
QT_MOC_LITERAL(22, 330, 13) // "classListSize"

    },
    "SSVEPBCIPLUGIN::SsvepBci\0SSVEPprob\0\0"
    "MyQList\0ssvepProb\0classificationResult\0"
    "classResult\0getFrequencyLabels\0"
    "frequencyList\0removePowerLine\0"
    "setPowerLine\0powerLine\0"
    "setFeatureExtractionMethod\0useMEC\0"
    "setThresholdValues\0thresholds\0"
    "setChangeSSVEPParameterFlag\0setNumClassHits\0"
    "numClassHits\0setNumClassBreaks\0"
    "numClassBreaks\0setSizeClassList\0"
    "classListSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SSVEPBCIPLUGIN__SsvepBci[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       7,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   78,    2, 0x0a /* Public */,
      10,    1,   81,    2, 0x0a /* Public */,
      12,    1,   84,    2, 0x0a /* Public */,
      14,    1,   87,    2, 0x0a /* Public */,
      16,    0,   90,    2, 0x0a /* Public */,
      17,    1,   91,    2, 0x0a /* Public */,
      19,    1,   94,    2, 0x0a /* Public */,
      21,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, 0x80000000 | 3,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 3,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,

       0        // eod
};

void SSVEPBCIPLUGIN::SsvepBci::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SsvepBci *_t = static_cast<SsvepBci *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SSVEPprob((*reinterpret_cast< MyQList(*)>(_a[1]))); break;
        case 1: _t->classificationResult((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->getFrequencyLabels((*reinterpret_cast< MyQList(*)>(_a[1]))); break;
        case 3: _t->removePowerLine((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setPowerLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setFeatureExtractionMethod((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setThresholdValues((*reinterpret_cast< MyQList(*)>(_a[1]))); break;
        case 7: _t->setChangeSSVEPParameterFlag(); break;
        case 8: _t->setNumClassHits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setNumClassBreaks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setSizeClassList((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SsvepBci::*_t)(MyQList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SsvepBci::SSVEPprob)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SsvepBci::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SsvepBci::classificationResult)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SsvepBci::*_t)(MyQList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SsvepBci::getFrequencyLabels)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SSVEPBCIPLUGIN::SsvepBci::staticMetaObject = {
    { &SCSHAREDLIB::IAlgorithm::staticMetaObject, qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBci.data,
      qt_meta_data_SSVEPBCIPLUGIN__SsvepBci,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SSVEPBCIPLUGIN::SsvepBci::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SSVEPBCIPLUGIN::SsvepBci::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBci.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "scsharedlib/1.0"))
        return static_cast< SCSHAREDLIB::IAlgorithm*>(this);
    return SCSHAREDLIB::IAlgorithm::qt_metacast(_clname);
}

int SSVEPBCIPLUGIN::SsvepBci::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SCSHAREDLIB::IAlgorithm::qt_metacall(_c, _id, _a);
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
void SSVEPBCIPLUGIN::SsvepBci::SSVEPprob(MyQList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SSVEPBCIPLUGIN::SsvepBci::classificationResult(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SSVEPBCIPLUGIN::SsvepBci::getFrequencyLabels(MyQList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 's',  'c',  's',  'h',  'a',  'r', 
    'e',  'd',  'l',  'i',  'b',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x9b, 0x07, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x08, 0x00, 'S',  's', 
    'v',  'e',  'p',  'B',  'c',  'i',  0x00, 0x00,
    0x1a, '@',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x0e, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    ',',  0x00, 0x00, 0x00, 'X',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0x94, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x80, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    0x0f, 0x00, 's',  'c',  's',  'h',  'a',  'r', 
    'e',  'd',  'l',  'i',  'b',  '/',  '1',  '.', 
    '0',  0x00, 0x00, 0x00, 0x95, 0x07, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x08, 0x00, 'S',  's',  'v',  'e',  'p',  'B', 
    'c',  'i',  0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, '@',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace SSVEPBCIPLUGIN;
QT_MOC_EXPORT_PLUGIN(SSVEPBCIPLUGIN::SsvepBci, SsvepBci)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
