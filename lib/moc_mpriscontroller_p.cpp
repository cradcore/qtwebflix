/****************************************************************************
** Meta object code from reading C++ file 'mpriscontroller_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qtmpris/src/mpriscontroller_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpriscontroller_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MprisRootInterface_t {
    QByteArrayData data[35];
    char stringdata0[508];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MprisRootInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MprisRootInterface_t qt_meta_stringdata_MprisRootInterface = {
    {
QT_MOC_LITERAL(0, 0, 18), // "MprisRootInterface"
QT_MOC_LITERAL(1, 19, 14), // "canQuitChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "canQuit"
QT_MOC_LITERAL(4, 43, 15), // "canRaiseChanged"
QT_MOC_LITERAL(5, 59, 8), // "canRaise"
QT_MOC_LITERAL(6, 68, 23), // "canSetFullscreenChanged"
QT_MOC_LITERAL(7, 92, 16), // "canSetFullscreen"
QT_MOC_LITERAL(8, 109, 19), // "desktopEntryChanged"
QT_MOC_LITERAL(9, 129, 12), // "desktopEntry"
QT_MOC_LITERAL(10, 142, 17), // "fullscreenChanged"
QT_MOC_LITERAL(11, 160, 10), // "fullscreen"
QT_MOC_LITERAL(12, 171, 19), // "hasTrackListChanged"
QT_MOC_LITERAL(13, 191, 12), // "hasTrackList"
QT_MOC_LITERAL(14, 204, 15), // "identityChanged"
QT_MOC_LITERAL(15, 220, 8), // "identity"
QT_MOC_LITERAL(16, 229, 25), // "supportedMimeTypesChanged"
QT_MOC_LITERAL(17, 255, 18), // "supportedMimeTypes"
QT_MOC_LITERAL(18, 274, 26), // "supportedUriSchemesChanged"
QT_MOC_LITERAL(19, 301, 19), // "supportedUriSchemes"
QT_MOC_LITERAL(20, 321, 4), // "Quit"
QT_MOC_LITERAL(21, 326, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(22, 346, 5), // "Raise"
QT_MOC_LITERAL(23, 352, 17), // "onPropertyChanged"
QT_MOC_LITERAL(24, 370, 12), // "propertyName"
QT_MOC_LITERAL(25, 383, 5), // "value"
QT_MOC_LITERAL(26, 389, 7), // "CanQuit"
QT_MOC_LITERAL(27, 397, 8), // "CanRaise"
QT_MOC_LITERAL(28, 406, 16), // "CanSetFullscreen"
QT_MOC_LITERAL(29, 423, 12), // "DesktopEntry"
QT_MOC_LITERAL(30, 436, 10), // "Fullscreen"
QT_MOC_LITERAL(31, 447, 12), // "HasTrackList"
QT_MOC_LITERAL(32, 460, 8), // "Identity"
QT_MOC_LITERAL(33, 469, 18), // "SupportedMimeTypes"
QT_MOC_LITERAL(34, 488, 19) // "SupportedUriSchemes"

    },
    "MprisRootInterface\0canQuitChanged\0\0"
    "canQuit\0canRaiseChanged\0canRaise\0"
    "canSetFullscreenChanged\0canSetFullscreen\0"
    "desktopEntryChanged\0desktopEntry\0"
    "fullscreenChanged\0fullscreen\0"
    "hasTrackListChanged\0hasTrackList\0"
    "identityChanged\0identity\0"
    "supportedMimeTypesChanged\0supportedMimeTypes\0"
    "supportedUriSchemesChanged\0"
    "supportedUriSchemes\0Quit\0QDBusPendingReply<>\0"
    "Raise\0onPropertyChanged\0propertyName\0"
    "value\0CanQuit\0CanRaise\0CanSetFullscreen\0"
    "DesktopEntry\0Fullscreen\0HasTrackList\0"
    "Identity\0SupportedMimeTypes\0"
    "SupportedUriSchemes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MprisRootInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       9,  108, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      10,    1,   86,    2, 0x06 /* Public */,
      12,    1,   89,    2, 0x06 /* Public */,
      14,    1,   92,    2, 0x06 /* Public */,
      16,    1,   95,    2, 0x06 /* Public */,
      18,    1,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  101,    2, 0x0a /* Public */,
      22,    0,  102,    2, 0x0a /* Public */,
      23,    2,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QStringList,   17,
    QMetaType::Void, QMetaType::QStringList,   19,

 // slots: parameters
    0x80000000 | 21,
    0x80000000 | 21,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   24,   25,

 // properties: name, type, flags
      26, QMetaType::Bool, 0x00495001,
      27, QMetaType::Bool, 0x00495001,
      28, QMetaType::Bool, 0x00495001,
      29, QMetaType::QString, 0x00495001,
      30, QMetaType::Bool, 0x00495103,
      31, QMetaType::Bool, 0x00495001,
      32, QMetaType::QString, 0x00495001,
      33, QMetaType::QStringList, 0x00495001,
      34, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

       0        // eod
};

void MprisRootInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MprisRootInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->canQuitChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->canRaiseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canSetFullscreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->desktopEntryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->fullscreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->hasTrackListChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->identityChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->supportedMimeTypesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 8: _t->supportedUriSchemesChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 9: { QDBusPendingReply<> _r = _t->Quit();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QDBusPendingReply<> _r = _t->Raise();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->onPropertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MprisRootInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisRootInterface::canQuitChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MprisRootInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisRootInterface::canRaiseChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MprisRootInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisRootInterface::canSetFullscreenChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MprisRootInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisRootInterface::desktopEntryChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MprisRootInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisRootInterface::fullscreenChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MprisRootInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisRootInterface::hasTrackListChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MprisRootInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisRootInterface::identityChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MprisRootInterface::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisRootInterface::supportedMimeTypesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MprisRootInterface::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisRootInterface::supportedUriSchemesChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MprisRootInterface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canQuit(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canRaise(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canSetFullscreen(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->desktopEntry(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->fullscreen(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->hasTrackList(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->identity(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->supportedMimeTypes(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->supportedUriSchemes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MprisRootInterface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setFullscreen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MprisRootInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<DBusExtendedAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_MprisRootInterface.data,
    qt_meta_data_MprisRootInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MprisRootInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MprisRootInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MprisRootInterface.stringdata0))
        return static_cast<void*>(this);
    return DBusExtendedAbstractInterface::qt_metacast(_clname);
}

int MprisRootInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DBusExtendedAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MprisRootInterface::canQuitChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MprisRootInterface::canRaiseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MprisRootInterface::canSetFullscreenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MprisRootInterface::desktopEntryChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MprisRootInterface::fullscreenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MprisRootInterface::hasTrackListChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MprisRootInterface::identityChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MprisRootInterface::supportedMimeTypesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MprisRootInterface::supportedUriSchemesChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
struct qt_meta_stringdata_MprisPlayerInterface_t {
    QByteArrayData data[64];
    char stringdata0[726];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MprisPlayerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MprisPlayerInterface_t qt_meta_stringdata_MprisPlayerInterface = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MprisPlayerInterface"
QT_MOC_LITERAL(1, 21, 17), // "canControlChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10), // "canControl"
QT_MOC_LITERAL(4, 51, 16), // "canGoNextChanged"
QT_MOC_LITERAL(5, 68, 9), // "canGoNext"
QT_MOC_LITERAL(6, 78, 20), // "canGoPreviousChanged"
QT_MOC_LITERAL(7, 99, 13), // "canGoPrevious"
QT_MOC_LITERAL(8, 113, 15), // "canPauseChanged"
QT_MOC_LITERAL(9, 129, 8), // "canPause"
QT_MOC_LITERAL(10, 138, 14), // "canPlayChanged"
QT_MOC_LITERAL(11, 153, 7), // "canPlay"
QT_MOC_LITERAL(12, 161, 14), // "canSeekChanged"
QT_MOC_LITERAL(13, 176, 7), // "canSeek"
QT_MOC_LITERAL(14, 184, 17), // "loopStatusChanged"
QT_MOC_LITERAL(15, 202, 10), // "loopStatus"
QT_MOC_LITERAL(16, 213, 18), // "maximumRateChanged"
QT_MOC_LITERAL(17, 232, 11), // "maximumRate"
QT_MOC_LITERAL(18, 244, 15), // "metadataChanged"
QT_MOC_LITERAL(19, 260, 8), // "metadata"
QT_MOC_LITERAL(20, 269, 18), // "minimumRateChanged"
QT_MOC_LITERAL(21, 288, 11), // "minimumRate"
QT_MOC_LITERAL(22, 300, 21), // "playbackStatusChanged"
QT_MOC_LITERAL(23, 322, 14), // "playbackStatus"
QT_MOC_LITERAL(24, 337, 15), // "positionChanged"
QT_MOC_LITERAL(25, 353, 4), // "rate"
QT_MOC_LITERAL(26, 358, 11), // "rateChanged"
QT_MOC_LITERAL(27, 370, 14), // "shuffleChanged"
QT_MOC_LITERAL(28, 385, 7), // "shuffle"
QT_MOC_LITERAL(29, 393, 13), // "volumeChanged"
QT_MOC_LITERAL(30, 407, 6), // "volume"
QT_MOC_LITERAL(31, 414, 6), // "seeked"
QT_MOC_LITERAL(32, 421, 8), // "Position"
QT_MOC_LITERAL(33, 430, 4), // "Next"
QT_MOC_LITERAL(34, 435, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(35, 455, 7), // "OpenUri"
QT_MOC_LITERAL(36, 463, 3), // "Uri"
QT_MOC_LITERAL(37, 467, 5), // "Pause"
QT_MOC_LITERAL(38, 473, 4), // "Play"
QT_MOC_LITERAL(39, 478, 9), // "PlayPause"
QT_MOC_LITERAL(40, 488, 8), // "Previous"
QT_MOC_LITERAL(41, 497, 4), // "Seek"
QT_MOC_LITERAL(42, 502, 6), // "Offset"
QT_MOC_LITERAL(43, 509, 11), // "SetPosition"
QT_MOC_LITERAL(44, 521, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(45, 537, 7), // "TrackId"
QT_MOC_LITERAL(46, 545, 4), // "Stop"
QT_MOC_LITERAL(47, 550, 17), // "onPropertyChanged"
QT_MOC_LITERAL(48, 568, 12), // "propertyName"
QT_MOC_LITERAL(49, 581, 5), // "value"
QT_MOC_LITERAL(50, 587, 10), // "CanControl"
QT_MOC_LITERAL(51, 598, 9), // "CanGoNext"
QT_MOC_LITERAL(52, 608, 13), // "CanGoPrevious"
QT_MOC_LITERAL(53, 622, 8), // "CanPause"
QT_MOC_LITERAL(54, 631, 7), // "CanPlay"
QT_MOC_LITERAL(55, 639, 7), // "CanSeek"
QT_MOC_LITERAL(56, 647, 10), // "LoopStatus"
QT_MOC_LITERAL(57, 658, 11), // "MaximumRate"
QT_MOC_LITERAL(58, 670, 8), // "Metadata"
QT_MOC_LITERAL(59, 679, 11), // "MinimumRate"
QT_MOC_LITERAL(60, 691, 14), // "PlaybackStatus"
QT_MOC_LITERAL(61, 706, 4), // "Rate"
QT_MOC_LITERAL(62, 711, 7), // "Shuffle"
QT_MOC_LITERAL(63, 719, 6) // "Volume"

    },
    "MprisPlayerInterface\0canControlChanged\0"
    "\0canControl\0canGoNextChanged\0canGoNext\0"
    "canGoPreviousChanged\0canGoPrevious\0"
    "canPauseChanged\0canPause\0canPlayChanged\0"
    "canPlay\0canSeekChanged\0canSeek\0"
    "loopStatusChanged\0loopStatus\0"
    "maximumRateChanged\0maximumRate\0"
    "metadataChanged\0metadata\0minimumRateChanged\0"
    "minimumRate\0playbackStatusChanged\0"
    "playbackStatus\0positionChanged\0rate\0"
    "rateChanged\0shuffleChanged\0shuffle\0"
    "volumeChanged\0volume\0seeked\0Position\0"
    "Next\0QDBusPendingReply<>\0OpenUri\0Uri\0"
    "Pause\0Play\0PlayPause\0Previous\0Seek\0"
    "Offset\0SetPosition\0QDBusObjectPath\0"
    "TrackId\0Stop\0onPropertyChanged\0"
    "propertyName\0value\0CanControl\0CanGoNext\0"
    "CanGoPrevious\0CanPause\0CanPlay\0CanSeek\0"
    "LoopStatus\0MaximumRate\0Metadata\0"
    "MinimumRate\0PlaybackStatus\0Rate\0Shuffle\0"
    "Volume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MprisPlayerInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      15,  214, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       4,    1,  147,    2, 0x06 /* Public */,
       6,    1,  150,    2, 0x06 /* Public */,
       8,    1,  153,    2, 0x06 /* Public */,
      10,    1,  156,    2, 0x06 /* Public */,
      12,    1,  159,    2, 0x06 /* Public */,
      14,    1,  162,    2, 0x06 /* Public */,
      16,    1,  165,    2, 0x06 /* Public */,
      18,    1,  168,    2, 0x06 /* Public */,
      20,    1,  171,    2, 0x06 /* Public */,
      22,    1,  174,    2, 0x06 /* Public */,
      24,    1,  177,    2, 0x06 /* Public */,
      26,    1,  180,    2, 0x06 /* Public */,
      27,    1,  183,    2, 0x06 /* Public */,
      29,    1,  186,    2, 0x06 /* Public */,
      31,    1,  189,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    0,  192,    2, 0x0a /* Public */,
      35,    1,  193,    2, 0x0a /* Public */,
      37,    0,  196,    2, 0x0a /* Public */,
      38,    0,  197,    2, 0x0a /* Public */,
      39,    0,  198,    2, 0x0a /* Public */,
      40,    0,  199,    2, 0x0a /* Public */,
      41,    1,  200,    2, 0x0a /* Public */,
      43,    2,  203,    2, 0x0a /* Public */,
      46,    0,  208,    2, 0x0a /* Public */,
      47,    2,  209,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::QVariantMap,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::LongLong,   25,
    QMetaType::Void, QMetaType::Double,   25,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void, QMetaType::LongLong,   32,

 // slots: parameters
    0x80000000 | 34,
    0x80000000 | 34, QMetaType::QString,   36,
    0x80000000 | 34,
    0x80000000 | 34,
    0x80000000 | 34,
    0x80000000 | 34,
    0x80000000 | 34, QMetaType::LongLong,   42,
    0x80000000 | 34, 0x80000000 | 44, QMetaType::LongLong,   45,   32,
    0x80000000 | 34,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   48,   49,

 // properties: name, type, flags
      50, QMetaType::Bool, 0x00495001,
      51, QMetaType::Bool, 0x00495001,
      52, QMetaType::Bool, 0x00495001,
      53, QMetaType::Bool, 0x00495001,
      54, QMetaType::Bool, 0x00495001,
      55, QMetaType::Bool, 0x00495001,
      56, QMetaType::QString, 0x00495103,
      57, QMetaType::Double, 0x00495001,
      58, QMetaType::QVariantMap, 0x00495001,
      59, QMetaType::Double, 0x00495001,
      60, QMetaType::QString, 0x00495001,
      32, QMetaType::LongLong, 0x00495001,
      61, QMetaType::Double, 0x00495103,
      62, QMetaType::Bool, 0x00495103,
      63, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,

       0        // eod
};

void MprisPlayerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MprisPlayerInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->canControlChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->canGoNextChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canGoPreviousChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canPauseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->canPlayChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->canSeekChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->loopStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->maximumRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->metadataChanged((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 9: _t->minimumRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->playbackStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->positionChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 12: _t->rateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->shuffleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->volumeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->seeked((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 16: { QDBusPendingReply<> _r = _t->Next();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 17: { QDBusPendingReply<> _r = _t->OpenUri((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 18: { QDBusPendingReply<> _r = _t->Pause();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 19: { QDBusPendingReply<> _r = _t->Play();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 20: { QDBusPendingReply<> _r = _t->PlayPause();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 21: { QDBusPendingReply<> _r = _t->Previous();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 22: { QDBusPendingReply<> _r = _t->Seek((*reinterpret_cast< qlonglong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 23: { QDBusPendingReply<> _r = _t->SetPosition((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 24: { QDBusPendingReply<> _r = _t->Stop();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->onPropertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MprisPlayerInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::canControlChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::canGoNextChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::canGoPreviousChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::canPauseChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::canPlayChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::canSeekChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::loopStatusChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::maximumRateChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::metadataChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::minimumRateChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::playbackStatusChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::positionChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::rateChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::shuffleChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::volumeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MprisPlayerInterface::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayerInterface::seeked)) {
                *result = 15;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MprisPlayerInterface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->canControl(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canGoNext(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canGoPrevious(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canPause(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->canPlay(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->canSeek(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->loopStatus(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->maximumRate(); break;
        case 8: *reinterpret_cast< QVariantMap*>(_v) = _t->metadata(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->minimumRate(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->playbackStatus(); break;
        case 11: *reinterpret_cast< qlonglong*>(_v) = _t->position(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->rate(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->shuffle(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->volume(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MprisPlayerInterface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setLoopStatus(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setRate(*reinterpret_cast< double*>(_v)); break;
        case 13: _t->setShuffle(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setVolume(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MprisPlayerInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<DBusExtendedAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_MprisPlayerInterface.data,
    qt_meta_data_MprisPlayerInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MprisPlayerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MprisPlayerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MprisPlayerInterface.stringdata0))
        return static_cast<void*>(this);
    return DBusExtendedAbstractInterface::qt_metacast(_clname);
}

int MprisPlayerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DBusExtendedAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MprisPlayerInterface::canControlChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MprisPlayerInterface::canGoNextChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MprisPlayerInterface::canGoPreviousChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MprisPlayerInterface::canPauseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MprisPlayerInterface::canPlayChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MprisPlayerInterface::canSeekChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MprisPlayerInterface::loopStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MprisPlayerInterface::maximumRateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MprisPlayerInterface::metadataChanged(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MprisPlayerInterface::minimumRateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MprisPlayerInterface::playbackStatusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MprisPlayerInterface::positionChanged(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MprisPlayerInterface::rateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MprisPlayerInterface::shuffleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MprisPlayerInterface::volumeChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MprisPlayerInterface::seeked(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
