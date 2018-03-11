/****************************************************************************
** Meta object code from reading C++ file 'babymeg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../babymeg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'babymeg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BABYMEGPLUGIN__BabyMEG_t {
    QByteArrayData data[10];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BABYMEGPLUGIN__BabyMEG_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BABYMEGPLUGIN__BabyMEG_t qt_meta_stringdata_BABYMEGPLUGIN__BabyMEG = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BABYMEGPLUGIN::BabyMEG"
QT_MOC_LITERAL(1, 23, 20), // "cmdConnectionChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 9), // "p_bStatus"
QT_MOC_LITERAL(4, 55, 17), // "fiffInfoAvailable"
QT_MOC_LITERAL(5, 73, 18), // "DataToSquidCtrlGUI"
QT_MOC_LITERAL(6, 92, 15), // "Eigen::MatrixXf"
QT_MOC_LITERAL(7, 108, 3), // "tmp"
QT_MOC_LITERAL(8, 112, 25), // "SendCMDDataToSQUIDControl"
QT_MOC_LITERAL(9, 138, 4) // "DATA"

    },
    "BABYMEGPLUGIN::BabyMEG\0cmdConnectionChanged\0"
    "\0p_bStatus\0fiffInfoAvailable\0"
    "DataToSquidCtrlGUI\0Eigen::MatrixXf\0"
    "tmp\0SendCMDDataToSQUIDControl\0DATA"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BABYMEGPLUGIN__BabyMEG[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,
       5,    1,   38,    2, 0x06 /* Public */,
       8,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QByteArray,    9,

       0        // eod
};

void BABYMEGPLUGIN::BabyMEG::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BabyMEG *_t = static_cast<BabyMEG *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cmdConnectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fiffInfoAvailable(); break;
        case 2: _t->DataToSquidCtrlGUI((*reinterpret_cast< Eigen::MatrixXf(*)>(_a[1]))); break;
        case 3: _t->SendCMDDataToSQUIDControl((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BabyMEG::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BabyMEG::cmdConnectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BabyMEG::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BabyMEG::fiffInfoAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BabyMEG::*_t)(Eigen::MatrixXf );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BabyMEG::DataToSquidCtrlGUI)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BabyMEG::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BabyMEG::SendCMDDataToSQUIDControl)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject BABYMEGPLUGIN::BabyMEG::staticMetaObject = {
    { &SCSHAREDLIB::ISensor::staticMetaObject, qt_meta_stringdata_BABYMEGPLUGIN__BabyMEG.data,
      qt_meta_data_BABYMEGPLUGIN__BabyMEG,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BABYMEGPLUGIN::BabyMEG::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BABYMEGPLUGIN::BabyMEG::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BABYMEGPLUGIN__BabyMEG.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "scsharedlib/1.0"))
        return static_cast< SCSHAREDLIB::ISensor*>(this);
    return SCSHAREDLIB::ISensor::qt_metacast(_clname);
}

int BABYMEGPLUGIN::BabyMEG::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SCSHAREDLIB::ISensor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BABYMEGPLUGIN::BabyMEG::cmdConnectionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BABYMEGPLUGIN::BabyMEG::fiffInfoAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BABYMEGPLUGIN::BabyMEG::DataToSquidCtrlGUI(Eigen::MatrixXf _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BABYMEGPLUGIN::BabyMEG::SendCMDDataToSQUIDControl(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
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
    'a',  'm',  'e',  0x00, 0x07, 0x00, 'B',  'a', 
    'b',  'y',  'M',  'E',  'G',  0x00, 0x00, 0x00,
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
    0x07, 0x00, 'B',  'a',  'b',  'y',  'M',  'E', 
    'G',  0x00, 0x00, 0x00, '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x1a, '@',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, ',',  0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, 'd',  0x00, 0x00, 0x00,
    'p',  0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

using namespace BABYMEGPLUGIN;
QT_MOC_EXPORT_PLUGIN(BABYMEGPLUGIN::BabyMEG, BabyMEG)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
