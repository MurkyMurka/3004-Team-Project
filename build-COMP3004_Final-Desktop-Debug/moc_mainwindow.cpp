/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../COMP3004_Final/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "turnOff"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "turnOn"
QT_MOC_LITERAL(4, 27, 14), // "returnHomePage"
QT_MOC_LITERAL(5, 42, 12), // "chargeDevice"
QT_MOC_LITERAL(6, 55, 13), // "unplugCharger"
QT_MOC_LITERAL(7, 69, 12), // "setMainClock"
QT_MOC_LITERAL(8, 82, 33), // "on_dateTimeEditor_dateTimeCha..."
QT_MOC_LITERAL(9, 116, 8), // "dateTime"
QT_MOC_LITERAL(10, 125, 27), // "on_createProfileBTN_clicked"
QT_MOC_LITERAL(11, 153, 22), // "on_addCarbsBTN_clicked"
QT_MOC_LITERAL(12, 176, 21), // "on_addBgBTN_2_clicked"
QT_MOC_LITERAL(13, 198, 26), // "on_confirmBolusBTN_clicked"
QT_MOC_LITERAL(14, 225, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(15, 247, 25), // "on_confirmBolBTN_rejected"
QT_MOC_LITERAL(16, 273, 25), // "on_confirmBolBTN_accepted"
QT_MOC_LITERAL(17, 299, 21) // "on_buttonBox_accepted"

    },
    "MainWindow\0turnOff\0\0turnOn\0returnHomePage\0"
    "chargeDevice\0unplugCharger\0setMainClock\0"
    "on_dateTimeEditor_dateTimeChanged\0"
    "dateTime\0on_createProfileBTN_clicked\0"
    "on_addCarbsBTN_clicked\0on_addBgBTN_2_clicked\0"
    "on_confirmBolusBTN_clicked\0"
    "on_buttonBox_rejected\0on_confirmBolBTN_rejected\0"
    "on_confirmBolBTN_accepted\0"
    "on_buttonBox_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x0a /* Public */,
       3,    0,   90,    2, 0x0a /* Public */,
       4,    0,   91,    2, 0x0a /* Public */,
       5,    0,   92,    2, 0x0a /* Public */,
       6,    0,   93,    2, 0x0a /* Public */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->turnOff(); break;
        case 1: _t->turnOn(); break;
        case 2: _t->returnHomePage(); break;
        case 3: _t->chargeDevice(); break;
        case 4: _t->unplugCharger(); break;
        case 5: _t->setMainClock(); break;
        case 6: _t->on_dateTimeEditor_dateTimeChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 7: _t->on_createProfileBTN_clicked(); break;
        case 8: _t->on_addCarbsBTN_clicked(); break;
        case 9: _t->on_addBgBTN_2_clicked(); break;
        case 10: _t->on_confirmBolusBTN_clicked(); break;
        case 11: _t->on_buttonBox_rejected(); break;
        case 12: _t->on_confirmBolBTN_rejected(); break;
        case 13: _t->on_confirmBolBTN_accepted(); break;
        case 14: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
