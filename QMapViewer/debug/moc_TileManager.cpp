/****************************************************************************
** Meta object code from reading C++ file 'TileManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mapwidget/TileManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TileManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TileManager_t {
    QByteArrayData data[28];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TileManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TileManager_t qt_meta_stringdata_TileManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TileManager"
QT_MOC_LITERAL(1, 12, 14), // "signClearScene"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "signZoomEnable"
QT_MOC_LITERAL(4, 43, 10), // "slotZoomUp"
QT_MOC_LITERAL(5, 54, 12), // "slotZoomDown"
QT_MOC_LITERAL(6, 67, 13), // "slotChangeFov"
QT_MOC_LITERAL(7, 81, 4), // "lat1"
QT_MOC_LITERAL(8, 86, 5), // "long1"
QT_MOC_LITERAL(9, 92, 4), // "lat2"
QT_MOC_LITERAL(10, 97, 5), // "long2"
QT_MOC_LITERAL(11, 103, 4), // "zoom"
QT_MOC_LITERAL(12, 108, 6), // "center"
QT_MOC_LITERAL(13, 115, 15), // "slotChangeScene"
QT_MOC_LITERAL(14, 131, 9), // "rectangle"
QT_MOC_LITERAL(15, 141, 18), // "slotChangeTileType"
QT_MOC_LITERAL(16, 160, 4), // "type"
QT_MOC_LITERAL(17, 165, 13), // "slotAddMarker"
QT_MOC_LITERAL(18, 179, 9), // "MapMarker"
QT_MOC_LITERAL(19, 189, 6), // "marker"
QT_MOC_LITERAL(20, 196, 16), // "slotRemoveMarker"
QT_MOC_LITERAL(21, 213, 14), // "slotEditMarker"
QT_MOC_LITERAL(22, 228, 16), // "slotUpdateMarker"
QT_MOC_LITERAL(23, 245, 22), // "slotRegisterTileLoader"
QT_MOC_LITERAL(24, 268, 4), // "addr"
QT_MOC_LITERAL(25, 273, 12), // "slotLoadTile"
QT_MOC_LITERAL(26, 286, 6), // "Tile<>"
QT_MOC_LITERAL(27, 293, 4) // "tile"

    },
    "TileManager\0signClearScene\0\0signZoomEnable\0"
    "slotZoomUp\0slotZoomDown\0slotChangeFov\0"
    "lat1\0long1\0lat2\0long2\0zoom\0center\0"
    "slotChangeScene\0rectangle\0slotChangeTileType\0"
    "type\0slotAddMarker\0MapMarker\0marker\0"
    "slotRemoveMarker\0slotEditMarker\0"
    "slotUpdateMarker\0slotRegisterTileLoader\0"
    "addr\0slotLoadTile\0Tile<>\0tile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TileManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   83,    2, 0x0a /* Public */,
       5,    0,   84,    2, 0x0a /* Public */,
       6,    6,   85,    2, 0x0a /* Public */,
      13,    1,   98,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,
      17,    1,  104,    2, 0x0a /* Public */,
      20,    1,  107,    2, 0x0a /* Public */,
      21,    1,  110,    2, 0x0a /* Public */,
      22,    0,  113,    2, 0x0a /* Public */,
      23,    2,  114,    2, 0x0a /* Public */,
      25,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Bool,    7,    8,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QRectF,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   16,   24,
    QMetaType::Void, 0x80000000 | 26,   27,

       0        // eod
};

void TileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TileManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signClearScene(); break;
        case 1: _t->signZoomEnable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slotZoomUp(); break;
        case 3: _t->slotZoomDown(); break;
        case 4: _t->slotChangeFov((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 5: _t->slotChangeScene((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 6: _t->slotChangeTileType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slotAddMarker((*reinterpret_cast< MapMarker(*)>(_a[1]))); break;
        case 8: _t->slotRemoveMarker((*reinterpret_cast< MapMarker(*)>(_a[1]))); break;
        case 9: _t->slotEditMarker((*reinterpret_cast< MapMarker(*)>(_a[1]))); break;
        case 10: _t->slotUpdateMarker(); break;
        case 11: _t->slotRegisterTileLoader((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->slotLoadTile((*reinterpret_cast< Tile<>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MapMarker >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MapMarker >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MapMarker >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Tile<> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TileManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileManager::signClearScene)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TileManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileManager::signZoomEnable)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TileManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TileManager.data,
    qt_meta_data_TileManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TileManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void TileManager::signClearScene()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TileManager::signZoomEnable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
