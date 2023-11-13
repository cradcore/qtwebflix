/****************************************************************************
** Meta object code from reading C++ file 'dbusextendedabstractinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qtdbusextended/src/dbusextendedabstractinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusextendedabstractinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DBusExtendedAbstractInterface_t {
    QByteArrayData data[21];
    char stringdata0[399];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DBusExtendedAbstractInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DBusExtendedAbstractInterface_t qt_meta_stringdata_DBusExtendedAbstractInterface = {
    {
QT_MOC_LITERAL(0, 0, 29), // "DBusExtendedAbstractInterface"
QT_MOC_LITERAL(1, 30, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 12), // "propertyName"
QT_MOC_LITERAL(4, 60, 5), // "value"
QT_MOC_LITERAL(5, 66, 19), // "propertyInvalidated"
QT_MOC_LITERAL(6, 86, 21), // "asyncPropertyFinished"
QT_MOC_LITERAL(7, 108, 24), // "asyncSetPropertyFinished"
QT_MOC_LITERAL(8, 133, 29), // "asyncGetAllPropertiesFinished"
QT_MOC_LITERAL(9, 163, 19), // "onPropertiesChanged"
QT_MOC_LITERAL(10, 183, 13), // "interfaceName"
QT_MOC_LITERAL(11, 197, 17), // "changedProperties"
QT_MOC_LITERAL(12, 215, 21), // "invalidatedProperties"
QT_MOC_LITERAL(13, 237, 23), // "onAsyncPropertyFinished"
QT_MOC_LITERAL(14, 261, 31), // "DBusExtendedPendingCallWatcher*"
QT_MOC_LITERAL(15, 293, 7), // "watcher"
QT_MOC_LITERAL(16, 301, 26), // "onAsyncSetPropertyFinished"
QT_MOC_LITERAL(17, 328, 31), // "onAsyncGetAllPropertiesFinished"
QT_MOC_LITERAL(18, 360, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(19, 385, 4), // "sync"
QT_MOC_LITERAL(20, 390, 8) // "useCache"

    },
    "DBusExtendedAbstractInterface\0"
    "propertyChanged\0\0propertyName\0value\0"
    "propertyInvalidated\0asyncPropertyFinished\0"
    "asyncSetPropertyFinished\0"
    "asyncGetAllPropertiesFinished\0"
    "onPropertiesChanged\0interfaceName\0"
    "changedProperties\0invalidatedProperties\0"
    "onAsyncPropertyFinished\0"
    "DBusExtendedPendingCallWatcher*\0watcher\0"
    "onAsyncSetPropertyFinished\0"
    "onAsyncGetAllPropertiesFinished\0"
    "QDBusPendingCallWatcher*\0sync\0useCache"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DBusExtendedAbstractInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,
       6,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
       8,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    3,   74,    2, 0x08 /* Private */,
      13,    1,   81,    2, 0x08 /* Private */,
      16,    1,   84,    2, 0x08 /* Private */,
      17,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 18,   15,

 // properties: name, type, flags
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Bool, 0x00095103,

       0        // eod
};

void DBusExtendedAbstractInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DBusExtendedAbstractInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->propertyInvalidated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->asyncPropertyFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->asyncSetPropertyFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->asyncGetAllPropertiesFinished(); break;
        case 5: _t->onPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 6: _t->onAsyncPropertyFinished((*reinterpret_cast< DBusExtendedPendingCallWatcher*(*)>(_a[1]))); break;
        case 7: _t->onAsyncSetPropertyFinished((*reinterpret_cast< DBusExtendedPendingCallWatcher*(*)>(_a[1]))); break;
        case 8: _t->onAsyncGetAllPropertiesFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DBusExtendedAbstractInterface::*)(const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusExtendedAbstractInterface::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DBusExtendedAbstractInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusExtendedAbstractInterface::propertyInvalidated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DBusExtendedAbstractInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusExtendedAbstractInterface::asyncPropertyFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DBusExtendedAbstractInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusExtendedAbstractInterface::asyncSetPropertyFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DBusExtendedAbstractInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DBusExtendedAbstractInterface::asyncGetAllPropertiesFinished)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DBusExtendedAbstractInterface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->sync(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->useCache(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DBusExtendedAbstractInterface *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSync(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setUseCache(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DBusExtendedAbstractInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_DBusExtendedAbstractInterface.data,
    qt_meta_data_DBusExtendedAbstractInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DBusExtendedAbstractInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DBusExtendedAbstractInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DBusExtendedAbstractInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int DBusExtendedAbstractInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DBusExtendedAbstractInterface::propertyChanged(const QString & _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DBusExtendedAbstractInterface::propertyInvalidated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DBusExtendedAbstractInterface::asyncPropertyFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DBusExtendedAbstractInterface::asyncSetPropertyFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DBusExtendedAbstractInterface::asyncGetAllPropertiesFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
