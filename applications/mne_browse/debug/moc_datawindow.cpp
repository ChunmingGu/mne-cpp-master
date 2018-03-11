/****************************************************************************
** Meta object code from reading C++ file 'datawindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Windows/datawindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datawindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MNEBROWSE__DataWindow_t {
    QByteArrayData data[9];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MNEBROWSE__DataWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MNEBROWSE__DataWindow_t qt_meta_stringdata_MNEBROWSE__DataWindow = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MNEBROWSE::DataWindow"
QT_MOC_LITERAL(1, 22, 13), // "scaleChannels"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 26), // "customContextMenuRequested"
QT_MOC_LITERAL(4, 64, 3), // "pos"
QT_MOC_LITERAL(5, 68, 20), // "setRangeSampleLabels"
QT_MOC_LITERAL(6, 89, 20), // "setMarkerSampleLabel"
QT_MOC_LITERAL(7, 110, 20), // "updateMarkerPosition"
QT_MOC_LITERAL(8, 131, 35) // "highlightChannelsInSelectionM..."

    },
    "MNEBROWSE::DataWindow\0scaleChannels\0"
    "\0customContextMenuRequested\0pos\0"
    "setRangeSampleLabels\0setMarkerSampleLabel\0"
    "updateMarkerPosition\0"
    "highlightChannelsInSelectionManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MNEBROWSE__DataWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   47,    2, 0x09 /* Protected */,
       5,    0,   50,    2, 0x09 /* Protected */,
       6,    0,   51,    2, 0x09 /* Protected */,
       7,    0,   52,    2, 0x09 /* Protected */,
       8,    0,   53,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MNEBROWSE::DataWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataWindow *_t = static_cast<DataWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scaleChannels((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 2: _t->setRangeSampleLabels(); break;
        case 3: _t->setMarkerSampleLabel(); break;
        case 4: _t->updateMarkerPosition(); break;
        case 5: _t->highlightChannelsInSelectionManager(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DataWindow::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataWindow::scaleChannels)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MNEBROWSE::DataWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MNEBROWSE__DataWindow.data,
      qt_meta_data_MNEBROWSE__DataWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MNEBROWSE::DataWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MNEBROWSE::DataWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MNEBROWSE__DataWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MNEBROWSE::DataWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MNEBROWSE::DataWindow::scaleChannels(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
