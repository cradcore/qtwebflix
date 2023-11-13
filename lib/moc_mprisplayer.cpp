/****************************************************************************
** Meta object code from reading C++ file 'mprisplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qtmpris/src/mprisplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mprisplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MprisPlayer_t {
    QByteArrayData data[100];
    char stringdata0[1444];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MprisPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MprisPlayer_t qt_meta_stringdata_MprisPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MprisPlayer"
QT_MOC_LITERAL(1, 12, 18), // "serviceNameChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "canQuitChanged"
QT_MOC_LITERAL(4, 47, 15), // "canRaiseChanged"
QT_MOC_LITERAL(5, 63, 23), // "canSetFullscreenChanged"
QT_MOC_LITERAL(6, 87, 19), // "desktopEntryChanged"
QT_MOC_LITERAL(7, 107, 17), // "fullscreenChanged"
QT_MOC_LITERAL(8, 125, 19), // "hasTrackListChanged"
QT_MOC_LITERAL(9, 145, 15), // "identityChanged"
QT_MOC_LITERAL(10, 161, 26), // "supportedUriSchemesChanged"
QT_MOC_LITERAL(11, 188, 25), // "supportedMimeTypesChanged"
QT_MOC_LITERAL(12, 214, 19), // "fullscreenRequested"
QT_MOC_LITERAL(13, 234, 10), // "fullscreen"
QT_MOC_LITERAL(14, 245, 13), // "quitRequested"
QT_MOC_LITERAL(15, 259, 14), // "raiseRequested"
QT_MOC_LITERAL(16, 274, 17), // "canControlChanged"
QT_MOC_LITERAL(17, 292, 16), // "canGoNextChanged"
QT_MOC_LITERAL(18, 309, 20), // "canGoPreviousChanged"
QT_MOC_LITERAL(19, 330, 15), // "canPauseChanged"
QT_MOC_LITERAL(20, 346, 14), // "canPlayChanged"
QT_MOC_LITERAL(21, 361, 14), // "canSeekChanged"
QT_MOC_LITERAL(22, 376, 17), // "loopStatusChanged"
QT_MOC_LITERAL(23, 394, 18), // "maximumRateChanged"
QT_MOC_LITERAL(24, 413, 15), // "metadataChanged"
QT_MOC_LITERAL(25, 429, 18), // "minimumRateChanged"
QT_MOC_LITERAL(26, 448, 21), // "playbackStatusChanged"
QT_MOC_LITERAL(27, 470, 15), // "positionChanged"
QT_MOC_LITERAL(28, 486, 11), // "rateChanged"
QT_MOC_LITERAL(29, 498, 14), // "shuffleChanged"
QT_MOC_LITERAL(30, 513, 13), // "volumeChanged"
QT_MOC_LITERAL(31, 527, 19), // "loopStatusRequested"
QT_MOC_LITERAL(32, 547, 17), // "Mpris::LoopStatus"
QT_MOC_LITERAL(33, 565, 10), // "loopStatus"
QT_MOC_LITERAL(34, 576, 13), // "rateRequested"
QT_MOC_LITERAL(35, 590, 4), // "rate"
QT_MOC_LITERAL(36, 595, 16), // "shuffleRequested"
QT_MOC_LITERAL(37, 612, 7), // "shuffle"
QT_MOC_LITERAL(38, 620, 15), // "volumeRequested"
QT_MOC_LITERAL(39, 636, 6), // "volume"
QT_MOC_LITERAL(40, 643, 13), // "nextRequested"
QT_MOC_LITERAL(41, 657, 16), // "openUriRequested"
QT_MOC_LITERAL(42, 674, 3), // "url"
QT_MOC_LITERAL(43, 678, 14), // "pauseRequested"
QT_MOC_LITERAL(44, 693, 13), // "playRequested"
QT_MOC_LITERAL(45, 707, 18), // "playPauseRequested"
QT_MOC_LITERAL(46, 726, 17), // "previousRequested"
QT_MOC_LITERAL(47, 744, 13), // "seekRequested"
QT_MOC_LITERAL(48, 758, 6), // "offset"
QT_MOC_LITERAL(49, 765, 6), // "seeked"
QT_MOC_LITERAL(50, 772, 8), // "position"
QT_MOC_LITERAL(51, 781, 20), // "setPositionRequested"
QT_MOC_LITERAL(52, 802, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(53, 818, 7), // "trackId"
QT_MOC_LITERAL(54, 826, 13), // "stopRequested"
QT_MOC_LITERAL(55, 840, 11), // "serviceName"
QT_MOC_LITERAL(56, 852, 14), // "setServiceName"
QT_MOC_LITERAL(57, 867, 7), // "canQuit"
QT_MOC_LITERAL(58, 875, 10), // "setCanQuit"
QT_MOC_LITERAL(59, 886, 8), // "canRaise"
QT_MOC_LITERAL(60, 895, 11), // "setCanRaise"
QT_MOC_LITERAL(61, 907, 16), // "canSetFullscreen"
QT_MOC_LITERAL(62, 924, 19), // "setCanSetFullscreen"
QT_MOC_LITERAL(63, 944, 12), // "desktopEntry"
QT_MOC_LITERAL(64, 957, 15), // "setDesktopEntry"
QT_MOC_LITERAL(65, 973, 13), // "setFullscreen"
QT_MOC_LITERAL(66, 987, 12), // "hasTrackList"
QT_MOC_LITERAL(67, 1000, 15), // "setHasTrackList"
QT_MOC_LITERAL(68, 1016, 8), // "identity"
QT_MOC_LITERAL(69, 1025, 11), // "setIdentity"
QT_MOC_LITERAL(70, 1037, 19), // "supportedUriSchemes"
QT_MOC_LITERAL(71, 1057, 22), // "setSupportedUriSchemes"
QT_MOC_LITERAL(72, 1080, 18), // "supportedMimeTypes"
QT_MOC_LITERAL(73, 1099, 21), // "setSupportedMimeTypes"
QT_MOC_LITERAL(74, 1121, 10), // "canControl"
QT_MOC_LITERAL(75, 1132, 13), // "setCanControl"
QT_MOC_LITERAL(76, 1146, 9), // "canGoNext"
QT_MOC_LITERAL(77, 1156, 12), // "setCanGoNext"
QT_MOC_LITERAL(78, 1169, 13), // "canGoPrevious"
QT_MOC_LITERAL(79, 1183, 16), // "setCanGoPrevious"
QT_MOC_LITERAL(80, 1200, 8), // "canPause"
QT_MOC_LITERAL(81, 1209, 11), // "setCanPause"
QT_MOC_LITERAL(82, 1221, 7), // "canPlay"
QT_MOC_LITERAL(83, 1229, 10), // "setCanPlay"
QT_MOC_LITERAL(84, 1240, 7), // "canSeek"
QT_MOC_LITERAL(85, 1248, 10), // "setCanSeek"
QT_MOC_LITERAL(86, 1259, 13), // "setLoopStatus"
QT_MOC_LITERAL(87, 1273, 11), // "maximumRate"
QT_MOC_LITERAL(88, 1285, 14), // "setMaximumRate"
QT_MOC_LITERAL(89, 1300, 8), // "metadata"
QT_MOC_LITERAL(90, 1309, 11), // "setMetadata"
QT_MOC_LITERAL(91, 1321, 11), // "minimumRate"
QT_MOC_LITERAL(92, 1333, 14), // "setMinimumRate"
QT_MOC_LITERAL(93, 1348, 14), // "playbackStatus"
QT_MOC_LITERAL(94, 1363, 21), // "Mpris::PlaybackStatus"
QT_MOC_LITERAL(95, 1385, 17), // "setPlaybackStatus"
QT_MOC_LITERAL(96, 1403, 11), // "setPosition"
QT_MOC_LITERAL(97, 1415, 7), // "setRate"
QT_MOC_LITERAL(98, 1423, 10), // "setShuffle"
QT_MOC_LITERAL(99, 1434, 9) // "setVolume"

    },
    "MprisPlayer\0serviceNameChanged\0\0"
    "canQuitChanged\0canRaiseChanged\0"
    "canSetFullscreenChanged\0desktopEntryChanged\0"
    "fullscreenChanged\0hasTrackListChanged\0"
    "identityChanged\0supportedUriSchemesChanged\0"
    "supportedMimeTypesChanged\0fullscreenRequested\0"
    "fullscreen\0quitRequested\0raiseRequested\0"
    "canControlChanged\0canGoNextChanged\0"
    "canGoPreviousChanged\0canPauseChanged\0"
    "canPlayChanged\0canSeekChanged\0"
    "loopStatusChanged\0maximumRateChanged\0"
    "metadataChanged\0minimumRateChanged\0"
    "playbackStatusChanged\0positionChanged\0"
    "rateChanged\0shuffleChanged\0volumeChanged\0"
    "loopStatusRequested\0Mpris::LoopStatus\0"
    "loopStatus\0rateRequested\0rate\0"
    "shuffleRequested\0shuffle\0volumeRequested\0"
    "volume\0nextRequested\0openUriRequested\0"
    "url\0pauseRequested\0playRequested\0"
    "playPauseRequested\0previousRequested\0"
    "seekRequested\0offset\0seeked\0position\0"
    "setPositionRequested\0QDBusObjectPath\0"
    "trackId\0stopRequested\0serviceName\0"
    "setServiceName\0canQuit\0setCanQuit\0"
    "canRaise\0setCanRaise\0canSetFullscreen\0"
    "setCanSetFullscreen\0desktopEntry\0"
    "setDesktopEntry\0setFullscreen\0"
    "hasTrackList\0setHasTrackList\0identity\0"
    "setIdentity\0supportedUriSchemes\0"
    "setSupportedUriSchemes\0supportedMimeTypes\0"
    "setSupportedMimeTypes\0canControl\0"
    "setCanControl\0canGoNext\0setCanGoNext\0"
    "canGoPrevious\0setCanGoPrevious\0canPause\0"
    "setCanPause\0canPlay\0setCanPlay\0canSeek\0"
    "setCanSeek\0setLoopStatus\0maximumRate\0"
    "setMaximumRate\0metadata\0setMetadata\0"
    "minimumRate\0setMinimumRate\0playbackStatus\0"
    "Mpris::PlaybackStatus\0setPlaybackStatus\0"
    "setPosition\0setRate\0setShuffle\0setVolume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MprisPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      92,   14, // methods
      25,  636, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      42,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  474,    2, 0x06 /* Public */,
       3,    0,  475,    2, 0x06 /* Public */,
       4,    0,  476,    2, 0x06 /* Public */,
       5,    0,  477,    2, 0x06 /* Public */,
       6,    0,  478,    2, 0x06 /* Public */,
       7,    0,  479,    2, 0x06 /* Public */,
       8,    0,  480,    2, 0x06 /* Public */,
       9,    0,  481,    2, 0x06 /* Public */,
      10,    0,  482,    2, 0x06 /* Public */,
      11,    0,  483,    2, 0x06 /* Public */,
      12,    1,  484,    2, 0x06 /* Public */,
      14,    0,  487,    2, 0x06 /* Public */,
      15,    0,  488,    2, 0x06 /* Public */,
      16,    0,  489,    2, 0x06 /* Public */,
      17,    0,  490,    2, 0x06 /* Public */,
      18,    0,  491,    2, 0x06 /* Public */,
      19,    0,  492,    2, 0x06 /* Public */,
      20,    0,  493,    2, 0x06 /* Public */,
      21,    0,  494,    2, 0x06 /* Public */,
      22,    0,  495,    2, 0x06 /* Public */,
      23,    0,  496,    2, 0x06 /* Public */,
      24,    0,  497,    2, 0x06 /* Public */,
      25,    0,  498,    2, 0x06 /* Public */,
      26,    0,  499,    2, 0x06 /* Public */,
      27,    0,  500,    2, 0x06 /* Public */,
      28,    0,  501,    2, 0x06 /* Public */,
      29,    0,  502,    2, 0x06 /* Public */,
      30,    0,  503,    2, 0x06 /* Public */,
      31,    1,  504,    2, 0x06 /* Public */,
      34,    1,  507,    2, 0x06 /* Public */,
      36,    1,  510,    2, 0x06 /* Public */,
      38,    1,  513,    2, 0x06 /* Public */,
      40,    0,  516,    2, 0x06 /* Public */,
      41,    1,  517,    2, 0x06 /* Public */,
      43,    0,  520,    2, 0x06 /* Public */,
      44,    0,  521,    2, 0x06 /* Public */,
      45,    0,  522,    2, 0x06 /* Public */,
      46,    0,  523,    2, 0x06 /* Public */,
      47,    1,  524,    2, 0x06 /* Public */,
      49,    1,  527,    2, 0x06 /* Public */,
      51,    2,  530,    2, 0x06 /* Public */,
      54,    0,  535,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      55,    0,  536,    2, 0x0a /* Public */,
      56,    1,  537,    2, 0x0a /* Public */,
      57,    0,  540,    2, 0x0a /* Public */,
      58,    1,  541,    2, 0x0a /* Public */,
      59,    0,  544,    2, 0x0a /* Public */,
      60,    1,  545,    2, 0x0a /* Public */,
      61,    0,  548,    2, 0x0a /* Public */,
      62,    1,  549,    2, 0x0a /* Public */,
      63,    0,  552,    2, 0x0a /* Public */,
      64,    1,  553,    2, 0x0a /* Public */,
      13,    0,  556,    2, 0x0a /* Public */,
      65,    1,  557,    2, 0x0a /* Public */,
      66,    0,  560,    2, 0x0a /* Public */,
      67,    1,  561,    2, 0x0a /* Public */,
      68,    0,  564,    2, 0x0a /* Public */,
      69,    1,  565,    2, 0x0a /* Public */,
      70,    0,  568,    2, 0x0a /* Public */,
      71,    1,  569,    2, 0x0a /* Public */,
      72,    0,  572,    2, 0x0a /* Public */,
      73,    1,  573,    2, 0x0a /* Public */,
      74,    0,  576,    2, 0x0a /* Public */,
      75,    1,  577,    2, 0x0a /* Public */,
      76,    0,  580,    2, 0x0a /* Public */,
      77,    1,  581,    2, 0x0a /* Public */,
      78,    0,  584,    2, 0x0a /* Public */,
      79,    1,  585,    2, 0x0a /* Public */,
      80,    0,  588,    2, 0x0a /* Public */,
      81,    1,  589,    2, 0x0a /* Public */,
      82,    0,  592,    2, 0x0a /* Public */,
      83,    1,  593,    2, 0x0a /* Public */,
      84,    0,  596,    2, 0x0a /* Public */,
      85,    1,  597,    2, 0x0a /* Public */,
      33,    0,  600,    2, 0x0a /* Public */,
      86,    1,  601,    2, 0x0a /* Public */,
      87,    0,  604,    2, 0x0a /* Public */,
      88,    1,  605,    2, 0x0a /* Public */,
      89,    0,  608,    2, 0x0a /* Public */,
      90,    1,  609,    2, 0x0a /* Public */,
      91,    0,  612,    2, 0x0a /* Public */,
      92,    1,  613,    2, 0x0a /* Public */,
      93,    0,  616,    2, 0x0a /* Public */,
      95,    1,  617,    2, 0x0a /* Public */,
      50,    0,  620,    2, 0x0a /* Public */,
      96,    1,  621,    2, 0x0a /* Public */,
      35,    0,  624,    2, 0x0a /* Public */,
      97,    1,  625,    2, 0x0a /* Public */,
      37,    0,  628,    2, 0x0a /* Public */,
      98,    1,  629,    2, 0x0a /* Public */,
      39,    0,  632,    2, 0x0a /* Public */,
      99,    1,  633,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Bool,   13,
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
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::Double,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Double,   39,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   48,
    QMetaType::Void, QMetaType::LongLong,   50,
    QMetaType::Void, 0x80000000 | 52, QMetaType::LongLong,   53,   50,
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   57,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   66,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QStringList,   70,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QStringList,   72,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   74,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   78,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   84,
    0x80000000 | 32,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   87,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::QVariantMap,   89,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   91,
    0x80000000 | 94,
    QMetaType::Void, 0x80000000 | 94,   93,
    QMetaType::LongLong,
    QMetaType::Void, QMetaType::LongLong,   50,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   35,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   39,

 // properties: name, type, flags
      55, QMetaType::QString, 0x00495103,
      57, QMetaType::Bool, 0x00495103,
      59, QMetaType::Bool, 0x00495103,
      61, QMetaType::Bool, 0x00495103,
      63, QMetaType::QString, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      66, QMetaType::Bool, 0x00495103,
      68, QMetaType::QString, 0x00495103,
      70, QMetaType::QStringList, 0x00495103,
      72, QMetaType::QStringList, 0x00495103,
      74, QMetaType::Bool, 0x00495103,
      76, QMetaType::Bool, 0x00495103,
      78, QMetaType::Bool, 0x00495103,
      80, QMetaType::Bool, 0x00495103,
      82, QMetaType::Bool, 0x00495103,
      84, QMetaType::Bool, 0x00495103,
      33, 0x80000000 | 32, 0x0049510b,
      87, QMetaType::Double, 0x00495103,
      89, QMetaType::QVariantMap, 0x00495103,
      91, QMetaType::Double, 0x00495103,
      93, 0x80000000 | 94, 0x0049510b,
      50, QMetaType::LongLong, 0x00495103,
      35, QMetaType::Double, 0x00495103,
      37, QMetaType::Bool, 0x00495103,
      39, QMetaType::Double, 0x00495103,

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
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,
      27,

       0        // eod
};

void MprisPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MprisPlayer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->serviceNameChanged(); break;
        case 1: _t->canQuitChanged(); break;
        case 2: _t->canRaiseChanged(); break;
        case 3: _t->canSetFullscreenChanged(); break;
        case 4: _t->desktopEntryChanged(); break;
        case 5: _t->fullscreenChanged(); break;
        case 6: _t->hasTrackListChanged(); break;
        case 7: _t->identityChanged(); break;
        case 8: _t->supportedUriSchemesChanged(); break;
        case 9: _t->supportedMimeTypesChanged(); break;
        case 10: _t->fullscreenRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->quitRequested(); break;
        case 12: _t->raiseRequested(); break;
        case 13: _t->canControlChanged(); break;
        case 14: _t->canGoNextChanged(); break;
        case 15: _t->canGoPreviousChanged(); break;
        case 16: _t->canPauseChanged(); break;
        case 17: _t->canPlayChanged(); break;
        case 18: _t->canSeekChanged(); break;
        case 19: _t->loopStatusChanged(); break;
        case 20: _t->maximumRateChanged(); break;
        case 21: _t->metadataChanged(); break;
        case 22: _t->minimumRateChanged(); break;
        case 23: _t->playbackStatusChanged(); break;
        case 24: _t->positionChanged(); break;
        case 25: _t->rateChanged(); break;
        case 26: _t->shuffleChanged(); break;
        case 27: _t->volumeChanged(); break;
        case 28: _t->loopStatusRequested((*reinterpret_cast< Mpris::LoopStatus(*)>(_a[1]))); break;
        case 29: _t->rateRequested((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: _t->shuffleRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->volumeRequested((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 32: _t->nextRequested(); break;
        case 33: _t->openUriRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 34: _t->pauseRequested(); break;
        case 35: _t->playRequested(); break;
        case 36: _t->playPauseRequested(); break;
        case 37: _t->previousRequested(); break;
        case 38: _t->seekRequested((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 39: _t->seeked((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 40: _t->setPositionRequested((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2]))); break;
        case 41: _t->stopRequested(); break;
        case 42: { QString _r = _t->serviceName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->setServiceName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: { bool _r = _t->canQuit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->setCanQuit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: { bool _r = _t->canRaise();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->setCanRaise((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: { bool _r = _t->canSetFullscreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->setCanSetFullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: { QString _r = _t->desktopEntry();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setDesktopEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 52: { bool _r = _t->fullscreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->setFullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: { bool _r = _t->hasTrackList();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->setHasTrackList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: { QString _r = _t->identity();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 57: _t->setIdentity((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 58: { QStringList _r = _t->supportedUriSchemes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setSupportedUriSchemes((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 60: { QStringList _r = _t->supportedMimeTypes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->setSupportedMimeTypes((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 62: { bool _r = _t->canControl();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->setCanControl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: { bool _r = _t->canGoNext();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->setCanGoNext((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: { bool _r = _t->canGoPrevious();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->setCanGoPrevious((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: { bool _r = _t->canPause();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->setCanPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: { bool _r = _t->canPlay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 71: _t->setCanPlay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 72: { bool _r = _t->canSeek();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 73: _t->setCanSeek((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 74: { Mpris::LoopStatus _r = _t->loopStatus();
            if (_a[0]) *reinterpret_cast< Mpris::LoopStatus*>(_a[0]) = std::move(_r); }  break;
        case 75: _t->setLoopStatus((*reinterpret_cast< Mpris::LoopStatus(*)>(_a[1]))); break;
        case 76: { double _r = _t->maximumRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 77: _t->setMaximumRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 78: { QVariantMap _r = _t->metadata();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 79: _t->setMetadata((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 80: { double _r = _t->minimumRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 81: _t->setMinimumRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 82: { Mpris::PlaybackStatus _r = _t->playbackStatus();
            if (_a[0]) *reinterpret_cast< Mpris::PlaybackStatus*>(_a[0]) = std::move(_r); }  break;
        case 83: _t->setPlaybackStatus((*reinterpret_cast< Mpris::PlaybackStatus(*)>(_a[1]))); break;
        case 84: { qlonglong _r = _t->position();
            if (_a[0]) *reinterpret_cast< qlonglong*>(_a[0]) = std::move(_r); }  break;
        case 85: _t->setPosition((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 86: { double _r = _t->rate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 87: _t->setRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 88: { bool _r = _t->shuffle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 89: _t->setShuffle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: { double _r = _t->volume();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 91: _t->setVolume((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 40:
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
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::serviceNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::canQuitChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::canRaiseChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::canSetFullscreenChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::desktopEntryChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::fullscreenChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::hasTrackListChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::identityChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::supportedUriSchemesChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::supportedMimeTypesChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::fullscreenRequested)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::quitRequested)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::raiseRequested)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::canControlChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::canGoNextChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::canGoPreviousChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::canPauseChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::canPlayChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::canSeekChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::loopStatusChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::maximumRateChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::metadataChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::minimumRateChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::playbackStatusChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::positionChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::rateChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::shuffleChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::volumeChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)(Mpris::LoopStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::loopStatusRequested)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::rateRequested)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::shuffleRequested)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::volumeRequested)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::nextRequested)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::openUriRequested)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::pauseRequested)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::playRequested)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::playPauseRequested)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::previousRequested)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::seekRequested)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::seeked)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)(const QDBusObjectPath & , qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::setPositionRequested)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (MprisPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisPlayer::stopRequested)) {
                *result = 41;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MprisPlayer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->serviceName(); break;
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
        auto *_t = static_cast<MprisPlayer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setServiceName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCanQuit(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCanRaise(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setCanSetFullscreen(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDesktopEntry(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setFullscreen(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setHasTrackList(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setIdentity(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setSupportedUriSchemes(*reinterpret_cast< QStringList*>(_v)); break;
        case 9: _t->setSupportedMimeTypes(*reinterpret_cast< QStringList*>(_v)); break;
        case 10: _t->setCanControl(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setCanGoNext(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setCanGoPrevious(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setCanPause(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setCanPlay(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setCanSeek(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setLoopStatus(*reinterpret_cast< Mpris::LoopStatus*>(_v)); break;
        case 17: _t->setMaximumRate(*reinterpret_cast< double*>(_v)); break;
        case 18: _t->setMetadata(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 19: _t->setMinimumRate(*reinterpret_cast< double*>(_v)); break;
        case 20: _t->setPlaybackStatus(*reinterpret_cast< Mpris::PlaybackStatus*>(_v)); break;
        case 21: _t->setPosition(*reinterpret_cast< qlonglong*>(_v)); break;
        case 22: _t->setRate(*reinterpret_cast< double*>(_v)); break;
        case 23: _t->setShuffle(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setVolume(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_MprisPlayer[] = {
    QMetaObject::SuperData::link<Mpris::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject MprisPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MprisPlayer.data,
    qt_meta_data_MprisPlayer,
    qt_static_metacall,
    qt_meta_extradata_MprisPlayer,
    nullptr
} };


const QMetaObject *MprisPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MprisPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MprisPlayer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int MprisPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 92)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 92;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 92)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 92;
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
void MprisPlayer::serviceNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MprisPlayer::canQuitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MprisPlayer::canRaiseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MprisPlayer::canSetFullscreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MprisPlayer::desktopEntryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MprisPlayer::fullscreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MprisPlayer::hasTrackListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MprisPlayer::identityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MprisPlayer::supportedUriSchemesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MprisPlayer::supportedMimeTypesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MprisPlayer::fullscreenRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MprisPlayer::quitRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MprisPlayer::raiseRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MprisPlayer::canControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MprisPlayer::canGoNextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MprisPlayer::canGoPreviousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MprisPlayer::canPauseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MprisPlayer::canPlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MprisPlayer::canSeekChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MprisPlayer::loopStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void MprisPlayer::maximumRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MprisPlayer::metadataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MprisPlayer::minimumRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MprisPlayer::playbackStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void MprisPlayer::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MprisPlayer::rateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void MprisPlayer::shuffleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void MprisPlayer::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void MprisPlayer::loopStatusRequested(Mpris::LoopStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MprisPlayer::rateRequested(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MprisPlayer::shuffleRequested(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MprisPlayer::volumeRequested(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MprisPlayer::nextRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void MprisPlayer::openUriRequested(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MprisPlayer::pauseRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void MprisPlayer::playRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void MprisPlayer::playPauseRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void MprisPlayer::previousRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void MprisPlayer::seekRequested(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MprisPlayer::seeked(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MprisPlayer::setPositionRequested(const QDBusObjectPath & _t1, qlonglong _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MprisPlayer::stopRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
