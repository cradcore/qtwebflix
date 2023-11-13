/****************************************************************************
** Meta object code from reading C++ file 'mpris.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qtmpris/src/mpris.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpris.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mpris_t {
    QByteArrayData data[38];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mpris_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mpris_t qt_meta_stringdata_Mpris = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Mpris"
QT_MOC_LITERAL(1, 6, 16), // "metadataToString"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "Metadata"
QT_MOC_LITERAL(4, 33, 8), // "metadata"
QT_MOC_LITERAL(5, 42, 14), // "PlaybackStatus"
QT_MOC_LITERAL(6, 57, 21), // "InvalidPlaybackStatus"
QT_MOC_LITERAL(7, 79, 7), // "Playing"
QT_MOC_LITERAL(8, 87, 6), // "Paused"
QT_MOC_LITERAL(9, 94, 7), // "Stopped"
QT_MOC_LITERAL(10, 102, 10), // "LoopStatus"
QT_MOC_LITERAL(11, 113, 17), // "InvalidLoopStatus"
QT_MOC_LITERAL(12, 131, 4), // "None"
QT_MOC_LITERAL(13, 136, 5), // "Track"
QT_MOC_LITERAL(14, 142, 8), // "Playlist"
QT_MOC_LITERAL(15, 151, 15), // "InvalidMetadata"
QT_MOC_LITERAL(16, 167, 7), // "TrackId"
QT_MOC_LITERAL(17, 175, 6), // "Length"
QT_MOC_LITERAL(18, 182, 6), // "ArtUrl"
QT_MOC_LITERAL(19, 189, 5), // "Album"
QT_MOC_LITERAL(20, 195, 11), // "AlbumArtist"
QT_MOC_LITERAL(21, 207, 6), // "Artist"
QT_MOC_LITERAL(22, 214, 6), // "AsText"
QT_MOC_LITERAL(23, 221, 8), // "AudioBPM"
QT_MOC_LITERAL(24, 230, 10), // "AutoRating"
QT_MOC_LITERAL(25, 241, 7), // "Comment"
QT_MOC_LITERAL(26, 249, 8), // "Composer"
QT_MOC_LITERAL(27, 258, 14), // "ContentCreated"
QT_MOC_LITERAL(28, 273, 10), // "DiscNumber"
QT_MOC_LITERAL(29, 284, 9), // "FirstUsed"
QT_MOC_LITERAL(30, 294, 5), // "Genre"
QT_MOC_LITERAL(31, 300, 8), // "LastUsed"
QT_MOC_LITERAL(32, 309, 8), // "Lyricist"
QT_MOC_LITERAL(33, 318, 5), // "Title"
QT_MOC_LITERAL(34, 324, 11), // "TrackNumber"
QT_MOC_LITERAL(35, 336, 3), // "Url"
QT_MOC_LITERAL(36, 340, 8), // "UseCount"
QT_MOC_LITERAL(37, 349, 10) // "UserRating"

    },
    "Mpris\0metadataToString\0\0Metadata\0"
    "metadata\0PlaybackStatus\0InvalidPlaybackStatus\0"
    "Playing\0Paused\0Stopped\0LoopStatus\0"
    "InvalidLoopStatus\0None\0Track\0Playlist\0"
    "InvalidMetadata\0TrackId\0Length\0ArtUrl\0"
    "Album\0AlbumArtist\0Artist\0AsText\0"
    "AudioBPM\0AutoRating\0Comment\0Composer\0"
    "ContentCreated\0DiscNumber\0FirstUsed\0"
    "Genre\0LastUsed\0Lyricist\0Title\0TrackNumber\0"
    "Url\0UseCount\0UserRating"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mpris[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       3,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 3,    4,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    4,   37,
      10,   10, 0x0,    4,   45,
       3,    3, 0x0,   23,   53,

 // enum data: key, value
       6, uint(Mpris::InvalidPlaybackStatus),
       7, uint(Mpris::Playing),
       8, uint(Mpris::Paused),
       9, uint(Mpris::Stopped),
      11, uint(Mpris::InvalidLoopStatus),
      12, uint(Mpris::None),
      13, uint(Mpris::Track),
      14, uint(Mpris::Playlist),
      15, uint(Mpris::InvalidMetadata),
      16, uint(Mpris::TrackId),
      17, uint(Mpris::Length),
      18, uint(Mpris::ArtUrl),
      19, uint(Mpris::Album),
      20, uint(Mpris::AlbumArtist),
      21, uint(Mpris::Artist),
      22, uint(Mpris::AsText),
      23, uint(Mpris::AudioBPM),
      24, uint(Mpris::AutoRating),
      25, uint(Mpris::Comment),
      26, uint(Mpris::Composer),
      27, uint(Mpris::ContentCreated),
      28, uint(Mpris::DiscNumber),
      29, uint(Mpris::FirstUsed),
      30, uint(Mpris::Genre),
      31, uint(Mpris::LastUsed),
      32, uint(Mpris::Lyricist),
      33, uint(Mpris::Title),
      34, uint(Mpris::TrackNumber),
      35, uint(Mpris::Url),
      36, uint(Mpris::UseCount),
      37, uint(Mpris::UserRating),

       0        // eod
};

void Mpris::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mpris *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->metadataToString((*reinterpret_cast< Metadata(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mpris::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Mpris.data,
    qt_meta_data_Mpris,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mpris::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mpris::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mpris.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Mpris::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
