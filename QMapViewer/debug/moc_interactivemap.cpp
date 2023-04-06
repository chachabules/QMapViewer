/****************************************************************************
** Meta object code from reading C++ file 'interactivemap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../graphicsmap/interactivemap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interactivemap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InteractiveMap_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InteractiveMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InteractiveMap_t qt_meta_stringdata_InteractiveMap = {
    {
QT_MOC_LITERAL(0, 0, 14) // "InteractiveMap"

    },
    "InteractiveMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InteractiveMap[] = {

 // content:
       8,       // revision
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

void InteractiveMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject InteractiveMap::staticMetaObject = { {
    QMetaObject::SuperData::link<GraphicsMap::staticMetaObject>(),
    qt_meta_stringdata_InteractiveMap.data,
    qt_meta_data_InteractiveMap,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InteractiveMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InteractiveMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InteractiveMap.stringdata0))
        return static_cast<void*>(this);
    return GraphicsMap::qt_metacast(_clname);
}

int InteractiveMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GraphicsMap::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MapOperator_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapOperator_t qt_meta_stringdata_MapOperator = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MapOperator"
QT_MOC_LITERAL(1, 12, 9), // "completed"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "modeChanged"
QT_MOC_LITERAL(4, 35, 25), // "MapOperator::OperatorMode"
QT_MOC_LITERAL(5, 61, 4) // "mode"

    },
    "MapOperator\0completed\0\0modeChanged\0"
    "MapOperator::OperatorMode\0mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapOperator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void MapOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->completed(); break;
        case 1: _t->modeChanged((*reinterpret_cast< MapOperator::OperatorMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapOperator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapOperator::completed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapOperator::*)(MapOperator::OperatorMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapOperator::modeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapOperator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MapOperator.data,
    qt_meta_data_MapOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapOperator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MapOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void MapOperator::completed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MapOperator::modeChanged(MapOperator::OperatorMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
