/****************************************************************************
** Meta object code from reading C++ file 'udp_thread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Ryoumiru/udp_thread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udp_thread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_udp_thread_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_udp_thread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_udp_thread_t qt_meta_stringdata_udp_thread = {
    {
QT_MOC_LITERAL(0, 0, 10), // "udp_thread"
QT_MOC_LITERAL(1, 11, 16), // "slot_lamp_on_all"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "slot_lamp_off_all"
QT_MOC_LITERAL(4, 47, 15), // "slot_air_on_all"
QT_MOC_LITERAL(5, 63, 16) // "slot_air_off_all"

    },
    "udp_thread\0slot_lamp_on_all\0\0"
    "slot_lamp_off_all\0slot_air_on_all\0"
    "slot_air_off_all"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_udp_thread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void udp_thread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<udp_thread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_lamp_on_all(); break;
        case 1: _t->slot_lamp_off_all(); break;
        case 2: _t->slot_air_on_all(); break;
        case 3: _t->slot_air_off_all(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (udp_thread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_thread::slot_lamp_on_all)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (udp_thread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_thread::slot_lamp_off_all)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (udp_thread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_thread::slot_air_on_all)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (udp_thread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&udp_thread::slot_air_off_all)) {
                *result = 3;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject udp_thread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_udp_thread.data,
    qt_meta_data_udp_thread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *udp_thread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *udp_thread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_udp_thread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int udp_thread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void udp_thread::slot_lamp_on_all()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void udp_thread::slot_lamp_off_all()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void udp_thread::slot_air_on_all()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void udp_thread::slot_air_off_all()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
