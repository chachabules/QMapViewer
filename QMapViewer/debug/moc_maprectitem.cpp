/****************************************************************************
** Meta object code from reading C++ file 'maprectitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../graphicsmap/maprectitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maprectitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapRectItem_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapRectItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapRectItem_t qt_meta_stringdata_MapRectItem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MapRectItem"
QT_MOC_LITERAL(1, 12, 13), // "centerChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "QGeoCoordinate"
QT_MOC_LITERAL(4, 42, 6), // "center"
QT_MOC_LITERAL(5, 49, 11), // "sizeChanged"
QT_MOC_LITERAL(6, 61, 13), // "doubleClicked"
QT_MOC_LITERAL(7, 75, 15), // "editableChanged"
QT_MOC_LITERAL(8, 91, 8) // "editable"

    },
    "MapRectItem\0centerChanged\0\0QGeoCoordinate\0"
    "center\0sizeChanged\0doubleClicked\0"
    "editableChanged\0editable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapRectItem[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,
       7,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QSizeF,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void MapRectItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapRectItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centerChanged((*reinterpret_cast< const QGeoCoordinate(*)>(_a[1]))); break;
        case 1: _t->sizeChanged((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 2: _t->doubleClicked(); break;
        case 3: _t->editableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCoordinate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapRectItem::*)(const QGeoCoordinate & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRectItem::centerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapRectItem::*)(const QSizeF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRectItem::sizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MapRectItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRectItem::doubleClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MapRectItem::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapRectItem::editableChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapRectItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MapRectItem.data,
    qt_meta_data_MapRectItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapRectItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapRectItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapRectItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(this);
    return QObject::qt_metacast(_clname);
}

int MapRectItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MapRectItem::centerChanged(const QGeoCoordinate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapRectItem::sizeChanged(const QSizeF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MapRectItem::doubleClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MapRectItem::editableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
