/****************************************************************************
** Meta object code from reading C++ file 'mprismanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qtmpris/src/mprismanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mprismanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MprisManager_t {
    QByteArrayData data[89];
    char stringdata0[1212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MprisManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MprisManager_t qt_meta_stringdata_MprisManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MprisManager"
QT_MOC_LITERAL(1, 13, 20), // "singleServiceChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 21), // "currentServiceChanged"
QT_MOC_LITERAL(4, 57, 24), // "availableServicesChanged"
QT_MOC_LITERAL(5, 82, 14), // "canQuitChanged"
QT_MOC_LITERAL(6, 97, 15), // "canRaiseChanged"
QT_MOC_LITERAL(7, 113, 23), // "canSetFullscreenChanged"
QT_MOC_LITERAL(8, 137, 19), // "desktopEntryChanged"
QT_MOC_LITERAL(9, 157, 17), // "fullscreenChanged"
QT_MOC_LITERAL(10, 175, 19), // "hasTrackListChanged"
QT_MOC_LITERAL(11, 195, 15), // "identityChanged"
QT_MOC_LITERAL(12, 211, 26), // "supportedUriSchemesChanged"
QT_MOC_LITERAL(13, 238, 25), // "supportedMimeTypesChanged"
QT_MOC_LITERAL(14, 264, 17), // "canControlChanged"
QT_MOC_LITERAL(15, 282, 16), // "canGoNextChanged"
QT_MOC_LITERAL(16, 299, 20), // "canGoPreviousChanged"
QT_MOC_LITERAL(17, 320, 15), // "canPauseChanged"
QT_MOC_LITERAL(18, 336, 14), // "canPlayChanged"
QT_MOC_LITERAL(19, 351, 14), // "canSeekChanged"
QT_MOC_LITERAL(20, 366, 17), // "loopStatusChanged"
QT_MOC_LITERAL(21, 384, 18), // "maximumRateChanged"
QT_MOC_LITERAL(22, 403, 15), // "metadataChanged"
QT_MOC_LITERAL(23, 419, 18), // "minimumRateChanged"
QT_MOC_LITERAL(24, 438, 21), // "playbackStatusChanged"
QT_MOC_LITERAL(25, 460, 15), // "positionChanged"
QT_MOC_LITERAL(26, 476, 8), // "position"
QT_MOC_LITERAL(27, 485, 11), // "rateChanged"
QT_MOC_LITERAL(28, 497, 14), // "shuffleChanged"
QT_MOC_LITERAL(29, 512, 13), // "volumeChanged"
QT_MOC_LITERAL(30, 526, 6), // "seeked"
QT_MOC_LITERAL(31, 533, 13), // "singleService"
QT_MOC_LITERAL(32, 547, 16), // "setSingleService"
QT_MOC_LITERAL(33, 564, 6), // "single"
QT_MOC_LITERAL(34, 571, 14), // "currentService"
QT_MOC_LITERAL(35, 586, 17), // "setCurrentService"
QT_MOC_LITERAL(36, 604, 7), // "service"
QT_MOC_LITERAL(37, 612, 17), // "availableServices"
QT_MOC_LITERAL(38, 630, 7), // "canQuit"
QT_MOC_LITERAL(39, 638, 8), // "canRaise"
QT_MOC_LITERAL(40, 647, 16), // "canSetFullscreen"
QT_MOC_LITERAL(41, 664, 12), // "desktopEntry"
QT_MOC_LITERAL(42, 677, 10), // "fullscreen"
QT_MOC_LITERAL(43, 688, 13), // "setFullscreen"
QT_MOC_LITERAL(44, 702, 12), // "hasTrackList"
QT_MOC_LITERAL(45, 715, 8), // "identity"
QT_MOC_LITERAL(46, 724, 19), // "supportedUriSchemes"
QT_MOC_LITERAL(47, 744, 18), // "supportedMimeTypes"
QT_MOC_LITERAL(48, 763, 10), // "canControl"
QT_MOC_LITERAL(49, 774, 9), // "canGoNext"
QT_MOC_LITERAL(50, 784, 13), // "canGoPrevious"
QT_MOC_LITERAL(51, 798, 8), // "canPause"
QT_MOC_LITERAL(52, 807, 7), // "canPlay"
QT_MOC_LITERAL(53, 815, 7), // "canSeek"
QT_MOC_LITERAL(54, 823, 10), // "loopStatus"
QT_MOC_LITERAL(55, 834, 17), // "Mpris::LoopStatus"
QT_MOC_LITERAL(56, 852, 13), // "setLoopStatus"
QT_MOC_LITERAL(57, 866, 11), // "maximumRate"
QT_MOC_LITERAL(58, 878, 8), // "metadata"
QT_MOC_LITERAL(59, 887, 11), // "minimumRate"
QT_MOC_LITERAL(60, 899, 14), // "playbackStatus"
QT_MOC_LITERAL(61, 914, 21), // "Mpris::PlaybackStatus"
QT_MOC_LITERAL(62, 936, 15), // "requestPosition"
QT_MOC_LITERAL(63, 952, 4), // "rate"
QT_MOC_LITERAL(64, 957, 7), // "setRate"
QT_MOC_LITERAL(65, 965, 7), // "shuffle"
QT_MOC_LITERAL(66, 973, 10), // "setShuffle"
QT_MOC_LITERAL(67, 984, 6), // "volume"
QT_MOC_LITERAL(68, 991, 9), // "setVolume"
QT_MOC_LITERAL(69, 1001, 18), // "onNameOwnerChanged"
QT_MOC_LITERAL(70, 1020, 8), // "oldOwner"
QT_MOC_LITERAL(71, 1029, 8), // "newOwner"
QT_MOC_LITERAL(72, 1038, 17), // "onServiceAppeared"
QT_MOC_LITERAL(73, 1056, 17), // "onServiceVanished"
QT_MOC_LITERAL(74, 1074, 42), // "onAvailableControllerPlayback..."
QT_MOC_LITERAL(75, 1117, 4), // "quit"
QT_MOC_LITERAL(76, 1122, 5), // "raise"
QT_MOC_LITERAL(77, 1128, 4), // "next"
QT_MOC_LITERAL(78, 1133, 7), // "openUri"
QT_MOC_LITERAL(79, 1141, 3), // "uri"
QT_MOC_LITERAL(80, 1145, 5), // "pause"
QT_MOC_LITERAL(81, 1151, 4), // "play"
QT_MOC_LITERAL(82, 1156, 9), // "playPause"
QT_MOC_LITERAL(83, 1166, 8), // "previous"
QT_MOC_LITERAL(84, 1175, 4), // "seek"
QT_MOC_LITERAL(85, 1180, 6), // "offset"
QT_MOC_LITERAL(86, 1187, 11), // "setPosition"
QT_MOC_LITERAL(87, 1199, 7), // "trackId"
QT_MOC_LITERAL(88, 1207, 4) // "stop"

    },
    "MprisManager\0singleServiceChanged\0\0"
    "currentServiceChanged\0availableServicesChanged\0"
    "canQuitChanged\0canRaiseChanged\0"
    "canSetFullscreenChanged\0desktopEntryChanged\0"
    "fullscreenChanged\0hasTrackListChanged\0"
    "identityChanged\0supportedUriSchemesChanged\0"
    "supportedMimeTypesChanged\0canControlChanged\0"
    "canGoNextChanged\0canGoPreviousChanged\0"
    "canPauseChanged\0canPlayChanged\0"
    "canSeekChanged\0loopStatusChanged\0"
    "maximumRateChanged\0metadataChanged\0"
    "minimumRateChanged\0playbackStatusChanged\0"
    "positionChanged\0position\0rateChanged\0"
    "shuffleChanged\0volumeChanged\0seeked\0"
    "singleService\0setSingleService\0single\0"
    "currentService\0setCurrentService\0"
    "service\0availableServices\0canQuit\0"
    "canRaise\0canSetFullscreen\0desktopEntry\0"
    "fullscreen\0setFullscreen\0hasTrackList\0"
    "identity\0supportedUriSchemes\0"
    "supportedMimeTypes\0canControl\0canGoNext\0"
    "canGoPrevious\0canPause\0canPlay\0canSeek\0"
    "loopStatus\0Mpris::LoopStatus\0setLoopStatus\0"
    "maximumRate\0metadata\0minimumRate\0"
    "playbackStatus\0Mpris::PlaybackStatus\0"
    "requestPosition\0rate\0setRate\0shuffle\0"
    "setShuffle\0volume\0setVolume\0"
    "onNameOwnerChanged\0oldOwner\0newOwner\0"
    "onServiceAppeared\0onServiceVanished\0"
    "onAvailableControllerPlaybackStatusChanged\0"
    "quit\0raise\0next\0openUri\0uri\0pause\0"
    "play\0playPause\0previous\0seek\0offset\0"
    "setPosition\0trackId\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MprisManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      79,   14, // methods
      27,  528, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  409,    2, 0x06 /* Public */,
       3,    0,  410,    2, 0x06 /* Public */,
       4,    0,  411,    2, 0x06 /* Public */,
       5,    0,  412,    2, 0x06 /* Public */,
       6,    0,  413,    2, 0x06 /* Public */,
       7,    0,  414,    2, 0x06 /* Public */,
       8,    0,  415,    2, 0x06 /* Public */,
       9,    0,  416,    2, 0x06 /* Public */,
      10,    0,  417,    2, 0x06 /* Public */,
      11,    0,  418,    2, 0x06 /* Public */,
      12,    0,  419,    2, 0x06 /* Public */,
      13,    0,  420,    2, 0x06 /* Public */,
      14,    0,  421,    2, 0x06 /* Public */,
      15,    0,  422,    2, 0x06 /* Public */,
      16,    0,  423,    2, 0x06 /* Public */,
      17,    0,  424,    2, 0x06 /* Public */,
      18,    0,  425,    2, 0x06 /* Public */,
      19,    0,  426,    2, 0x06 /* Public */,
      20,    0,  427,    2, 0x06 /* Public */,
      21,    0,  428,    2, 0x06 /* Public */,
      22,    0,  429,    2, 0x06 /* Public */,
      23,    0,  430,    2, 0x06 /* Public */,
      24,    0,  431,    2, 0x06 /* Public */,
      25,    1,  432,    2, 0x06 /* Public */,
      27,    0,  435,    2, 0x06 /* Public */,
      28,    0,  436,    2, 0x06 /* Public */,
      29,    0,  437,    2, 0x06 /* Public */,
      30,    1,  438,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    0,  441,    2, 0x0a /* Public */,
      32,    1,  442,    2, 0x0a /* Public */,
      34,    0,  445,    2, 0x0a /* Public */,
      35,    1,  446,    2, 0x0a /* Public */,
      37,    0,  449,    2, 0x0a /* Public */,
      38,    0,  450,    2, 0x0a /* Public */,
      39,    0,  451,    2, 0x0a /* Public */,
      40,    0,  452,    2, 0x0a /* Public */,
      41,    0,  453,    2, 0x0a /* Public */,
      42,    0,  454,    2, 0x0a /* Public */,
      43,    1,  455,    2, 0x0a /* Public */,
      44,    0,  458,    2, 0x0a /* Public */,
      45,    0,  459,    2, 0x0a /* Public */,
      46,    0,  460,    2, 0x0a /* Public */,
      47,    0,  461,    2, 0x0a /* Public */,
      48,    0,  462,    2, 0x0a /* Public */,
      49,    0,  463,    2, 0x0a /* Public */,
      50,    0,  464,    2, 0x0a /* Public */,
      51,    0,  465,    2, 0x0a /* Public */,
      52,    0,  466,    2, 0x0a /* Public */,
      53,    0,  467,    2, 0x0a /* Public */,
      54,    0,  468,    2, 0x0a /* Public */,
      56,    1,  469,    2, 0x0a /* Public */,
      57,    0,  472,    2, 0x0a /* Public */,
      58,    0,  473,    2, 0x0a /* Public */,
      59,    0,  474,    2, 0x0a /* Public */,
      60,    0,  475,    2, 0x0a /* Public */,
      26,    0,  476,    2, 0x0a /* Public */,
      62,    0,  477,    2, 0x0a /* Public */,
      63,    0,  478,    2, 0x0a /* Public */,
      64,    1,  479,    2, 0x0a /* Public */,
      65,    0,  482,    2, 0x0a /* Public */,
      66,    1,  483,    2, 0x0a /* Public */,
      67,    0,  486,    2, 0x0a /* Public */,
      68,    1,  487,    2, 0x0a /* Public */,
      69,    3,  490,    2, 0x08 /* Private */,
      72,    1,  497,    2, 0x08 /* Private */,
      73,    1,  500,    2, 0x08 /* Private */,
      74,    1,  503,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      75,    0,  506,    2, 0x02 /* Public */,
      76,    0,  507,    2, 0x02 /* Public */,
      77,    0,  508,    2, 0x02 /* Public */,
      78,    1,  509,    2, 0x02 /* Public */,
      80,    0,  512,    2, 0x02 /* Public */,
      81,    0,  513,    2, 0x02 /* Public */,
      82,    0,  514,    2, 0x02 /* Public */,
      83,    0,  515,    2, 0x02 /* Public */,
      84,    1,  516,    2, 0x02 /* Public */,
      86,    1,  519,    2, 0x02 /* Public */,
      86,    2,  522,    2, 0x02 /* Public */,
      88,    0,  527,    2, 0x02 /* Public */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   26,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::QStringList,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   42,
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
    0x80000000 | 55,
    QMetaType::Void, 0x80000000 | 55,   54,
    QMetaType::Double,
    QMetaType::QVariantMap,
    QMetaType::Double,
    0x80000000 | 61,
    QMetaType::LongLong,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   63,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   65,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   67,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   36,   70,   71,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QUrl,   79,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::LongLong,   85,
    QMetaType::Bool, QMetaType::LongLong,   26,
    QMetaType::Bool, QMetaType::QString, QMetaType::LongLong,   87,   26,
    QMetaType::Bool,

 // properties: name, type, flags
      31, QMetaType::Bool, 0x00495103,
      34, QMetaType::QString, 0x00495103,
      37, QMetaType::QStringList, 0x00495001,
      38, QMetaType::Bool, 0x00495001,
      39, QMetaType::Bool, 0x00495001,
      40, QMetaType::Bool, 0x00495001,
      41, QMetaType::QString, 0x00495001,
      42, QMetaType::Bool, 0x00495103,
      44, QMetaType::Bool, 0x00495001,
      45, QMetaType::QString, 0x00495001,
      46, QMetaType::QStringList, 0x00495001,
      47, QMetaType::QStringList, 0x00495001,
      48, QMetaType::Bool, 0x00495001,
      49, QMetaType::Bool, 0x00495001,
      50, QMetaType::Bool, 0x00495001,
      51, QMetaType::Bool, 0x00495001,
      52, QMetaType::Bool, 0x00495001,
      53, QMetaType::Bool, 0x00495001,
      54, 0x80000000 | 55, 0x0049510b,
      57, QMetaType::Double, 0x00495001,
      58, QMetaType::QVariantMap, 0x00495001,
      59, QMetaType::Double, 0x00495001,
      60, 0x80000000 | 61, 0x00495009,
      26, QMetaType::LongLong, 0x00095001,
      63, QMetaType::Double, 0x00495103,
      65, QMetaType::Bool, 0x00495103,
      67, QMetaType::Double, 0x00495103,

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
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
       0,
      24,
      25,
      26,

       0        // eod
};

void MprisManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MprisManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->singleServiceChanged(); break;
        case 1: _t->currentServiceChanged(); break;
        case 2: _t->availableServicesChanged(); break;
        case 3: _t->canQuitChanged(); break;
        case 4: _t->canRaiseChanged(); break;
        case 5: _t->canSetFullscreenChanged(); break;
        case 6: _t->desktopEntryChanged(); break;
        case 7: _t->fullscreenChanged(); break;
        case 8: _t->hasTrackListChanged(); break;
        case 9: _t->identityChanged(); break;
        case 10: _t->supportedUriSchemesChanged(); break;
        case 11: _t->supportedMimeTypesChanged(); break;
        case 12: _t->canControlChanged(); break;
        case 13: _t->canGoNextChanged(); break;
        case 14: _t->canGoPreviousChanged(); break;
        case 15: _t->canPauseChanged(); break;
        case 16: _t->canPlayChanged(); break;
        case 17: _t->canSeekChanged(); break;
        case 18: _t->loopStatusChanged(); break;
        case 19: _t->maximumRateChanged(); break;
        case 20: _t->metadataChanged(); break;
        case 21: _t->minimumRateChanged(); break;
        case 22: _t->playbackStatusChanged(); break;
        case 23: _t->positionChanged((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 24: _t->rateChanged(); break;
        case 25: _t->shuffleChanged(); break;
        case 26: _t->volumeChanged(); break;
        case 27: _t->seeked((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 28: { bool _r = _t->singleService();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->setSingleService((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: { QString _r = _t->currentService();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->setCurrentService((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: { QStringList _r = _t->availableServices();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->canQuit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->canRaise();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->canSetFullscreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { QString _r = _t->desktopEntry();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->fullscreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->setFullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: { bool _r = _t->hasTrackList();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { QString _r = _t->identity();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 41: { QStringList _r = _t->supportedUriSchemes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 42: { QStringList _r = _t->supportedMimeTypes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 43: { bool _r = _t->canControl();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->canGoNext();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->canGoPrevious();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->canPause();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->canPlay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: { bool _r = _t->canSeek();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 49: { Mpris::LoopStatus _r = _t->loopStatus();
            if (_a[0]) *reinterpret_cast< Mpris::LoopStatus*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->setLoopStatus((*reinterpret_cast< Mpris::LoopStatus(*)>(_a[1]))); break;
        case 51: { double _r = _t->maximumRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 52: { QVariantMap _r = _t->metadata();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 53: { double _r = _t->minimumRate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 54: { Mpris::PlaybackStatus _r = _t->playbackStatus();
            if (_a[0]) *reinterpret_cast< Mpris::PlaybackStatus*>(_a[0]) = std::move(_r); }  break;
        case 55: { qlonglong _r = _t->position();
            if (_a[0]) *reinterpret_cast< qlonglong*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->requestPosition(); break;
        case 57: { double _r = _t->rate();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->setRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 59: { bool _r = _t->shuffle();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 60: _t->setShuffle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: { double _r = _t->volume();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 62: _t->setVolume((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 63: _t->onNameOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 64: _t->onServiceAppeared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 65: _t->onServiceVanished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 66: _t->onAvailableControllerPlaybackStatusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 67: { bool _r = _t->quit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: { bool _r = _t->raise();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 69: { bool _r = _t->next();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: { bool _r = _t->openUri((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 71: { bool _r = _t->pause();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: { bool _r = _t->play();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 73: { bool _r = _t->playPause();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 74: { bool _r = _t->previous();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 75: { bool _r = _t->seek((*reinterpret_cast< qlonglong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 76: { bool _r = _t->setPosition((*reinterpret_cast< qlonglong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 77: { bool _r = _t->setPosition((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qlonglong(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 78: { bool _r = _t->stop();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::singleServiceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::currentServiceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::availableServicesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::canQuitChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::canRaiseChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::canSetFullscreenChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::desktopEntryChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::fullscreenChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::hasTrackListChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::identityChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::supportedUriSchemesChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::supportedMimeTypesChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::canControlChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::canGoNextChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::canGoPreviousChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::canPauseChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::canPlayChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::canSeekChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::loopStatusChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::maximumRateChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::metadataChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::minimumRateChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::playbackStatusChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::positionChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::rateChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::shuffleChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::volumeChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (MprisManager::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MprisManager::seeked)) {
                *result = 27;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MprisManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->singleService(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentService(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->availableServices(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->canQuit(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->canRaise(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->canSetFullscreen(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->desktopEntry(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->fullscreen(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->hasTrackList(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->identity(); break;
        case 10: *reinterpret_cast< QStringList*>(_v) = _t->supportedUriSchemes(); break;
        case 11: *reinterpret_cast< QStringList*>(_v) = _t->supportedMimeTypes(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->canControl(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->canGoNext(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->canGoPrevious(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->canPause(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->canPlay(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->canSeek(); break;
        case 18: *reinterpret_cast< Mpris::LoopStatus*>(_v) = _t->loopStatus(); break;
        case 19: *reinterpret_cast< double*>(_v) = _t->maximumRate(); break;
        case 20: *reinterpret_cast< QVariantMap*>(_v) = _t->metadata(); break;
        case 21: *reinterpret_cast< double*>(_v) = _t->minimumRate(); break;
        case 22: *reinterpret_cast< Mpris::PlaybackStatus*>(_v) = _t->playbackStatus(); break;
        case 23: *reinterpret_cast< qlonglong*>(_v) = _t->position(); break;
        case 24: *reinterpret_cast< double*>(_v) = _t->rate(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->shuffle(); break;
        case 26: *reinterpret_cast< double*>(_v) = _t->volume(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MprisManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSingleService(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCurrentService(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setFullscreen(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setLoopStatus(*reinterpret_cast< Mpris::LoopStatus*>(_v)); break;
        case 24: _t->setRate(*reinterpret_cast< double*>(_v)); break;
        case 25: _t->setShuffle(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->setVolume(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_MprisManager[] = {
    QMetaObject::SuperData::link<Mpris::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject MprisManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MprisManager.data,
    qt_meta_data_MprisManager,
    qt_static_metacall,
    qt_meta_extradata_MprisManager,
    nullptr
} };


const QMetaObject *MprisManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MprisManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MprisManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MprisManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 79)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 79;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 79)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 79;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 27;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MprisManager::singleServiceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MprisManager::currentServiceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MprisManager::availableServicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MprisManager::canQuitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MprisManager::canRaiseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MprisManager::canSetFullscreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MprisManager::desktopEntryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void MprisManager::fullscreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MprisManager::hasTrackListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MprisManager::identityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MprisManager::supportedUriSchemesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MprisManager::supportedMimeTypesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MprisManager::canControlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void MprisManager::canGoNextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void MprisManager::canGoPreviousChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MprisManager::canPauseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MprisManager::canPlayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void MprisManager::canSeekChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void MprisManager::loopStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MprisManager::maximumRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void MprisManager::metadataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void MprisManager::minimumRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void MprisManager::playbackStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void MprisManager::positionChanged(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MprisManager::rateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void MprisManager::shuffleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void MprisManager::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void MprisManager::seeked(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
