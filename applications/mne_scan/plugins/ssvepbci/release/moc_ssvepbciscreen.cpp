/****************************************************************************
** Meta object code from reading C++ file 'ssvepbciscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ssvepbciscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ssvepbciscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBciScreen_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBciScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBciScreen_t qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBciScreen = {
    {
QT_MOC_LITERAL(0, 0, 30), // "SSVEPBCIPLUGIN::SsvepBciScreen"
QT_MOC_LITERAL(1, 31, 15), // "setClassResults"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 11), // "classResult"
QT_MOC_LITERAL(4, 60, 19), // "updateFrequencyList"
QT_MOC_LITERAL(5, 80, 7), // "MyQList"
QT_MOC_LITERAL(6, 88, 8), // "freqList"
QT_MOC_LITERAL(7, 97, 17), // "useScreenKeyboard"
QT_MOC_LITERAL(8, 115, 11), // "useKeyboard"
QT_MOC_LITERAL(9, 127, 11) // "clearScreen"

    },
    "SSVEPBCIPLUGIN::SsvepBciScreen\0"
    "setClassResults\0\0classResult\0"
    "updateFrequencyList\0MyQList\0freqList\0"
    "useScreenKeyboard\0useKeyboard\0clearScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SSVEPBCIPLUGIN__SsvepBciScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       9,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void SSVEPBCIPLUGIN::SsvepBciScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SsvepBciScreen *_t = static_cast<SsvepBciScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setClassResults((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->updateFrequencyList((*reinterpret_cast< MyQList(*)>(_a[1]))); break;
        case 2: _t->useScreenKeyboard((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->clearScreen(); break;
        default: ;
        }
    }
}

const QMetaObject SSVEPBCIPLUGIN::SsvepBciScreen::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBciScreen.data,
      qt_meta_data_SSVEPBCIPLUGIN__SsvepBciScreen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SSVEPBCIPLUGIN::SsvepBciScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SSVEPBCIPLUGIN::SsvepBciScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SSVEPBCIPLUGIN__SsvepBciScreen.stringdata0))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int SSVEPBCIPLUGIN::SsvepBciScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
