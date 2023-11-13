/****************************************************************************
** Meta object code from reading C++ file 'mpriscontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qtmpris/src/mpriscontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpriscontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MprisController_t {
    QByteArrayData data[68];
    char stringdata0[1021];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MprisController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MprisController_t qt_meta_stringdata_MprisController = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MprisController"
QT_MOC_LITERAL(1, 16, 14), // "canQuitChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "canRaiseChanged"
QT_MOC_LITERAL(4, 48, 23), // "canSetFullscreenChanged"
QT_MOC_LITERAL(5, 72, 19), // "desktopEntryChanged"
QT_MOC_LITERAL(6, 92, 17), // "fullscreenChanged"
QT_MOC_LITERAL(7, 110, 19), // "hasTrackListChanged"
QT_MOC_LITERAL(8, 130, 15), // "identityChanged"
QT_MOC_LITERAL(9, 146, 26), // "supportedUriSchemesChanged"
QT_MOC_LITERAL(10, 173, 25), // "supportedMimeTypesChanged"
QT_MOC_LITERAL(11, 199, 17), // "canControlChanged"
QT_MOC_LITERAL(12, 217, 16), // "canGoNextChanged"
QT_MOC_LITERAL(13, 234, 20), // "canGoPreviousChanged"
QT_MOC_LITERAL(14, 255, 15), // "canPauseChanged"
QT_MOC_LITERAL(15, 271, 14), // "canPlayChanged"
QT_MOC_LITERAL(16, 286, 14), // "canSeekChanged"
QT_MOC_LITERAL(17, 301, 17), // "loopStatusChanged"
QT_MOC_LITERAL(18, 319, 18), // "maximumRateChanged"
QT_MOC_LITERAL(19, 338, 15), // "metadataChanged"
QT_MOC_LITERAL(20, 354, 18), // "minimumRateChanged"
QT_MOC_LITERAL(21, 373, 21), // "playbackStatusChanged"
QT_MOC_LITERAL(22, 395, 15), // "positionChanged"
QT_MOC_LITERAL(23, 411, 8), // "position"
QT_MOC_LITERAL(24, 420, 11), // "rateChanged"
QT_MOC_LITERAL(25, 432, 14), // "shuffleChanged"
QT_MOC_LITERAL(26, 447, 13), // "volumeChanged"
QT_MOC_LITERAL(27, 461, 6), // "seeked"
QT_MOC_LITERAL(28, 468, 7), // "service"
QT_MOC_LITERAL(29, 476, 7), // "canQuit"
QT_MOC_LITERAL(30, 484, 8), // "canRaise"
QT_MOC_LITERAL(31, 493, 16), // "canSetFullscreen"
QT_MOC_LITERAL(32, 510, 12), // "desktopEntry"
QT_MOC_LITERAL(33, 523, 10), // "fullscreen"
QT_MOC_LITERAL(34, 534, 13), // "setFullscreen"
QT_MOC_LITERAL(35, 548, 12), // "hasTrackList"
QT_MOC_LITERAL(36, 561, 8), // "identity"
QT_MOC_LITERAL(37, 570, 19), // "supportedUriSchemes"
QT_MOC_LITERAL(38, 590, 18), // "supportedMimeTypes"
QT_MOC_LITERAL(39, 609, 10), // "canControl"
QT_MOC_LITERAL(40, 620, 9), // "canGoNext"
QT_MOC_LITERAL(41, 630, 13), // "canGoPrevious"
QT_MOC_LITERAL(42, 644, 8), // "canPause"
QT_MOC_LITERAL(43, 653, 7), // "canPlay"
QT_MOC_LITERAL(44, 661, 7), // "canSeek"
QT_MOC_LITERAL(45, 669, 10), // "loopStatus"
QT_MOC_LITERAL(46, 680, 17), // "Mpris::LoopStatus"
QT_MOC_LITERAL(47, 698, 13), // "setLoopStatus"
QT_MOC_LITERAL(48, 712, 11), // "maximumRate"
QT_MOC_LITERAL(49, 724, 8), // "metadata"
QT_MOC_LITERAL(50, 733, 11), // "minimumRate"
QT_MOC_LITERAL(51, 745, 14), // "playbackStatus"
QT_MOC_LITERAL(52, 760, 21), // "Mpris::PlaybackStatus"
QT_MOC_LITERAL(53, 782, 15), // "requestPosition"
QT_MOC_LITERAL(54, 798, 4), // "rate"
QT_MOC_LITERAL(55, 803, 7), // "setRate"
QT_MOC_LITERAL(56, 811, 7), // "shuffle"
QT_MOC_LITERAL(57, 819, 10), // "setShuffle"
QT_MOC_LITERAL(58, 830, 6), // "volume"
QT_MOC_LITERAL(59, 837, 9), // "setVolume"
QT_MOC_LITERAL(60, 847, 35), // "onAsyncGetAllRootPropertiesFi..."
QT_MOC_LITERAL(61, 883, 37), // "onAsyncGetAllPlayerProperties..."
QT_MOC_LITERAL(62, 921, 19), // "onCanControlChanged"
QT_MOC_LITERAL(63, 941, 17), // "onPositionChanged"
QT_MOC_LITERAL(64, 959, 9), // "aPosition"
QT_MOC_LITERAL(65, 969, 21), // "onFinishedPendingCall"
QT_MOC_LITERAL(66, 991, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(67, 1016, 4) // "call"

    },
    "MprisController\0canQuitChanged\0\0"
    "canRaiseChanged\0canSetFullscreenChanged\0"
    "desktopEntryChanged\0fullscreenChanged\0"
    "hasTrackListChanged\0identityChanged\0"
    "supportedUriSchemesChanged\0"
    "supportedMimeTypesChanged\0canControlChanged\0"
    "canGoNextChanged\0canGoPreviousChanged\0"
    "canPauseChanged\0canPlayChanged\0"
    "canSeekChanged\0loopStatusChanged\0"
    "maximumRateChanged\0metadataChanged\0"
    "minimumRateChanged\0playbackStatusChanged\0"
    "positionChanged\0position\0rateChanged\0"
    "shuffleChanged\0volumeChanged\0seeked\0"
    "service\0canQuit\0canRaise\0canSetFullscreen\0"
    "desktopEntry\0fullscreen\0setFullscreen\0"
    "hasTrackList\0identity\0supportedUriSchemes\0"
    "supportedMimeTypes\0canControl\0canGoNext\0"
    "canGoPrevious\0canPause\0canPlay\0canSeek\0"
    "loopStatus\0Mpris::LoopStatus\0setLoopStatus\0"
    "maximumRate\0metadata\0minimumRate\0"
    "playbackStatus\0Mpris::PlaybackStatus\0"
    "requestPosition\0rate\0setRate\0shuffle\0"
    "setShuffle\0volume\0setVolume\0"
    "onAsyncGetAllRootPropertiesFinished\0"
    "onAsyncGetAllPlayerPropertiesFinished\0"
    "onCanControlChanged\0onPositionChanged\0"
    "aPosition\0onFinishedPendingCall\0"
    "QDBusPendingCallWatcher*\0call"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MprisController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
      25,  398, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  319,    2, 0x06 /* Public */,
       3,    0,  320,    2, 0x06 /* Public */,
       4,    0,  321,    2, 0x06 /* Public */,
       5,    0,  322,    2, 0x06 /* Public */,
       6,    0,  323,    2, 0x06 /* Public */,
       7,    0,  324,    2, 0x06 /* Public */,
       8,    0,  325,    2, 0x06 /* Public */,
       9,    0,  326,    2, 0x06 /* Public */,
      10,    0,  327,    2, 0x06 /* Public */,
      11,    0,  328,    2, 0x06 /* Public */,
      12,    0,  329,    2, 0x06 /* Public */,
      13,    0,  330,    2, 0x06 /* Public */,
      14,    0,  331,    2, 0x06 /* Public */,
      15,    0,  332,    2, 0x06 /* Public */,
      16,    0,  333,    2, 0x06 /* Public */,
      17,    0,  334,    2, 0x06 /* Public */,
      18,    0,  335,    2, 0x06 /* Public */,
      19,    0,  336,    2, 0x06 /* Public */,
      20,    0,  337,    2, 0x06 /* Public */,
      21,    0,  338,    2, 0x06 /* Public */,
      22,    1,  339,    2, 0x06 /* Public */,
      24,    0,  342,    2, 0x06 /* Public */,
      25,    0,  343,    2, 0x06 /* Public */,
      26,    0,  344,    2, 0x06 /* Public */,
      27,    1,  345,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      28,    0,  348,    2, 0x0a /* Public */,
      29,    0,  349,    2, 0x0a /* Public */,
      30,    0,  350,    2, 0x0a /* Public */,
      31,    0,  351,    2, 0x0a /* Public */,
      32,    0,  352,    2, 0x0a /* Public */,
      33,    0,  353,    2, 0x0a /* Public */,
      34,    1,  354,    2, 0x0a /* Public */,
      35,    0,  357,    2, 0x0a /* Public */,
      36,    0,  358,    2, 0x0a /* Public */,
      37,    0,  359,    2, 0x0a /* Public */,
      38,    0,  360,    2, 0x0a /* Public */,
      39,    0,  361,    2, 0x0a /* Public */,
      40,    0,  362,    2, 0x0a /* Public */,
      41,    0,  363,    2, 0x0a /* Public */,
      42,    0,  364,    2, 0x0a /* Public */,
      43,    0,  365,    2, 0x0a /* Public */,
      44,    0,  366,    2, 0x0a /* Public */,
      45,    0,  367,    2, 0x0a /* Public */,
      47,    1,  368,    2, 0x0a /* Public */,
      48,    0,  371,    2, 0x0a /* Public */,
      49,    0,  372,    2, 0x0a /* Public */,
      50,    0,  373,    2, 0x0a /* Public */,
      51,    0,  374,    2, 0x0a /* Public */,
      23,    0,  375,    2, 0x0a /* Public */,
      53,    0,  376,    2, 0x0a /* Public */,
      54,    0,  377,    2, 0x0a /* Public */,
      55,    1,  378,    2, 0x0a /* Public */,
      56,    0,  381,    2, 0x0a /* Public */,
      57,    1,  382,    2, 0x0a /* Public */,
      58,    0,  385,    2, 0x0a /* Public */,
      59,    1,  386,    2, 0x0a /* Public */,
      60,    0,  389,    2, 0x09 /* Protected */,
      61,    0,  390,    2, 0x09 /* Protected */,
      62,    0,  391,    2, 0x09 /* Protected */,
      63,    1,  392,    2, 0x09 /* Protected */,
      65,    1,  395,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   23,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QStringList,
    QMetaType::QStringList,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 46,
    QMetaType::Void, 0x80000000 | 46,   45,
    QMetaType::Double,
    QMetaType::QVariantMap,
    QMetaType::Double,
    0x80000000 | 52,
    QMetaType::LongLong,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   54,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   64,
    QMetaType::Void, 0x80000000 | 66,   67,

 // properties: name, type, flags
      28, QMetaType::QString, 0x00095001,
      29, QMetaType::Bool, 0x00495001,
      30, QMetaType::Bool, 0x00495001,
      31, QMetaType::Bool, 0x00495001,
      32, QMetaType::QString, 0x00495001,
      33, QMetaType::Bool, 0x00495103,
      35, QMetaType::Bool, 0x00495001,
      36, QMetaType::QString, 0x00495001,
      37, QMetaType::QStringList, 0x00495001,
      38, QMetaType::QStringList, 0x00495001,
      39, QMetaType::Bool, 0x00495001,
      40, QMetaType::Bool, 0x00495001,
      41, QMetaType::Bool, 0x00495001,
      42, QMetaType::Bool, 0x00495001,
      43, QMetaType::Bool, 0x00495001,
      44, QMetaType::Bool, 0x00495001,
      45, 0x80000000 | 46, 0x0049510b,
      48, QMetaType::Double, 0x00495001,
      49, QMetaType::QVariantMap, 0x00495001,
      50, QMetaType::Double, 0x00495001,
      51, 0x80000000 | 52, 0x00495009,
      23, QMetaType::LongLong, 0x00095001,
      54, QMetaType::Double, 0x00495103,
      56, QMetaType::Bool, 0x00495103,
      58, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
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
      15,
      16,
      17,
      18,
      19,
       0,
      21,
      22,
      23,

       0        // eod
};

