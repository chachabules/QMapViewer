/****************************************************************************
** Meta object code from reading C++ file 'mapoperator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../graphicsmap/mapoperator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapoperator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapEllipseOperator_t {
    QByteArrayData data[6];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapEllipseOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapEllipseOperator_t qt_meta_stringdata_MapEllipseOperator = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MapEllipseOperator"
QT_MOC_LITERAL(1, 19, 7), // "created"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "MapEllipseItem*"
QT_MOC_LITERAL(4, 44, 4), // "item"
QT_MOC_LITERAL(5, 49, 7) // "deleted"

    },
    "MapEllipseOperator\0created\0\0MapEllipseItem*\0"
    "item\0deleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapEllipseOperator[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MapEllipseOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapEllipseOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->created((*reinterpret_cast< MapEllipseItem*(*)>(_a[1]))); break;
        case 1: _t->deleted((*reinterpret_cast< MapEllipseItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapEllipseOperator::*)(MapEllipseItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapEllipseOperator::created)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapEllipseOperator::*)(MapEllipseItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapEllipseOperator::deleted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapEllipseOperator::staticMetaObject = { {
    QMetaObject::SuperData::link<MapOperator::staticMetaObject>(),
    qt_meta_stringdata_MapEllipseOperator.data,
    qt_meta_data_MapEllipseOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapEllipseOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapEllipseOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapEllipseOperator.stringdata0))
        return static_cast<void*>(this);
    return MapOperator::qt_metacast(_clname);
}

int MapEllipseOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapOperator::qt_metacall(_c, _id, _a);
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
void MapEllipseOperator::created(MapEllipseItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapEllipseOperator::deleted(MapEllipseItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MapPolygonOperator_t {
    QByteArrayData data[6];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapPolygonOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapPolygonOperator_t qt_meta_stringdata_MapPolygonOperator = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MapPolygonOperator"
QT_MOC_LITERAL(1, 19, 7), // "created"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "MapPolygonItem*"
QT_MOC_LITERAL(4, 44, 4), // "item"
QT_MOC_LITERAL(5, 49, 7) // "deleted"

    },
    "MapPolygonOperator\0created\0\0MapPolygonItem*\0"
    "item\0deleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapPolygonOperator[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MapPolygonOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapPolygonOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->created((*reinterpret_cast< MapPolygonItem*(*)>(_a[1]))); break;
        case 1: _t->deleted((*reinterpret_cast< MapPolygonItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapPolygonOperator::*)(MapPolygonItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapPolygonOperator::created)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapPolygonOperator::*)(MapPolygonItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapPolygonOperator::deleted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapPolygonOperator::staticMetaObject = { {
    QMetaObject::SuperData::link<MapOperator::staticMetaObject>(),
    qt_meta_stringdata_MapPolygonOperator.data,
    qt_meta_data_MapPolygonOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapPolygonOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapPolygonOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapPolygonOperator.stringdata0))
        return static_cast<void*>(this);
    return MapOperator::qt_metacast(_clname);
}

int MapPolygonOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapOperator::qt_metacall(_c, _id, _a);
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
void MapPolygonOperator::created(MapPolygonItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapPolygonOperator::deleted(MapPolygonItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MapObjectOperator_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapObjectOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapObjectOperator_t qt_meta_stringdata_MapObjectOperator = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MapObjectOperator"
QT_MOC_LITERAL(1, 18, 7), // "created"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "MapObjectItem*"
QT_MOC_LITERAL(4, 42, 4), // "item"
QT_MOC_LITERAL(5, 47, 7) // "deleted"

    },
    "MapObjectOperator\0created\0\0MapObjectItem*\0"
    "item\0deleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapObjectOperator[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MapObjectOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapObjectOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->created((*reinterpret_cast< MapObjectItem*(*)>(_a[1]))); break;
        case 1: _t->deleted((*reinterpret_cast< MapObjectItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapObjectOperator::*)(MapObjectItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectOperator::created)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapObjectOperator::*)(MapObjectItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectOperator::deleted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapObjectOperator::staticMetaObject = { {
    QMetaObject::SuperData::link<MapOperator::staticMetaObject>(),
    qt_meta_stringdata_MapObjectOperator.data,
    qt_meta_data_MapObjectOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapObjectOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapObjectOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapObjectOperator.stringdata0))
        return static_cast<void*>(this);
    return MapOperator::qt_metacast(_clname);
}

int MapObjectOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapOperator::qt_metacall(_c, _id, _a);
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
void MapObjectOperator::created(MapObjectItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapObjectOperator::deleted(MapObjectItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MapScutcheonOperator_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapScutcheonOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapScutcheonOperator_t qt_meta_stringdata_MapScutcheonOperator = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MapScutcheonOperator"
QT_MOC_LITERAL(1, 21, 12), // "changeOffset"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "MapScutcheonOperator\0changeOffset\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapScutcheonOperator[] = {

 // content:
       8,       // revision
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

void MapScutcheonOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapScutcheonOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeOffset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapScutcheonOperator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapScutcheonOperator::changeOffset)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MapScutcheonOperator::staticMetaObject = { {
    QMetaObject::SuperData::link<MapOperator::staticMetaObject>(),
    qt_meta_stringdata_MapScutcheonOperator.data,
    qt_meta_data_MapScutcheonOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapScutcheonOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapScutcheonOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapScutcheonOperator.stringdata0))
        return static_cast<void*>(this);
    return MapOperator::qt_metacast(_clname);
}

int MapScutcheonOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapOperator::qt_metacall(_c, _id, _a);
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
void MapScutcheonOperator::changeOffset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_MapRouteOperator_t {
    QByteArrayData data[6];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapRouteOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapRouteOperator_t qt_meta_stringdata_MapRouteOperator = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MapRouteOperator"
QT_MOC_LITERAL(1, 17, 7), // "created"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "MapRouteItem*"
QT_MOC_LITERAL(4, 40, 4), // "item"
QT_MOC_LITERAL(5, 45, 7) // "deleted"

    },
    "MapRouteOperator\0created\0\0MapRouteItem*\0"
    "item\0deleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapRouteOperator[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MapRouteOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapRouteOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->created((*reinterpret_cast< MapRouteItem*(*)>(_a[1]))); break;
        case 1: _t->deleted((*reinterpret_cast< MapRouteItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapRouteOperator::*)(MapRouteItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRouteOperator::created)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapRouteOperator::*)(MapRouteItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRouteOperator::deleted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapRouteOperator::staticMetaObject = { {
    QMetaObject::SuperData::link<MapOperator::staticMetaObject>(),
    qt_meta_stringdata_MapRouteOperator.data,
    qt_meta_data_MapRouteOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapRouteOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapRouteOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapRouteOperator.stringdata0))
        return static_cast<void*>(this);
    return MapOperator::qt_metacast(_clname);
}

int MapRouteOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapOperator::qt_metacall(_c, _id, _a);
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
void MapRouteOperator::created(MapRouteItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapRouteOperator::deleted(MapRouteItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MapRangeLineOperator_t {
    QByteArrayData data[6];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapRangeLineOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapRangeLineOperator_t qt_meta_stringdata_MapRangeLineOperator = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MapRangeLineOperator"
QT_MOC_LITERAL(1, 21, 7), // "created"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "MapLineItem*"
QT_MOC_LITERAL(4, 43, 4), // "item"
QT_MOC_LITERAL(5, 48, 7) // "deleted"

    },
    "MapRangeLineOperator\0created\0\0"
    "MapLineItem*\0item\0deleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapRangeLineOperator[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MapRangeLineOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapRangeLineOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->created((*reinterpret_cast< MapLineItem*(*)>(_a[1]))); break;
        case 1: _t->deleted((*reinterpret_cast< MapLineItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapRangeLineOperator::*)(MapLineItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRangeLineOperator::created)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapRangeLineOperator::*)(MapLineItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRangeLineOperator::deleted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapRangeLineOperator::staticMetaObject = { {
    QMetaObject::SuperData::link<MapOperator::staticMetaObject>(),
    qt_meta_stringdata_MapRangeLineOperator.data,
    qt_meta_data_MapRangeLineOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapRangeLineOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapRangeLineOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapRangeLineOperator.stringdata0))
        return static_cast<void*>(this);
    return MapOperator::qt_metacast(_clname);
}

int MapRangeLineOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapOperator::qt_metacall(_c, _id, _a);
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
void MapRangeLineOperator::created(MapLineItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapRangeLineOperator::deleted(MapLineItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MapRectOperator_t {
    QByteArrayData data[6];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapRectOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapRectOperator_t qt_meta_stringdata_MapRectOperator = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MapRectOperator"
QT_MOC_LITERAL(1, 16, 7), // "created"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "MapRectItem*"
QT_MOC_LITERAL(4, 38, 4), // "item"
QT_MOC_LITERAL(5, 43, 7) // "deleted"

    },
    "MapRectOperator\0created\0\0MapRectItem*\0"
    "item\0deleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapRectOperator[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MapRectOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapRectOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->created((*reinterpret_cast< MapRectItem*(*)>(_a[1]))); break;
        case 1: _t->deleted((*reinterpret_cast< MapRectItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapRectOperator::*)(MapRectItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRectOperator::created)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapRectOperator::*)(MapRectItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRectOperator::deleted)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapRectOperator::staticMetaObject = { {
    QMetaObject::SuperData::link<MapOperator::staticMetaObject>(),
    qt_meta_stringdata_MapRectOperator.data,
    qt_meta_data_MapRectOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapRectOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapRectOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapRectOperator.stringdata0))
        return static_cast<void*>(this);
    return MapOperator::qt_metacast(_clname);
}

int MapRectOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MapOperator::qt_metacall(_c, _id, _a);
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
void MapRectOperator::created(MapRectItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapRectOperator::deleted(MapRectItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
