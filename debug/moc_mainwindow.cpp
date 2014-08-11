/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,
      38,   11,   11,   11, 0x05,
      52,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   11,   11,   11, 0x08,
      84,   11,   11,   11, 0x08,
     103,   11,   11,   11, 0x08,
     122,   11,   11,   11, 0x08,
     141,   11,   11,   11, 0x08,
     159,   11,   11,   11, 0x08,
     171,   11,   11,   11, 0x08,
     182,   11,   11,   11, 0x08,
     199,   11,   11,   11, 0x08,
     215,   11,   11,   11, 0x08,
     231,   11,   11,   11, 0x08,
     255,   11,   11,   11, 0x08,
     278,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0time_is_down()\0end_game()\0"
    "user_action()\0retry_call()\0"
    "on_but_0_clicked()\0on_but_1_clicked()\0"
    "on_but_c_clicked()\0on_but_x_clicked()\0"
    "on_timer_ticked()\0game_lose()\0game_win()\0"
    "game_pause_off()\0game_pause_on()\0"
    "digit_compare()\0on_pause_play_clicked()\0"
    "on_retry_but_clicked()\0on_help_but_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->time_is_down(); break;
        case 1: _t->end_game(); break;
        case 2: _t->user_action(); break;
        case 3: _t->retry_call(); break;
        case 4: _t->on_but_0_clicked(); break;
        case 5: _t->on_but_1_clicked(); break;
        case 6: _t->on_but_c_clicked(); break;
        case 7: _t->on_but_x_clicked(); break;
        case 8: _t->on_timer_ticked(); break;
        case 9: _t->game_lose(); break;
        case 10: _t->game_win(); break;
        case 11: _t->game_pause_off(); break;
        case 12: _t->game_pause_on(); break;
        case 13: _t->digit_compare(); break;
        case 14: _t->on_pause_play_clicked(); break;
        case 15: _t->on_retry_but_clicked(); break;
        case 16: _t->on_help_but_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::time_is_down()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void MainWindow::end_game()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void MainWindow::user_action()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void MainWindow::retry_call()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
