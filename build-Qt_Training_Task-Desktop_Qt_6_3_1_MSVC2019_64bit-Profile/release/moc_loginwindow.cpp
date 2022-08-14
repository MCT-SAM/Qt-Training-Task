/****************************************************************************
** Meta object code from reading C++ file 'loginwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Qt_Training_Task/loginwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_loginWindow_t {
    const uint offsetsAndSize[28];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_loginWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_loginWindow_t qt_meta_stringdata_loginWindow = {
    {
QT_MOC_LITERAL(0, 11), // "loginWindow"
QT_MOC_LITERAL(12, 11), // "nameChanged"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 13), // "isOpenChanged"
QT_MOC_LITERAL(39, 16), // "signFoundChanged"
QT_MOC_LITERAL(56, 12), // "loginConfirm"
QT_MOC_LITERAL(69, 4), // "user"
QT_MOC_LITERAL(74, 11), // "loginButton"
QT_MOC_LITERAL(86, 4), // "name"
QT_MOC_LITERAL(91, 4), // "pass"
QT_MOC_LITERAL(96, 12), // "signUpButton"
QT_MOC_LITERAL(109, 5), // "email"
QT_MOC_LITERAL(115, 11), // "qmlResponse"
QT_MOC_LITERAL(127, 20) // "loginWindow::respond"

    },
    "loginWindow\0nameChanged\0\0isOpenChanged\0"
    "signFoundChanged\0loginConfirm\0user\0"
    "loginButton\0name\0pass\0signUpButton\0"
    "email\0qmlResponse\0loginWindow::respond"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loginWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    0,   58,    2, 0x06,    3 /* Public */,
       5,    1,   59,    2, 0x06,    4 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   62,    2, 0x02,    6 /* Public */,
      10,    3,   67,    2, 0x02,    9 /* Public */,
      12,    1,   74,    2, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,   11,    9,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

void loginWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<loginWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->isOpenChanged(); break;
        case 2: _t->signFoundChanged(); break;
        case 3: _t->loginConfirm((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 4: _t->loginButton((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->signUpButton((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->qmlResponse((*reinterpret_cast< std::add_pointer_t<loginWindow::respond>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (loginWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&loginWindow::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (loginWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&loginWindow::isOpenChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (loginWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&loginWindow::signFoundChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (loginWindow::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&loginWindow::loginConfirm)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject loginWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_loginWindow.offsetsAndSize,
    qt_meta_data_loginWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_loginWindow_t
, QtPrivate::TypeAndForceComplete<loginWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList, std::false_type>

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<loginWindow::respond, std::false_type>

>,
    nullptr
} };


const QMetaObject *loginWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loginWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_loginWindow.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int loginWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void loginWindow::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void loginWindow::isOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void loginWindow::signFoundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void loginWindow::loginConfirm(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
