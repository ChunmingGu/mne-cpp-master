/****************************************************************************
** Meta object code from reading C++ file 'screenkeyboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../screenkeyboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screenkeyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SSVEPBCIPLUGIN__ScreenKeyboard_t {
    QByteArrayData data[17];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SSVEPBCIPLUGIN__ScreenKeyboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SSVEPBCIPLUGIN__ScreenKeyboard_t qt_meta_stringdata_SSVEPBCIPLUGIN__ScreenKeyboard = {
    {
QT_MOC_LITERAL(0, 0, 30), // "SSVEPBCIPLUGIN::ScreenKeyboard"
QT_MOC_LITERAL(1, 31, 9), // "getLetter"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 6), // "letter"
QT_MOC_LITERAL(4, 49, 16), // "isCorrectCommand"
QT_MOC_LITERAL(5, 66, 14), // "correctCommand"
QT_MOC_LITERAL(6, 81, 16), // "spellingFinished"
QT_MOC_LITERAL(7, 98, 15), // "updateClassList"
QT_MOC_LITERAL(8, 114, 7), // "MyQList"
QT_MOC_LITERAL(9, 122, 9), // "classList"
QT_MOC_LITERAL(10, 132, 13), // "updateCommand"
QT_MOC_LITERAL(11, 146, 5), // "value"
QT_MOC_LITERAL(12, 152, 9), // "setPhrase"
QT_MOC_LITERAL(13, 162, 6), // "phrase"
QT_MOC_LITERAL(14, 169, 18), // "initScreenKeyboard"
QT_MOC_LITERAL(15, 188, 24), // "initSpellAccuracyFeature"
QT_MOC_LITERAL(16, 213, 24) // "stopSpellAccuracyFeature"

    },
    "SSVEPBCIPLUGIN::ScreenKeyboard\0getLetter\0"
    "\0letter\0isCorrectCommand\0correctCommand\0"
    "spellingFinished\0updateClassList\0"
    "MyQList\0classList\0updateCommand\0value\0"
    "setPhrase\0phrase\0initScreenKeyboard\0"
    "initSpellAccuracyFeature\0"
    "stopSpellAccuracyFeature"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SSVEPBCIPLUGIN__ScreenKeyboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   66,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      14,    0,   75,    2, 0x0a /* Public */,
      15,    0,   76,    2, 0x0a /* Public */,
      16,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SSVEPBCIPLUGIN::ScreenKeyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScreenKeyboard *_t = static_cast<ScreenKeyboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getLetter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->isCorrectCommand((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->spellingFinished(); break;
        case 3: _t->updateClassList((*reinterpret_cast< MyQList(*)>(_a[1]))); break;
        case 4: _t->updateCommand((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setPhrase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->initScreenKeyboard(); break;
        case 7: _t->initSpellAccuracyFeature(); break;
        case 8: _t->stopSpellAccuracyFeature(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ScreenKeyboard::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenKeyboard::getLetter)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ScreenKeyboard::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenKeyboard::isCorrectCommand)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ScreenKeyboard::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreenKeyboard::spellingFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SSVEPBCIPLUGIN::ScreenKeyboard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SSVEPBCIPLUGIN__ScreenKeyboard.data,
      qt_meta_data_SSVEPBCIPLUGIN__ScreenKeyboard,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SSVEPBCIPLUGIN::ScreenKeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SSVEPBCIPLUGIN::ScreenKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SSVEPBCIPLUGIN__ScreenKeyboard.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SSVEPBCIPLUGIN::ScreenKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void SSVEPBCIPLUGIN::ScreenKeyboard::getLetter(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SSVEPBCIPLUGIN::ScreenKeyboard::isCorrectCommand(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SSVEPBCIPLUGIN::ScreenKeyboard::spellingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
