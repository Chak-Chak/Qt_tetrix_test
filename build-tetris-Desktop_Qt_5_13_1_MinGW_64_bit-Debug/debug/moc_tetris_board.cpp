/****************************************************************************
** Meta object code from reading C++ file 'tetris_board.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../tetris/tetris_board.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tetris_board.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tetris_board_t {
    QByteArrayData data[11];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tetris_board_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tetris_board_t qt_meta_stringdata_tetris_board = {
    {
QT_MOC_LITERAL(0, 0, 12), // "tetris_board"
QT_MOC_LITERAL(1, 13, 12), // "scoreChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "score"
QT_MOC_LITERAL(4, 33, 12), // "levelChanged"
QT_MOC_LITERAL(5, 46, 5), // "level"
QT_MOC_LITERAL(6, 52, 19), // "linesRemovedChanged"
QT_MOC_LITERAL(7, 72, 8), // "numLines"
QT_MOC_LITERAL(8, 81, 16), // "game_over_window"
QT_MOC_LITERAL(9, 98, 5), // "start"
QT_MOC_LITERAL(10, 104, 5) // "pause"

    },
    "tetris_board\0scoreChanged\0\0score\0"
    "levelChanged\0level\0linesRemovedChanged\0"
    "numLines\0game_over_window\0start\0pause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tetris_board[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   54,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tetris_board::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tetris_board *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scoreChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->levelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->linesRemovedChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->game_over_window(); break;
        case 4: _t->start(); break;
        case 5: _t->pause(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (tetris_board::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tetris_board::scoreChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (tetris_board::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tetris_board::levelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (tetris_board::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tetris_board::linesRemovedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (tetris_board::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tetris_board::game_over_window)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tetris_board::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_tetris_board.data,
    qt_meta_data_tetris_board,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tetris_board::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tetris_board::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tetris_board.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int tetris_board::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void tetris_board::scoreChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tetris_board::levelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tetris_board::linesRemovedChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tetris_board::game_over_window()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
