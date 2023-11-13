/****************************************************************************
** Meta object code from reading C++ file 'defaultmprisinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "defaultmprisinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'defaultmprisinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DefaultMprisInterface_t {
    QByteArrayData data[19];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DefaultMprisInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DefaultMprisInterface_t qt_meta_stringdata_DefaultMprisInterface = {
    {
QT_MOC_LITERAL(0, 0, 21), // "DefaultMprisInterface"
QT_MOC_LITERAL(1, 22, 9), // "playVideo"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "pauseVideo"
QT_MOC_LITERAL(4, 44, 15), // "togglePlayPause"
QT_MOC_LITERAL(5, 60, 14), // "setVideoVolume"
QT_MOC_LITERAL(6, 75, 6), // "volume"
QT_MOC_LITERAL(7, 82, 13), // "setFullScreen"
QT_MOC_LITERAL(8, 96, 10), // "fullscreen"
QT_MOC_LITERAL(9, 107, 11), // "setPosition"
QT_MOC_LITERAL(10, 119, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(11, 135, 7), // "trackId"
QT_MOC_LITERAL(12, 143, 3), // "pos"
QT_MOC_LITERAL(13, 147, 7), // "setSeek"
QT_MOC_LITERAL(14, 155, 7), // "seekPos"
QT_MOC_LITERAL(15, 163, 21), // "playerStateTimerFired"
QT_MOC_LITERAL(16, 185, 24), // "playerPositionTimerFired"
QT_MOC_LITERAL(17, 210, 18), // "metadataTimerFired"
QT_MOC_LITERAL(18, 229, 16) // "volumeTimerFired"

    },
    "DefaultMprisInterface\0playVideo\0\0"
    "pauseVideo\0togglePlayPause\0setVideoVolume\0"
    "volume\0setFullScreen\0fullscreen\0"
    "setPosition\0QDBusObjectPath\0trackId\0"
    "pos\0setSeek\0seekPos\0playerStateTimerFired\0"
    "playerPositionTimerFired\0metadataTimerFired\0"
    "volumeTimerFired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DefaultMprisInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       9,    2,   78,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,
      15,    0,   86,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,
      17,    0,   88,    2, 0x08 /* Private */,
      18,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10, QMetaType::LongLong,   11,   12,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DefaultMprisInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DefaultMprisInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->playVideo(); break;
        case 1: _t->pauseVideo(); break;
        case 2: _t->togglePlayPause(); break;
        case 3: _t->setVideoVolume((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setPosition((*reinterpret_cast< QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2]))); break;
        case 6: _t->setSeek((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 7: _t->playerStateTimerFired(); break;
        case 8: _t->playerPositionTimerFired(); break;
        case 9: _t->metadataTimerFired(); break;
        case 10: _t->volumeTimerFired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DefaultMprisInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<MprisInterface::staticMetaObject>(),
    qt_meta_stringdata_DefaultMprisInterface.data,
    qt_meta_data_DefaultMprisInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DefaultMprisInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DefaultMprisInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DefaultMprisInterface.stringdata0))
        return static_cast<void*>(this);
    return MprisInterface::qt_metacast(_clname);
}

int DefaultMprisInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MprisInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
