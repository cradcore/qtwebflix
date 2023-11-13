/****************************************************************************
** Meta object code from reading C++ file 'netflixmprisinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "netflixmprisinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netflixmprisinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetflixMprisInterface_t {
    QByteArrayData data[24];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetflixMprisInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetflixMprisInterface_t qt_meta_stringdata_NetflixMprisInterface = {
    {
QT_MOC_LITERAL(0, 0, 21), // "NetflixMprisInterface"
QT_MOC_LITERAL(1, 22, 9), // "playVideo"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "pauseVideo"
QT_MOC_LITERAL(4, 44, 15), // "togglePlayPause"
QT_MOC_LITERAL(5, 60, 13), // "goNextEpisode"
QT_MOC_LITERAL(6, 74, 14), // "setVideoVolume"
QT_MOC_LITERAL(7, 89, 6), // "volume"
QT_MOC_LITERAL(8, 96, 13), // "setFullScreen"
QT_MOC_LITERAL(9, 110, 10), // "fullscreen"
QT_MOC_LITERAL(10, 121, 11), // "setPosition"
QT_MOC_LITERAL(11, 133, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(12, 149, 7), // "trackId"
QT_MOC_LITERAL(13, 157, 3), // "pos"
QT_MOC_LITERAL(14, 161, 7), // "setSeek"
QT_MOC_LITERAL(15, 169, 7), // "seekPos"
QT_MOC_LITERAL(16, 177, 21), // "playerStateTimerFired"
QT_MOC_LITERAL(17, 199, 24), // "playerPositionTimerFired"
QT_MOC_LITERAL(18, 224, 18), // "metadataTimerFired"
QT_MOC_LITERAL(19, 243, 16), // "volumeTimerFired"
QT_MOC_LITERAL(20, 260, 16), // "goNextTimerFired"
QT_MOC_LITERAL(21, 277, 22), // "networkManagerFinished"
QT_MOC_LITERAL(22, 300, 14), // "QNetworkReply*"
QT_MOC_LITERAL(23, 315, 5) // "reply"

    },
    "NetflixMprisInterface\0playVideo\0\0"
    "pauseVideo\0togglePlayPause\0goNextEpisode\0"
    "setVideoVolume\0volume\0setFullScreen\0"
    "fullscreen\0setPosition\0QDBusObjectPath\0"
    "trackId\0pos\0setSeek\0seekPos\0"
    "playerStateTimerFired\0playerPositionTimerFired\0"
    "metadataTimerFired\0volumeTimerFired\0"
    "goNextTimerFired\0networkManagerFinished\0"
    "QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetflixMprisInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
      10,    2,   94,    2, 0x08 /* Private */,
      14,    1,   99,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,
      20,    0,  106,    2, 0x08 /* Private */,
      21,    1,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::LongLong,   12,   13,
    QMetaType::Void, QMetaType::LongLong,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void NetflixMprisInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetflixMprisInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->playVideo(); break;
        case 1: _t->pauseVideo(); break;
        case 2: _t->togglePlayPause(); break;
        case 3: _t->goNextEpisode(); break;
        case 4: _t->setVideoVolume((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setFullScreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setPosition((*reinterpret_cast< QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2]))); break;
        case 7: _t->setSeek((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 8: _t->playerStateTimerFired(); break;
        case 9: _t->playerPositionTimerFired(); break;
        case 10: _t->metadataTimerFired(); break;
        case 11: _t->volumeTimerFired(); break;
        case 12: _t->goNextTimerFired(); break;
        case 13: _t->networkManagerFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetflixMprisInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<MprisInterface::staticMetaObject>(),
    qt_meta_stringdata_NetflixMprisInterface.data,
    qt_meta_data_NetflixMprisInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetflixMprisInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetflixMprisInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetflixMprisInterface.stringdata0))
        return static_cast<void*>(this);
    return MprisInterface::qt_metacast(_clname);
}

int NetflixMprisInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MprisInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