void MprisController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MprisController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->canQuitChanged(); break;
        case 1: _t->canRaiseChanged(); break;
        case 2: _t->canSetFullscreenChanged(); break;
        case 3: _t->desktopEntryChanged(); break;
        case 4: _t->fullscreenChanged(); break;
        case 5: _t->hasTrackListChanged(); break;
        case 6: _t->identityChanged(); break;
        case 7: _t->supportedUriSchemesChanged(); break;
        case 8: _t->supportedMimeTypesChanged(); break;
        case 9: _t->canControlChanged(); break;
        case 10: _t->canGoNextChanged(); break;
        case 11: _t->canGoPreviousChanged(); break;
        case 12: _t->canPauseChanged(); break;
        case 13: _t->canPlayChanged(); break;
        case 14: _t->canSeekChanged(); break;
        case 15: _t->loopStatusChanged(); break;
        case 16: _t->maximumRateChanged(); break;
        case 17: _t->metadataChanged(); break;
        case 18: _t->minimumRateChanged(); break;
        case 19: _t->playbackStatusChanged(); break;
        case 20: _t->positionChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 21: _t->rateChanged(); break;
        case 22: _t->shuffleChanged(); break;
        case 23: _t->volumeChanged(); break;
        case 24: _t->seeked((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 25: { QString _r = _t->service();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->canQuit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->canRaise();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->canSetFullscreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { QString _r = _t->desktopEntry();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->fullscreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->setFullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: { bool _r = _t->hasTrackList();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { QString _r = _t->identity();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 34: { QStringList _r = _t->supportedUriSchemes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 35: { QStringList _r = _t->supportedMimeTypes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->canControl();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->canGoNext();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { bool _r = _t->canGoPrevious();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->canPause();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->canPlay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { bool _r = _t->canSeek();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { Mpris::LoopStatus _r = _t->loopStatus();
            if (_a[0]) *reinterpret_cast< Mpris::LoopStatus*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->setLoopStatus((*reinterpret_cast< Mpris::LoopStatus(*)>(_a[1]))); break;
        case 44: { double _r = _t->maximumRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 45: { QVariantMap _r = _t->metadata();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 46: { double _r = _t->minimumRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 47: { Mpris::PlaybackStatus _r = _t->playbackStatus();
            if (_a[0]) *reinterpret_cast< Mpris::PlaybackStatus*>(_a[0]) = std::move(_r); }  break;
        case 48: { qlonglong _r = _t->position();
            if (_a[0]) *reinterpret_cast< qlonglong*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->requestPosition(); break;
        case 50: { double _r = _t->rate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 52: { bool _r = _t->shuffle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->setShuffle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: { double _r = _t->volume();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->setVolume((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 56: _t->onAsyncGetAllRootPropertiesFinished(); break;
        case 57: _t->onAsyncGetAllPlayerPropertiesFinished(); break;
        case 58: _t->onCanControlChanged(); break;
        case 59: _t->onPositionChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 60: _t->onFinishedPendingCall((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::canQuitChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::canRaiseChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::canSetFullscreenChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::desktopEntryChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::fullscreenChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::hasTrackListChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::identityChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::supportedUriSchemesChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::supportedMimeTypesChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::canControlChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::canGoNextChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::canGoPreviousChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::canPauseChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::canPlayChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::canSeekChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::loopStatusChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::maximumRateChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::metadataChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::minimumRateChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::playbackStatusChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MprisController::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::positionChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::rateChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::shuffleChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MprisController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::volumeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MprisController::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisController::seeked)) {
                *result = 24;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MprisController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->service(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->canQuit(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->canRaise(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canSetFullscreen(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->desktopEntry(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->fullscreen(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasTrackList(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->identity(); break;
        case 8: *reinterpret_cast< QStringList*>(_v) = _t->supportedUriSchemes(); break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->supportedMimeTypes(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->canControl(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->canGoNext(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->canGoPrevious(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->canPause(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->canPlay(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->canSeek(); break;
        case 16: *reinterpret_cast< Mpris::LoopStatus*>(_v) = _t->loopStatus(); break;
        case 17: *reinterpret_cast< double*>(_v) = _t->maximumRate(); break;
        case 18: *reinterpret_cast< QVariantMap*>(_v) = _t->metadata(); break;
        case 19: *reinterpret_cast< double*>(_v) = _t->minimumRate(); break;
        case 20: *reinterpret_cast< Mpris::PlaybackStatus*>(_v) = _t->playbackStatus(); break;
        case 21: *reinterpret_cast< qlonglong*>(_v) = _t->position(); break;
        case 22: *reinterpret_cast< double*>(_v) = _t->rate(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->shuffle(); break;
        case 24: *reinterpret_cast< double*>(_v) = _t->volume(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MprisController *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setFullscreen(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setLoopStatus(*reinterpret_cast< Mpris::LoopStatus*>(_v)); break;
        case 22: _t->setRate(*reinterpret_cast< double*>(_v)); break;
        case 23: _t->setShuffle(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setVolume(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_MprisController[] = {
    QMetaObject::SuperData::link<Mpris::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject MprisController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MprisController.data,
    qt_meta_data_MprisController,
    qt_static_metacall,
    qt_meta_extradata_MprisController,
    nullptr
} };


const QMetaObject *MprisController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MprisController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MprisController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MprisController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 61;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 25;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 25;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MprisController::canQuitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MprisController::canRaiseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MprisController::canSetFullscreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MprisController::desktopEntryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MprisController::fullscreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MprisController::hasTrackListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MprisController::identityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MprisController::supportedUriSchemesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MprisController::supportedMimeTypesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MprisController::canControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MprisController::canGoNextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MprisController::canGoPreviousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MprisController::canPauseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MprisController::canPlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MprisController::canSeekChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MprisController::loopStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MprisController::maximumRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MprisController::metadataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MprisController::minimumRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MprisController::playbackStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void MprisController::positionChanged(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MprisController::rateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MprisController::shuffleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MprisController::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MprisController::seeked(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
