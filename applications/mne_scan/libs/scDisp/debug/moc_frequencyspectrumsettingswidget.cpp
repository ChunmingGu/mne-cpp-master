/****************************************************************************
** Meta object code from reading C++ file 'frequencyspectrumsettingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../helpers/frequencyspectrumsettingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frequencyspectrumsettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SCDISPLIB__FrequencySpectrumSettingsWidget_t {
    QByteArrayData data[3];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SCDISPLIB__FrequencySpectrumSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SCDISPLIB__FrequencySpectrumSettingsWidget_t qt_meta_stringdata_SCDISPLIB__FrequencySpectrumSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 42), // "SCDISPLIB::FrequencySpectrumS..."
QT_MOC_LITERAL(1, 43, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 59, 0) // ""

    },
    "SCDISPLIB::FrequencySpectrumSettingsWidget\0"
    "settingsChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SCDISPLIB__FrequencySpectrumSettingsWidget[] = {

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

void SCDISPLIB::FrequencySpectrumSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FrequencySpectrumSettingsWidget *_t = static_cast<FrequencySpectrumSettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FrequencySpectrumSettingsWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FrequencySpectrumSettingsWidget::settingsChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SCDISPLIB::FrequencySpectrumSettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SCDISPLIB__FrequencySpectrumSettingsWidget.data,
      qt_meta_data_SCDISPLIB__FrequencySpectrumSettingsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SCDISPLIB::FrequencySpectrumSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SCDISPLIB::FrequencySpectrumSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SCDISPLIB__FrequencySpectrumSettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SCDISPLIB::FrequencySpectrumSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void SCDISPLIB::FrequencySpectrumSettingsWidget::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
