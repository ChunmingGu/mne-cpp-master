/****************************************************************************
** Meta object code from reading C++ file 'invmnecontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FormFiles/invmnecontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'invmnecontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InvMNEControl_t {
    QByteArrayData data[11];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InvMNEControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InvMNEControl_t qt_meta_stringdata_InvMNEControl = {
    {
QT_MOC_LITERAL(0, 0, 13), // "InvMNEControl"
QT_MOC_LITERAL(1, 14, 16), // "calculate_signal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 36), // "on_m_qLineEditEvoked_editingF..."
QT_MOC_LITERAL(4, 69, 43), // "on_m_qComboBoxEventType_curre..."
QT_MOC_LITERAL(5, 113, 4), // "arg1"
QT_MOC_LITERAL(6, 118, 33), // "on_m_qLineEditInv_editingFini..."
QT_MOC_LITERAL(7, 152, 29), // "on_doubleSpinBox_valueChanged"
QT_MOC_LITERAL(8, 182, 40), // "on_m_qComboBoxMethod_currentI..."
QT_MOC_LITERAL(9, 223, 33), // "on_m_qLineEditSTC_editingFini..."
QT_MOC_LITERAL(10, 257, 34) // "on_m_qPushButtonCalculate_rel..."

    },
    "InvMNEControl\0calculate_signal\0\0"
    "on_m_qLineEditEvoked_editingFinished\0"
    "on_m_qComboBoxEventType_currentIndexChanged\0"
    "arg1\0on_m_qLineEditInv_editingFinished\0"
    "on_doubleSpinBox_valueChanged\0"
    "on_m_qComboBoxMethod_currentIndexChanged\0"
    "on_m_qLineEditSTC_editingFinished\0"
    "on_m_qPushButtonCalculate_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InvMNEControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       8,    1,   63,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InvMNEControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InvMNEControl *_t = static_cast<InvMNEControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calculate_signal(); break;
        case 1: _t->on_m_qLineEditEvoked_editingFinished(); break;
        case 2: _t->on_m_qComboBoxEventType_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_m_qLineEditInv_editingFinished(); break;
        case 4: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_m_qComboBoxMethod_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_m_qLineEditSTC_editingFinished(); break;
        case 7: _t->on_m_qPushButtonCalculate_released(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (InvMNEControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InvMNEControl::calculate_signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject InvMNEControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InvMNEControl.data,
      qt_meta_data_InvMNEControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InvMNEControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InvMNEControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InvMNEControl.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InvMNEControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void InvMNEControl::calculate_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
