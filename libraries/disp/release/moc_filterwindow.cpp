/****************************************************************************
** Meta object code from reading C++ file 'filterwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../filterwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
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
struct qt_meta_stringdata_DISPLIB__FilterWindow_t {
    QByteArrayData data[28];
    char stringdata0[465];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DISPLIB__FilterWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DISPLIB__FilterWindow_t qt_meta_stringdata_DISPLIB__FilterWindow = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DISPLIB::FilterWindow"
QT_MOC_LITERAL(1, 22, 13), // "filterChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "QList<UTILSLIB::FilterData>"
QT_MOC_LITERAL(4, 65, 12), // "activeFilter"
QT_MOC_LITERAL(5, 78, 11), // "applyFilter"
QT_MOC_LITERAL(6, 90, 11), // "channelType"
QT_MOC_LITERAL(7, 102, 15), // "filterActivated"
QT_MOC_LITERAL(8, 118, 5), // "state"
QT_MOC_LITERAL(9, 124, 29), // "activationCheckBoxListChanged"
QT_MOC_LITERAL(10, 154, 17), // "QList<QCheckBox*>"
QT_MOC_LITERAL(11, 172, 4), // "list"
QT_MOC_LITERAL(12, 177, 30), // "updateDefaultFiltersActivation"
QT_MOC_LITERAL(13, 208, 7), // "topLeft"
QT_MOC_LITERAL(14, 216, 11), // "bottomRight"
QT_MOC_LITERAL(15, 228, 12), // "QVector<int>"
QT_MOC_LITERAL(16, 241, 5), // "roles"
QT_MOC_LITERAL(17, 247, 20), // "changeStateSpinBoxes"
QT_MOC_LITERAL(18, 268, 12), // "currentIndex"
QT_MOC_LITERAL(19, 281, 23), // "filterParametersChanged"
QT_MOC_LITERAL(20, 305, 26), // "onSpinBoxFilterChannelType"
QT_MOC_LITERAL(21, 332, 21), // "onBtnExportFilterPlot"
QT_MOC_LITERAL(22, 354, 29), // "onBtnExportFilterCoefficients"
QT_MOC_LITERAL(23, 384, 15), // "onBtnLoadFilter"
QT_MOC_LITERAL(24, 400, 24), // "onChkBoxFilterActivation"
QT_MOC_LITERAL(25, 425, 22), // "filterSelectionChanged"
QT_MOC_LITERAL(26, 448, 7), // "current"
QT_MOC_LITERAL(27, 456, 8) // "previous"

    },
    "DISPLIB::FilterWindow\0filterChanged\0"
    "\0QList<UTILSLIB::FilterData>\0activeFilter\0"
    "applyFilter\0channelType\0filterActivated\0"
    "state\0activationCheckBoxListChanged\0"
    "QList<QCheckBox*>\0list\0"
    "updateDefaultFiltersActivation\0topLeft\0"
    "bottomRight\0QVector<int>\0roles\0"
    "changeStateSpinBoxes\0currentIndex\0"
    "filterParametersChanged\0"
    "onSpinBoxFilterChannelType\0"
    "onBtnExportFilterPlot\0"
    "onBtnExportFilterCoefficients\0"
    "onBtnLoadFilter\0onChkBoxFilterActivation\0"
    "filterSelectionChanged\0current\0previous"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DISPLIB__FilterWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       7,    1,   85,    2, 0x06 /* Public */,
       9,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    3,   91,    2, 0x09 /* Protected */,
      17,    1,   98,    2, 0x09 /* Protected */,
      19,    0,  101,    2, 0x09 /* Protected */,
      20,    1,  102,    2, 0x09 /* Protected */,
      21,    0,  105,    2, 0x09 /* Protected */,
      22,    0,  106,    2, 0x09 /* Protected */,
      23,    0,  107,    2, 0x09 /* Protected */,
      24,    1,  108,    2, 0x09 /* Protected */,
      25,    2,  111,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 15,   13,   14,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   26,   27,

       0        // eod
};

void DISPLIB::FilterWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FilterWindow *_t = static_cast<FilterWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filterChanged((*reinterpret_cast< QList<UTILSLIB::FilterData>(*)>(_a[1]))); break;
        case 1: _t->applyFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->filterActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->activationCheckBoxListChanged((*reinterpret_cast< QList<QCheckBox*>(*)>(_a[1]))); break;
        case 4: _t->updateDefaultFiltersActivation((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 5: _t->changeStateSpinBoxes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->filterParametersChanged(); break;
        case 7: _t->onSpinBoxFilterChannelType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->onBtnExportFilterPlot(); break;
        case 9: _t->onBtnExportFilterCoefficients(); break;
        case 10: _t->onBtnLoadFilter(); break;
        case 11: _t->onChkBoxFilterActivation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->filterSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QCheckBox*> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FilterWindow::*_t)(QList<UTILSLIB::FilterData> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWindow::filterChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FilterWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWindow::applyFilter)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FilterWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWindow::filterActivated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FilterWindow::*_t)(QList<QCheckBox*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterWindow::activationCheckBoxListChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject DISPLIB::FilterWindow::staticMetaObject = {
    { &RoundedEdgesWidget::staticMetaObject, qt_meta_stringdata_DISPLIB__FilterWindow.data,
      qt_meta_data_DISPLIB__FilterWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DISPLIB::FilterWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DISPLIB::FilterWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DISPLIB__FilterWindow.stringdata0))
        return static_cast<void*>(this);
    return RoundedEdgesWidget::qt_metacast(_clname);
}

int DISPLIB::FilterWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RoundedEdgesWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DISPLIB::FilterWindow::filterChanged(QList<UTILSLIB::FilterData> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DISPLIB::FilterWindow::applyFilter(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DISPLIB::FilterWindow::filterActivated(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DISPLIB::FilterWindow::activationCheckBoxListChanged(QList<QCheckBox*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
