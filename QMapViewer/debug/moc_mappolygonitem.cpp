/****************************************************************************
** Meta object code from reading C++ file 'mappolygonitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../graphicsmap/mappolygonitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mappolygonitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapPolygonItem_t {
    QByteArrayData data[12];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapPolygonItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapPolygonItem_t qt_meta_stringdata_MapPolygonItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MapPolygonItem"
QT_MOC_LITERAL(1, 15, 5), // "added"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "index"
QT_MOC_LITERAL(4, 28, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(5, 43, 5), // "coord"
QT_MOC_LITERAL(6, 49, 7), // "removed"
QT_MOC_LITERAL(7, 57, 7), // "updated"
QT_MOC_LITERAL(8, 65, 7), // "changed"
QT_MOC_LITERAL(9, 73, 13), // "doubleClicked"
QT_MOC_LITERAL(10, 87, 15), // "editableChanged"
QT_MOC_LITERAL(11, 103, 8) // "editable"

    },
    "MapPolygonItem\0added\0\0index\0QGeoCoordinate\0"
    "coord\0removed\0updated\0changed\0"
    "doubleClicked\0editableChanged\0editable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapPolygonItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,
       7,    2,   54,    2, 0x06 /* Public */,
       8,    0,   59,    2, 0x06 /* Public */,
       9,    0,   60,    2, 0x06 /* Public */,
      10,    1,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void MapPolygonItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapPolygonItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->added((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 1: _t->removed((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 2: _t->updated((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QGeoCoordinate(*)>(_a[2]))); break;
        case 3: _t->changed(); break;
        case 4: _t->doubleClicked(); break;
        case 5: _t->editableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapPolygonItem::*)(const int , const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapPolygonItem::added)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapPolygonItem::*)(const int , const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapPolygonItem::removed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MapPolygonItem::*)(const int & , const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapPolygonItem::updated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MapPolygonItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapPolygonItem::changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MapPolygonItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapPolygonItem::doubleClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MapPolygonItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapPolygonItem::editableChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapPolygonItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MapPolygonItem.data,
    qt_meta_data_MapPolygonItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapPolygonItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapPolygonItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapPolygonItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsPolygonItem"))
        return static_cast< QGraphicsPolygonItem*>(this);
    return QObject::qt_metacast(_clname);
}

int MapPolygonItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MapPolygonItem::added(const int _t1, const QGeoCoordinate & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapPolygonItem::removed(const int _t1, const QGeoCoordinate & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MapPolygonItem::updated(const int & _t1, const QGeoCoordinate & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MapPolygonItem::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MapPolygonItem::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MapPolygonItem::editableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
