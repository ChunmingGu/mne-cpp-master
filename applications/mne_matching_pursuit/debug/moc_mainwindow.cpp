/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[86];
    char stringdata0[1613];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "send_input"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "MatrixXd"
QT_MOC_LITERAL(4, 32, 11), // "send_signal"
QT_MOC_LITERAL(5, 44, 19), // "send_max_iterations"
QT_MOC_LITERAL(6, 64, 12), // "send_epsilon"
QT_MOC_LITERAL(7, 77, 9), // "fix_phase"
QT_MOC_LITERAL(8, 87, 5), // "boost"
QT_MOC_LITERAL(9, 93, 10), // "simplex_it"
QT_MOC_LITERAL(10, 104, 18), // "simplex_reflection"
QT_MOC_LITERAL(11, 123, 17), // "simplex_expansion"
QT_MOC_LITERAL(12, 141, 19), // "simplex_contraction"
QT_MOC_LITERAL(13, 161, 24), // "simplex_full_contraction"
QT_MOC_LITERAL(14, 186, 16), // "trial_separation"
QT_MOC_LITERAL(15, 203, 19), // "send_input_fix_dict"
QT_MOC_LITERAL(16, 223, 4), // "path"
QT_MOC_LITERAL(17, 228, 5), // "delta"
QT_MOC_LITERAL(18, 234, 7), // "to_save"
QT_MOC_LITERAL(19, 242, 11), // "source_path"
QT_MOC_LITERAL(20, 254, 9), // "save_path"
QT_MOC_LITERAL(21, 264, 10), // "fiff_int_t"
QT_MOC_LITERAL(22, 275, 12), // "start_change"
QT_MOC_LITERAL(23, 288, 10), // "end_change"
QT_MOC_LITERAL(24, 299, 7), // "changes"
QT_MOC_LITERAL(25, 307, 15), // "original_signal"
QT_MOC_LITERAL(26, 323, 10), // "select_map"
QT_MOC_LITERAL(27, 334, 18), // "select_channel_map"
QT_MOC_LITERAL(28, 353, 11), // "RowVectorXi"
QT_MOC_LITERAL(29, 365, 5), // "picks"
QT_MOC_LITERAL(30, 371, 16), // "source_file_type"
QT_MOC_LITERAL(31, 388, 9), // "file_type"
QT_MOC_LITERAL(32, 398, 16), // "kill_save_thread"
QT_MOC_LITERAL(33, 415, 19), // "on_btt_Calc_clicked"
QT_MOC_LITERAL(34, 435, 35), // "on_actionW_rterbucheditor_tri..."
QT_MOC_LITERAL(35, 471, 35), // "on_actionAtomformeleditor_tri..."
QT_MOC_LITERAL(36, 507, 47), // "on_actionErweiterter_W_rterbu..."
QT_MOC_LITERAL(37, 555, 22), // "on_actionNeu_triggered"
QT_MOC_LITERAL(38, 578, 25), // "on_btt_OpenSignal_clicked"
QT_MOC_LITERAL(39, 604, 20), // "cb_selection_changed"
QT_MOC_LITERAL(40, 625, 21), // "tbv_selection_changed"
QT_MOC_LITERAL(41, 647, 7), // "topLeft"
QT_MOC_LITERAL(42, 655, 11), // "bottomRight"
QT_MOC_LITERAL(43, 667, 14), // "recieve_result"
QT_MOC_LITERAL(44, 682, 17), // "current_iteration"
QT_MOC_LITERAL(45, 700, 14), // "max_iterations"
QT_MOC_LITERAL(46, 715, 14), // "current_energy"
QT_MOC_LITERAL(47, 730, 10), // "max_energy"
QT_MOC_LITERAL(48, 741, 8), // "residuum"
QT_MOC_LITERAL(49, 750, 18), // "adaptive_atom_list"
QT_MOC_LITERAL(50, 769, 22), // "adaptive_atom_res_list"
QT_MOC_LITERAL(51, 792, 18), // "fix_dict_atom_list"
QT_MOC_LITERAL(52, 811, 22), // "fix_dict_atom_res_list"
QT_MOC_LITERAL(53, 834, 16), // "recieve_warnings"
QT_MOC_LITERAL(54, 851, 14), // "warning_number"
QT_MOC_LITERAL(55, 866, 20), // "calc_thread_finished"
QT_MOC_LITERAL(56, 887, 46), // "on_actionCreate_treebased_dic..."
QT_MOC_LITERAL(57, 934, 27), // "on_dsb_from_editingFinished"
QT_MOC_LITERAL(58, 962, 25), // "on_dsb_to_editingFinished"
QT_MOC_LITERAL(59, 988, 22), // "on_dsb_to_valueChanged"
QT_MOC_LITERAL(60, 1011, 4), // "arg1"
QT_MOC_LITERAL(61, 1016, 24), // "on_dsb_from_valueChanged"
QT_MOC_LITERAL(62, 1041, 34), // "on_sb_sample_count_editingFin..."
QT_MOC_LITERAL(63, 1076, 31), // "on_sb_sample_count_valueChanged"
QT_MOC_LITERAL(64, 1108, 24), // "on_cb_all_select_clicked"
QT_MOC_LITERAL(65, 1133, 11), // "on_time_out"
QT_MOC_LITERAL(66, 1145, 27), // "on_actionSettings_triggered"
QT_MOC_LITERAL(67, 1173, 14), // "on_dicts_saved"
QT_MOC_LITERAL(68, 1188, 33), // "on_actionSpeicher_unter_trigg..."
QT_MOC_LITERAL(69, 1222, 27), // "on_actionSpeicher_triggered"
QT_MOC_LITERAL(70, 1250, 25), // "on_actionExport_triggered"
QT_MOC_LITERAL(71, 1276, 34), // "on_dsb_sample_rate_editingFin..."
QT_MOC_LITERAL(72, 1311, 31), // "on_cb_Dicts_currentIndexChanged"
QT_MOC_LITERAL(73, 1343, 22), // "on_rb_adativMp_clicked"
QT_MOC_LITERAL(74, 1366, 19), // "activate_info_label"
QT_MOC_LITERAL(75, 1386, 21), // "recieve_save_progress"
QT_MOC_LITERAL(76, 1408, 16), // "current_progress"
QT_MOC_LITERAL(77, 1425, 8), // "finished"
QT_MOC_LITERAL(78, 1434, 26), // "on_dsb_energy_valueChanged"
QT_MOC_LITERAL(79, 1461, 26), // "on_actionBeenden_triggered"
QT_MOC_LITERAL(80, 1488, 23), // "on_mouse_button_release"
QT_MOC_LITERAL(81, 1512, 27), // "on_rb_OwnDictionary_clicked"
QT_MOC_LITERAL(82, 1540, 20), // "on_extend_tab_button"
QT_MOC_LITERAL(83, 1561, 19), // "on_close_tab_button"
QT_MOC_LITERAL(84, 1581, 5), // "index"
QT_MOC_LITERAL(85, 1587, 25) // "on_actionTFplot_triggered"

    },
    "MainWindow\0send_input\0\0MatrixXd\0"
    "send_signal\0send_max_iterations\0"
    "send_epsilon\0fix_phase\0boost\0simplex_it\0"
    "simplex_reflection\0simplex_expansion\0"
    "simplex_contraction\0simplex_full_contraction\0"
    "trial_separation\0send_input_fix_dict\0"
    "path\0delta\0to_save\0source_path\0save_path\0"
    "fiff_int_t\0start_change\0end_change\0"
    "changes\0original_signal\0select_map\0"
    "select_channel_map\0RowVectorXi\0picks\0"
    "source_file_type\0file_type\0kill_save_thread\0"
    "on_btt_Calc_clicked\0"
    "on_actionW_rterbucheditor_triggered\0"
    "on_actionAtomformeleditor_triggered\0"
    "on_actionErweiterter_W_rterbucheditor_triggered\0"
    "on_actionNeu_triggered\0on_btt_OpenSignal_clicked\0"
    "cb_selection_changed\0tbv_selection_changed\0"
    "topLeft\0bottomRight\0recieve_result\0"
    "current_iteration\0max_iterations\0"
    "current_energy\0max_energy\0residuum\0"
    "adaptive_atom_list\0adaptive_atom_res_list\0"
    "fix_dict_atom_list\0fix_dict_atom_res_list\0"
    "recieve_warnings\0warning_number\0"
    "calc_thread_finished\0"
    "on_actionCreate_treebased_dictionary_triggered\0"
    "on_dsb_from_editingFinished\0"
    "on_dsb_to_editingFinished\0"
    "on_dsb_to_valueChanged\0arg1\0"
    "on_dsb_from_valueChanged\0"
    "on_sb_sample_count_editingFinished\0"
    "on_sb_sample_count_valueChanged\0"
    "on_cb_all_select_clicked\0on_time_out\0"
    "on_actionSettings_triggered\0on_dicts_saved\0"
    "on_actionSpeicher_unter_triggered\0"
    "on_actionSpeicher_triggered\0"
    "on_actionExport_triggered\0"
    "on_dsb_sample_rate_editingFinished\0"
    "on_cb_Dicts_currentIndexChanged\0"
    "on_rb_adativMp_clicked\0activate_info_label\0"
    "recieve_save_progress\0current_progress\0"
    "finished\0on_dsb_energy_valueChanged\0"
    "on_actionBeenden_triggered\0"
    "on_mouse_button_release\0"
    "on_rb_OwnDictionary_clicked\0"
    "on_extend_tab_button\0on_close_tab_button\0"
    "index\0on_actionTFplot_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   11,  219,    2, 0x06 /* Public */,
      15,    6,  242,    2, 0x06 /* Public */,
      18,    9,  255,    2, 0x06 /* Public */,
      32,    0,  274,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    0,  275,    2, 0x08 /* Private */,
      34,    0,  276,    2, 0x08 /* Private */,
      35,    0,  277,    2, 0x08 /* Private */,
      36,    0,  278,    2, 0x08 /* Private */,
      37,    0,  279,    2, 0x08 /* Private */,
      38,    0,  280,    2, 0x08 /* Private */,
      39,    2,  281,    2, 0x08 /* Private */,
      40,    2,  286,    2, 0x08 /* Private */,
      43,    7,  291,    2, 0x08 /* Private */,
      53,    1,  306,    2, 0x08 /* Private */,
      55,    0,  309,    2, 0x08 /* Private */,
      56,    0,  310,    2, 0x08 /* Private */,
      57,    0,  311,    2, 0x08 /* Private */,
      58,    0,  312,    2, 0x08 /* Private */,
      59,    1,  313,    2, 0x08 /* Private */,
      61,    1,  316,    2, 0x08 /* Private */,
      62,    0,  319,    2, 0x08 /* Private */,
      63,    1,  320,    2, 0x08 /* Private */,
      64,    0,  323,    2, 0x08 /* Private */,
      65,    0,  324,    2, 0x08 /* Private */,
      66,    0,  325,    2, 0x08 /* Private */,
      67,    0,  326,    2, 0x08 /* Private */,
      68,    0,  327,    2, 0x08 /* Private */,
      69,    0,  328,    2, 0x08 /* Private */,
      70,    0,  329,    2, 0x08 /* Private */,
      71,    0,  330,    2, 0x08 /* Private */,
      72,    1,  331,    2, 0x08 /* Private */,
      73,    0,  334,    2, 0x08 /* Private */,
      74,    0,  335,    2, 0x08 /* Private */,
      75,    2,  336,    2, 0x08 /* Private */,
      78,    1,  341,    2, 0x08 /* Private */,
      79,    0,  344,    2, 0x08 /* Private */,
      80,    0,  345,    2, 0x08 /* Private */,
      81,    0,  346,    2, 0x08 /* Private */,
      82,    0,  347,    2, 0x08 /* Private */,
      83,    1,  348,    2, 0x08 /* Private */,
      85,    0,  351,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QReal, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::Bool,    4,    5,    6,    7,    8,    9,   10,   11,   12,   13,   14,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QReal, QMetaType::Int, QMetaType::QString, QMetaType::QReal,    4,    5,    6,    8,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 21, 0x80000000 | 21, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 26, 0x80000000 | 28, 0x80000000 | 30,   19,   20,   22,   23,   24,   25,   27,   29,   31,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   41,   42,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QReal, QMetaType::QReal, 0x80000000 | 3, 0x80000000 | 49, 0x80000000 | 51,   44,   45,   46,   47,   48,   50,   52,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   60,
    QMetaType::Void, QMetaType::Double,   60,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   76,   77,
    QMetaType::Void, QMetaType::Double,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   84,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send_input((*reinterpret_cast< MatrixXd(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qreal(*)>(_a[7])),(*reinterpret_cast< qreal(*)>(_a[8])),(*reinterpret_cast< qreal(*)>(_a[9])),(*reinterpret_cast< qreal(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11]))); break;
        case 1: _t->send_input_fix_dict((*reinterpret_cast< MatrixXd(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< qreal(*)>(_a[6]))); break;
        case 2: _t->to_save((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< fiff_int_t(*)>(_a[3])),(*reinterpret_cast< fiff_int_t(*)>(_a[4])),(*reinterpret_cast< MatrixXd(*)>(_a[5])),(*reinterpret_cast< MatrixXd(*)>(_a[6])),(*reinterpret_cast< select_map(*)>(_a[7])),(*reinterpret_cast< RowVectorXi(*)>(_a[8])),(*reinterpret_cast< source_file_type(*)>(_a[9]))); break;
        case 3: _t->kill_save_thread(); break;
        case 4: _t->on_btt_Calc_clicked(); break;
        case 5: _t->on_actionW_rterbucheditor_triggered(); break;
        case 6: _t->on_actionAtomformeleditor_triggered(); break;
        case 7: _t->on_actionErweiterter_W_rterbucheditor_triggered(); break;
        case 8: _t->on_actionNeu_triggered(); break;
        case 9: _t->on_btt_OpenSignal_clicked(); break;
        case 10: _t->cb_selection_changed((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->tbv_selection_changed((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 12: _t->recieve_result((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< MatrixXd(*)>(_a[5])),(*reinterpret_cast< adaptive_atom_list(*)>(_a[6])),(*reinterpret_cast< fix_dict_atom_list(*)>(_a[7]))); break;
        case 13: _t->recieve_warnings((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 14: _t->calc_thread_finished(); break;
        case 15: _t->on_actionCreate_treebased_dictionary_triggered(); break;
        case 16: _t->on_dsb_from_editingFinished(); break;
        case 17: _t->on_dsb_to_editingFinished(); break;
        case 18: _t->on_dsb_to_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->on_dsb_from_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->on_sb_sample_count_editingFinished(); break;
        case 21: _t->on_sb_sample_count_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_cb_all_select_clicked(); break;
        case 23: _t->on_time_out(); break;
        case 24: _t->on_actionSettings_triggered(); break;
        case 25: _t->on_dicts_saved(); break;
        case 26: _t->on_actionSpeicher_unter_triggered(); break;
        case 27: _t->on_actionSpeicher_triggered(); break;
        case 28: _t->on_actionExport_triggered(); break;
        case 29: _t->on_dsb_sample_rate_editingFinished(); break;
        case 30: _t->on_cb_Dicts_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->on_rb_adativMp_clicked(); break;
        case 32: _t->activate_info_label(); break;
        case 33: _t->recieve_save_progress((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 34: _t->on_dsb_energy_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 35: _t->on_actionBeenden_triggered(); break;
        case 36: _t->on_mouse_button_release(); break;
        case 37: _t->on_rb_OwnDictionary_clicked(); break;
        case 38: _t->on_extend_tab_button(); break;
        case 39: _t->on_close_tab_button((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_actionTFplot_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(MatrixXd , qint32 , qreal , bool , qint32 , qint32 , qreal , qreal , qreal , qreal , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::send_input)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(MatrixXd , qint32 , qreal , qint32 , QString , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::send_input_fix_dict)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString , QString , fiff_int_t , fiff_int_t , MatrixXd , MatrixXd , select_map , RowVectorXi , source_file_type );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::to_save)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::kill_save_thread)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ColorMap"))
        return static_cast< ColorMap*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::send_input(MatrixXd _t1, qint32 _t2, qreal _t3, bool _t4, qint32 _t5, qint32 _t6, qreal _t7, qreal _t8, qreal _t9, qreal _t10, bool _t11)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::send_input_fix_dict(MatrixXd _t1, qint32 _t2, qreal _t3, qint32 _t4, QString _t5, qreal _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::to_save(QString _t1, QString _t2, fiff_int_t _t3, fiff_int_t _t4, MatrixXd _t5, MatrixXd _t6, select_map _t7, RowVectorXi _t8, source_file_type _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::kill_save_thread()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_GraphWindow_t {
    QByteArrayData data[3];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphWindow_t qt_meta_stringdata_GraphWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GraphWindow"
QT_MOC_LITERAL(1, 12, 8), // "read_new"
QT_MOC_LITERAL(2, 21, 0) // ""

    },
    "GraphWindow\0read_new\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphWindow[] = {

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

void GraphWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphWindow *_t = static_cast<GraphWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->read_new(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (GraphWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphWindow::read_new)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GraphWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GraphWindow.data,
      qt_meta_data_GraphWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GraphWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GraphWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GraphWindow::read_new()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AtomSumWindow_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AtomSumWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AtomSumWindow_t qt_meta_stringdata_AtomSumWindow = {
    {
QT_MOC_LITERAL(0, 0, 13) // "AtomSumWindow"

    },
    "AtomSumWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AtomSumWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void AtomSumWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject AtomSumWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AtomSumWindow.data,
      qt_meta_data_AtomSumWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AtomSumWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AtomSumWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AtomSumWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int AtomSumWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ResiduumWindow_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResiduumWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResiduumWindow_t qt_meta_stringdata_ResiduumWindow = {
    {
QT_MOC_LITERAL(0, 0, 14) // "ResiduumWindow"

    },
    "ResiduumWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResiduumWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ResiduumWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ResiduumWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ResiduumWindow.data,
      qt_meta_data_ResiduumWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ResiduumWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResiduumWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ResiduumWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ResiduumWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_XAxisWindow_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XAxisWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XAxisWindow_t qt_meta_stringdata_XAxisWindow = {
    {
QT_MOC_LITERAL(0, 0, 11) // "XAxisWindow"

    },
    "XAxisWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XAxisWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void XAxisWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject XAxisWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_XAxisWindow.data,
      qt_meta_data_XAxisWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *XAxisWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XAxisWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XAxisWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int XAxisWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SaveFifFile_t {
    QByteArrayData data[20];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SaveFifFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SaveFifFile_t qt_meta_stringdata_SaveFifFile = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SaveFifFile"
QT_MOC_LITERAL(1, 12, 13), // "save_progress"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "current_progress"
QT_MOC_LITERAL(4, 44, 8), // "finished"
QT_MOC_LITERAL(5, 53, 13), // "save_fif_file"
QT_MOC_LITERAL(6, 67, 11), // "source_path"
QT_MOC_LITERAL(7, 79, 9), // "save_path"
QT_MOC_LITERAL(8, 89, 10), // "fiff_int_t"
QT_MOC_LITERAL(9, 100, 12), // "start_change"
QT_MOC_LITERAL(10, 113, 10), // "end_change"
QT_MOC_LITERAL(11, 124, 8), // "MatrixXd"
QT_MOC_LITERAL(12, 133, 7), // "changes"
QT_MOC_LITERAL(13, 141, 15), // "original_signal"
QT_MOC_LITERAL(14, 157, 10), // "select_map"
QT_MOC_LITERAL(15, 168, 18), // "select_channel_map"
QT_MOC_LITERAL(16, 187, 11), // "RowVectorXi"
QT_MOC_LITERAL(17, 199, 5), // "picks"
QT_MOC_LITERAL(18, 205, 16), // "source_file_type"
QT_MOC_LITERAL(19, 222, 9) // "file_type"

    },
    "SaveFifFile\0save_progress\0\0current_progress\0"
    "finished\0save_fif_file\0source_path\0"
    "save_path\0fiff_int_t\0start_change\0"
    "end_change\0MatrixXd\0changes\0original_signal\0"
    "select_map\0select_channel_map\0RowVectorXi\0"
    "picks\0source_file_type\0file_type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SaveFifFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    9,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 11, 0x80000000 | 11, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 18,    6,    7,    9,   10,   12,   13,   15,   17,   19,

       0        // eod
};

void SaveFifFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SaveFifFile *_t = static_cast<SaveFifFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->save_progress((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 1: _t->save_fif_file((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< fiff_int_t(*)>(_a[3])),(*reinterpret_cast< fiff_int_t(*)>(_a[4])),(*reinterpret_cast< MatrixXd(*)>(_a[5])),(*reinterpret_cast< MatrixXd(*)>(_a[6])),(*reinterpret_cast< select_map(*)>(_a[7])),(*reinterpret_cast< RowVectorXi(*)>(_a[8])),(*reinterpret_cast< source_file_type(*)>(_a[9]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SaveFifFile::*_t)(qint32 , qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SaveFifFile::save_progress)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SaveFifFile::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SaveFifFile.data,
      qt_meta_data_SaveFifFile,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SaveFifFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaveFifFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SaveFifFile.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int SaveFifFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void SaveFifFile::save_progress(qint32 _t1, qint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
