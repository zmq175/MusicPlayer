/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "on_add_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "on_remove_clicked"
QT_MOC_LITERAL(4, 45, 15), // "on_save_clicked"
QT_MOC_LITERAL(5, 61, 15), // "on_play_clicked"
QT_MOC_LITERAL(6, 77, 25), // "on_volumeBar_valueChanged"
QT_MOC_LITERAL(7, 103, 5), // "value"
QT_MOC_LITERAL(8, 109, 22), // "on_seekBar_sliderMoved"
QT_MOC_LITERAL(9, 132, 8), // "position"
QT_MOC_LITERAL(10, 141, 27), // "on_listWidget_doubleClicked"
QT_MOC_LITERAL(11, 169, 5), // "index"
QT_MOC_LITERAL(12, 175, 18), // "on_forward_clicked"
QT_MOC_LITERAL(13, 194, 15), // "on_back_clicked"
QT_MOC_LITERAL(14, 210, 15), // "on_mute_clicked"
QT_MOC_LITERAL(15, 226, 17), // "on_repeat_clicked"
QT_MOC_LITERAL(16, 244, 18), // "on_shuffle_clicked"
QT_MOC_LITERAL(17, 263, 6), // "update"
QT_MOC_LITERAL(18, 270, 24), // "on_searchBar_textChanged"
QT_MOC_LITERAL(19, 295, 4) // "arg1"

    },
    "MainWindow\0on_add_clicked\0\0on_remove_clicked\0"
    "on_save_clicked\0on_play_clicked\0"
    "on_volumeBar_valueChanged\0value\0"
    "on_seekBar_sliderMoved\0position\0"
    "on_listWidget_doubleClicked\0index\0"
    "on_forward_clicked\0on_back_clicked\0"
    "on_mute_clicked\0on_repeat_clicked\0"
    "on_shuffle_clicked\0update\0"
    "on_searchBar_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    0,  102,    2, 0x08 /* Private */,
      18,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QModelIndex,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_clicked(); break;
        case 1: _t->on_remove_clicked(); break;
        case 2: _t->on_save_clicked(); break;
        case 3: _t->on_play_clicked(); break;
        case 4: _t->on_volumeBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_seekBar_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_listWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_forward_clicked(); break;
        case 8: _t->on_back_clicked(); break;
        case 9: _t->on_mute_clicked(); break;
        case 10: _t->on_repeat_clicked(); break;
        case 11: _t->on_shuffle_clicked(); break;
        case 12: _t->update(); break;
        case 13: _t->on_searchBar_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
