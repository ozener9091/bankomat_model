/****************************************************************************
** Meta object code from reading C++ file 'bankomatwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "bankomatwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bankomatwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_bankomatwindow_t {
    uint offsetsAndSizes[20];
    char stringdata0[15];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[26];
    char stringdata5[26];
    char stringdata6[27];
    char stringdata7[28];
    char stringdata8[20];
    char stringdata9[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_bankomatwindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_bankomatwindow_t qt_meta_stringdata_bankomatwindow = {
    {
        QT_MOC_LITERAL(0, 14),  // "bankomatwindow"
        QT_MOC_LITERAL(15, 21),  // "on_exitButton_clicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 24),  // "on_balanceButton_clicked"
        QT_MOC_LITERAL(63, 25),  // "on_takeButton_100_clicked"
        QT_MOC_LITERAL(89, 25),  // "on_takeButton_500_clicked"
        QT_MOC_LITERAL(115, 26),  // "on_takeButton_1000_clicked"
        QT_MOC_LITERAL(142, 27),  // "on_takeButton_other_clicked"
        QT_MOC_LITERAL(170, 19),  // "takeOffBalanceWiget"
        QT_MOC_LITERAL(190, 21)   // "on_fillButton_clicked"
    },
    "bankomatwindow",
    "on_exitButton_clicked",
    "",
    "on_balanceButton_clicked",
    "on_takeButton_100_clicked",
    "on_takeButton_500_clicked",
    "on_takeButton_1000_clicked",
    "on_takeButton_other_clicked",
    "takeOffBalanceWiget",
    "on_fillButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_bankomatwindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    1,   68,    2, 0x08,    7 /* Private */,
       9,    0,   71,    2, 0x08,    9 /* Private */,

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

Q_CONSTINIT const QMetaObject bankomatwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_bankomatwindow.offsetsAndSizes,
    qt_meta_data_bankomatwindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_bankomatwindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<bankomatwindow, std::true_type>,
        // method 'on_exitButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_balanceButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_takeButton_100_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_takeButton_500_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_takeButton_1000_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_takeButton_other_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'takeOffBalanceWiget'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_fillButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

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
        case 6: { bool _r = _t->takeOffBalanceWiget((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_fillButton_clicked(); break;
        default: ;
        }
    }
}

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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
