/****************************************************************************
** Meta object code from reading C++ file 'bankomatwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "bankomatwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bankomatwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bankomatwindow_t {
    QByteArrayData data[10];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bankomatwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bankomatwindow_t qt_meta_stringdata_bankomatwindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "bankomatwindow"
QT_MOC_LITERAL(1, 15, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 24), // "on_balanceButton_clicked"
QT_MOC_LITERAL(4, 63, 25), // "on_takeButton_100_clicked"
QT_MOC_LITERAL(5, 89, 25), // "on_takeButton_500_clicked"
QT_MOC_LITERAL(6, 115, 26), // "on_takeButton_1000_clicked"
QT_MOC_LITERAL(7, 142, 27), // "on_takeButton_other_clicked"
QT_MOC_LITERAL(8, 170, 19), // "takeOffBalanceWiget"
QT_MOC_LITERAL(9, 190, 21) // "on_fillButton_clicked"

    },
    "bankomatwindow\0on_exitButton_clicked\0"
    "\0on_balanceButton_clicked\0"
    "on_takeButton_100_clicked\0"
    "on_takeButton_500_clicked\0"
    "on_takeButton_1000_clicked\0"
    "on_takeButton_other_clicked\0"
    "takeOffBalanceWiget\0on_fillButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bankomatwindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void bankomatwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<bankomatwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_exitButton_clicked(); break;
        case 1: _t->on_balanceButton_clicked(); break;
        case 2: _t->on_takeButton_100_clicked(); break;
        case 3: _t->on_takeButton_500_clicked(); break;
        case 4: _t->on_takeButton_1000_clicked(); break;
        case 5: _t->on_takeButton_other_clicked(); break;
        case 6: { bool _r = _t->takeOffBalanceWiget((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_fillButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject bankomatwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_bankomatwindow.data,
    qt_meta_data_bankomatwindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *bankomatwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bankomatwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bankomatwindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int bankomatwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
