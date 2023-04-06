/****************************************************************************
** Meta object code from reading C++ file 'mapobjectitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../graphicsmap/mapobjectitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapobjectitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapObjectItem_t {
    QByteArrayData data[20];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapObjectItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapObjectItem_t qt_meta_stringdata_MapObjectItem = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MapObjectItem"
QT_MOC_LITERAL(1, 14, 7), // "clicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "checked"
QT_MOC_LITERAL(4, 31, 13), // "doubleClicked"
QT_MOC_LITERAL(5, 45, 7), // "pressed"
QT_MOC_LITERAL(6, 53, 8), // "released"
QT_MOC_LITERAL(7, 62, 7), // "toggled"
QT_MOC_LITERAL(8, 70, 17), // "coordinateChanged"
QT_MOC_LITERAL(9, 88, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(10, 103, 5), // "coord"
QT_MOC_LITERAL(11, 109, 12), // "eulerChanged"
QT_MOC_LITERAL(12, 122, 5), // "euler"
QT_MOC_LITERAL(13, 128, 17), // "coordinateDragged"
QT_MOC_LITERAL(14, 146, 15), // "rotationChanged"
QT_MOC_LITERAL(15, 162, 6), // "degree"
QT_MOC_LITERAL(16, 169, 12), // "routeChanged"
QT_MOC_LITERAL(17, 182, 13), // "MapRouteItem*"
QT_MOC_LITERAL(18, 196, 5), // "route"
QT_MOC_LITERAL(19, 202, 11) // "menuRequest"

    },
    "MapObjectItem\0clicked\0\0checked\0"
    "doubleClicked\0pressed\0released\0toggled\0"
    "coordinateChanged\0QGeoCoordinate\0coord\0"
    "eulerChanged\0euler\0coordinateDragged\0"
    "rotationChanged\0degree\0routeChanged\0"
    "MapRouteItem*\0route\0menuRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapObjectItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       1,    0,   77,    2, 0x26 /* Public | MethodCloned */,
       4,    0,   78,    2, 0x06 /* Public */,
       5,    0,   79,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    1,   81,    2, 0x06 /* Public */,
       8,    1,   84,    2, 0x06 /* Public */,
      11,    1,   87,    2, 0x06 /* Public */,
      13,    1,   90,    2, 0x06 /* Public */,
      14,    1,   93,    2, 0x06 /* Public */,
      16,    1,   96,    2, 0x06 /* Public */,
      19,    0,   99,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QVector3D,   12,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QReal,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void MapObjectItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapObjectItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->clicked(); break;
        case 2: _t->doubleClicked(); break;
        case 3: _t->pressed(); break;
        case 4: _t->released(); break;
        case 5: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->coordinateChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 7: _t->eulerChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 8: _t->coordinateDragged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 9: _t->rotationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 10: _t->routeChanged((*reinterpret_cast< MapRouteItem*(*)>(_a[1]))); break;
        case 11: _t->menuRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MapRouteItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapObjectItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::doubleClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::pressed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::released)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::toggled)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::coordinateChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)(const QVector3D & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::eulerChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::coordinateDragged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::rotationChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)(MapRouteItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::routeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MapObjectItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapObjectItem::menuRequest)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapObjectItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MapObjectItem.data,
    qt_meta_data_MapObjectItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapObjectItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapObjectItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapObjectItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(this);
    return QObject::qt_metacast(_clname);
}

int MapObjectItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MapObjectItem::clicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void MapObjectItem::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MapObjectItem::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MapObjectItem::released()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MapObjectItem::toggled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MapObjectItem::coordinateChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MapObjectItem::eulerChanged(const QVector3D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MapObjectItem::coordinateDragged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MapObjectItem::rotationChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MapObjectItem::routeChanged(MapRouteItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MapObjectItem::menuRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
