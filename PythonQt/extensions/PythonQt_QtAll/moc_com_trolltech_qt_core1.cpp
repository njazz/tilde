/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_core1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generated_cpp_54/com_trolltech_qt_core/com_trolltech_qt_core1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_core1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PythonQtWrapper_QFileSelector_t {
    QByteArrayData data[14];
    char stringdata[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QFileSelector_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QFileSelector_t qt_meta_stringdata_PythonQtWrapper_QFileSelector = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QFileSelector"
QT_MOC_LITERAL(1, 30, 17), // "new_QFileSelector"
QT_MOC_LITERAL(2, 48, 14), // "QFileSelector*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 6), // "parent"
QT_MOC_LITERAL(5, 71, 20), // "delete_QFileSelector"
QT_MOC_LITERAL(6, 92, 3), // "obj"
QT_MOC_LITERAL(7, 96, 12), // "allSelectors"
QT_MOC_LITERAL(8, 109, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 126, 14), // "extraSelectors"
QT_MOC_LITERAL(10, 141, 6), // "select"
QT_MOC_LITERAL(11, 148, 8), // "filePath"
QT_MOC_LITERAL(12, 157, 17), // "setExtraSelectors"
QT_MOC_LITERAL(13, 175, 4) // "list"

    },
    "PythonQtWrapper_QFileSelector\0"
    "new_QFileSelector\0QFileSelector*\0\0"
    "parent\0delete_QFileSelector\0obj\0"
    "allSelectors\0theWrappedObject\0"
    "extraSelectors\0select\0filePath\0"
    "setExtraSelectors\0list"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QFileSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    3, 0x0a /* Public */,
       1,    0,   57,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   58,    3, 0x0a /* Public */,
       7,    1,   61,    3, 0x0a /* Public */,
       9,    1,   64,    3, 0x0a /* Public */,
      10,    2,   67,    3, 0x0a /* Public */,
      10,    2,   72,    3, 0x0a /* Public */,
      12,    2,   77,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::QStringList, 0x80000000 | 2,    8,
    QMetaType::QStringList, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString,    8,   11,
    QMetaType::QUrl, 0x80000000 | 2, QMetaType::QUrl,    8,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QStringList,    8,   13,

       0        // eod
};

void PythonQtWrapper_QFileSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QFileSelector *_t = static_cast<PythonQtWrapper_QFileSelector *>(_o);
        switch (_id) {
        case 0: { QFileSelector* _r = _t->new_QFileSelector((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileSelector**>(_a[0]) = _r; }  break;
        case 1: { QFileSelector* _r = _t->new_QFileSelector();
            if (_a[0]) *reinterpret_cast< QFileSelector**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFileSelector((*reinterpret_cast< QFileSelector*(*)>(_a[1]))); break;
        case 3: { QStringList _r = _t->allSelectors((*reinterpret_cast< QFileSelector*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 4: { QStringList _r = _t->extraSelectors((*reinterpret_cast< QFileSelector*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->select((*reinterpret_cast< QFileSelector*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QUrl _r = _t->select((*reinterpret_cast< QFileSelector*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 7: _t->setExtraSelectors((*reinterpret_cast< QFileSelector*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSelector* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSelector* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSelector* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSelector* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSelector* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSelector* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QFileSelector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFileSelector.data,
      qt_meta_data_PythonQtWrapper_QFileSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QFileSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QFileSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFileSelector.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFileSelector*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFileSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QFileSystemWatcher_t {
    QByteArrayData data[16];
    char stringdata[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QFileSystemWatcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QFileSystemWatcher_t qt_meta_stringdata_PythonQtWrapper_QFileSystemWatcher = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QFileSystemWa..."
QT_MOC_LITERAL(1, 35, 22), // "new_QFileSystemWatcher"
QT_MOC_LITERAL(2, 58, 19), // "QFileSystemWatcher*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 6), // "parent"
QT_MOC_LITERAL(5, 86, 5), // "paths"
QT_MOC_LITERAL(6, 92, 25), // "delete_QFileSystemWatcher"
QT_MOC_LITERAL(7, 118, 3), // "obj"
QT_MOC_LITERAL(8, 122, 7), // "addPath"
QT_MOC_LITERAL(9, 130, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 147, 4), // "file"
QT_MOC_LITERAL(11, 152, 8), // "addPaths"
QT_MOC_LITERAL(12, 161, 5), // "files"
QT_MOC_LITERAL(13, 167, 11), // "directories"
QT_MOC_LITERAL(14, 179, 10), // "removePath"
QT_MOC_LITERAL(15, 190, 11) // "removePaths"

    },
    "PythonQtWrapper_QFileSystemWatcher\0"
    "new_QFileSystemWatcher\0QFileSystemWatcher*\0"
    "\0parent\0paths\0delete_QFileSystemWatcher\0"
    "obj\0addPath\0theWrappedObject\0file\0"
    "addPaths\0files\0directories\0removePath\0"
    "removePaths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QFileSystemWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    3, 0x0a /* Public */,
       1,    0,   72,    3, 0x2a /* Public | MethodCloned */,
       1,    2,   73,    3, 0x0a /* Public */,
       1,    1,   78,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   81,    3, 0x0a /* Public */,
       8,    2,   84,    3, 0x0a /* Public */,
      11,    2,   89,    3, 0x0a /* Public */,
      13,    1,   94,    3, 0x0a /* Public */,
      12,    1,   97,    3, 0x0a /* Public */,
      14,    2,  100,    3, 0x0a /* Public */,
      15,    2,  105,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QStringList, QMetaType::QObjectStar,    5,    4,
    0x80000000 | 2, QMetaType::QStringList,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::QStringList, 0x80000000 | 2, QMetaType::QStringList,    9,   12,
    QMetaType::QStringList, 0x80000000 | 2,    9,
    QMetaType::QStringList, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::QStringList, 0x80000000 | 2, QMetaType::QStringList,    9,   12,

       0        // eod
};

void PythonQtWrapper_QFileSystemWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QFileSystemWatcher *_t = static_cast<PythonQtWrapper_QFileSystemWatcher *>(_o);
        switch (_id) {
        case 0: { QFileSystemWatcher* _r = _t->new_QFileSystemWatcher((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileSystemWatcher**>(_a[0]) = _r; }  break;
        case 1: { QFileSystemWatcher* _r = _t->new_QFileSystemWatcher();
            if (_a[0]) *reinterpret_cast< QFileSystemWatcher**>(_a[0]) = _r; }  break;
        case 2: { QFileSystemWatcher* _r = _t->new_QFileSystemWatcher((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFileSystemWatcher**>(_a[0]) = _r; }  break;
        case 3: { QFileSystemWatcher* _r = _t->new_QFileSystemWatcher((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFileSystemWatcher**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QFileSystemWatcher((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->addPath((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QStringList _r = _t->addPaths((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 7: { QStringList _r = _t->directories((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 8: { QStringList _r = _t->files((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->removePath((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QStringList _r = _t->removePaths((*reinterpret_cast< QFileSystemWatcher*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSystemWatcher* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSystemWatcher* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSystemWatcher* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSystemWatcher* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSystemWatcher* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSystemWatcher* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileSystemWatcher* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QFileSystemWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFileSystemWatcher.data,
      qt_meta_data_PythonQtWrapper_QFileSystemWatcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QFileSystemWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QFileSystemWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFileSystemWatcher.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFileSystemWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFileSystemWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PythonQtWrapper_QFinalState_t {
    QByteArrayData data[14];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QFinalState_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QFinalState_t qt_meta_stringdata_PythonQtWrapper_QFinalState = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QFinalState"
QT_MOC_LITERAL(1, 28, 15), // "new_QFinalState"
QT_MOC_LITERAL(2, 44, 12), // "QFinalState*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 7), // "QState*"
QT_MOC_LITERAL(5, 66, 6), // "parent"
QT_MOC_LITERAL(6, 73, 18), // "delete_QFinalState"
QT_MOC_LITERAL(7, 92, 3), // "obj"
QT_MOC_LITERAL(8, 96, 5), // "event"
QT_MOC_LITERAL(9, 102, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 119, 7), // "QEvent*"
QT_MOC_LITERAL(11, 127, 1), // "e"
QT_MOC_LITERAL(12, 129, 7), // "onEntry"
QT_MOC_LITERAL(13, 137, 6) // "onExit"

    },
    "PythonQtWrapper_QFinalState\0new_QFinalState\0"
    "QFinalState*\0\0QState*\0parent\0"
    "delete_QFinalState\0obj\0event\0"
    "theWrappedObject\0QEvent*\0e\0onEntry\0"
    "onExit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QFinalState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    3, 0x0a /* Public */,
       1,    0,   47,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   48,    3, 0x0a /* Public */,
       8,    2,   51,    3, 0x0a /* Public */,
      12,    2,   56,    3, 0x0a /* Public */,
      13,    2,   61,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    9,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    9,    8,

       0        // eod
};

void PythonQtWrapper_QFinalState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QFinalState *_t = static_cast<PythonQtWrapper_QFinalState *>(_o);
        switch (_id) {
        case 0: { QFinalState* _r = _t->new_QFinalState((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFinalState**>(_a[0]) = _r; }  break;
        case 1: { QFinalState* _r = _t->new_QFinalState();
            if (_a[0]) *reinterpret_cast< QFinalState**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QFinalState((*reinterpret_cast< QFinalState*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->event((*reinterpret_cast< QFinalState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->onEntry((*reinterpret_cast< QFinalState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 5: _t->onExit((*reinterpret_cast< QFinalState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QState* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFinalState* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFinalState* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFinalState* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFinalState* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QFinalState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QFinalState.data,
      qt_meta_data_PythonQtWrapper_QFinalState,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QFinalState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QFinalState::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QFinalState.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QFinalState*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QFinalState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QHistoryState_t {
    QByteArrayData data[22];
    char stringdata[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QHistoryState_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QHistoryState_t qt_meta_stringdata_PythonQtWrapper_QHistoryState = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QHistoryState"
QT_MOC_LITERAL(1, 30, 17), // "new_QHistoryState"
QT_MOC_LITERAL(2, 48, 14), // "QHistoryState*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 26), // "QHistoryState::HistoryType"
QT_MOC_LITERAL(5, 91, 4), // "type"
QT_MOC_LITERAL(6, 96, 7), // "QState*"
QT_MOC_LITERAL(7, 104, 6), // "parent"
QT_MOC_LITERAL(8, 111, 20), // "delete_QHistoryState"
QT_MOC_LITERAL(9, 132, 3), // "obj"
QT_MOC_LITERAL(10, 136, 12), // "defaultState"
QT_MOC_LITERAL(11, 149, 15), // "QAbstractState*"
QT_MOC_LITERAL(12, 165, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 182, 5), // "event"
QT_MOC_LITERAL(14, 188, 7), // "QEvent*"
QT_MOC_LITERAL(15, 196, 1), // "e"
QT_MOC_LITERAL(16, 198, 11), // "historyType"
QT_MOC_LITERAL(17, 210, 7), // "onEntry"
QT_MOC_LITERAL(18, 218, 6), // "onExit"
QT_MOC_LITERAL(19, 225, 15), // "setDefaultState"
QT_MOC_LITERAL(20, 241, 5), // "state"
QT_MOC_LITERAL(21, 247, 14) // "setHistoryType"

    },
    "PythonQtWrapper_QHistoryState\0"
    "new_QHistoryState\0QHistoryState*\0\0"
    "QHistoryState::HistoryType\0type\0QState*\0"
    "parent\0delete_QHistoryState\0obj\0"
    "defaultState\0QAbstractState*\0"
    "theWrappedObject\0event\0QEvent*\0e\0"
    "historyType\0onEntry\0onExit\0setDefaultState\0"
    "state\0setHistoryType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QHistoryState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   74,    3, 0x0a /* Public */,
       1,    1,   79,    3, 0x2a /* Public | MethodCloned */,
       1,    1,   82,    3, 0x0a /* Public */,
       1,    0,   85,    3, 0x2a /* Public | MethodCloned */,
       8,    1,   86,    3, 0x0a /* Public */,
      10,    1,   89,    3, 0x0a /* Public */,
      13,    2,   92,    3, 0x0a /* Public */,
      16,    1,   97,    3, 0x0a /* Public */,
      17,    2,  100,    3, 0x0a /* Public */,
      18,    2,  105,    3, 0x0a /* Public */,
      19,    2,  110,    3, 0x0a /* Public */,
      21,    2,  115,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    9,
    0x80000000 | 11, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 14,   12,   15,
    0x80000000 | 4, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   12,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   12,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,   12,   20,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   12,    5,

       0        // eod
};

void PythonQtWrapper_QHistoryState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QHistoryState *_t = static_cast<PythonQtWrapper_QHistoryState *>(_o);
        switch (_id) {
        case 0: { QHistoryState* _r = _t->new_QHistoryState((*reinterpret_cast< QHistoryState::HistoryType(*)>(_a[1])),(*reinterpret_cast< QState*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHistoryState**>(_a[0]) = _r; }  break;
        case 1: { QHistoryState* _r = _t->new_QHistoryState((*reinterpret_cast< QHistoryState::HistoryType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHistoryState**>(_a[0]) = _r; }  break;
        case 2: { QHistoryState* _r = _t->new_QHistoryState((*reinterpret_cast< QState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHistoryState**>(_a[0]) = _r; }  break;
        case 3: { QHistoryState* _r = _t->new_QHistoryState();
            if (_a[0]) *reinterpret_cast< QHistoryState**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QHistoryState((*reinterpret_cast< QHistoryState*(*)>(_a[1]))); break;
        case 5: { QAbstractState* _r = _t->defaultState((*reinterpret_cast< QHistoryState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractState**>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QHistoryState::HistoryType _r = _t->historyType((*reinterpret_cast< QHistoryState*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHistoryState::HistoryType*>(_a[0]) = _r; }  break;
        case 8: _t->onEntry((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 9: _t->onExit((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 10: _t->setDefaultState((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QAbstractState*(*)>(_a[2]))); break;
        case 11: _t->setHistoryType((*reinterpret_cast< QHistoryState*(*)>(_a[1])),(*reinterpret_cast< QHistoryState::HistoryType(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QState* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QState* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHistoryState* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHistoryState* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHistoryState* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHistoryState* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHistoryState* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHistoryState* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractState* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHistoryState* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHistoryState* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QHistoryState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHistoryState.data,
      qt_meta_data_PythonQtWrapper_QHistoryState,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QHistoryState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QHistoryState::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHistoryState.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHistoryState*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHistoryState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QIODevice_t {
    QByteArrayData data[61];
    char stringdata[595];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QIODevice_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QIODevice_t qt_meta_stringdata_PythonQtWrapper_QIODevice = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QIODevice"
QT_MOC_LITERAL(1, 26, 13), // "new_QIODevice"
QT_MOC_LITERAL(2, 40, 10), // "QIODevice*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 6), // "parent"
QT_MOC_LITERAL(5, 59, 16), // "delete_QIODevice"
QT_MOC_LITERAL(6, 76, 3), // "obj"
QT_MOC_LITERAL(7, 80, 5), // "atEnd"
QT_MOC_LITERAL(8, 86, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 103, 14), // "bytesAvailable"
QT_MOC_LITERAL(10, 118, 12), // "bytesToWrite"
QT_MOC_LITERAL(11, 131, 11), // "canReadLine"
QT_MOC_LITERAL(12, 143, 5), // "close"
QT_MOC_LITERAL(13, 149, 11), // "errorString"
QT_MOC_LITERAL(14, 161, 7), // "getChar"
QT_MOC_LITERAL(15, 169, 5), // "char*"
QT_MOC_LITERAL(16, 175, 1), // "c"
QT_MOC_LITERAL(17, 177, 6), // "isOpen"
QT_MOC_LITERAL(18, 184, 10), // "isReadable"
QT_MOC_LITERAL(19, 195, 12), // "isSequential"
QT_MOC_LITERAL(20, 208, 17), // "isTextModeEnabled"
QT_MOC_LITERAL(21, 226, 10), // "isWritable"
QT_MOC_LITERAL(22, 237, 4), // "open"
QT_MOC_LITERAL(23, 242, 19), // "QIODevice::OpenMode"
QT_MOC_LITERAL(24, 262, 4), // "mode"
QT_MOC_LITERAL(25, 267, 8), // "openMode"
QT_MOC_LITERAL(26, 276, 4), // "peek"
QT_MOC_LITERAL(27, 281, 6), // "maxlen"
QT_MOC_LITERAL(28, 288, 3), // "pos"
QT_MOC_LITERAL(29, 292, 7), // "putChar"
QT_MOC_LITERAL(30, 300, 4), // "read"
QT_MOC_LITERAL(31, 305, 7), // "readAll"
QT_MOC_LITERAL(32, 313, 8), // "readData"
QT_MOC_LITERAL(33, 322, 4), // "data"
QT_MOC_LITERAL(34, 327, 8), // "readLine"
QT_MOC_LITERAL(35, 336, 12), // "readLineData"
QT_MOC_LITERAL(36, 349, 5), // "reset"
QT_MOC_LITERAL(37, 355, 4), // "seek"
QT_MOC_LITERAL(38, 360, 14), // "setErrorString"
QT_MOC_LITERAL(39, 375, 11), // "setOpenMode"
QT_MOC_LITERAL(40, 387, 18), // "setTextModeEnabled"
QT_MOC_LITERAL(41, 406, 7), // "enabled"
QT_MOC_LITERAL(42, 414, 4), // "size"
QT_MOC_LITERAL(43, 419, 9), // "ungetChar"
QT_MOC_LITERAL(44, 429, 19), // "waitForBytesWritten"
QT_MOC_LITERAL(45, 449, 5), // "msecs"
QT_MOC_LITERAL(46, 455, 16), // "waitForReadyRead"
QT_MOC_LITERAL(47, 472, 5), // "write"
QT_MOC_LITERAL(48, 478, 11), // "const char*"
QT_MOC_LITERAL(49, 490, 9), // "writeData"
QT_MOC_LITERAL(50, 500, 3), // "len"
QT_MOC_LITERAL(51, 504, 12), // "OpenModeFlag"
QT_MOC_LITERAL(52, 517, 7), // "NotOpen"
QT_MOC_LITERAL(53, 525, 8), // "ReadOnly"
QT_MOC_LITERAL(54, 534, 9), // "WriteOnly"
QT_MOC_LITERAL(55, 544, 9), // "ReadWrite"
QT_MOC_LITERAL(56, 554, 6), // "Append"
QT_MOC_LITERAL(57, 561, 8), // "Truncate"
QT_MOC_LITERAL(58, 570, 4), // "Text"
QT_MOC_LITERAL(59, 575, 10), // "Unbuffered"
QT_MOC_LITERAL(60, 586, 8) // "OpenMode"

    },
    "PythonQtWrapper_QIODevice\0new_QIODevice\0"
    "QIODevice*\0\0parent\0delete_QIODevice\0"
    "obj\0atEnd\0theWrappedObject\0bytesAvailable\0"
    "bytesToWrite\0canReadLine\0close\0"
    "errorString\0getChar\0char*\0c\0isOpen\0"
    "isReadable\0isSequential\0isTextModeEnabled\0"
    "isWritable\0open\0QIODevice::OpenMode\0"
    "mode\0openMode\0peek\0maxlen\0pos\0putChar\0"
    "read\0readAll\0readData\0data\0readLine\0"
    "readLineData\0reset\0seek\0setErrorString\0"
    "setOpenMode\0setTextModeEnabled\0enabled\0"
    "size\0ungetChar\0waitForBytesWritten\0"
    "msecs\0waitForReadyRead\0write\0const char*\0"
    "writeData\0len\0OpenModeFlag\0NotOpen\0"
    "ReadOnly\0WriteOnly\0ReadWrite\0Append\0"
    "Truncate\0Text\0Unbuffered\0OpenMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QIODevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       2,  358, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  204,    3, 0x0a /* Public */,
       1,    1,  205,    3, 0x0a /* Public */,
       5,    1,  208,    3, 0x0a /* Public */,
       7,    1,  211,    3, 0x0a /* Public */,
       9,    1,  214,    3, 0x0a /* Public */,
      10,    1,  217,    3, 0x0a /* Public */,
      11,    1,  220,    3, 0x0a /* Public */,
      12,    1,  223,    3, 0x0a /* Public */,
      13,    1,  226,    3, 0x0a /* Public */,
      14,    2,  229,    3, 0x0a /* Public */,
      17,    1,  234,    3, 0x0a /* Public */,
      18,    1,  237,    3, 0x0a /* Public */,
      19,    1,  240,    3, 0x0a /* Public */,
      20,    1,  243,    3, 0x0a /* Public */,
      21,    1,  246,    3, 0x0a /* Public */,
      22,    2,  249,    3, 0x0a /* Public */,
      25,    1,  254,    3, 0x0a /* Public */,
      26,    2,  257,    3, 0x0a /* Public */,
      28,    1,  262,    3, 0x0a /* Public */,
      29,    2,  265,    3, 0x0a /* Public */,
      30,    2,  270,    3, 0x0a /* Public */,
      31,    1,  275,    3, 0x0a /* Public */,
      32,    3,  278,    3, 0x0a /* Public */,
      34,    2,  285,    3, 0x0a /* Public */,
      34,    1,  290,    3, 0x2a /* Public | MethodCloned */,
      35,    3,  293,    3, 0x0a /* Public */,
      36,    1,  300,    3, 0x0a /* Public */,
      37,    2,  303,    3, 0x0a /* Public */,
      38,    2,  308,    3, 0x0a /* Public */,
      39,    2,  313,    3, 0x0a /* Public */,
      40,    2,  318,    3, 0x0a /* Public */,
      42,    1,  323,    3, 0x0a /* Public */,
      43,    2,  326,    3, 0x0a /* Public */,
      44,    2,  331,    3, 0x0a /* Public */,
      46,    2,  336,    3, 0x0a /* Public */,
      47,    2,  341,    3, 0x0a /* Public */,
      47,    2,  346,    3, 0x0a /* Public */,
      49,    3,  351,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,    8,   16,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 23,    8,   24,
    0x80000000 | 23, 0x80000000 | 2,    8,
    QMetaType::QByteArray, 0x80000000 | 2, QMetaType::LongLong,    8,   27,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Char,    8,   16,
    QMetaType::QByteArray, 0x80000000 | 2, QMetaType::LongLong,    8,   27,
    QMetaType::QByteArray, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 15, QMetaType::LongLong,    8,   33,   27,
    QMetaType::QByteArray, 0x80000000 | 2, QMetaType::LongLong,    8,   27,
    QMetaType::QByteArray, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 15, QMetaType::LongLong,    8,   33,   27,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::LongLong,    8,   28,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    8,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,    8,   25,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    8,   41,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Char,    8,   16,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    8,   45,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    8,   45,
    QMetaType::LongLong, 0x80000000 | 2, QMetaType::QByteArray,    8,   33,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 48,    8,   33,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 48, QMetaType::LongLong,    8,   33,   50,

 // enums: name, flags, count, data
      51, 0x0,    8,  366,
      60, 0x1,    8,  382,

 // enum data: key, value
      52, uint(PythonQtWrapper_QIODevice::NotOpen),
      53, uint(PythonQtWrapper_QIODevice::ReadOnly),
      54, uint(PythonQtWrapper_QIODevice::WriteOnly),
      55, uint(PythonQtWrapper_QIODevice::ReadWrite),
      56, uint(PythonQtWrapper_QIODevice::Append),
      57, uint(PythonQtWrapper_QIODevice::Truncate),
      58, uint(PythonQtWrapper_QIODevice::Text),
      59, uint(PythonQtWrapper_QIODevice::Unbuffered),
      52, uint(PythonQtWrapper_QIODevice::NotOpen),
      53, uint(PythonQtWrapper_QIODevice::ReadOnly),
      54, uint(PythonQtWrapper_QIODevice::WriteOnly),
      55, uint(PythonQtWrapper_QIODevice::ReadWrite),
      56, uint(PythonQtWrapper_QIODevice::Append),
      57, uint(PythonQtWrapper_QIODevice::Truncate),
      58, uint(PythonQtWrapper_QIODevice::Text),
      59, uint(PythonQtWrapper_QIODevice::Unbuffered),

       0        // eod
};

void PythonQtWrapper_QIODevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QIODevice *_t = static_cast<PythonQtWrapper_QIODevice *>(_o);
        switch (_id) {
        case 0: { QIODevice* _r = _t->new_QIODevice();
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 1: { QIODevice* _r = _t->new_QIODevice((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QIODevice((*reinterpret_cast< QIODevice*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->atEnd((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: { qint64 _r = _t->bytesToWrite((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->canReadLine((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->close((*reinterpret_cast< QIODevice*(*)>(_a[1]))); break;
        case 8: { QString _r = _t->errorString((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->getChar((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isOpen((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isReadable((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isSequential((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isTextModeEnabled((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isWritable((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->open((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { QIODevice::OpenMode _r = _t->openMode((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice::OpenMode*>(_a[0]) = _r; }  break;
        case 17: { QByteArray _r = _t->peek((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 18: { qint64 _r = _t->pos((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->putChar((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QByteArray _r = _t->read((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 21: { QByteArray _r = _t->readAll((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 22: { qint64 _r = _t->readData((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 23: { QByteArray _r = _t->readLine((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 24: { QByteArray _r = _t->readLine((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 25: { qint64 _r = _t->readLineData((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->reset((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->seek((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: _t->setErrorString((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->setOpenMode((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2]))); break;
        case 30: _t->setTextModeEnabled((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: { qint64 _r = _t->size((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 32: _t->ungetChar((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2]))); break;
        case 33: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { qint64 _r = _t->write((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 36: { qint64 _r = _t->write((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 37: { qint64 _r = _t->writeData((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QIODevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QIODevice.data,
      qt_meta_data_PythonQtWrapper_QIODevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QIODevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QIODevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QIODevice.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QIODevice*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QIODevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QIdentityProxyModel_t {
    QByteArrayData data[49];
    char stringdata[586];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QIdentityProxyModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QIdentityProxyModel_t qt_meta_stringdata_PythonQtWrapper_QIdentityProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_QIdentityProx..."
QT_MOC_LITERAL(1, 36, 23), // "new_QIdentityProxyModel"
QT_MOC_LITERAL(2, 60, 20), // "QIdentityProxyModel*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 6), // "parent"
QT_MOC_LITERAL(5, 89, 26), // "delete_QIdentityProxyModel"
QT_MOC_LITERAL(6, 116, 3), // "obj"
QT_MOC_LITERAL(7, 120, 11), // "columnCount"
QT_MOC_LITERAL(8, 132, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 149, 12), // "dropMimeData"
QT_MOC_LITERAL(10, 162, 16), // "const QMimeData*"
QT_MOC_LITERAL(11, 179, 4), // "data"
QT_MOC_LITERAL(12, 184, 14), // "Qt::DropAction"
QT_MOC_LITERAL(13, 199, 6), // "action"
QT_MOC_LITERAL(14, 206, 3), // "row"
QT_MOC_LITERAL(15, 210, 6), // "column"
QT_MOC_LITERAL(16, 217, 10), // "headerData"
QT_MOC_LITERAL(17, 228, 7), // "section"
QT_MOC_LITERAL(18, 236, 15), // "Qt::Orientation"
QT_MOC_LITERAL(19, 252, 11), // "orientation"
QT_MOC_LITERAL(20, 264, 4), // "role"
QT_MOC_LITERAL(21, 269, 5), // "index"
QT_MOC_LITERAL(22, 275, 13), // "insertColumns"
QT_MOC_LITERAL(23, 289, 5), // "count"
QT_MOC_LITERAL(24, 295, 10), // "insertRows"
QT_MOC_LITERAL(25, 306, 13), // "mapFromSource"
QT_MOC_LITERAL(26, 320, 11), // "sourceIndex"
QT_MOC_LITERAL(27, 332, 22), // "mapSelectionFromSource"
QT_MOC_LITERAL(28, 355, 14), // "QItemSelection"
QT_MOC_LITERAL(29, 370, 9), // "selection"
QT_MOC_LITERAL(30, 380, 20), // "mapSelectionToSource"
QT_MOC_LITERAL(31, 401, 11), // "mapToSource"
QT_MOC_LITERAL(32, 413, 10), // "proxyIndex"
QT_MOC_LITERAL(33, 424, 5), // "match"
QT_MOC_LITERAL(34, 430, 18), // "QList<QModelIndex>"
QT_MOC_LITERAL(35, 449, 5), // "start"
QT_MOC_LITERAL(36, 455, 5), // "value"
QT_MOC_LITERAL(37, 461, 4), // "hits"
QT_MOC_LITERAL(38, 466, 14), // "Qt::MatchFlags"
QT_MOC_LITERAL(39, 481, 5), // "flags"
QT_MOC_LITERAL(40, 487, 5), // "child"
QT_MOC_LITERAL(41, 493, 13), // "removeColumns"
QT_MOC_LITERAL(42, 507, 10), // "removeRows"
QT_MOC_LITERAL(43, 518, 8), // "rowCount"
QT_MOC_LITERAL(44, 527, 14), // "setSourceModel"
QT_MOC_LITERAL(45, 542, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(46, 562, 11), // "sourceModel"
QT_MOC_LITERAL(47, 574, 7), // "sibling"
QT_MOC_LITERAL(48, 582, 3) // "idx"

    },
    "PythonQtWrapper_QIdentityProxyModel\0"
    "new_QIdentityProxyModel\0QIdentityProxyModel*\0"
    "\0parent\0delete_QIdentityProxyModel\0"
    "obj\0columnCount\0theWrappedObject\0"
    "dropMimeData\0const QMimeData*\0data\0"
    "Qt::DropAction\0action\0row\0column\0"
    "headerData\0section\0Qt::Orientation\0"
    "orientation\0role\0index\0insertColumns\0"
    "count\0insertRows\0mapFromSource\0"
    "sourceIndex\0mapSelectionFromSource\0"
    "QItemSelection\0selection\0mapSelectionToSource\0"
    "mapToSource\0proxyIndex\0match\0"
    "QList<QModelIndex>\0start\0value\0hits\0"
    "Qt::MatchFlags\0flags\0child\0removeColumns\0"
    "removeRows\0rowCount\0setSourceModel\0"
    "QAbstractItemModel*\0sourceModel\0sibling\0"
    "idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QIdentityProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  159,    3, 0x0a /* Public */,
       1,    0,  162,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  163,    3, 0x0a /* Public */,
       7,    2,  166,    3, 0x0a /* Public */,
       7,    1,  171,    3, 0x2a /* Public | MethodCloned */,
       9,    6,  174,    3, 0x0a /* Public */,
      16,    4,  187,    3, 0x0a /* Public */,
      21,    4,  196,    3, 0x0a /* Public */,
      21,    3,  205,    3, 0x2a /* Public | MethodCloned */,
      22,    4,  212,    3, 0x0a /* Public */,
      22,    3,  221,    3, 0x2a /* Public | MethodCloned */,
      24,    4,  228,    3, 0x0a /* Public */,
      24,    3,  237,    3, 0x2a /* Public | MethodCloned */,
      25,    2,  244,    3, 0x0a /* Public */,
      27,    2,  249,    3, 0x0a /* Public */,
      30,    2,  254,    3, 0x0a /* Public */,
      31,    2,  259,    3, 0x0a /* Public */,
      33,    6,  264,    3, 0x0a /* Public */,
      33,    5,  277,    3, 0x2a /* Public | MethodCloned */,
      33,    4,  288,    3, 0x2a /* Public | MethodCloned */,
       4,    2,  297,    3, 0x0a /* Public */,
      41,    4,  302,    3, 0x0a /* Public */,
      41,    3,  311,    3, 0x2a /* Public | MethodCloned */,
      42,    4,  318,    3, 0x0a /* Public */,
      42,    3,  327,    3, 0x2a /* Public | MethodCloned */,
      43,    2,  334,    3, 0x0a /* Public */,
      43,    1,  339,    3, 0x2a /* Public | MethodCloned */,
      44,    2,  342,    3, 0x0a /* Public */,
      47,    4,  347,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10, 0x80000000 | 12, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   11,   13,   14,   15,    4,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 18, QMetaType::Int,    8,   17,   19,   20,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   14,   15,    4,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   14,   15,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   15,   23,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   15,   23,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   14,   23,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   14,   23,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,    8,   26,
    0x80000000 | 28, 0x80000000 | 2, 0x80000000 | 28,    8,   29,
    0x80000000 | 28, 0x80000000 | 2, 0x80000000 | 28,    8,   29,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,    8,   32,
    0x80000000 | 34, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::QVariant, QMetaType::Int, 0x80000000 | 38,    8,   35,   20,   36,   37,   39,
    0x80000000 | 34, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::QVariant, QMetaType::Int,    8,   35,   20,   36,   37,
    0x80000000 | 34, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::QVariant,    8,   35,   20,   36,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,    8,   40,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   15,   23,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   15,   23,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   14,   23,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   14,   23,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 45,    8,   46,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   14,   15,   48,

       0        // eod
};

void PythonQtWrapper_QIdentityProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QIdentityProxyModel *_t = static_cast<PythonQtWrapper_QIdentityProxyModel *>(_o);
        switch (_id) {
        case 0: { QIdentityProxyModel* _r = _t->new_QIdentityProxyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIdentityProxyModel**>(_a[0]) = _r; }  break;
        case 1: { QIdentityProxyModel* _r = _t->new_QIdentityProxyModel();
            if (_a[0]) *reinterpret_cast< QIdentityProxyModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QIdentityProxyModel((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1]))); break;
        case 3: { int _r = _t->columnCount((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->columnCount((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->dropMimeData((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QModelIndex(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->headerData((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { QModelIndex _r = _t->index((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 8: { QModelIndex _r = _t->index((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->insertColumns((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->insertColumns((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->insertRows((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->insertRows((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QModelIndex _r = _t->mapFromSource((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 14: { QItemSelection _r = _t->mapSelectionFromSource((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelection*>(_a[0]) = _r; }  break;
        case 15: { QItemSelection _r = _t->mapSelectionToSource((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelection*>(_a[0]) = _r; }  break;
        case 16: { QModelIndex _r = _t->mapToSource((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 17: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 18: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 19: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 20: { QModelIndex _r = _t->parent((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->removeColumns((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->removeColumns((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->removeRows((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->removeRows((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->rowCount((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->rowCount((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: _t->setSourceModel((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[2]))); break;
        case 28: { QModelIndex _r = _t->sibling((*reinterpret_cast< QIdentityProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIdentityProxyModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QIdentityProxyModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QIdentityProxyModel.data,
      qt_meta_data_PythonQtWrapper_QIdentityProxyModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QIdentityProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QIdentityProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QIdentityProxyModel.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QIdentityProxyModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QIdentityProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QJsonArray_t {
    QByteArrayData data[45];
    char stringdata[452];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QJsonArray_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QJsonArray_t qt_meta_stringdata_PythonQtWrapper_QJsonArray = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QJsonArray"
QT_MOC_LITERAL(1, 27, 14), // "new_QJsonArray"
QT_MOC_LITERAL(2, 42, 11), // "QJsonArray*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 5), // "other"
QT_MOC_LITERAL(5, 61, 17), // "delete_QJsonArray"
QT_MOC_LITERAL(6, 79, 3), // "obj"
QT_MOC_LITERAL(7, 83, 6), // "append"
QT_MOC_LITERAL(8, 90, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 107, 5), // "value"
QT_MOC_LITERAL(10, 113, 2), // "at"
QT_MOC_LITERAL(11, 116, 1), // "i"
QT_MOC_LITERAL(12, 118, 8), // "contains"
QT_MOC_LITERAL(13, 127, 7), // "element"
QT_MOC_LITERAL(14, 135, 5), // "count"
QT_MOC_LITERAL(15, 141, 5), // "empty"
QT_MOC_LITERAL(16, 147, 5), // "first"
QT_MOC_LITERAL(17, 153, 32), // "static_QJsonArray_fromStringList"
QT_MOC_LITERAL(18, 186, 4), // "list"
QT_MOC_LITERAL(19, 191, 33), // "static_QJsonArray_fromVariant..."
QT_MOC_LITERAL(20, 225, 6), // "insert"
QT_MOC_LITERAL(21, 232, 7), // "isEmpty"
QT_MOC_LITERAL(22, 240, 4), // "last"
QT_MOC_LITERAL(23, 245, 6), // "__ne__"
QT_MOC_LITERAL(24, 252, 7), // "__add__"
QT_MOC_LITERAL(25, 260, 1), // "v"
QT_MOC_LITERAL(26, 262, 8), // "__iadd__"
QT_MOC_LITERAL(27, 271, 10), // "__lshift__"
QT_MOC_LITERAL(28, 282, 15), // "operator_assign"
QT_MOC_LITERAL(29, 298, 6), // "__eq__"
QT_MOC_LITERAL(30, 305, 18), // "operator_subscript"
QT_MOC_LITERAL(31, 324, 8), // "pop_back"
QT_MOC_LITERAL(32, 333, 9), // "pop_front"
QT_MOC_LITERAL(33, 343, 7), // "prepend"
QT_MOC_LITERAL(34, 351, 9), // "push_back"
QT_MOC_LITERAL(35, 361, 1), // "t"
QT_MOC_LITERAL(36, 363, 10), // "push_front"
QT_MOC_LITERAL(37, 374, 8), // "removeAt"
QT_MOC_LITERAL(38, 383, 11), // "removeFirst"
QT_MOC_LITERAL(39, 395, 10), // "removeLast"
QT_MOC_LITERAL(40, 406, 7), // "replace"
QT_MOC_LITERAL(41, 414, 4), // "size"
QT_MOC_LITERAL(42, 419, 6), // "takeAt"
QT_MOC_LITERAL(43, 426, 13), // "toVariantList"
QT_MOC_LITERAL(44, 440, 11) // "py_toString"

    },
    "PythonQtWrapper_QJsonArray\0new_QJsonArray\0"
    "QJsonArray*\0\0other\0delete_QJsonArray\0"
    "obj\0append\0theWrappedObject\0value\0at\0"
    "i\0contains\0element\0count\0empty\0first\0"
    "static_QJsonArray_fromStringList\0list\0"
    "static_QJsonArray_fromVariantList\0"
    "insert\0isEmpty\0last\0__ne__\0__add__\0v\0"
    "__iadd__\0__lshift__\0operator_assign\0"
    "__eq__\0operator_subscript\0pop_back\0"
    "pop_front\0prepend\0push_back\0t\0push_front\0"
    "removeAt\0removeFirst\0removeLast\0replace\0"
    "size\0takeAt\0toVariantList\0py_toString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QJsonArray[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  184,    3, 0x0a /* Public */,
       1,    1,  185,    3, 0x0a /* Public */,
       5,    1,  188,    3, 0x0a /* Public */,
       7,    2,  191,    3, 0x0a /* Public */,
      10,    2,  196,    3, 0x0a /* Public */,
      12,    2,  201,    3, 0x0a /* Public */,
      14,    1,  206,    3, 0x0a /* Public */,
      15,    1,  209,    3, 0x0a /* Public */,
      16,    1,  212,    3, 0x0a /* Public */,
      17,    1,  215,    3, 0x0a /* Public */,
      19,    1,  218,    3, 0x0a /* Public */,
      20,    3,  221,    3, 0x0a /* Public */,
      21,    1,  228,    3, 0x0a /* Public */,
      22,    1,  231,    3, 0x0a /* Public */,
      23,    2,  234,    3, 0x0a /* Public */,
      24,    2,  239,    3, 0x0a /* Public */,
      26,    2,  244,    3, 0x0a /* Public */,
      27,    2,  249,    3, 0x0a /* Public */,
      28,    2,  254,    3, 0x0a /* Public */,
      29,    2,  259,    3, 0x0a /* Public */,
      30,    2,  264,    3, 0x0a /* Public */,
      31,    1,  269,    3, 0x0a /* Public */,
      32,    1,  272,    3, 0x0a /* Public */,
      33,    2,  275,    3, 0x0a /* Public */,
      34,    2,  280,    3, 0x0a /* Public */,
      36,    2,  285,    3, 0x0a /* Public */,
      37,    2,  290,    3, 0x0a /* Public */,
      38,    1,  295,    3, 0x0a /* Public */,
      39,    1,  298,    3, 0x0a /* Public */,
      40,    3,  301,    3, 0x0a /* Public */,
      41,    1,  308,    3, 0x0a /* Public */,
      42,    2,  311,    3, 0x0a /* Public */,
      43,    1,  316,    3, 0x0a /* Public */,
      44,    1,  319,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QJsonArray,    4,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QJsonValue,    8,    9,
    QMetaType::QJsonValue, 0x80000000 | 2, QMetaType::Int,    8,   11,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QJsonValue,    8,   13,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::QJsonValue, 0x80000000 | 2,    8,
    QMetaType::QJsonArray, QMetaType::QStringList,   18,
    QMetaType::QJsonArray, QMetaType::QVariantList,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::QJsonValue,    8,   11,    9,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::QJsonValue, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QJsonArray,    8,    4,
    QMetaType::QJsonArray, 0x80000000 | 2, QMetaType::QJsonValue,    8,   25,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QJsonValue,    8,   25,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QJsonValue,    8,   25,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QJsonArray,    8,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QJsonArray,    8,    4,
    QMetaType::QJsonValue, 0x80000000 | 2, QMetaType::Int,    8,   11,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QJsonValue,    8,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QJsonValue,    8,   35,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QJsonValue,    8,   35,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    8,   11,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::QJsonValue,    8,   11,    9,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QJsonValue, 0x80000000 | 2, QMetaType::Int,    8,   11,
    QMetaType::QVariantList, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2,    3,

       0        // eod
};

void PythonQtWrapper_QJsonArray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QJsonArray *_t = static_cast<PythonQtWrapper_QJsonArray *>(_o);
        switch (_id) {
        case 0: { QJsonArray* _r = _t->new_QJsonArray();
            if (_a[0]) *reinterpret_cast< QJsonArray**>(_a[0]) = _r; }  break;
        case 1: { QJsonArray* _r = _t->new_QJsonArray((*reinterpret_cast< const QJsonArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QJsonArray((*reinterpret_cast< QJsonArray*(*)>(_a[1]))); break;
        case 3: _t->append((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 4: { QJsonValue _r = _t->at((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->contains((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->count((*reinterpret_cast< QJsonArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->empty((*reinterpret_cast< QJsonArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QJsonValue _r = _t->first((*reinterpret_cast< QJsonArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = _r; }  break;
        case 9: { QJsonArray _r = _t->static_QJsonArray_fromStringList((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = _r; }  break;
        case 10: { QJsonArray _r = _t->static_QJsonArray_fromVariantList((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = _r; }  break;
        case 11: _t->insert((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QJsonValue(*)>(_a[3]))); break;
        case 12: { bool _r = _t->isEmpty((*reinterpret_cast< QJsonArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QJsonValue _r = _t->last((*reinterpret_cast< QJsonArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__ne__((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QJsonArray _r = _t->__add__((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = _r; }  break;
        case 16: { QJsonArray* _r = _t->__iadd__((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonArray**>(_a[0]) = _r; }  break;
        case 17: { QJsonArray* _r = _t->__lshift__((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonArray**>(_a[0]) = _r; }  break;
        case 18: { QJsonArray* _r = _t->operator_assign((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonArray**>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->__eq__((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QJsonValue _r = _t->operator_subscript((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = _r; }  break;
        case 21: _t->pop_back((*reinterpret_cast< QJsonArray*(*)>(_a[1]))); break;
        case 22: _t->pop_front((*reinterpret_cast< QJsonArray*(*)>(_a[1]))); break;
        case 23: _t->prepend((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 24: _t->push_back((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 25: _t->push_front((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2]))); break;
        case 26: _t->removeAt((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->removeFirst((*reinterpret_cast< QJsonArray*(*)>(_a[1]))); break;
        case 28: _t->removeLast((*reinterpret_cast< QJsonArray*(*)>(_a[1]))); break;
        case 29: _t->replace((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QJsonValue(*)>(_a[3]))); break;
        case 30: { int _r = _t->size((*reinterpret_cast< QJsonArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { QJsonValue _r = _t->takeAt((*reinterpret_cast< QJsonArray*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = _r; }  break;
        case 32: { QList<QVariant> _r = _t->toVariantList((*reinterpret_cast< QJsonArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = _r; }  break;
        case 33: { QString _r = _t->py_toString((*reinterpret_cast< QJsonArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QJsonArray::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QJsonArray.data,
      qt_meta_data_PythonQtWrapper_QJsonArray,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QJsonArray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QJsonArray::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QJsonArray.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QJsonArray*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QJsonArray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 34;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QJsonDocument_t {
    QByteArrayData data[47];
    char stringdata[606];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QJsonDocument_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QJsonDocument_t qt_meta_stringdata_PythonQtWrapper_QJsonDocument = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QJsonDocument"
QT_MOC_LITERAL(1, 30, 17), // "new_QJsonDocument"
QT_MOC_LITERAL(2, 48, 14), // "QJsonDocument*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 5), // "array"
QT_MOC_LITERAL(5, 70, 5), // "other"
QT_MOC_LITERAL(6, 76, 6), // "object"
QT_MOC_LITERAL(7, 83, 20), // "delete_QJsonDocument"
QT_MOC_LITERAL(8, 104, 3), // "obj"
QT_MOC_LITERAL(9, 108, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 125, 35), // "static_QJsonDocument_fromBina..."
QT_MOC_LITERAL(11, 161, 4), // "data"
QT_MOC_LITERAL(12, 166, 29), // "QJsonDocument::DataValidation"
QT_MOC_LITERAL(13, 196, 10), // "validation"
QT_MOC_LITERAL(14, 207, 29), // "static_QJsonDocument_fromJson"
QT_MOC_LITERAL(15, 237, 4), // "json"
QT_MOC_LITERAL(16, 242, 16), // "QJsonParseError*"
QT_MOC_LITERAL(17, 259, 5), // "error"
QT_MOC_LITERAL(18, 265, 32), // "static_QJsonDocument_fromRawData"
QT_MOC_LITERAL(19, 298, 11), // "const char*"
QT_MOC_LITERAL(20, 310, 4), // "size"
QT_MOC_LITERAL(21, 315, 32), // "static_QJsonDocument_fromVariant"
QT_MOC_LITERAL(22, 348, 7), // "variant"
QT_MOC_LITERAL(23, 356, 7), // "isArray"
QT_MOC_LITERAL(24, 364, 7), // "isEmpty"
QT_MOC_LITERAL(25, 372, 6), // "isNull"
QT_MOC_LITERAL(26, 379, 8), // "isObject"
QT_MOC_LITERAL(27, 388, 6), // "__ne__"
QT_MOC_LITERAL(28, 395, 15), // "operator_assign"
QT_MOC_LITERAL(29, 411, 6), // "__eq__"
QT_MOC_LITERAL(30, 418, 7), // "rawData"
QT_MOC_LITERAL(31, 426, 4), // "int*"
QT_MOC_LITERAL(32, 431, 8), // "setArray"
QT_MOC_LITERAL(33, 440, 9), // "setObject"
QT_MOC_LITERAL(34, 450, 12), // "toBinaryData"
QT_MOC_LITERAL(35, 463, 6), // "toJson"
QT_MOC_LITERAL(36, 470, 25), // "QJsonDocument::JsonFormat"
QT_MOC_LITERAL(37, 496, 6), // "format"
QT_MOC_LITERAL(38, 503, 9), // "toVariant"
QT_MOC_LITERAL(39, 513, 11), // "py_toString"
QT_MOC_LITERAL(40, 525, 11), // "__nonzero__"
QT_MOC_LITERAL(41, 537, 14), // "DataValidation"
QT_MOC_LITERAL(42, 552, 8), // "Validate"
QT_MOC_LITERAL(43, 561, 16), // "BypassValidation"
QT_MOC_LITERAL(44, 578, 10), // "JsonFormat"
QT_MOC_LITERAL(45, 589, 8), // "Indented"
QT_MOC_LITERAL(46, 598, 7) // "Compact"

    },
    "PythonQtWrapper_QJsonDocument\0"
    "new_QJsonDocument\0QJsonDocument*\0\0"
    "array\0other\0object\0delete_QJsonDocument\0"
    "obj\0theWrappedObject\0"
    "static_QJsonDocument_fromBinaryData\0"
    "data\0QJsonDocument::DataValidation\0"
    "validation\0static_QJsonDocument_fromJson\0"
    "json\0QJsonParseError*\0error\0"
    "static_QJsonDocument_fromRawData\0"
    "const char*\0size\0static_QJsonDocument_fromVariant\0"
    "variant\0isArray\0isEmpty\0isNull\0isObject\0"
    "__ne__\0operator_assign\0__eq__\0rawData\0"
    "int*\0setArray\0setObject\0toBinaryData\0"
    "toJson\0QJsonDocument::JsonFormat\0"
    "format\0toVariant\0py_toString\0__nonzero__\0"
    "DataValidation\0Validate\0BypassValidation\0"
    "JsonFormat\0Indented\0Compact"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QJsonDocument[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       2,  276, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  164,    3, 0x0a /* Public */,
       1,    1,  165,    3, 0x0a /* Public */,
       1,    1,  168,    3, 0x0a /* Public */,
       1,    1,  171,    3, 0x0a /* Public */,
       7,    1,  174,    3, 0x0a /* Public */,
       4,    1,  177,    3, 0x0a /* Public */,
      10,    2,  180,    3, 0x0a /* Public */,
      10,    1,  185,    3, 0x2a /* Public | MethodCloned */,
      14,    2,  188,    3, 0x0a /* Public */,
      14,    1,  193,    3, 0x2a /* Public | MethodCloned */,
      18,    3,  196,    3, 0x0a /* Public */,
      18,    2,  203,    3, 0x2a /* Public | MethodCloned */,
      21,    1,  208,    3, 0x0a /* Public */,
      23,    1,  211,    3, 0x0a /* Public */,
      24,    1,  214,    3, 0x0a /* Public */,
      25,    1,  217,    3, 0x0a /* Public */,
      26,    1,  220,    3, 0x0a /* Public */,
       6,    1,  223,    3, 0x0a /* Public */,
      27,    2,  226,    3, 0x0a /* Public */,
      28,    2,  231,    3, 0x0a /* Public */,
      29,    2,  236,    3, 0x0a /* Public */,
      30,    2,  241,    3, 0x0a /* Public */,
      32,    2,  246,    3, 0x0a /* Public */,
      33,    2,  251,    3, 0x0a /* Public */,
      34,    1,  256,    3, 0x0a /* Public */,
      35,    1,  259,    3, 0x0a /* Public */,
      35,    2,  262,    3, 0x0a /* Public */,
      38,    1,  267,    3, 0x0a /* Public */,
      39,    1,  270,    3, 0x0a /* Public */,
      40,    1,  273,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QJsonArray,    4,
    0x80000000 | 2, QMetaType::QJsonDocument,    5,
    0x80000000 | 2, QMetaType::QJsonObject,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QJsonArray, 0x80000000 | 2,    9,
    QMetaType::QJsonDocument, QMetaType::QByteArray, 0x80000000 | 12,   11,   13,
    QMetaType::QJsonDocument, QMetaType::QByteArray,   11,
    QMetaType::QJsonDocument, QMetaType::QByteArray, 0x80000000 | 16,   15,   17,
    QMetaType::QJsonDocument, QMetaType::QByteArray,   15,
    QMetaType::QJsonDocument, 0x80000000 | 19, QMetaType::Int, 0x80000000 | 12,   11,   20,   13,
    QMetaType::QJsonDocument, 0x80000000 | 19, QMetaType::Int,   11,   20,
    QMetaType::QJsonDocument, QMetaType::QVariant,   22,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::QJsonObject, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QJsonDocument,    9,    5,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QJsonDocument,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QJsonDocument,    9,    5,
    0x80000000 | 19, 0x80000000 | 2, 0x80000000 | 31,    9,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QJsonArray,    9,    4,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QJsonObject,    9,    6,
    QMetaType::QByteArray, 0x80000000 | 2,    9,
    QMetaType::QByteArray, 0x80000000 | 2,    9,
    QMetaType::QByteArray, 0x80000000 | 2, 0x80000000 | 36,    9,   37,
    QMetaType::QVariant, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    3,
    QMetaType::Bool, 0x80000000 | 2,    8,

 // enums: name, flags, count, data
      41, 0x0,    2,  284,
      44, 0x0,    2,  288,

 // enum data: key, value
      42, uint(PythonQtWrapper_QJsonDocument::Validate),
      43, uint(PythonQtWrapper_QJsonDocument::BypassValidation),
      45, uint(PythonQtWrapper_QJsonDocument::Indented),
      46, uint(PythonQtWrapper_QJsonDocument::Compact),

       0        // eod
};

void PythonQtWrapper_QJsonDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QJsonDocument *_t = static_cast<PythonQtWrapper_QJsonDocument *>(_o);
        switch (_id) {
        case 0: { QJsonDocument* _r = _t->new_QJsonDocument();
            if (_a[0]) *reinterpret_cast< QJsonDocument**>(_a[0]) = _r; }  break;
        case 1: { QJsonDocument* _r = _t->new_QJsonDocument((*reinterpret_cast< const QJsonArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonDocument**>(_a[0]) = _r; }  break;
        case 2: { QJsonDocument* _r = _t->new_QJsonDocument((*reinterpret_cast< const QJsonDocument(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonDocument**>(_a[0]) = _r; }  break;
        case 3: { QJsonDocument* _r = _t->new_QJsonDocument((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonDocument**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QJsonDocument((*reinterpret_cast< QJsonDocument*(*)>(_a[1]))); break;
        case 5: { QJsonArray _r = _t->array((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = _r; }  break;
        case 6: { QJsonDocument _r = _t->static_QJsonDocument_fromBinaryData((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QJsonDocument::DataValidation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonDocument*>(_a[0]) = _r; }  break;
        case 7: { QJsonDocument _r = _t->static_QJsonDocument_fromBinaryData((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonDocument*>(_a[0]) = _r; }  break;
        case 8: { QJsonDocument _r = _t->static_QJsonDocument_fromJson((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QJsonParseError*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonDocument*>(_a[0]) = _r; }  break;
        case 9: { QJsonDocument _r = _t->static_QJsonDocument_fromJson((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonDocument*>(_a[0]) = _r; }  break;
        case 10: { QJsonDocument _r = _t->static_QJsonDocument_fromRawData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QJsonDocument::DataValidation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QJsonDocument*>(_a[0]) = _r; }  break;
        case 11: { QJsonDocument _r = _t->static_QJsonDocument_fromRawData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonDocument*>(_a[0]) = _r; }  break;
        case 12: { QJsonDocument _r = _t->static_QJsonDocument_fromVariant((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonDocument*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isArray((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isEmpty((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isNull((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isObject((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QJsonObject _r = _t->object((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->__ne__((*reinterpret_cast< QJsonDocument*(*)>(_a[1])),(*reinterpret_cast< const QJsonDocument(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QJsonDocument* _r = _t->operator_assign((*reinterpret_cast< QJsonDocument*(*)>(_a[1])),(*reinterpret_cast< const QJsonDocument(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonDocument**>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->__eq__((*reinterpret_cast< QJsonDocument*(*)>(_a[1])),(*reinterpret_cast< const QJsonDocument(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { const char* _r = _t->rawData((*reinterpret_cast< QJsonDocument*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 22: _t->setArray((*reinterpret_cast< QJsonDocument*(*)>(_a[1])),(*reinterpret_cast< const QJsonArray(*)>(_a[2]))); break;
        case 23: _t->setObject((*reinterpret_cast< QJsonDocument*(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2]))); break;
        case 24: { QByteArray _r = _t->toBinaryData((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 25: { QByteArray _r = _t->toJson((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 26: { QByteArray _r = _t->toJson((*reinterpret_cast< QJsonDocument*(*)>(_a[1])),(*reinterpret_cast< QJsonDocument::JsonFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 27: { QVariant _r = _t->toVariant((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 28: { QString _r = _t->py_toString((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->__nonzero__((*reinterpret_cast< QJsonDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QJsonDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QJsonDocument.data,
      qt_meta_data_PythonQtWrapper_QJsonDocument,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QJsonDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QJsonDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QJsonDocument.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QJsonDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QJsonDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 30;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QJsonObject_t {
    QByteArrayData data[27];
    char stringdata[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QJsonObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QJsonObject_t qt_meta_stringdata_PythonQtWrapper_QJsonObject = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QJsonObject"
QT_MOC_LITERAL(1, 28, 15), // "new_QJsonObject"
QT_MOC_LITERAL(2, 44, 12), // "QJsonObject*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 5), // "other"
QT_MOC_LITERAL(5, 64, 18), // "delete_QJsonObject"
QT_MOC_LITERAL(6, 83, 3), // "obj"
QT_MOC_LITERAL(7, 87, 8), // "contains"
QT_MOC_LITERAL(8, 96, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 113, 3), // "key"
QT_MOC_LITERAL(10, 117, 5), // "count"
QT_MOC_LITERAL(11, 123, 5), // "empty"
QT_MOC_LITERAL(12, 129, 33), // "static_QJsonObject_fromVarian..."
QT_MOC_LITERAL(13, 163, 3), // "map"
QT_MOC_LITERAL(14, 167, 7), // "isEmpty"
QT_MOC_LITERAL(15, 175, 4), // "keys"
QT_MOC_LITERAL(16, 180, 6), // "length"
QT_MOC_LITERAL(17, 187, 6), // "__ne__"
QT_MOC_LITERAL(18, 194, 15), // "operator_assign"
QT_MOC_LITERAL(19, 210, 6), // "__eq__"
QT_MOC_LITERAL(20, 217, 18), // "operator_subscript"
QT_MOC_LITERAL(21, 236, 6), // "remove"
QT_MOC_LITERAL(22, 243, 4), // "size"
QT_MOC_LITERAL(23, 248, 4), // "take"
QT_MOC_LITERAL(24, 253, 12), // "toVariantMap"
QT_MOC_LITERAL(25, 266, 5), // "value"
QT_MOC_LITERAL(26, 272, 11) // "py_toString"

    },
    "PythonQtWrapper_QJsonObject\0new_QJsonObject\0"
    "QJsonObject*\0\0other\0delete_QJsonObject\0"
    "obj\0contains\0theWrappedObject\0key\0"
    "count\0empty\0static_QJsonObject_fromVariantMap\0"
    "map\0isEmpty\0keys\0length\0__ne__\0"
    "operator_assign\0__eq__\0operator_subscript\0"
    "remove\0size\0take\0toVariantMap\0value\0"
    "py_toString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QJsonObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    3, 0x0a /* Public */,
       1,    1,  115,    3, 0x0a /* Public */,
       5,    1,  118,    3, 0x0a /* Public */,
       7,    2,  121,    3, 0x0a /* Public */,
      10,    1,  126,    3, 0x0a /* Public */,
      11,    1,  129,    3, 0x0a /* Public */,
      12,    1,  132,    3, 0x0a /* Public */,
      14,    1,  135,    3, 0x0a /* Public */,
      15,    1,  138,    3, 0x0a /* Public */,
      16,    1,  141,    3, 0x0a /* Public */,
      17,    2,  144,    3, 0x0a /* Public */,
      18,    2,  149,    3, 0x0a /* Public */,
      19,    2,  154,    3, 0x0a /* Public */,
      20,    2,  159,    3, 0x0a /* Public */,
      21,    2,  164,    3, 0x0a /* Public */,
      22,    1,  169,    3, 0x0a /* Public */,
      23,    2,  172,    3, 0x0a /* Public */,
      24,    1,  177,    3, 0x0a /* Public */,
      25,    2,  180,    3, 0x0a /* Public */,
      26,    1,  185,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QJsonObject,    4,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,    9,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::QJsonObject, QMetaType::QVariantMap,   13,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::QStringList, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QJsonObject,    8,    4,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QJsonObject,    8,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QJsonObject,    8,    4,
    QMetaType::QJsonValue, 0x80000000 | 2, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    8,    9,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QJsonValue, 0x80000000 | 2, QMetaType::QString,    8,    9,
    QMetaType::QVariantMap, 0x80000000 | 2,    8,
    QMetaType::QJsonValue, 0x80000000 | 2, QMetaType::QString,    8,    9,
    QMetaType::QString, 0x80000000 | 2,    3,

       0        // eod
};

void PythonQtWrapper_QJsonObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QJsonObject *_t = static_cast<PythonQtWrapper_QJsonObject *>(_o);
        switch (_id) {
        case 0: { QJsonObject* _r = _t->new_QJsonObject();
            if (_a[0]) *reinterpret_cast< QJsonObject**>(_a[0]) = _r; }  break;
        case 1: { QJsonObject* _r = _t->new_QJsonObject((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QJsonObject((*reinterpret_cast< QJsonObject*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->contains((*reinterpret_cast< QJsonObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->count((*reinterpret_cast< QJsonObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->empty((*reinterpret_cast< QJsonObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QJsonObject _r = _t->static_QJsonObject_fromVariantMap((*reinterpret_cast< const QMap<QString,QVariant>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isEmpty((*reinterpret_cast< QJsonObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QStringList _r = _t->keys((*reinterpret_cast< QJsonObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->length((*reinterpret_cast< QJsonObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__ne__((*reinterpret_cast< QJsonObject*(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QJsonObject* _r = _t->operator_assign((*reinterpret_cast< QJsonObject*(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonObject**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__eq__((*reinterpret_cast< QJsonObject*(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QJsonValue _r = _t->operator_subscript((*reinterpret_cast< QJsonObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = _r; }  break;
        case 14: _t->remove((*reinterpret_cast< QJsonObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: { int _r = _t->size((*reinterpret_cast< QJsonObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QJsonValue _r = _t->take((*reinterpret_cast< QJsonObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = _r; }  break;
        case 17: { QMap<QString,QVariant> _r = _t->toVariantMap((*reinterpret_cast< QJsonObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<QString,QVariant>*>(_a[0]) = _r; }  break;
        case 18: { QJsonValue _r = _t->value((*reinterpret_cast< QJsonObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->py_toString((*reinterpret_cast< QJsonObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QJsonObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QJsonObject.data,
      qt_meta_data_PythonQtWrapper_QJsonObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QJsonObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QJsonObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QJsonObject.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QJsonObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QJsonObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QJsonParseError_t {
    QByteArrayData data[31];
    char stringdata[482];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QJsonParseError_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QJsonParseError_t qt_meta_stringdata_PythonQtWrapper_QJsonParseError = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QJsonParseError"
QT_MOC_LITERAL(1, 32, 19), // "new_QJsonParseError"
QT_MOC_LITERAL(2, 52, 16), // "QJsonParseError*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 22), // "delete_QJsonParseError"
QT_MOC_LITERAL(5, 93, 3), // "obj"
QT_MOC_LITERAL(6, 97, 11), // "errorString"
QT_MOC_LITERAL(7, 109, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 126, 12), // "py_set_error"
QT_MOC_LITERAL(9, 139, 27), // "QJsonParseError::ParseError"
QT_MOC_LITERAL(10, 167, 5), // "error"
QT_MOC_LITERAL(11, 173, 12), // "py_get_error"
QT_MOC_LITERAL(12, 186, 13), // "py_set_offset"
QT_MOC_LITERAL(13, 200, 6), // "offset"
QT_MOC_LITERAL(14, 207, 13), // "py_get_offset"
QT_MOC_LITERAL(15, 221, 10), // "ParseError"
QT_MOC_LITERAL(16, 232, 7), // "NoError"
QT_MOC_LITERAL(17, 240, 18), // "UnterminatedObject"
QT_MOC_LITERAL(18, 259, 20), // "MissingNameSeparator"
QT_MOC_LITERAL(19, 280, 17), // "UnterminatedArray"
QT_MOC_LITERAL(20, 298, 21), // "MissingValueSeparator"
QT_MOC_LITERAL(21, 320, 12), // "IllegalValue"
QT_MOC_LITERAL(22, 333, 19), // "TerminationByNumber"
QT_MOC_LITERAL(23, 353, 13), // "IllegalNumber"
QT_MOC_LITERAL(24, 367, 21), // "IllegalEscapeSequence"
QT_MOC_LITERAL(25, 389, 17), // "IllegalUTF8String"
QT_MOC_LITERAL(26, 407, 18), // "UnterminatedString"
QT_MOC_LITERAL(27, 426, 13), // "MissingObject"
QT_MOC_LITERAL(28, 440, 11), // "DeepNesting"
QT_MOC_LITERAL(29, 452, 16), // "DocumentTooLarge"
QT_MOC_LITERAL(30, 469, 12) // "GarbageAtEnd"

    },
    "PythonQtWrapper_QJsonParseError\0"
    "new_QJsonParseError\0QJsonParseError*\0"
    "\0delete_QJsonParseError\0obj\0errorString\0"
    "theWrappedObject\0py_set_error\0"
    "QJsonParseError::ParseError\0error\0"
    "py_get_error\0py_set_offset\0offset\0"
    "py_get_offset\0ParseError\0NoError\0"
    "UnterminatedObject\0MissingNameSeparator\0"
    "UnterminatedArray\0MissingValueSeparator\0"
    "IllegalValue\0TerminationByNumber\0"
    "IllegalNumber\0IllegalEscapeSequence\0"
    "IllegalUTF8String\0UnterminatedString\0"
    "MissingObject\0DeepNesting\0DocumentTooLarge\0"
    "GarbageAtEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QJsonParseError[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   72, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    3, 0x0a /* Public */,
       4,    1,   50,    3, 0x0a /* Public */,
       6,    1,   53,    3, 0x0a /* Public */,
       8,    2,   56,    3, 0x0a /* Public */,
      11,    1,   61,    3, 0x0a /* Public */,
      12,    2,   64,    3, 0x0a /* Public */,
      14,    1,   69,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9,    7,   10,
    0x80000000 | 9, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    7,   13,
    QMetaType::Int, 0x80000000 | 2,    7,

 // enums: name, flags, count, data
      15, 0x0,   15,   76,

 // enum data: key, value
      16, uint(PythonQtWrapper_QJsonParseError::NoError),
      17, uint(PythonQtWrapper_QJsonParseError::UnterminatedObject),
      18, uint(PythonQtWrapper_QJsonParseError::MissingNameSeparator),
      19, uint(PythonQtWrapper_QJsonParseError::UnterminatedArray),
      20, uint(PythonQtWrapper_QJsonParseError::MissingValueSeparator),
      21, uint(PythonQtWrapper_QJsonParseError::IllegalValue),
      22, uint(PythonQtWrapper_QJsonParseError::TerminationByNumber),
      23, uint(PythonQtWrapper_QJsonParseError::IllegalNumber),
      24, uint(PythonQtWrapper_QJsonParseError::IllegalEscapeSequence),
      25, uint(PythonQtWrapper_QJsonParseError::IllegalUTF8String),
      26, uint(PythonQtWrapper_QJsonParseError::UnterminatedString),
      27, uint(PythonQtWrapper_QJsonParseError::MissingObject),
      28, uint(PythonQtWrapper_QJsonParseError::DeepNesting),
      29, uint(PythonQtWrapper_QJsonParseError::DocumentTooLarge),
      30, uint(PythonQtWrapper_QJsonParseError::GarbageAtEnd),

       0        // eod
};

void PythonQtWrapper_QJsonParseError::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QJsonParseError *_t = static_cast<PythonQtWrapper_QJsonParseError *>(_o);
        switch (_id) {
        case 0: { QJsonParseError* _r = _t->new_QJsonParseError();
            if (_a[0]) *reinterpret_cast< QJsonParseError**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QJsonParseError((*reinterpret_cast< QJsonParseError*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->errorString((*reinterpret_cast< QJsonParseError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->py_set_error((*reinterpret_cast< QJsonParseError*(*)>(_a[1])),(*reinterpret_cast< QJsonParseError::ParseError(*)>(_a[2]))); break;
        case 4: { QJsonParseError::ParseError _r = _t->py_get_error((*reinterpret_cast< QJsonParseError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonParseError::ParseError*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_offset((*reinterpret_cast< QJsonParseError*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: { int _r = _t->py_get_offset((*reinterpret_cast< QJsonParseError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QJsonParseError::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QJsonParseError.data,
      qt_meta_data_PythonQtWrapper_QJsonParseError,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QJsonParseError::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QJsonParseError::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QJsonParseError.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QJsonParseError*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QJsonParseError::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QJsonValue_t {
    QByteArrayData data[48];
    char stringdata[441];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QJsonValue_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QJsonValue_t qt_meta_stringdata_PythonQtWrapper_QJsonValue = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QJsonValue"
QT_MOC_LITERAL(1, 27, 14), // "new_QJsonValue"
QT_MOC_LITERAL(2, 42, 11), // "QJsonValue*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 16), // "QJsonValue::Type"
QT_MOC_LITERAL(5, 72, 6), // "arg__1"
QT_MOC_LITERAL(6, 79, 13), // "QLatin1String"
QT_MOC_LITERAL(7, 93, 1), // "s"
QT_MOC_LITERAL(8, 95, 1), // "b"
QT_MOC_LITERAL(9, 97, 1), // "a"
QT_MOC_LITERAL(10, 99, 1), // "o"
QT_MOC_LITERAL(11, 101, 5), // "other"
QT_MOC_LITERAL(12, 107, 11), // "const char*"
QT_MOC_LITERAL(13, 119, 1), // "n"
QT_MOC_LITERAL(14, 121, 17), // "delete_QJsonValue"
QT_MOC_LITERAL(15, 139, 3), // "obj"
QT_MOC_LITERAL(16, 143, 29), // "static_QJsonValue_fromVariant"
QT_MOC_LITERAL(17, 173, 7), // "variant"
QT_MOC_LITERAL(18, 181, 7), // "isArray"
QT_MOC_LITERAL(19, 189, 16), // "theWrappedObject"
QT_MOC_LITERAL(20, 206, 6), // "isBool"
QT_MOC_LITERAL(21, 213, 8), // "isDouble"
QT_MOC_LITERAL(22, 222, 6), // "isNull"
QT_MOC_LITERAL(23, 229, 8), // "isObject"
QT_MOC_LITERAL(24, 238, 8), // "isString"
QT_MOC_LITERAL(25, 247, 11), // "isUndefined"
QT_MOC_LITERAL(26, 259, 6), // "__ne__"
QT_MOC_LITERAL(27, 266, 15), // "operator_assign"
QT_MOC_LITERAL(28, 282, 6), // "__eq__"
QT_MOC_LITERAL(29, 289, 7), // "toArray"
QT_MOC_LITERAL(30, 297, 12), // "defaultValue"
QT_MOC_LITERAL(31, 310, 6), // "toBool"
QT_MOC_LITERAL(32, 317, 8), // "toDouble"
QT_MOC_LITERAL(33, 326, 5), // "toInt"
QT_MOC_LITERAL(34, 332, 8), // "toObject"
QT_MOC_LITERAL(35, 341, 8), // "toString"
QT_MOC_LITERAL(36, 350, 9), // "toVariant"
QT_MOC_LITERAL(37, 360, 4), // "type"
QT_MOC_LITERAL(38, 365, 11), // "py_toString"
QT_MOC_LITERAL(39, 377, 11), // "__nonzero__"
QT_MOC_LITERAL(40, 389, 4), // "Type"
QT_MOC_LITERAL(41, 394, 4), // "Null"
QT_MOC_LITERAL(42, 399, 4), // "Bool"
QT_MOC_LITERAL(43, 404, 6), // "Double"
QT_MOC_LITERAL(44, 411, 6), // "String"
QT_MOC_LITERAL(45, 418, 5), // "Array"
QT_MOC_LITERAL(46, 424, 6), // "Object"
QT_MOC_LITERAL(47, 431, 9) // "Undefined"

    },
    "PythonQtWrapper_QJsonValue\0new_QJsonValue\0"
    "QJsonValue*\0\0QJsonValue::Type\0arg__1\0"
    "QLatin1String\0s\0b\0a\0o\0other\0const char*\0"
    "n\0delete_QJsonValue\0obj\0"
    "static_QJsonValue_fromVariant\0variant\0"
    "isArray\0theWrappedObject\0isBool\0"
    "isDouble\0isNull\0isObject\0isString\0"
    "isUndefined\0__ne__\0operator_assign\0"
    "__eq__\0toArray\0defaultValue\0toBool\0"
    "toDouble\0toInt\0toObject\0toString\0"
    "toVariant\0type\0py_toString\0__nonzero__\0"
    "Type\0Null\0Bool\0Double\0String\0Array\0"
    "Object\0Undefined"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QJsonValue[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       1,  350, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  214,    3, 0x0a /* Public */,
       1,    0,  217,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  218,    3, 0x0a /* Public */,
       1,    1,  221,    3, 0x0a /* Public */,
       1,    1,  224,    3, 0x0a /* Public */,
       1,    1,  227,    3, 0x0a /* Public */,
       1,    1,  230,    3, 0x0a /* Public */,
       1,    1,  233,    3, 0x0a /* Public */,
       1,    1,  236,    3, 0x0a /* Public */,
       1,    1,  239,    3, 0x0a /* Public */,
       1,    1,  242,    3, 0x0a /* Public */,
       1,    1,  245,    3, 0x0a /* Public */,
      14,    1,  248,    3, 0x0a /* Public */,
      16,    1,  251,    3, 0x0a /* Public */,
      18,    1,  254,    3, 0x0a /* Public */,
      20,    1,  257,    3, 0x0a /* Public */,
      21,    1,  260,    3, 0x0a /* Public */,
      22,    1,  263,    3, 0x0a /* Public */,
      23,    1,  266,    3, 0x0a /* Public */,
      24,    1,  269,    3, 0x0a /* Public */,
      25,    1,  272,    3, 0x0a /* Public */,
      26,    2,  275,    3, 0x0a /* Public */,
      27,    2,  280,    3, 0x0a /* Public */,
      28,    2,  285,    3, 0x0a /* Public */,
      29,    1,  290,    3, 0x0a /* Public */,
      29,    2,  293,    3, 0x0a /* Public */,
      31,    2,  298,    3, 0x0a /* Public */,
      31,    1,  303,    3, 0x2a /* Public | MethodCloned */,
      32,    2,  306,    3, 0x0a /* Public */,
      32,    1,  311,    3, 0x2a /* Public | MethodCloned */,
      33,    2,  314,    3, 0x0a /* Public */,
      33,    1,  319,    3, 0x2a /* Public | MethodCloned */,
      34,    1,  322,    3, 0x0a /* Public */,
      34,    2,  325,    3, 0x0a /* Public */,
      35,    2,  330,    3, 0x0a /* Public */,
      35,    1,  335,    3, 0x2a /* Public | MethodCloned */,
      36,    1,  338,    3, 0x0a /* Public */,
      37,    1,  341,    3, 0x0a /* Public */,
      38,    1,  344,    3, 0x0a /* Public */,
      39,    1,  347,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, QMetaType::Bool,    8,
    0x80000000 | 2, QMetaType::QJsonArray,    9,
    0x80000000 | 2, QMetaType::QJsonObject,   10,
    0x80000000 | 2, QMetaType::QJsonValue,   11,
    0x80000000 | 2, QMetaType::QString,    7,
    0x80000000 | 2, 0x80000000 | 12,    7,
    0x80000000 | 2, QMetaType::Double,   13,
    0x80000000 | 2, QMetaType::Int,   13,
    0x80000000 | 2, QMetaType::LongLong,   13,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::QJsonValue, QMetaType::QVariant,   17,
    QMetaType::Bool, 0x80000000 | 2,   19,
    QMetaType::Bool, 0x80000000 | 2,   19,
    QMetaType::Bool, 0x80000000 | 2,   19,
    QMetaType::Bool, 0x80000000 | 2,   19,
    QMetaType::Bool, 0x80000000 | 2,   19,
    QMetaType::Bool, 0x80000000 | 2,   19,
    QMetaType::Bool, 0x80000000 | 2,   19,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QJsonValue,   19,   11,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QJsonValue,   19,   11,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QJsonValue,   19,   11,
    QMetaType::QJsonArray, 0x80000000 | 2,   19,
    QMetaType::QJsonArray, 0x80000000 | 2, QMetaType::QJsonArray,   19,   30,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Bool,   19,   30,
    QMetaType::Bool, 0x80000000 | 2,   19,
    QMetaType::Double, 0x80000000 | 2, QMetaType::Double,   19,   30,
    QMetaType::Double, 0x80000000 | 2,   19,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,   19,   30,
    QMetaType::Int, 0x80000000 | 2,   19,
    QMetaType::QJsonObject, 0x80000000 | 2,   19,
    QMetaType::QJsonObject, 0x80000000 | 2, QMetaType::QJsonObject,   19,   30,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString,   19,   30,
    QMetaType::QString, 0x80000000 | 2,   19,
    QMetaType::QVariant, 0x80000000 | 2,   19,
    0x80000000 | 4, 0x80000000 | 2,   19,
    QMetaType::QString, 0x80000000 | 2,    3,
    QMetaType::Bool, 0x80000000 | 2,   15,

 // enums: name, flags, count, data
      40, 0x0,    7,  354,

 // enum data: key, value
      41, uint(PythonQtWrapper_QJsonValue::Null),
      42, uint(PythonQtWrapper_QJsonValue::Bool),
      43, uint(PythonQtWrapper_QJsonValue::Double),
      44, uint(PythonQtWrapper_QJsonValue::String),
      45, uint(PythonQtWrapper_QJsonValue::Array),
      46, uint(PythonQtWrapper_QJsonValue::Object),
      47, uint(PythonQtWrapper_QJsonValue::Undefined),

       0        // eod
};

void PythonQtWrapper_QJsonValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QJsonValue *_t = static_cast<PythonQtWrapper_QJsonValue *>(_o);
        switch (_id) {
        case 0: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< QJsonValue::Type(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 1: { QJsonValue* _r = _t->new_QJsonValue();
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 2: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< QLatin1String(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 3: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 4: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< const QJsonArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 5: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< const QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 6: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< const QJsonValue(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 7: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 8: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 9: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 10: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 11: { QJsonValue* _r = _t->new_QJsonValue((*reinterpret_cast< qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 12: _t->delete_QJsonValue((*reinterpret_cast< QJsonValue*(*)>(_a[1]))); break;
        case 13: { QJsonValue _r = _t->static_QJsonValue_fromVariant((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isArray((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isBool((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isDouble((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isNull((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isObject((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isString((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isUndefined((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->__ne__((*reinterpret_cast< QJsonValue*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { QJsonValue* _r = _t->operator_assign((*reinterpret_cast< QJsonValue*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonValue**>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->__eq__((*reinterpret_cast< QJsonValue*(*)>(_a[1])),(*reinterpret_cast< const QJsonValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { QJsonArray _r = _t->toArray((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = _r; }  break;
        case 25: { QJsonArray _r = _t->toArray((*reinterpret_cast< QJsonValue*(*)>(_a[1])),(*reinterpret_cast< const QJsonArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonArray*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->toBool((*reinterpret_cast< QJsonValue*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->toBool((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { double _r = _t->toDouble((*reinterpret_cast< QJsonValue*(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 29: { double _r = _t->toDouble((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->toInt((*reinterpret_cast< QJsonValue*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->toInt((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { QJsonObject _r = _t->toObject((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 33: { QJsonObject _r = _t->toObject((*reinterpret_cast< QJsonValue*(*)>(_a[1])),(*reinterpret_cast< const QJsonObject(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJsonObject*>(_a[0]) = _r; }  break;
        case 34: { QString _r = _t->toString((*reinterpret_cast< QJsonValue*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->toString((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { QVariant _r = _t->toVariant((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 37: { QJsonValue::Type _r = _t->type((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJsonValue::Type*>(_a[0]) = _r; }  break;
        case 38: { QString _r = _t->py_toString((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->__nonzero__((*reinterpret_cast< QJsonValue*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QJsonValue::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QJsonValue.data,
      qt_meta_data_PythonQtWrapper_QJsonValue,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QJsonValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QJsonValue::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QJsonValue.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QJsonValue*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QJsonValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 40;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QLibrary_t {
    QByteArrayData data[28];
    char stringdata[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QLibrary_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QLibrary_t qt_meta_stringdata_PythonQtWrapper_QLibrary = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PythonQtWrapper_QLibrary"
QT_MOC_LITERAL(1, 25, 12), // "new_QLibrary"
QT_MOC_LITERAL(2, 38, 9), // "QLibrary*"
QT_MOC_LITERAL(3, 48, 0), // ""
QT_MOC_LITERAL(4, 49, 6), // "parent"
QT_MOC_LITERAL(5, 56, 8), // "fileName"
QT_MOC_LITERAL(6, 65, 7), // "version"
QT_MOC_LITERAL(7, 73, 6), // "verNum"
QT_MOC_LITERAL(8, 80, 15), // "delete_QLibrary"
QT_MOC_LITERAL(9, 96, 3), // "obj"
QT_MOC_LITERAL(10, 100, 11), // "errorString"
QT_MOC_LITERAL(11, 112, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 129, 25), // "static_QLibrary_isLibrary"
QT_MOC_LITERAL(13, 155, 8), // "isLoaded"
QT_MOC_LITERAL(14, 164, 4), // "load"
QT_MOC_LITERAL(15, 169, 9), // "loadHints"
QT_MOC_LITERAL(16, 179, 19), // "QLibrary::LoadHints"
QT_MOC_LITERAL(17, 199, 11), // "setFileName"
QT_MOC_LITERAL(18, 211, 21), // "setFileNameAndVersion"
QT_MOC_LITERAL(19, 233, 12), // "setLoadHints"
QT_MOC_LITERAL(20, 246, 5), // "hints"
QT_MOC_LITERAL(21, 252, 6), // "unload"
QT_MOC_LITERAL(22, 259, 8), // "LoadHint"
QT_MOC_LITERAL(23, 268, 21), // "ResolveAllSymbolsHint"
QT_MOC_LITERAL(24, 290, 25), // "ExportExternalSymbolsHint"
QT_MOC_LITERAL(25, 316, 21), // "LoadArchiveMemberHint"
QT_MOC_LITERAL(26, 338, 17), // "PreventUnloadHint"
QT_MOC_LITERAL(27, 356, 9) // "LoadHints"

    },
    "PythonQtWrapper_QLibrary\0new_QLibrary\0"
    "QLibrary*\0\0parent\0fileName\0version\0"
    "verNum\0delete_QLibrary\0obj\0errorString\0"
    "theWrappedObject\0static_QLibrary_isLibrary\0"
    "isLoaded\0load\0loadHints\0QLibrary::LoadHints\0"
    "setFileName\0setFileNameAndVersion\0"
    "setLoadHints\0hints\0unload\0LoadHint\0"
    "ResolveAllSymbolsHint\0ExportExternalSymbolsHint\0"
    "LoadArchiveMemberHint\0PreventUnloadHint\0"
    "LoadHints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QLibrary[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       2,  198, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  114,    3, 0x0a /* Public */,
       1,    0,  117,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  118,    3, 0x0a /* Public */,
       1,    1,  123,    3, 0x2a /* Public | MethodCloned */,
       1,    3,  126,    3, 0x0a /* Public */,
       1,    2,  133,    3, 0x2a /* Public | MethodCloned */,
       1,    3,  138,    3, 0x0a /* Public */,
       1,    2,  145,    3, 0x2a /* Public | MethodCloned */,
       8,    1,  150,    3, 0x0a /* Public */,
      10,    1,  153,    3, 0x0a /* Public */,
       5,    1,  156,    3, 0x0a /* Public */,
      12,    1,  159,    3, 0x0a /* Public */,
      13,    1,  162,    3, 0x0a /* Public */,
      14,    1,  165,    3, 0x0a /* Public */,
      15,    1,  168,    3, 0x0a /* Public */,
      17,    2,  171,    3, 0x0a /* Public */,
      18,    3,  176,    3, 0x0a /* Public */,
      18,    3,  183,    3, 0x0a /* Public */,
      19,    2,  190,    3, 0x0a /* Public */,
      21,    1,  195,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QString, QMetaType::QObjectStar,    5,    4,
    0x80000000 | 2, QMetaType::QString,    5,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QObjectStar,    5,    6,    4,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    5,    6,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int, QMetaType::QObjectStar,    5,    7,    4,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int,    5,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Bool, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2,   11,
    0x80000000 | 16, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   11,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,   11,    5,    6,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::Int,   11,    5,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   11,   20,
    QMetaType::Bool, 0x80000000 | 2,   11,

 // enums: name, flags, count, data
      22, 0x0,    4,  206,
      27, 0x1,    4,  214,

 // enum data: key, value
      23, uint(PythonQtWrapper_QLibrary::ResolveAllSymbolsHint),
      24, uint(PythonQtWrapper_QLibrary::ExportExternalSymbolsHint),
      25, uint(PythonQtWrapper_QLibrary::LoadArchiveMemberHint),
      26, uint(PythonQtWrapper_QLibrary::PreventUnloadHint),
      23, uint(PythonQtWrapper_QLibrary::ResolveAllSymbolsHint),
      24, uint(PythonQtWrapper_QLibrary::ExportExternalSymbolsHint),
      25, uint(PythonQtWrapper_QLibrary::LoadArchiveMemberHint),
      26, uint(PythonQtWrapper_QLibrary::PreventUnloadHint),

       0        // eod
};

void PythonQtWrapper_QLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QLibrary *_t = static_cast<PythonQtWrapper_QLibrary *>(_o);
        switch (_id) {
        case 0: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 1: { QLibrary* _r = _t->new_QLibrary();
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 2: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 3: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 4: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 5: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 6: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 7: { QLibrary* _r = _t->new_QLibrary((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLibrary**>(_a[0]) = _r; }  break;
        case 8: _t->delete_QLibrary((*reinterpret_cast< QLibrary*(*)>(_a[1]))); break;
        case 9: { QString _r = _t->errorString((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->fileName((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->static_QLibrary_isLibrary((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isLoaded((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->load((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QLibrary::LoadHints _r = _t->loadHints((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLibrary::LoadHints*>(_a[0]) = _r; }  break;
        case 15: _t->setFileName((*reinterpret_cast< QLibrary*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->setFileNameAndVersion((*reinterpret_cast< QLibrary*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 17: _t->setFileNameAndVersion((*reinterpret_cast< QLibrary*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->setLoadHints((*reinterpret_cast< QLibrary*(*)>(_a[1])),(*reinterpret_cast< QLibrary::LoadHints(*)>(_a[2]))); break;
        case 19: { bool _r = _t->unload((*reinterpret_cast< QLibrary*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLibrary* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QLibrary::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLibrary.data,
      qt_meta_data_PythonQtWrapper_QLibrary,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLibrary.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLibrary*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QLibraryInfo_t {
    QByteArrayData data[32];
    char stringdata[580];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QLibraryInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QLibraryInfo_t qt_meta_stringdata_PythonQtWrapper_QLibraryInfo = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QLibraryInfo"
QT_MOC_LITERAL(1, 29, 19), // "delete_QLibraryInfo"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 13), // "QLibraryInfo*"
QT_MOC_LITERAL(4, 64, 3), // "obj"
QT_MOC_LITERAL(5, 68, 25), // "static_QLibraryInfo_build"
QT_MOC_LITERAL(6, 94, 11), // "const char*"
QT_MOC_LITERAL(7, 106, 29), // "static_QLibraryInfo_buildDate"
QT_MOC_LITERAL(8, 136, 32), // "static_QLibraryInfo_isDebugBuild"
QT_MOC_LITERAL(9, 169, 36), // "static_QLibraryInfo_licensedP..."
QT_MOC_LITERAL(10, 206, 28), // "static_QLibraryInfo_licensee"
QT_MOC_LITERAL(11, 235, 28), // "static_QLibraryInfo_location"
QT_MOC_LITERAL(12, 264, 29), // "QLibraryInfo::LibraryLocation"
QT_MOC_LITERAL(13, 294, 6), // "arg__1"
QT_MOC_LITERAL(14, 301, 43), // "static_QLibraryInfo_platformP..."
QT_MOC_LITERAL(15, 345, 12), // "platformName"
QT_MOC_LITERAL(16, 358, 15), // "LibraryLocation"
QT_MOC_LITERAL(17, 374, 10), // "PrefixPath"
QT_MOC_LITERAL(18, 385, 17), // "DocumentationPath"
QT_MOC_LITERAL(19, 403, 11), // "HeadersPath"
QT_MOC_LITERAL(20, 415, 13), // "LibrariesPath"
QT_MOC_LITERAL(21, 429, 22), // "LibraryExecutablesPath"
QT_MOC_LITERAL(22, 452, 12), // "BinariesPath"
QT_MOC_LITERAL(23, 465, 11), // "PluginsPath"
QT_MOC_LITERAL(24, 477, 11), // "ImportsPath"
QT_MOC_LITERAL(25, 489, 15), // "Qml2ImportsPath"
QT_MOC_LITERAL(26, 505, 12), // "ArchDataPath"
QT_MOC_LITERAL(27, 518, 8), // "DataPath"
QT_MOC_LITERAL(28, 527, 16), // "TranslationsPath"
QT_MOC_LITERAL(29, 544, 12), // "ExamplesPath"
QT_MOC_LITERAL(30, 557, 9), // "TestsPath"
QT_MOC_LITERAL(31, 567, 12) // "SettingsPath"

    },
    "PythonQtWrapper_QLibraryInfo\0"
    "delete_QLibraryInfo\0\0QLibraryInfo*\0"
    "obj\0static_QLibraryInfo_build\0const char*\0"
    "static_QLibraryInfo_buildDate\0"
    "static_QLibraryInfo_isDebugBuild\0"
    "static_QLibraryInfo_licensedProducts\0"
    "static_QLibraryInfo_licensee\0"
    "static_QLibraryInfo_location\0"
    "QLibraryInfo::LibraryLocation\0arg__1\0"
    "static_QLibraryInfo_platformPluginArguments\0"
    "platformName\0LibraryLocation\0PrefixPath\0"
    "DocumentationPath\0HeadersPath\0"
    "LibrariesPath\0LibraryExecutablesPath\0"
    "BinariesPath\0PluginsPath\0ImportsPath\0"
    "Qml2ImportsPath\0ArchDataPath\0DataPath\0"
    "TranslationsPath\0ExamplesPath\0TestsPath\0"
    "SettingsPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QLibraryInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   68, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       7,    0,   58,    2, 0x0a /* Public */,
       8,    0,   59,    2, 0x0a /* Public */,
       9,    0,   60,    2, 0x0a /* Public */,
      10,    0,   61,    2, 0x0a /* Public */,
      11,    1,   62,    2, 0x0a /* Public */,
      14,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    0x80000000 | 6,
    QMetaType::QDate,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString, 0x80000000 | 12,   13,
    QMetaType::QStringList, QMetaType::QString,   15,

 // enums: name, flags, count, data
      16, 0x0,   15,   72,

 // enum data: key, value
      17, uint(PythonQtWrapper_QLibraryInfo::PrefixPath),
      18, uint(PythonQtWrapper_QLibraryInfo::DocumentationPath),
      19, uint(PythonQtWrapper_QLibraryInfo::HeadersPath),
      20, uint(PythonQtWrapper_QLibraryInfo::LibrariesPath),
      21, uint(PythonQtWrapper_QLibraryInfo::LibraryExecutablesPath),
      22, uint(PythonQtWrapper_QLibraryInfo::BinariesPath),
      23, uint(PythonQtWrapper_QLibraryInfo::PluginsPath),
      24, uint(PythonQtWrapper_QLibraryInfo::ImportsPath),
      25, uint(PythonQtWrapper_QLibraryInfo::Qml2ImportsPath),
      26, uint(PythonQtWrapper_QLibraryInfo::ArchDataPath),
      27, uint(PythonQtWrapper_QLibraryInfo::DataPath),
      28, uint(PythonQtWrapper_QLibraryInfo::TranslationsPath),
      29, uint(PythonQtWrapper_QLibraryInfo::ExamplesPath),
      30, uint(PythonQtWrapper_QLibraryInfo::TestsPath),
      31, uint(PythonQtWrapper_QLibraryInfo::SettingsPath),

       0        // eod
};

void PythonQtWrapper_QLibraryInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QLibraryInfo *_t = static_cast<PythonQtWrapper_QLibraryInfo *>(_o);
        switch (_id) {
        case 0: _t->delete_QLibraryInfo((*reinterpret_cast< QLibraryInfo*(*)>(_a[1]))); break;
        case 1: { const char* _r = _t->static_QLibraryInfo_build();
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 2: { QDate _r = _t->static_QLibraryInfo_buildDate();
            if (_a[0]) *reinterpret_cast< QDate*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->static_QLibraryInfo_isDebugBuild();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->static_QLibraryInfo_licensedProducts();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->static_QLibraryInfo_licensee();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->static_QLibraryInfo_location((*reinterpret_cast< QLibraryInfo::LibraryLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QStringList _r = _t->static_QLibraryInfo_platformPluginArguments((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QLibraryInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLibraryInfo.data,
      qt_meta_data_PythonQtWrapper_QLibraryInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QLibraryInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QLibraryInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLibraryInfo.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLibraryInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLibraryInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QLockFile_t {
    QByteArrayData data[30];
    char stringdata[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QLockFile_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QLockFile_t qt_meta_stringdata_PythonQtWrapper_QLockFile = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QLockFile"
QT_MOC_LITERAL(1, 26, 13), // "new_QLockFile"
QT_MOC_LITERAL(2, 40, 10), // "QLockFile*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 8), // "fileName"
QT_MOC_LITERAL(5, 61, 16), // "delete_QLockFile"
QT_MOC_LITERAL(6, 78, 3), // "obj"
QT_MOC_LITERAL(7, 82, 5), // "error"
QT_MOC_LITERAL(8, 88, 20), // "QLockFile::LockError"
QT_MOC_LITERAL(9, 109, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 126, 11), // "getLockInfo"
QT_MOC_LITERAL(11, 138, 7), // "qint64*"
QT_MOC_LITERAL(12, 146, 3), // "pid"
QT_MOC_LITERAL(13, 150, 8), // "QString*"
QT_MOC_LITERAL(14, 159, 8), // "hostname"
QT_MOC_LITERAL(15, 168, 7), // "appname"
QT_MOC_LITERAL(16, 176, 8), // "isLocked"
QT_MOC_LITERAL(17, 185, 4), // "lock"
QT_MOC_LITERAL(18, 190, 19), // "removeStaleLockFile"
QT_MOC_LITERAL(19, 210, 16), // "setStaleLockTime"
QT_MOC_LITERAL(20, 227, 6), // "arg__1"
QT_MOC_LITERAL(21, 234, 13), // "staleLockTime"
QT_MOC_LITERAL(22, 248, 7), // "tryLock"
QT_MOC_LITERAL(23, 256, 7), // "timeout"
QT_MOC_LITERAL(24, 264, 6), // "unlock"
QT_MOC_LITERAL(25, 271, 9), // "LockError"
QT_MOC_LITERAL(26, 281, 7), // "NoError"
QT_MOC_LITERAL(27, 289, 15), // "LockFailedError"
QT_MOC_LITERAL(28, 305, 15), // "PermissionError"
QT_MOC_LITERAL(29, 321, 12) // "UnknownError"

    },
    "PythonQtWrapper_QLockFile\0new_QLockFile\0"
    "QLockFile*\0\0fileName\0delete_QLockFile\0"
    "obj\0error\0QLockFile::LockError\0"
    "theWrappedObject\0getLockInfo\0qint64*\0"
    "pid\0QString*\0hostname\0appname\0isLocked\0"
    "lock\0removeStaleLockFile\0setStaleLockTime\0"
    "arg__1\0staleLockTime\0tryLock\0timeout\0"
    "unlock\0LockError\0NoError\0LockFailedError\0"
    "PermissionError\0UnknownError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QLockFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       1,  120, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    3, 0x0a /* Public */,
       5,    1,   77,    3, 0x0a /* Public */,
       7,    1,   80,    3, 0x0a /* Public */,
      10,    4,   83,    3, 0x0a /* Public */,
      16,    1,   92,    3, 0x0a /* Public */,
      17,    1,   95,    3, 0x0a /* Public */,
      18,    1,   98,    3, 0x0a /* Public */,
      19,    2,  101,    3, 0x0a /* Public */,
      21,    1,  106,    3, 0x0a /* Public */,
      22,    2,  109,    3, 0x0a /* Public */,
      22,    1,  114,    3, 0x2a /* Public | MethodCloned */,
      24,    1,  117,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 2,    6,
    0x80000000 | 8, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 11, 0x80000000 | 13, 0x80000000 | 13,    9,   12,   14,   15,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   20,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    9,   23,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,

 // enums: name, flags, count, data
      25, 0x0,    4,  124,

 // enum data: key, value
      26, uint(PythonQtWrapper_QLockFile::NoError),
      27, uint(PythonQtWrapper_QLockFile::LockFailedError),
      28, uint(PythonQtWrapper_QLockFile::PermissionError),
      29, uint(PythonQtWrapper_QLockFile::UnknownError),

       0        // eod
};

void PythonQtWrapper_QLockFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QLockFile *_t = static_cast<PythonQtWrapper_QLockFile *>(_o);
        switch (_id) {
        case 0: { QLockFile* _r = _t->new_QLockFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLockFile**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QLockFile((*reinterpret_cast< QLockFile*(*)>(_a[1]))); break;
        case 2: { QLockFile::LockError _r = _t->error((*reinterpret_cast< QLockFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLockFile::LockError*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->getLockInfo((*reinterpret_cast< QLockFile*(*)>(_a[1])),(*reinterpret_cast< qint64*(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isLocked((*reinterpret_cast< QLockFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->lock((*reinterpret_cast< QLockFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->removeStaleLockFile((*reinterpret_cast< QLockFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setStaleLockTime((*reinterpret_cast< QLockFile*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { int _r = _t->staleLockTime((*reinterpret_cast< QLockFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->tryLock((*reinterpret_cast< QLockFile*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->tryLock((*reinterpret_cast< QLockFile*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->unlock((*reinterpret_cast< QLockFile*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QLockFile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLockFile.data,
      qt_meta_data_PythonQtWrapper_QLockFile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QLockFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QLockFile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLockFile.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLockFile*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLockFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMarginsF_t {
    QByteArrayData data[40];
    char stringdata[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMarginsF_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMarginsF_t qt_meta_stringdata_PythonQtWrapper_QMarginsF = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QMarginsF"
QT_MOC_LITERAL(1, 26, 13), // "new_QMarginsF"
QT_MOC_LITERAL(2, 40, 10), // "QMarginsF*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 8), // "QMargins"
QT_MOC_LITERAL(5, 61, 7), // "margins"
QT_MOC_LITERAL(6, 69, 4), // "left"
QT_MOC_LITERAL(7, 74, 3), // "top"
QT_MOC_LITERAL(8, 78, 5), // "right"
QT_MOC_LITERAL(9, 84, 6), // "bottom"
QT_MOC_LITERAL(10, 91, 16), // "delete_QMarginsF"
QT_MOC_LITERAL(11, 108, 3), // "obj"
QT_MOC_LITERAL(12, 112, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 129, 6), // "isNull"
QT_MOC_LITERAL(14, 136, 7), // "__mul__"
QT_MOC_LITERAL(15, 144, 9), // "QMarginsF"
QT_MOC_LITERAL(16, 154, 3), // "rhs"
QT_MOC_LITERAL(17, 158, 8), // "__imul__"
QT_MOC_LITERAL(18, 167, 6), // "factor"
QT_MOC_LITERAL(19, 174, 7), // "__add__"
QT_MOC_LITERAL(20, 182, 8), // "__iadd__"
QT_MOC_LITERAL(21, 191, 6), // "addend"
QT_MOC_LITERAL(22, 198, 7), // "__sub__"
QT_MOC_LITERAL(23, 206, 8), // "__isub__"
QT_MOC_LITERAL(24, 215, 10), // "subtrahend"
QT_MOC_LITERAL(25, 226, 7), // "__div__"
QT_MOC_LITERAL(26, 234, 7), // "divisor"
QT_MOC_LITERAL(27, 242, 8), // "__idiv__"
QT_MOC_LITERAL(28, 251, 7), // "writeTo"
QT_MOC_LITERAL(29, 259, 12), // "QDataStream&"
QT_MOC_LITERAL(30, 272, 6), // "arg__1"
QT_MOC_LITERAL(31, 279, 6), // "__eq__"
QT_MOC_LITERAL(32, 286, 8), // "readFrom"
QT_MOC_LITERAL(33, 295, 9), // "setBottom"
QT_MOC_LITERAL(34, 305, 7), // "setLeft"
QT_MOC_LITERAL(35, 313, 8), // "setRight"
QT_MOC_LITERAL(36, 322, 6), // "setTop"
QT_MOC_LITERAL(37, 329, 9), // "toMargins"
QT_MOC_LITERAL(38, 339, 11), // "py_toString"
QT_MOC_LITERAL(39, 351, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QMarginsF\0new_QMarginsF\0"
    "QMarginsF*\0\0QMargins\0margins\0left\0top\0"
    "right\0bottom\0delete_QMarginsF\0obj\0"
    "theWrappedObject\0isNull\0__mul__\0"
    "QMarginsF\0rhs\0__imul__\0factor\0__add__\0"
    "__iadd__\0addend\0__sub__\0__isub__\0"
    "subtrahend\0__div__\0divisor\0__idiv__\0"
    "writeTo\0QDataStream&\0arg__1\0__eq__\0"
    "readFrom\0setBottom\0setLeft\0setRight\0"
    "setTop\0toMargins\0py_toString\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMarginsF[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  174,    3, 0x0a /* Public */,
       1,    1,  175,    3, 0x0a /* Public */,
       1,    4,  178,    3, 0x0a /* Public */,
      10,    1,  187,    3, 0x0a /* Public */,
       9,    1,  190,    3, 0x0a /* Public */,
      13,    1,  193,    3, 0x0a /* Public */,
       6,    1,  196,    3, 0x0a /* Public */,
      14,    2,  199,    3, 0x0a /* Public */,
      17,    2,  204,    3, 0x0a /* Public */,
      19,    2,  209,    3, 0x0a /* Public */,
      19,    2,  214,    3, 0x0a /* Public */,
      19,    2,  219,    3, 0x0a /* Public */,
      20,    2,  224,    3, 0x0a /* Public */,
      20,    2,  229,    3, 0x0a /* Public */,
      22,    2,  234,    3, 0x0a /* Public */,
      22,    2,  239,    3, 0x0a /* Public */,
      23,    2,  244,    3, 0x0a /* Public */,
      23,    2,  249,    3, 0x0a /* Public */,
      25,    2,  254,    3, 0x0a /* Public */,
      27,    2,  259,    3, 0x0a /* Public */,
      28,    2,  264,    3, 0x0a /* Public */,
      31,    2,  269,    3, 0x0a /* Public */,
      32,    2,  274,    3, 0x0a /* Public */,
       8,    1,  279,    3, 0x0a /* Public */,
      33,    2,  282,    3, 0x0a /* Public */,
      34,    2,  287,    3, 0x0a /* Public */,
      35,    2,  292,    3, 0x0a /* Public */,
      36,    2,  297,    3, 0x0a /* Public */,
      37,    1,  302,    3, 0x0a /* Public */,
       7,    1,  305,    3, 0x0a /* Public */,
      38,    1,  308,    3, 0x0a /* Public */,
      39,    1,  311,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::QReal, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::QReal, 0x80000000 | 2,   12,
    0x80000000 | 15, 0x80000000 | 2, QMetaType::QReal,   12,   16,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QReal,   12,   18,
    0x80000000 | 15, 0x80000000 | 2, 0x80000000 | 15,   12,   16,
    QMetaType::QRectF, 0x80000000 | 2, QMetaType::QRectF,   12,   16,
    0x80000000 | 15, 0x80000000 | 2, QMetaType::QReal,   12,   16,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 15,   12,    5,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QReal,   12,   21,
    0x80000000 | 15, 0x80000000 | 2, 0x80000000 | 15,   12,   16,
    0x80000000 | 15, 0x80000000 | 2, QMetaType::QReal,   12,   16,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 15,   12,    5,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QReal,   12,   24,
    0x80000000 | 15, 0x80000000 | 2, QMetaType::QReal,   12,   26,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QReal,   12,   26,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 29,   12,   30,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,   12,   16,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 29,   12,   30,
    QMetaType::QReal, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   12,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   12,    6,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   12,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   12,    7,
    0x80000000 | 4, 0x80000000 | 2,   12,
    QMetaType::QReal, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,    3,
    QMetaType::Bool, 0x80000000 | 2,   11,

       0        // eod
};

void PythonQtWrapper_QMarginsF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMarginsF *_t = static_cast<PythonQtWrapper_QMarginsF *>(_o);
        switch (_id) {
        case 0: { QMarginsF* _r = _t->new_QMarginsF();
            if (_a[0]) *reinterpret_cast< QMarginsF**>(_a[0]) = _r; }  break;
        case 1: { QMarginsF* _r = _t->new_QMarginsF((*reinterpret_cast< const QMargins(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMarginsF**>(_a[0]) = _r; }  break;
        case 2: { QMarginsF* _r = _t->new_QMarginsF((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QMarginsF**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QMarginsF((*reinterpret_cast< QMarginsF*(*)>(_a[1]))); break;
        case 4: { qreal _r = _t->bottom((*reinterpret_cast< QMarginsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isNull((*reinterpret_cast< QMarginsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->left((*reinterpret_cast< QMarginsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { QMarginsF _r = _t->__mul__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF*>(_a[0]) = _r; }  break;
        case 8: { QMarginsF* _r = _t->__imul__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF**>(_a[0]) = _r; }  break;
        case 9: { QMarginsF _r = _t->__add__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< const QMarginsF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF*>(_a[0]) = _r; }  break;
        case 10: { QRectF _r = _t->__add__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 11: { QMarginsF _r = _t->__add__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF*>(_a[0]) = _r; }  break;
        case 12: { QMarginsF* _r = _t->__iadd__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< const QMarginsF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF**>(_a[0]) = _r; }  break;
        case 13: { QMarginsF* _r = _t->__iadd__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF**>(_a[0]) = _r; }  break;
        case 14: { QMarginsF _r = _t->__sub__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< const QMarginsF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF*>(_a[0]) = _r; }  break;
        case 15: { QMarginsF _r = _t->__sub__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF*>(_a[0]) = _r; }  break;
        case 16: { QMarginsF* _r = _t->__isub__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< const QMarginsF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF**>(_a[0]) = _r; }  break;
        case 17: { QMarginsF* _r = _t->__isub__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF**>(_a[0]) = _r; }  break;
        case 18: { QMarginsF _r = _t->__div__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF*>(_a[0]) = _r; }  break;
        case 19: { QMarginsF* _r = _t->__idiv__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMarginsF**>(_a[0]) = _r; }  break;
        case 20: _t->writeTo((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 21: { bool _r = _t->__eq__((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< const QMarginsF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: _t->readFrom((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 23: { qreal _r = _t->right((*reinterpret_cast< QMarginsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 24: _t->setBottom((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 25: _t->setLeft((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 26: _t->setRight((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 27: _t->setTop((*reinterpret_cast< QMarginsF*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 28: { QMargins _r = _t->toMargins((*reinterpret_cast< QMarginsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMargins*>(_a[0]) = _r; }  break;
        case 29: { qreal _r = _t->top((*reinterpret_cast< QMarginsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->py_toString((*reinterpret_cast< QMarginsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->__nonzero__((*reinterpret_cast< QMarginsF*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMarginsF::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMarginsF.data,
      qt_meta_data_PythonQtWrapper_QMarginsF,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMarginsF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMarginsF::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMarginsF.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMarginsF*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMarginsF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMessageAuthenticationCode_t {
    QByteArrayData data[21];
    char stringdata[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMessageAuthenticationCode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMessageAuthenticationCode_t qt_meta_stringdata_PythonQtWrapper_QMessageAuthenticationCode = {
    {
QT_MOC_LITERAL(0, 0, 42), // "PythonQtWrapper_QMessageAuthe..."
QT_MOC_LITERAL(1, 43, 30), // "new_QMessageAuthenticationCode"
QT_MOC_LITERAL(2, 74, 27), // "QMessageAuthenticationCode*"
QT_MOC_LITERAL(3, 102, 0), // ""
QT_MOC_LITERAL(4, 103, 29), // "QCryptographicHash::Algorithm"
QT_MOC_LITERAL(5, 133, 6), // "method"
QT_MOC_LITERAL(6, 140, 3), // "key"
QT_MOC_LITERAL(7, 144, 33), // "delete_QMessageAuthentication..."
QT_MOC_LITERAL(8, 178, 3), // "obj"
QT_MOC_LITERAL(9, 182, 7), // "addData"
QT_MOC_LITERAL(10, 190, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 207, 10), // "QIODevice*"
QT_MOC_LITERAL(12, 218, 6), // "device"
QT_MOC_LITERAL(13, 225, 4), // "data"
QT_MOC_LITERAL(14, 230, 11), // "const char*"
QT_MOC_LITERAL(15, 242, 6), // "length"
QT_MOC_LITERAL(16, 249, 38), // "static_QMessageAuthentication..."
QT_MOC_LITERAL(17, 288, 7), // "message"
QT_MOC_LITERAL(18, 296, 5), // "reset"
QT_MOC_LITERAL(19, 302, 6), // "result"
QT_MOC_LITERAL(20, 309, 6) // "setKey"

    },
    "PythonQtWrapper_QMessageAuthenticationCode\0"
    "new_QMessageAuthenticationCode\0"
    "QMessageAuthenticationCode*\0\0"
    "QCryptographicHash::Algorithm\0method\0"
    "key\0delete_QMessageAuthenticationCode\0"
    "obj\0addData\0theWrappedObject\0QIODevice*\0"
    "device\0data\0const char*\0length\0"
    "static_QMessageAuthenticationCode_hash\0"
    "message\0reset\0result\0setKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMessageAuthenticationCode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    3, 0x0a /* Public */,
       1,    1,   69,    3, 0x2a /* Public | MethodCloned */,
       7,    1,   72,    3, 0x0a /* Public */,
       9,    2,   75,    3, 0x0a /* Public */,
       9,    2,   80,    3, 0x0a /* Public */,
       9,    3,   85,    3, 0x0a /* Public */,
      16,    3,   92,    3, 0x0a /* Public */,
      18,    1,   99,    3, 0x0a /* Public */,
      19,    1,  102,    3, 0x0a /* Public */,
      20,    2,  105,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QByteArray,    5,    6,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray,   10,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14, QMetaType::Int,   10,   13,   15,
    QMetaType::QByteArray, QMetaType::QByteArray, QMetaType::QByteArray, 0x80000000 | 4,   17,    6,    5,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::QByteArray, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray,   10,    6,

       0        // eod
};

void PythonQtWrapper_QMessageAuthenticationCode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMessageAuthenticationCode *_t = static_cast<PythonQtWrapper_QMessageAuthenticationCode *>(_o);
        switch (_id) {
        case 0: { QMessageAuthenticationCode* _r = _t->new_QMessageAuthenticationCode((*reinterpret_cast< QCryptographicHash::Algorithm(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMessageAuthenticationCode**>(_a[0]) = _r; }  break;
        case 1: { QMessageAuthenticationCode* _r = _t->new_QMessageAuthenticationCode((*reinterpret_cast< QCryptographicHash::Algorithm(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMessageAuthenticationCode**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QMessageAuthenticationCode((*reinterpret_cast< QMessageAuthenticationCode*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->addData((*reinterpret_cast< QMessageAuthenticationCode*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->addData((*reinterpret_cast< QMessageAuthenticationCode*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 5: _t->addData((*reinterpret_cast< QMessageAuthenticationCode*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: { QByteArray _r = _t->static_QMessageAuthenticationCode_hash((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QCryptographicHash::Algorithm(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 7: _t->reset((*reinterpret_cast< QMessageAuthenticationCode*(*)>(_a[1]))); break;
        case 8: { QByteArray _r = _t->result((*reinterpret_cast< QMessageAuthenticationCode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 9: _t->setKey((*reinterpret_cast< QMessageAuthenticationCode*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QMessageAuthenticationCode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMessageAuthenticationCode.data,
      qt_meta_data_PythonQtWrapper_QMessageAuthenticationCode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMessageAuthenticationCode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMessageAuthenticationCode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMessageAuthenticationCode.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMessageAuthenticationCode*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMessageAuthenticationCode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMessageLogContext_t {
    QByteArrayData data[21];
    char stringdata[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMessageLogContext_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMessageLogContext_t qt_meta_stringdata_PythonQtWrapper_QMessageLogContext = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QMessageLogCo..."
QT_MOC_LITERAL(1, 35, 22), // "new_QMessageLogContext"
QT_MOC_LITERAL(2, 58, 19), // "QMessageLogContext*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 11), // "const char*"
QT_MOC_LITERAL(5, 91, 8), // "fileName"
QT_MOC_LITERAL(6, 100, 10), // "lineNumber"
QT_MOC_LITERAL(7, 111, 12), // "functionName"
QT_MOC_LITERAL(8, 124, 12), // "categoryName"
QT_MOC_LITERAL(9, 137, 25), // "delete_QMessageLogContext"
QT_MOC_LITERAL(10, 163, 3), // "obj"
QT_MOC_LITERAL(11, 167, 15), // "py_get_category"
QT_MOC_LITERAL(12, 183, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 200, 11), // "py_get_file"
QT_MOC_LITERAL(14, 212, 15), // "py_get_function"
QT_MOC_LITERAL(15, 228, 11), // "py_set_line"
QT_MOC_LITERAL(16, 240, 4), // "line"
QT_MOC_LITERAL(17, 245, 11), // "py_get_line"
QT_MOC_LITERAL(18, 257, 14), // "py_set_version"
QT_MOC_LITERAL(19, 272, 7), // "version"
QT_MOC_LITERAL(20, 280, 14) // "py_get_version"

    },
    "PythonQtWrapper_QMessageLogContext\0"
    "new_QMessageLogContext\0QMessageLogContext*\0"
    "\0const char*\0fileName\0lineNumber\0"
    "functionName\0categoryName\0"
    "delete_QMessageLogContext\0obj\0"
    "py_get_category\0theWrappedObject\0"
    "py_get_file\0py_get_function\0py_set_line\0"
    "line\0py_get_line\0py_set_version\0version\0"
    "py_get_version"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMessageLogContext[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    3, 0x0a /* Public */,
       1,    4,   65,    3, 0x0a /* Public */,
       9,    1,   74,    3, 0x0a /* Public */,
      11,    1,   77,    3, 0x0a /* Public */,
      13,    1,   80,    3, 0x0a /* Public */,
      14,    1,   83,    3, 0x0a /* Public */,
      15,    2,   86,    3, 0x0a /* Public */,
      17,    1,   91,    3, 0x0a /* Public */,
      18,    2,   94,    3, 0x0a /* Public */,
      20,    1,   99,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    0x80000000 | 4, 0x80000000 | 2,   12,
    0x80000000 | 4, 0x80000000 | 2,   12,
    0x80000000 | 4, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   12,   16,
    QMetaType::Int, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   12,   19,
    QMetaType::Int, 0x80000000 | 2,   12,

       0        // eod
};

void PythonQtWrapper_QMessageLogContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMessageLogContext *_t = static_cast<PythonQtWrapper_QMessageLogContext *>(_o);
        switch (_id) {
        case 0: { QMessageLogContext* _r = _t->new_QMessageLogContext();
            if (_a[0]) *reinterpret_cast< QMessageLogContext**>(_a[0]) = _r; }  break;
        case 1: { QMessageLogContext* _r = _t->new_QMessageLogContext((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QMessageLogContext**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QMessageLogContext((*reinterpret_cast< QMessageLogContext*(*)>(_a[1]))); break;
        case 3: { const char* _r = _t->py_get_category((*reinterpret_cast< QMessageLogContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 4: { const char* _r = _t->py_get_file((*reinterpret_cast< QMessageLogContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 5: { const char* _r = _t->py_get_function((*reinterpret_cast< QMessageLogContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 6: _t->py_set_line((*reinterpret_cast< QMessageLogContext*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: { int _r = _t->py_get_line((*reinterpret_cast< QMessageLogContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->py_set_version((*reinterpret_cast< QMessageLogContext*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: { int _r = _t->py_get_version((*reinterpret_cast< QMessageLogContext*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMessageLogContext::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMessageLogContext.data,
      qt_meta_data_PythonQtWrapper_QMessageLogContext,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMessageLogContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMessageLogContext::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMessageLogContext.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMessageLogContext*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMessageLogContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMessageLogger_t {
    QByteArrayData data[19];
    char stringdata[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMessageLogger_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMessageLogger_t qt_meta_stringdata_PythonQtWrapper_QMessageLogger = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QMessageLogger"
QT_MOC_LITERAL(1, 31, 18), // "new_QMessageLogger"
QT_MOC_LITERAL(2, 50, 15), // "QMessageLogger*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 11), // "const char*"
QT_MOC_LITERAL(5, 79, 4), // "file"
QT_MOC_LITERAL(6, 84, 4), // "line"
QT_MOC_LITERAL(7, 89, 8), // "function"
QT_MOC_LITERAL(8, 98, 8), // "category"
QT_MOC_LITERAL(9, 107, 21), // "delete_QMessageLogger"
QT_MOC_LITERAL(10, 129, 3), // "obj"
QT_MOC_LITERAL(11, 133, 8), // "critical"
QT_MOC_LITERAL(12, 142, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 159, 3), // "msg"
QT_MOC_LITERAL(14, 163, 5), // "debug"
QT_MOC_LITERAL(15, 169, 5), // "fatal"
QT_MOC_LITERAL(16, 175, 7), // "noDebug"
QT_MOC_LITERAL(17, 183, 6), // "arg__1"
QT_MOC_LITERAL(18, 190, 7) // "warning"

    },
    "PythonQtWrapper_QMessageLogger\0"
    "new_QMessageLogger\0QMessageLogger*\0\0"
    "const char*\0file\0line\0function\0category\0"
    "delete_QMessageLogger\0obj\0critical\0"
    "theWrappedObject\0msg\0debug\0fatal\0"
    "noDebug\0arg__1\0warning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMessageLogger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    3, 0x0a /* Public */,
       1,    3,   60,    3, 0x0a /* Public */,
       1,    4,   67,    3, 0x0a /* Public */,
       9,    1,   76,    3, 0x0a /* Public */,
      11,    2,   79,    3, 0x0a /* Public */,
      14,    2,   84,    3, 0x0a /* Public */,
      15,    2,   89,    3, 0x0a /* Public */,
      16,    2,   94,    3, 0x0a /* Public */,
      18,    2,   99,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::Int, 0x80000000 | 4,    5,    6,    7,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::Int, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   12,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   12,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   12,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   12,   17,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   12,   13,

       0        // eod
};

void PythonQtWrapper_QMessageLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMessageLogger *_t = static_cast<PythonQtWrapper_QMessageLogger *>(_o);
        switch (_id) {
        case 0: { QMessageLogger* _r = _t->new_QMessageLogger();
            if (_a[0]) *reinterpret_cast< QMessageLogger**>(_a[0]) = _r; }  break;
        case 1: { QMessageLogger* _r = _t->new_QMessageLogger((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMessageLogger**>(_a[0]) = _r; }  break;
        case 2: { QMessageLogger* _r = _t->new_QMessageLogger((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QMessageLogger**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QMessageLogger((*reinterpret_cast< QMessageLogger*(*)>(_a[1]))); break;
        case 4: _t->critical((*reinterpret_cast< QMessageLogger*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 5: _t->debug((*reinterpret_cast< QMessageLogger*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 6: _t->fatal((*reinterpret_cast< QMessageLogger*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 7: _t->noDebug((*reinterpret_cast< QMessageLogger*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 8: _t->warning((*reinterpret_cast< QMessageLogger*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMessageLogger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMessageLogger.data,
      qt_meta_data_PythonQtWrapper_QMessageLogger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMessageLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMessageLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMessageLogger.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMessageLogger*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMessageLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMetaClassInfo_t {
    QByteArrayData data[12];
    char stringdata[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMetaClassInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMetaClassInfo_t qt_meta_stringdata_PythonQtWrapper_QMetaClassInfo = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QMetaClassInfo"
QT_MOC_LITERAL(1, 31, 18), // "new_QMetaClassInfo"
QT_MOC_LITERAL(2, 50, 15), // "QMetaClassInfo*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 21), // "delete_QMetaClassInfo"
QT_MOC_LITERAL(5, 89, 3), // "obj"
QT_MOC_LITERAL(6, 93, 19), // "enclosingMetaObject"
QT_MOC_LITERAL(7, 113, 18), // "const QMetaObject*"
QT_MOC_LITERAL(8, 132, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 149, 4), // "name"
QT_MOC_LITERAL(10, 154, 11), // "const char*"
QT_MOC_LITERAL(11, 166, 5) // "value"

    },
    "PythonQtWrapper_QMetaClassInfo\0"
    "new_QMetaClassInfo\0QMetaClassInfo*\0\0"
    "delete_QMetaClassInfo\0obj\0enclosingMetaObject\0"
    "const QMetaObject*\0theWrappedObject\0"
    "name\0const char*\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMetaClassInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    3, 0x0a /* Public */,
       4,    1,   40,    3, 0x0a /* Public */,
       6,    1,   43,    3, 0x0a /* Public */,
       9,    1,   46,    3, 0x0a /* Public */,
      11,    1,   49,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2,    8,
    0x80000000 | 10, 0x80000000 | 2,    8,
    0x80000000 | 10, 0x80000000 | 2,    8,

       0        // eod
};

void PythonQtWrapper_QMetaClassInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMetaClassInfo *_t = static_cast<PythonQtWrapper_QMetaClassInfo *>(_o);
        switch (_id) {
        case 0: { QMetaClassInfo* _r = _t->new_QMetaClassInfo();
            if (_a[0]) *reinterpret_cast< QMetaClassInfo**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaClassInfo((*reinterpret_cast< QMetaClassInfo*(*)>(_a[1]))); break;
        case 2: { const QMetaObject* _r = _t->enclosingMetaObject((*reinterpret_cast< QMetaClassInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 3: { const char* _r = _t->name((*reinterpret_cast< QMetaClassInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 4: { const char* _r = _t->value((*reinterpret_cast< QMetaClassInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMetaClassInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaClassInfo.data,
      qt_meta_data_PythonQtWrapper_QMetaClassInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMetaClassInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMetaClassInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaClassInfo.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaClassInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaClassInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMetaEnum_t {
    QByteArrayData data[25];
    char stringdata[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMetaEnum_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMetaEnum_t qt_meta_stringdata_PythonQtWrapper_QMetaEnum = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QMetaEnum"
QT_MOC_LITERAL(1, 26, 13), // "new_QMetaEnum"
QT_MOC_LITERAL(2, 40, 10), // "QMetaEnum*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 16), // "delete_QMetaEnum"
QT_MOC_LITERAL(5, 69, 3), // "obj"
QT_MOC_LITERAL(6, 73, 19), // "enclosingMetaObject"
QT_MOC_LITERAL(7, 93, 18), // "const QMetaObject*"
QT_MOC_LITERAL(8, 112, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 129, 6), // "isFlag"
QT_MOC_LITERAL(10, 136, 7), // "isValid"
QT_MOC_LITERAL(11, 144, 3), // "key"
QT_MOC_LITERAL(12, 148, 11), // "const char*"
QT_MOC_LITERAL(13, 160, 5), // "index"
QT_MOC_LITERAL(14, 166, 8), // "keyCount"
QT_MOC_LITERAL(15, 175, 10), // "keyToValue"
QT_MOC_LITERAL(16, 186, 5), // "bool*"
QT_MOC_LITERAL(17, 192, 2), // "ok"
QT_MOC_LITERAL(18, 195, 11), // "keysToValue"
QT_MOC_LITERAL(19, 207, 4), // "keys"
QT_MOC_LITERAL(20, 212, 4), // "name"
QT_MOC_LITERAL(21, 217, 5), // "scope"
QT_MOC_LITERAL(22, 223, 5), // "value"
QT_MOC_LITERAL(23, 229, 10), // "valueToKey"
QT_MOC_LITERAL(24, 240, 11) // "valueToKeys"

    },
    "PythonQtWrapper_QMetaEnum\0new_QMetaEnum\0"
    "QMetaEnum*\0\0delete_QMetaEnum\0obj\0"
    "enclosingMetaObject\0const QMetaObject*\0"
    "theWrappedObject\0isFlag\0isValid\0key\0"
    "const char*\0index\0keyCount\0keyToValue\0"
    "bool*\0ok\0keysToValue\0keys\0name\0scope\0"
    "value\0valueToKey\0valueToKeys"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMetaEnum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    3, 0x0a /* Public */,
       4,    1,   95,    3, 0x0a /* Public */,
       6,    1,   98,    3, 0x0a /* Public */,
       9,    1,  101,    3, 0x0a /* Public */,
      10,    1,  104,    3, 0x0a /* Public */,
      11,    2,  107,    3, 0x0a /* Public */,
      14,    1,  112,    3, 0x0a /* Public */,
      15,    3,  115,    3, 0x0a /* Public */,
      15,    2,  122,    3, 0x2a /* Public | MethodCloned */,
      18,    3,  127,    3, 0x0a /* Public */,
      18,    2,  134,    3, 0x2a /* Public | MethodCloned */,
      20,    1,  139,    3, 0x0a /* Public */,
      21,    1,  142,    3, 0x0a /* Public */,
      22,    2,  145,    3, 0x0a /* Public */,
      23,    2,  150,    3, 0x0a /* Public */,
      24,    2,  155,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    0x80000000 | 12, 0x80000000 | 2, QMetaType::Int,    8,   13,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 12, 0x80000000 | 16,    8,   11,   17,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 12,    8,   11,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 12, 0x80000000 | 16,    8,   19,   17,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 12,    8,   19,
    0x80000000 | 12, 0x80000000 | 2,    8,
    0x80000000 | 12, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,    8,   13,
    0x80000000 | 12, 0x80000000 | 2, QMetaType::Int,    8,   22,
    QMetaType::QByteArray, 0x80000000 | 2, QMetaType::Int,    8,   22,

       0        // eod
};

void PythonQtWrapper_QMetaEnum::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMetaEnum *_t = static_cast<PythonQtWrapper_QMetaEnum *>(_o);
        switch (_id) {
        case 0: { QMetaEnum* _r = _t->new_QMetaEnum();
            if (_a[0]) *reinterpret_cast< QMetaEnum**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaEnum((*reinterpret_cast< QMetaEnum*(*)>(_a[1]))); break;
        case 2: { const QMetaObject* _r = _t->enclosingMetaObject((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->isFlag((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isValid((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { const char* _r = _t->key((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->keyCount((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->keyToValue((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->keyToValue((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->keysToValue((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->keysToValue((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { const char* _r = _t->name((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 12: { const char* _r = _t->scope((*reinterpret_cast< QMetaEnum*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->value((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { const char* _r = _t->valueToKey((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 15: { QByteArray _r = _t->valueToKeys((*reinterpret_cast< QMetaEnum*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMetaEnum::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaEnum.data,
      qt_meta_data_PythonQtWrapper_QMetaEnum,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMetaEnum::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMetaEnum::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaEnum.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaEnum*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaEnum::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMetaMethod_t {
    QByteArrayData data[47];
    char stringdata[529];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMetaMethod_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMetaMethod_t qt_meta_stringdata_PythonQtWrapper_QMetaMethod = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QMetaMethod"
QT_MOC_LITERAL(1, 28, 15), // "new_QMetaMethod"
QT_MOC_LITERAL(2, 44, 12), // "QMetaMethod*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 18), // "delete_QMetaMethod"
QT_MOC_LITERAL(5, 77, 3), // "obj"
QT_MOC_LITERAL(6, 81, 6), // "access"
QT_MOC_LITERAL(7, 88, 19), // "QMetaMethod::Access"
QT_MOC_LITERAL(8, 108, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 125, 10), // "attributes"
QT_MOC_LITERAL(10, 136, 19), // "enclosingMetaObject"
QT_MOC_LITERAL(11, 156, 18), // "const QMetaObject*"
QT_MOC_LITERAL(12, 175, 17), // "getParameterTypes"
QT_MOC_LITERAL(13, 193, 4), // "int*"
QT_MOC_LITERAL(14, 198, 5), // "types"
QT_MOC_LITERAL(15, 204, 7), // "isValid"
QT_MOC_LITERAL(16, 212, 11), // "methodIndex"
QT_MOC_LITERAL(17, 224, 15), // "methodSignature"
QT_MOC_LITERAL(18, 240, 10), // "methodType"
QT_MOC_LITERAL(19, 251, 23), // "QMetaMethod::MethodType"
QT_MOC_LITERAL(20, 275, 4), // "name"
QT_MOC_LITERAL(21, 280, 6), // "__eq__"
QT_MOC_LITERAL(22, 287, 11), // "QMetaMethod"
QT_MOC_LITERAL(23, 299, 2), // "m2"
QT_MOC_LITERAL(24, 302, 14), // "parameterCount"
QT_MOC_LITERAL(25, 317, 14), // "parameterNames"
QT_MOC_LITERAL(26, 332, 13), // "parameterType"
QT_MOC_LITERAL(27, 346, 5), // "index"
QT_MOC_LITERAL(28, 352, 14), // "parameterTypes"
QT_MOC_LITERAL(29, 367, 10), // "returnType"
QT_MOC_LITERAL(30, 378, 8), // "revision"
QT_MOC_LITERAL(31, 387, 3), // "tag"
QT_MOC_LITERAL(32, 391, 11), // "const char*"
QT_MOC_LITERAL(33, 403, 8), // "typeName"
QT_MOC_LITERAL(34, 412, 6), // "Access"
QT_MOC_LITERAL(35, 419, 7), // "Private"
QT_MOC_LITERAL(36, 427, 9), // "Protected"
QT_MOC_LITERAL(37, 437, 6), // "Public"
QT_MOC_LITERAL(38, 444, 10), // "Attributes"
QT_MOC_LITERAL(39, 455, 13), // "Compatibility"
QT_MOC_LITERAL(40, 469, 6), // "Cloned"
QT_MOC_LITERAL(41, 476, 10), // "Scriptable"
QT_MOC_LITERAL(42, 487, 10), // "MethodType"
QT_MOC_LITERAL(43, 498, 6), // "Method"
QT_MOC_LITERAL(44, 505, 6), // "Signal"
QT_MOC_LITERAL(45, 512, 4), // "Slot"
QT_MOC_LITERAL(46, 517, 11) // "Constructor"

    },
    "PythonQtWrapper_QMetaMethod\0new_QMetaMethod\0"
    "QMetaMethod*\0\0delete_QMetaMethod\0obj\0"
    "access\0QMetaMethod::Access\0theWrappedObject\0"
    "attributes\0enclosingMetaObject\0"
    "const QMetaObject*\0getParameterTypes\0"
    "int*\0types\0isValid\0methodIndex\0"
    "methodSignature\0methodType\0"
    "QMetaMethod::MethodType\0name\0__eq__\0"
    "QMetaMethod\0m2\0parameterCount\0"
    "parameterNames\0parameterType\0index\0"
    "parameterTypes\0returnType\0revision\0"
    "tag\0const char*\0typeName\0Access\0Private\0"
    "Protected\0Public\0Attributes\0Compatibility\0"
    "Cloned\0Scriptable\0MethodType\0Method\0"
    "Signal\0Slot\0Constructor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMetaMethod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       3,  178, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    3, 0x0a /* Public */,
       4,    1,  115,    3, 0x0a /* Public */,
       6,    1,  118,    3, 0x0a /* Public */,
       9,    1,  121,    3, 0x0a /* Public */,
      10,    1,  124,    3, 0x0a /* Public */,
      12,    2,  127,    3, 0x0a /* Public */,
      15,    1,  132,    3, 0x0a /* Public */,
      16,    1,  135,    3, 0x0a /* Public */,
      17,    1,  138,    3, 0x0a /* Public */,
      18,    1,  141,    3, 0x0a /* Public */,
      20,    1,  144,    3, 0x0a /* Public */,
      21,    2,  147,    3, 0x0a /* Public */,
      24,    1,  152,    3, 0x0a /* Public */,
      25,    1,  155,    3, 0x0a /* Public */,
      26,    2,  158,    3, 0x0a /* Public */,
      28,    1,  163,    3, 0x0a /* Public */,
      29,    1,  166,    3, 0x0a /* Public */,
      30,    1,  169,    3, 0x0a /* Public */,
      31,    1,  172,    3, 0x0a /* Public */,
      33,    1,  175,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    0x80000000 | 11, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13,    8,   14,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QByteArray, 0x80000000 | 2,    8,
    0x80000000 | 19, 0x80000000 | 2,    8,
    QMetaType::QByteArray, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 22,    8,   23,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QByteArrayList, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,    8,   27,
    QMetaType::QByteArrayList, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    0x80000000 | 32, 0x80000000 | 2,    8,
    0x80000000 | 32, 0x80000000 | 2,    8,

 // enums: name, flags, count, data
      34, 0x0,    3,  190,
      38, 0x0,    3,  196,
      42, 0x0,    4,  202,

 // enum data: key, value
      35, uint(PythonQtWrapper_QMetaMethod::Private),
      36, uint(PythonQtWrapper_QMetaMethod::Protected),
      37, uint(PythonQtWrapper_QMetaMethod::Public),
      39, uint(PythonQtWrapper_QMetaMethod::Compatibility),
      40, uint(PythonQtWrapper_QMetaMethod::Cloned),
      41, uint(PythonQtWrapper_QMetaMethod::Scriptable),
      43, uint(PythonQtWrapper_QMetaMethod::Method),
      44, uint(PythonQtWrapper_QMetaMethod::Signal),
      45, uint(PythonQtWrapper_QMetaMethod::Slot),
      46, uint(PythonQtWrapper_QMetaMethod::Constructor),

       0        // eod
};

void PythonQtWrapper_QMetaMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMetaMethod *_t = static_cast<PythonQtWrapper_QMetaMethod *>(_o);
        switch (_id) {
        case 0: { QMetaMethod* _r = _t->new_QMetaMethod();
            if (_a[0]) *reinterpret_cast< QMetaMethod**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaMethod((*reinterpret_cast< QMetaMethod*(*)>(_a[1]))); break;
        case 2: { QMetaMethod::Access _r = _t->access((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaMethod::Access*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->attributes((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { const QMetaObject* _r = _t->enclosingMetaObject((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 5: _t->getParameterTypes((*reinterpret_cast< QMetaMethod*(*)>(_a[1])),(*reinterpret_cast< int*(*)>(_a[2]))); break;
        case 6: { bool _r = _t->isValid((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->methodIndex((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QByteArray _r = _t->methodSignature((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 9: { QMetaMethod::MethodType _r = _t->methodType((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaMethod::MethodType*>(_a[0]) = _r; }  break;
        case 10: { QByteArray _r = _t->name((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__eq__((*reinterpret_cast< QMetaMethod*(*)>(_a[1])),(*reinterpret_cast< const QMetaMethod(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->parameterCount((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { QList<QByteArray> _r = _t->parameterNames((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->parameterType((*reinterpret_cast< QMetaMethod*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { QList<QByteArray> _r = _t->parameterTypes((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->returnType((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->revision((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { const char* _r = _t->tag((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 19: { const char* _r = _t->typeName((*reinterpret_cast< QMetaMethod*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMetaMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaMethod.data,
      qt_meta_data_PythonQtWrapper_QMetaMethod,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMetaMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMetaMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaMethod.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaMethod*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMetaProperty_t {
    QByteArrayData data[42];
    char stringdata[491];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMetaProperty_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMetaProperty_t qt_meta_stringdata_PythonQtWrapper_QMetaProperty = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QMetaProperty"
QT_MOC_LITERAL(1, 30, 17), // "new_QMetaProperty"
QT_MOC_LITERAL(2, 48, 14), // "QMetaProperty*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 20), // "delete_QMetaProperty"
QT_MOC_LITERAL(5, 85, 3), // "obj"
QT_MOC_LITERAL(6, 89, 19), // "enclosingMetaObject"
QT_MOC_LITERAL(7, 109, 18), // "const QMetaObject*"
QT_MOC_LITERAL(8, 128, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 145, 10), // "enumerator"
QT_MOC_LITERAL(10, 156, 9), // "QMetaEnum"
QT_MOC_LITERAL(11, 166, 15), // "hasNotifySignal"
QT_MOC_LITERAL(12, 182, 12), // "hasStdCppSet"
QT_MOC_LITERAL(13, 195, 10), // "isConstant"
QT_MOC_LITERAL(14, 206, 12), // "isDesignable"
QT_MOC_LITERAL(15, 219, 14), // "const QObject*"
QT_MOC_LITERAL(16, 234, 10), // "isEditable"
QT_MOC_LITERAL(17, 245, 10), // "isEnumType"
QT_MOC_LITERAL(18, 256, 7), // "isFinal"
QT_MOC_LITERAL(19, 264, 10), // "isFlagType"
QT_MOC_LITERAL(20, 275, 10), // "isReadable"
QT_MOC_LITERAL(21, 286, 12), // "isResettable"
QT_MOC_LITERAL(22, 299, 12), // "isScriptable"
QT_MOC_LITERAL(23, 312, 8), // "isStored"
QT_MOC_LITERAL(24, 321, 6), // "isUser"
QT_MOC_LITERAL(25, 328, 7), // "isValid"
QT_MOC_LITERAL(26, 336, 10), // "isWritable"
QT_MOC_LITERAL(27, 347, 4), // "name"
QT_MOC_LITERAL(28, 352, 11), // "const char*"
QT_MOC_LITERAL(29, 364, 12), // "notifySignal"
QT_MOC_LITERAL(30, 377, 11), // "QMetaMethod"
QT_MOC_LITERAL(31, 389, 17), // "notifySignalIndex"
QT_MOC_LITERAL(32, 407, 13), // "propertyIndex"
QT_MOC_LITERAL(33, 421, 4), // "read"
QT_MOC_LITERAL(34, 426, 5), // "reset"
QT_MOC_LITERAL(35, 432, 8), // "revision"
QT_MOC_LITERAL(36, 441, 4), // "type"
QT_MOC_LITERAL(37, 446, 14), // "QVariant::Type"
QT_MOC_LITERAL(38, 461, 8), // "typeName"
QT_MOC_LITERAL(39, 470, 8), // "userType"
QT_MOC_LITERAL(40, 479, 5), // "write"
QT_MOC_LITERAL(41, 485, 5) // "value"

    },
    "PythonQtWrapper_QMetaProperty\0"
    "new_QMetaProperty\0QMetaProperty*\0\0"
    "delete_QMetaProperty\0obj\0enclosingMetaObject\0"
    "const QMetaObject*\0theWrappedObject\0"
    "enumerator\0QMetaEnum\0hasNotifySignal\0"
    "hasStdCppSet\0isConstant\0isDesignable\0"
    "const QObject*\0isEditable\0isEnumType\0"
    "isFinal\0isFlagType\0isReadable\0"
    "isResettable\0isScriptable\0isStored\0"
    "isUser\0isValid\0isWritable\0name\0"
    "const char*\0notifySignal\0QMetaMethod\0"
    "notifySignalIndex\0propertyIndex\0read\0"
    "reset\0revision\0type\0QVariant::Type\0"
    "typeName\0userType\0write\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMetaProperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  189,    3, 0x0a /* Public */,
       4,    1,  190,    3, 0x0a /* Public */,
       6,    1,  193,    3, 0x0a /* Public */,
       9,    1,  196,    3, 0x0a /* Public */,
      11,    1,  199,    3, 0x0a /* Public */,
      12,    1,  202,    3, 0x0a /* Public */,
      13,    1,  205,    3, 0x0a /* Public */,
      14,    2,  208,    3, 0x0a /* Public */,
      14,    1,  213,    3, 0x2a /* Public | MethodCloned */,
      16,    2,  216,    3, 0x0a /* Public */,
      16,    1,  221,    3, 0x2a /* Public | MethodCloned */,
      17,    1,  224,    3, 0x0a /* Public */,
      18,    1,  227,    3, 0x0a /* Public */,
      19,    1,  230,    3, 0x0a /* Public */,
      20,    1,  233,    3, 0x0a /* Public */,
      21,    1,  236,    3, 0x0a /* Public */,
      22,    2,  239,    3, 0x0a /* Public */,
      22,    1,  244,    3, 0x2a /* Public | MethodCloned */,
      23,    2,  247,    3, 0x0a /* Public */,
      23,    1,  252,    3, 0x2a /* Public | MethodCloned */,
      24,    2,  255,    3, 0x0a /* Public */,
      24,    1,  260,    3, 0x2a /* Public | MethodCloned */,
      25,    1,  263,    3, 0x0a /* Public */,
      26,    1,  266,    3, 0x0a /* Public */,
      27,    1,  269,    3, 0x0a /* Public */,
      29,    1,  272,    3, 0x0a /* Public */,
      31,    1,  275,    3, 0x0a /* Public */,
      32,    1,  278,    3, 0x0a /* Public */,
      33,    2,  281,    3, 0x0a /* Public */,
      34,    2,  286,    3, 0x0a /* Public */,
      35,    1,  291,    3, 0x0a /* Public */,
      36,    1,  294,    3, 0x0a /* Public */,
      38,    1,  297,    3, 0x0a /* Public */,
      39,    1,  300,    3, 0x0a /* Public */,
      40,    3,  303,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2,    8,
    0x80000000 | 10, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,    8,    5,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,    8,    5,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,    8,    5,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,    8,    5,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,    8,    5,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    0x80000000 | 28, 0x80000000 | 2,    8,
    0x80000000 | 30, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 15,    8,    5,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QObjectStar,    8,    5,
    QMetaType::Int, 0x80000000 | 2,    8,
    0x80000000 | 37, 0x80000000 | 2,    8,
    0x80000000 | 28, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QObjectStar, QMetaType::QVariant,    8,    5,   41,

       0        // eod
};

void PythonQtWrapper_QMetaProperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMetaProperty *_t = static_cast<PythonQtWrapper_QMetaProperty *>(_o);
        switch (_id) {
        case 0: { QMetaProperty* _r = _t->new_QMetaProperty();
            if (_a[0]) *reinterpret_cast< QMetaProperty**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaProperty((*reinterpret_cast< QMetaProperty*(*)>(_a[1]))); break;
        case 2: { const QMetaObject* _r = _t->enclosingMetaObject((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 3: { QMetaEnum _r = _t->enumerator((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaEnum*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->hasNotifySignal((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->hasStdCppSet((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isConstant((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isDesignable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isDesignable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isEditable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isEditable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isEnumType((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isFinal((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isFlagType((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isReadable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isResettable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isScriptable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isScriptable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isStored((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isStored((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isUser((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isUser((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isValid((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isWritable((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { const char* _r = _t->name((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 25: { QMetaMethod _r = _t->notifySignal((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaMethod*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->notifySignalIndex((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->propertyIndex((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { QVariant _r = _t->read((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< const QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->reset((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->revision((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { QVariant::Type _r = _t->type((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant::Type*>(_a[0]) = _r; }  break;
        case 32: { const char* _r = _t->typeName((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->userType((*reinterpret_cast< QMetaProperty*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->write((*reinterpret_cast< QMetaProperty*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMetaProperty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaProperty.data,
      qt_meta_data_PythonQtWrapper_QMetaProperty,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMetaProperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMetaProperty::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaProperty.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaProperty*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaProperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMetaType_t {
    QByteArrayData data[68];
    char stringdata[1129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMetaType_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMetaType_t qt_meta_stringdata_PythonQtWrapper_QMetaType = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QMetaType"
QT_MOC_LITERAL(1, 26, 13), // "new_QMetaType"
QT_MOC_LITERAL(2, 40, 10), // "QMetaType*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 4), // "type"
QT_MOC_LITERAL(5, 57, 16), // "delete_QMetaType"
QT_MOC_LITERAL(6, 74, 3), // "obj"
QT_MOC_LITERAL(7, 78, 24), // "static_QMetaType_compare"
QT_MOC_LITERAL(8, 103, 11), // "const void*"
QT_MOC_LITERAL(9, 115, 3), // "lhs"
QT_MOC_LITERAL(10, 119, 3), // "rhs"
QT_MOC_LITERAL(11, 123, 6), // "typeId"
QT_MOC_LITERAL(12, 130, 4), // "int*"
QT_MOC_LITERAL(13, 135, 6), // "result"
QT_MOC_LITERAL(14, 142, 26), // "static_QMetaType_construct"
QT_MOC_LITERAL(15, 169, 5), // "where"
QT_MOC_LITERAL(16, 175, 4), // "copy"
QT_MOC_LITERAL(17, 180, 9), // "construct"
QT_MOC_LITERAL(18, 190, 16), // "theWrappedObject"
QT_MOC_LITERAL(19, 207, 24), // "static_QMetaType_convert"
QT_MOC_LITERAL(20, 232, 4), // "from"
QT_MOC_LITERAL(21, 237, 10), // "fromTypeId"
QT_MOC_LITERAL(22, 248, 2), // "to"
QT_MOC_LITERAL(23, 251, 8), // "toTypeId"
QT_MOC_LITERAL(24, 260, 6), // "create"
QT_MOC_LITERAL(25, 267, 23), // "static_QMetaType_create"
QT_MOC_LITERAL(26, 291, 24), // "static_QMetaType_destroy"
QT_MOC_LITERAL(27, 316, 4), // "data"
QT_MOC_LITERAL(28, 321, 7), // "destroy"
QT_MOC_LITERAL(29, 329, 25), // "static_QMetaType_destruct"
QT_MOC_LITERAL(30, 355, 8), // "destruct"
QT_MOC_LITERAL(31, 364, 5), // "flags"
QT_MOC_LITERAL(32, 370, 20), // "QMetaType::TypeFlags"
QT_MOC_LITERAL(33, 391, 41), // "static_QMetaType_hasRegistere..."
QT_MOC_LITERAL(34, 433, 47), // "static_QMetaType_hasRegistere..."
QT_MOC_LITERAL(35, 481, 49), // "static_QMetaType_hasRegistere..."
QT_MOC_LITERAL(36, 531, 12), // "isRegistered"
QT_MOC_LITERAL(37, 544, 29), // "static_QMetaType_isRegistered"
QT_MOC_LITERAL(38, 574, 7), // "isValid"
QT_MOC_LITERAL(39, 582, 21), // "static_QMetaType_load"
QT_MOC_LITERAL(40, 604, 12), // "QDataStream&"
QT_MOC_LITERAL(41, 617, 6), // "stream"
QT_MOC_LITERAL(42, 624, 10), // "metaObject"
QT_MOC_LITERAL(43, 635, 18), // "const QMetaObject*"
QT_MOC_LITERAL(44, 654, 34), // "static_QMetaType_metaObjectFo..."
QT_MOC_LITERAL(45, 689, 42), // "static_QMetaType_registerNorm..."
QT_MOC_LITERAL(46, 732, 18), // "normalizedTypeName"
QT_MOC_LITERAL(47, 751, 7), // "aliasId"
QT_MOC_LITERAL(48, 759, 32), // "static_QMetaType_registerTypedef"
QT_MOC_LITERAL(49, 792, 11), // "const char*"
QT_MOC_LITERAL(50, 804, 8), // "typeName"
QT_MOC_LITERAL(51, 813, 21), // "static_QMetaType_save"
QT_MOC_LITERAL(52, 835, 6), // "sizeOf"
QT_MOC_LITERAL(53, 842, 23), // "static_QMetaType_sizeOf"
QT_MOC_LITERAL(54, 866, 21), // "static_QMetaType_type"
QT_MOC_LITERAL(55, 888, 26), // "static_QMetaType_typeFlags"
QT_MOC_LITERAL(56, 915, 25), // "static_QMetaType_typeName"
QT_MOC_LITERAL(57, 941, 8), // "TypeFlag"
QT_MOC_LITERAL(58, 950, 17), // "NeedsConstruction"
QT_MOC_LITERAL(59, 968, 16), // "NeedsDestruction"
QT_MOC_LITERAL(60, 985, 11), // "MovableType"
QT_MOC_LITERAL(61, 997, 16), // "PointerToQObject"
QT_MOC_LITERAL(62, 1014, 13), // "IsEnumeration"
QT_MOC_LITERAL(63, 1028, 22), // "SharedPointerToQObject"
QT_MOC_LITERAL(64, 1051, 20), // "WeakPointerToQObject"
QT_MOC_LITERAL(65, 1072, 24), // "TrackingPointerToQObject"
QT_MOC_LITERAL(66, 1097, 21), // "WasDeclaredAsMetaType"
QT_MOC_LITERAL(67, 1119, 9) // "TypeFlags"

    },
    "PythonQtWrapper_QMetaType\0new_QMetaType\0"
    "QMetaType*\0\0type\0delete_QMetaType\0obj\0"
    "static_QMetaType_compare\0const void*\0"
    "lhs\0rhs\0typeId\0int*\0result\0"
    "static_QMetaType_construct\0where\0copy\0"
    "construct\0theWrappedObject\0"
    "static_QMetaType_convert\0from\0fromTypeId\0"
    "to\0toTypeId\0create\0static_QMetaType_create\0"
    "static_QMetaType_destroy\0data\0destroy\0"
    "static_QMetaType_destruct\0destruct\0"
    "flags\0QMetaType::TypeFlags\0"
    "static_QMetaType_hasRegisteredComparators\0"
    "static_QMetaType_hasRegisteredConverterFunction\0"
    "static_QMetaType_hasRegisteredDebugStreamOperator\0"
    "isRegistered\0static_QMetaType_isRegistered\0"
    "isValid\0static_QMetaType_load\0"
    "QDataStream&\0stream\0metaObject\0"
    "const QMetaObject*\0"
    "static_QMetaType_metaObjectForType\0"
    "static_QMetaType_registerNormalizedTypedef\0"
    "normalizedTypeName\0aliasId\0"
    "static_QMetaType_registerTypedef\0"
    "const char*\0typeName\0static_QMetaType_save\0"
    "sizeOf\0static_QMetaType_sizeOf\0"
    "static_QMetaType_type\0static_QMetaType_typeFlags\0"
    "static_QMetaType_typeName\0TypeFlag\0"
    "NeedsConstruction\0NeedsDestruction\0"
    "MovableType\0PointerToQObject\0IsEnumeration\0"
    "SharedPointerToQObject\0WeakPointerToQObject\0"
    "TrackingPointerToQObject\0WasDeclaredAsMetaType\0"
    "TypeFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMetaType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       2,  326, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  179,    3, 0x0a /* Public */,
       5,    1,  182,    3, 0x0a /* Public */,
       7,    4,  185,    3, 0x0a /* Public */,
      14,    3,  194,    3, 0x0a /* Public */,
      17,    3,  201,    3, 0x0a /* Public */,
      17,    2,  208,    3, 0x2a /* Public | MethodCloned */,
      19,    4,  213,    3, 0x0a /* Public */,
      24,    2,  222,    3, 0x0a /* Public */,
      24,    1,  227,    3, 0x2a /* Public | MethodCloned */,
      25,    2,  230,    3, 0x0a /* Public */,
      25,    1,  235,    3, 0x2a /* Public | MethodCloned */,
      26,    2,  238,    3, 0x0a /* Public */,
      28,    2,  243,    3, 0x0a /* Public */,
      29,    2,  248,    3, 0x0a /* Public */,
      30,    2,  253,    3, 0x0a /* Public */,
      31,    1,  258,    3, 0x0a /* Public */,
      33,    1,  261,    3, 0x0a /* Public */,
      34,    2,  264,    3, 0x0a /* Public */,
      35,    1,  269,    3, 0x0a /* Public */,
      36,    1,  272,    3, 0x0a /* Public */,
      37,    1,  275,    3, 0x0a /* Public */,
      38,    1,  278,    3, 0x0a /* Public */,
      39,    3,  281,    3, 0x0a /* Public */,
      42,    1,  288,    3, 0x0a /* Public */,
      44,    1,  291,    3, 0x0a /* Public */,
      45,    2,  294,    3, 0x0a /* Public */,
      48,    2,  299,    3, 0x0a /* Public */,
      51,    3,  304,    3, 0x0a /* Public */,
      52,    1,  311,    3, 0x0a /* Public */,
      53,    1,  314,    3, 0x0a /* Public */,
      54,    1,  317,    3, 0x0a /* Public */,
      55,    1,  320,    3, 0x0a /* Public */,
      56,    1,  323,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 8, QMetaType::Int, 0x80000000 | 12,    9,   10,   11,   13,
    QMetaType::VoidStar, QMetaType::Int, QMetaType::VoidStar, 0x80000000 | 8,    4,   15,   16,
    QMetaType::VoidStar, 0x80000000 | 2, QMetaType::VoidStar, 0x80000000 | 8,   18,   15,   16,
    QMetaType::VoidStar, 0x80000000 | 2, QMetaType::VoidStar,   18,   15,
    QMetaType::Bool, 0x80000000 | 8, QMetaType::Int, QMetaType::VoidStar, QMetaType::Int,   20,   21,   22,   23,
    QMetaType::VoidStar, 0x80000000 | 2, 0x80000000 | 8,   18,   16,
    QMetaType::VoidStar, 0x80000000 | 2,   18,
    QMetaType::VoidStar, QMetaType::Int, 0x80000000 | 8,    4,   16,
    QMetaType::VoidStar, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::VoidStar,    4,   27,
    QMetaType::Void, 0x80000000 | 2, QMetaType::VoidStar,   18,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::VoidStar,    4,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::VoidStar,   18,   27,
    0x80000000 | 32, 0x80000000 | 2,   18,
    QMetaType::Bool, QMetaType::Int,   11,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   21,   23,
    QMetaType::Bool, QMetaType::Int,   11,
    QMetaType::Bool, 0x80000000 | 2,   18,
    QMetaType::Bool, QMetaType::Int,    4,
    QMetaType::Bool, 0x80000000 | 2,   18,
    QMetaType::Bool, 0x80000000 | 40, QMetaType::Int, QMetaType::VoidStar,   41,    4,   27,
    0x80000000 | 43, 0x80000000 | 2,   18,
    0x80000000 | 43, QMetaType::Int,    4,
    QMetaType::Int, QMetaType::QByteArray, QMetaType::Int,   46,   47,
    QMetaType::Int, 0x80000000 | 49, QMetaType::Int,   50,   47,
    QMetaType::Bool, 0x80000000 | 40, QMetaType::Int, 0x80000000 | 8,   41,    4,   27,
    QMetaType::Int, 0x80000000 | 2,   18,
    QMetaType::Int, QMetaType::Int,    4,
    QMetaType::Int, 0x80000000 | 49,   50,
    0x80000000 | 32, QMetaType::Int,    4,
    0x80000000 | 49, QMetaType::Int,    4,

 // enums: name, flags, count, data
      57, 0x0,    9,  334,
      67, 0x1,    9,  352,

 // enum data: key, value
      58, uint(PythonQtWrapper_QMetaType::NeedsConstruction),
      59, uint(PythonQtWrapper_QMetaType::NeedsDestruction),
      60, uint(PythonQtWrapper_QMetaType::MovableType),
      61, uint(PythonQtWrapper_QMetaType::PointerToQObject),
      62, uint(PythonQtWrapper_QMetaType::IsEnumeration),
      63, uint(PythonQtWrapper_QMetaType::SharedPointerToQObject),
      64, uint(PythonQtWrapper_QMetaType::WeakPointerToQObject),
      65, uint(PythonQtWrapper_QMetaType::TrackingPointerToQObject),
      66, uint(PythonQtWrapper_QMetaType::WasDeclaredAsMetaType),
      58, uint(PythonQtWrapper_QMetaType::NeedsConstruction),
      59, uint(PythonQtWrapper_QMetaType::NeedsDestruction),
      60, uint(PythonQtWrapper_QMetaType::MovableType),
      61, uint(PythonQtWrapper_QMetaType::PointerToQObject),
      62, uint(PythonQtWrapper_QMetaType::IsEnumeration),
      63, uint(PythonQtWrapper_QMetaType::SharedPointerToQObject),
      64, uint(PythonQtWrapper_QMetaType::WeakPointerToQObject),
      65, uint(PythonQtWrapper_QMetaType::TrackingPointerToQObject),
      66, uint(PythonQtWrapper_QMetaType::WasDeclaredAsMetaType),

       0        // eod
};

void PythonQtWrapper_QMetaType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMetaType *_t = static_cast<PythonQtWrapper_QMetaType *>(_o);
        switch (_id) {
        case 0: { QMetaType* _r = _t->new_QMetaType((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaType**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMetaType((*reinterpret_cast< QMetaType*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->static_QMetaType_compare((*reinterpret_cast< const void*(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { void* _r = _t->static_QMetaType_construct((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< const void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 4: { void* _r = _t->construct((*reinterpret_cast< QMetaType*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< const void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 5: { void* _r = _t->construct((*reinterpret_cast< QMetaType*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->static_QMetaType_convert((*reinterpret_cast< const void*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { void* _r = _t->create((*reinterpret_cast< QMetaType*(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 8: { void* _r = _t->create((*reinterpret_cast< QMetaType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 9: { void* _r = _t->static_QMetaType_create((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 10: { void* _r = _t->static_QMetaType_create((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 11: _t->static_QMetaType_destroy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 12: _t->destroy((*reinterpret_cast< QMetaType*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 13: _t->static_QMetaType_destruct((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 14: _t->destruct((*reinterpret_cast< QMetaType*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 15: { QMetaType::TypeFlags _r = _t->flags((*reinterpret_cast< QMetaType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaType::TypeFlags*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->static_QMetaType_hasRegisteredComparators((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->static_QMetaType_hasRegisteredConverterFunction((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->static_QMetaType_hasRegisteredDebugStreamOperator((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isRegistered((*reinterpret_cast< QMetaType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->static_QMetaType_isRegistered((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isValid((*reinterpret_cast< QMetaType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->static_QMetaType_load((*reinterpret_cast< QDataStream(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { const QMetaObject* _r = _t->metaObject((*reinterpret_cast< QMetaType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 24: { const QMetaObject* _r = _t->static_QMetaType_metaObjectForType((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QMetaObject**>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->static_QMetaType_registerNormalizedTypedef((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { int _r = _t->static_QMetaType_registerTypedef((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->static_QMetaType_save((*reinterpret_cast< QDataStream(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->sizeOf((*reinterpret_cast< QMetaType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { int _r = _t->static_QMetaType_sizeOf((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->static_QMetaType_type((*reinterpret_cast< const char*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: { QMetaType::TypeFlags _r = _t->static_QMetaType_typeFlags((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMetaType::TypeFlags*>(_a[0]) = _r; }  break;
        case 32: { const char* _r = _t->static_QMetaType_typeName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const char**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMetaType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMetaType.data,
      qt_meta_data_PythonQtWrapper_QMetaType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMetaType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMetaType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMetaType.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMetaType*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMetaType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMimeData_t {
    QByteArrayData data[35];
    char stringdata[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMimeData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMimeData_t qt_meta_stringdata_PythonQtWrapper_QMimeData = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QMimeData"
QT_MOC_LITERAL(1, 26, 13), // "new_QMimeData"
QT_MOC_LITERAL(2, 40, 10), // "QMimeData*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 16), // "delete_QMimeData"
QT_MOC_LITERAL(5, 69, 3), // "obj"
QT_MOC_LITERAL(6, 73, 5), // "clear"
QT_MOC_LITERAL(7, 79, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 96, 9), // "colorData"
QT_MOC_LITERAL(9, 106, 4), // "data"
QT_MOC_LITERAL(10, 111, 8), // "mimetype"
QT_MOC_LITERAL(11, 120, 7), // "formats"
QT_MOC_LITERAL(12, 128, 8), // "hasColor"
QT_MOC_LITERAL(13, 137, 9), // "hasFormat"
QT_MOC_LITERAL(14, 147, 7), // "hasHtml"
QT_MOC_LITERAL(15, 155, 8), // "hasImage"
QT_MOC_LITERAL(16, 164, 7), // "hasText"
QT_MOC_LITERAL(17, 172, 7), // "hasUrls"
QT_MOC_LITERAL(18, 180, 4), // "html"
QT_MOC_LITERAL(19, 185, 9), // "imageData"
QT_MOC_LITERAL(20, 195, 12), // "removeFormat"
QT_MOC_LITERAL(21, 208, 12), // "retrieveData"
QT_MOC_LITERAL(22, 221, 14), // "QVariant::Type"
QT_MOC_LITERAL(23, 236, 13), // "preferredType"
QT_MOC_LITERAL(24, 250, 12), // "setColorData"
QT_MOC_LITERAL(25, 263, 5), // "color"
QT_MOC_LITERAL(26, 269, 7), // "setData"
QT_MOC_LITERAL(27, 277, 7), // "setHtml"
QT_MOC_LITERAL(28, 285, 12), // "setImageData"
QT_MOC_LITERAL(29, 298, 5), // "image"
QT_MOC_LITERAL(30, 304, 7), // "setText"
QT_MOC_LITERAL(31, 312, 4), // "text"
QT_MOC_LITERAL(32, 317, 7), // "setUrls"
QT_MOC_LITERAL(33, 325, 11), // "QList<QUrl>"
QT_MOC_LITERAL(34, 337, 4) // "urls"

    },
    "PythonQtWrapper_QMimeData\0new_QMimeData\0"
    "QMimeData*\0\0delete_QMimeData\0obj\0clear\0"
    "theWrappedObject\0colorData\0data\0"
    "mimetype\0formats\0hasColor\0hasFormat\0"
    "hasHtml\0hasImage\0hasText\0hasUrls\0html\0"
    "imageData\0removeFormat\0retrieveData\0"
    "QVariant::Type\0preferredType\0setColorData\0"
    "color\0setData\0setHtml\0setImageData\0"
    "image\0setText\0text\0setUrls\0QList<QUrl>\0"
    "urls"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMimeData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  134,    3, 0x0a /* Public */,
       4,    1,  135,    3, 0x0a /* Public */,
       6,    1,  138,    3, 0x0a /* Public */,
       8,    1,  141,    3, 0x0a /* Public */,
       9,    2,  144,    3, 0x0a /* Public */,
      11,    1,  149,    3, 0x0a /* Public */,
      12,    1,  152,    3, 0x0a /* Public */,
      13,    2,  155,    3, 0x0a /* Public */,
      14,    1,  160,    3, 0x0a /* Public */,
      15,    1,  163,    3, 0x0a /* Public */,
      16,    1,  166,    3, 0x0a /* Public */,
      17,    1,  169,    3, 0x0a /* Public */,
      18,    1,  172,    3, 0x0a /* Public */,
      19,    1,  175,    3, 0x0a /* Public */,
      20,    2,  178,    3, 0x0a /* Public */,
      21,    3,  183,    3, 0x0a /* Public */,
      24,    2,  190,    3, 0x0a /* Public */,
      26,    3,  195,    3, 0x0a /* Public */,
      27,    2,  202,    3, 0x0a /* Public */,
      28,    2,  207,    3, 0x0a /* Public */,
      30,    2,  212,    3, 0x0a /* Public */,
      32,    2,  217,    3, 0x0a /* Public */,
      31,    1,  222,    3, 0x0a /* Public */,
      34,    1,  225,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QVariant, 0x80000000 | 2,    7,
    QMetaType::QByteArray, 0x80000000 | 2, QMetaType::QString,    7,   10,
    QMetaType::QStringList, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   10,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::QVariant, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    7,   10,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 22,    7,   10,   23,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant,    7,   25,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QByteArray,    7,   10,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    7,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant,    7,   29,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    7,   31,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 33,    7,   34,
    QMetaType::QString, 0x80000000 | 2,    7,
    0x80000000 | 33, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMimeData *_t = static_cast<PythonQtWrapper_QMimeData *>(_o);
        switch (_id) {
        case 0: { QMimeData* _r = _t->new_QMimeData();
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMimeData((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 2: _t->clear((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 3: { QVariant _r = _t->colorData((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 4: { QByteArray _r = _t->data((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->formats((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->hasColor((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->hasFormat((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->hasHtml((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasImage((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasText((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->hasUrls((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->html((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->imageData((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: _t->removeFormat((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: { QVariant _r = _t->retrieveData((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVariant::Type(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 16: _t->setColorData((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 17: _t->setData((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 18: _t->setHtml((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->setImageData((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 20: _t->setText((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: _t->setUrls((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2]))); break;
        case 22: { QString _r = _t->text((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QList<QUrl> _r = _t->urls((*reinterpret_cast< QMimeData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QMimeData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMimeData.data,
      qt_meta_data_PythonQtWrapper_QMimeData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMimeData.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMimeData*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMimeDatabase_t {
    QByteArrayData data[31];
    char stringdata[423];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMimeDatabase_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMimeDatabase_t qt_meta_stringdata_PythonQtWrapper_QMimeDatabase = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QMimeDatabase"
QT_MOC_LITERAL(1, 30, 17), // "new_QMimeDatabase"
QT_MOC_LITERAL(2, 48, 14), // "QMimeDatabase*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 20), // "delete_QMimeDatabase"
QT_MOC_LITERAL(5, 85, 3), // "obj"
QT_MOC_LITERAL(6, 89, 12), // "allMimeTypes"
QT_MOC_LITERAL(7, 102, 16), // "QList<QMimeType>"
QT_MOC_LITERAL(8, 119, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 136, 15), // "mimeTypeForData"
QT_MOC_LITERAL(10, 152, 9), // "QMimeType"
QT_MOC_LITERAL(11, 162, 10), // "QIODevice*"
QT_MOC_LITERAL(12, 173, 6), // "device"
QT_MOC_LITERAL(13, 180, 4), // "data"
QT_MOC_LITERAL(14, 185, 15), // "mimeTypeForFile"
QT_MOC_LITERAL(15, 201, 9), // "QFileInfo"
QT_MOC_LITERAL(16, 211, 8), // "fileInfo"
QT_MOC_LITERAL(17, 220, 24), // "QMimeDatabase::MatchMode"
QT_MOC_LITERAL(18, 245, 4), // "mode"
QT_MOC_LITERAL(19, 250, 8), // "fileName"
QT_MOC_LITERAL(20, 259, 26), // "mimeTypeForFileNameAndData"
QT_MOC_LITERAL(21, 286, 15), // "mimeTypeForName"
QT_MOC_LITERAL(22, 302, 11), // "nameOrAlias"
QT_MOC_LITERAL(23, 314, 14), // "mimeTypeForUrl"
QT_MOC_LITERAL(24, 329, 3), // "url"
QT_MOC_LITERAL(25, 333, 20), // "mimeTypesForFileName"
QT_MOC_LITERAL(26, 354, 17), // "suffixForFileName"
QT_MOC_LITERAL(27, 372, 9), // "MatchMode"
QT_MOC_LITERAL(28, 382, 12), // "MatchDefault"
QT_MOC_LITERAL(29, 395, 14), // "MatchExtension"
QT_MOC_LITERAL(30, 410, 12) // "MatchContent"

    },
    "PythonQtWrapper_QMimeDatabase\0"
    "new_QMimeDatabase\0QMimeDatabase*\0\0"
    "delete_QMimeDatabase\0obj\0allMimeTypes\0"
    "QList<QMimeType>\0theWrappedObject\0"
    "mimeTypeForData\0QMimeType\0QIODevice*\0"
    "device\0data\0mimeTypeForFile\0QFileInfo\0"
    "fileInfo\0QMimeDatabase::MatchMode\0"
    "mode\0fileName\0mimeTypeForFileNameAndData\0"
    "mimeTypeForName\0nameOrAlias\0mimeTypeForUrl\0"
    "url\0mimeTypesForFileName\0suffixForFileName\0"
    "MatchMode\0MatchDefault\0MatchExtension\0"
    "MatchContent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMimeDatabase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       1,  164, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    3, 0x0a /* Public */,
       4,    1,   90,    3, 0x0a /* Public */,
       6,    1,   93,    3, 0x0a /* Public */,
       9,    2,   96,    3, 0x0a /* Public */,
       9,    2,  101,    3, 0x0a /* Public */,
      14,    3,  106,    3, 0x0a /* Public */,
      14,    2,  113,    3, 0x2a /* Public | MethodCloned */,
      14,    3,  118,    3, 0x0a /* Public */,
      14,    2,  125,    3, 0x2a /* Public | MethodCloned */,
      20,    3,  130,    3, 0x0a /* Public */,
      20,    3,  137,    3, 0x0a /* Public */,
      21,    2,  144,    3, 0x0a /* Public */,
      23,    2,  149,    3, 0x0a /* Public */,
      25,    2,  154,    3, 0x0a /* Public */,
      26,    2,  159,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2,    8,
    0x80000000 | 10, 0x80000000 | 2, 0x80000000 | 11,    8,   12,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::QByteArray,    8,   13,
    0x80000000 | 10, 0x80000000 | 2, 0x80000000 | 15, 0x80000000 | 17,    8,   16,   18,
    0x80000000 | 10, 0x80000000 | 2, 0x80000000 | 15,    8,   16,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 17,    8,   19,   18,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::QString,    8,   19,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 11,    8,   19,   12,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::QString, QMetaType::QByteArray,    8,   19,   13,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::QString,    8,   22,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::QUrl,    8,   24,
    0x80000000 | 7, 0x80000000 | 2, QMetaType::QString,    8,   19,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString,    8,   19,

 // enums: name, flags, count, data
      27, 0x0,    3,  168,

 // enum data: key, value
      28, uint(PythonQtWrapper_QMimeDatabase::MatchDefault),
      29, uint(PythonQtWrapper_QMimeDatabase::MatchExtension),
      30, uint(PythonQtWrapper_QMimeDatabase::MatchContent),

       0        // eod
};

void PythonQtWrapper_QMimeDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMimeDatabase *_t = static_cast<PythonQtWrapper_QMimeDatabase *>(_o);
        switch (_id) {
        case 0: { QMimeDatabase* _r = _t->new_QMimeDatabase();
            if (_a[0]) *reinterpret_cast< QMimeDatabase**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMimeDatabase((*reinterpret_cast< QMimeDatabase*(*)>(_a[1]))); break;
        case 2: { QList<QMimeType> _r = _t->allMimeTypes((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QMimeType>*>(_a[0]) = _r; }  break;
        case 3: { QMimeType _r = _t->mimeTypeForData((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 4: { QMimeType _r = _t->mimeTypeForData((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 5: { QMimeType _r = _t->mimeTypeForFile((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])),(*reinterpret_cast< QMimeDatabase::MatchMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 6: { QMimeType _r = _t->mimeTypeForFile((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 7: { QMimeType _r = _t->mimeTypeForFile((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QMimeDatabase::MatchMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 8: { QMimeType _r = _t->mimeTypeForFile((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 9: { QMimeType _r = _t->mimeTypeForFileNameAndData((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 10: { QMimeType _r = _t->mimeTypeForFileNameAndData((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 11: { QMimeType _r = _t->mimeTypeForName((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 12: { QMimeType _r = _t->mimeTypeForUrl((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeType*>(_a[0]) = _r; }  break;
        case 13: { QList<QMimeType> _r = _t->mimeTypesForFileName((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QMimeType>*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->suffixForFileName((*reinterpret_cast< QMimeDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileInfo >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QFileInfo >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QMimeDatabase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMimeDatabase.data,
      qt_meta_data_PythonQtWrapper_QMimeDatabase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMimeDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMimeDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMimeDatabase.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMimeDatabase*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMimeDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMimeType_t {
    QByteArrayData data[30];
    char stringdata[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMimeType_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMimeType_t qt_meta_stringdata_PythonQtWrapper_QMimeType = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QMimeType"
QT_MOC_LITERAL(1, 26, 13), // "new_QMimeType"
QT_MOC_LITERAL(2, 40, 10), // "QMimeType*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 9), // "QMimeType"
QT_MOC_LITERAL(5, 62, 5), // "other"
QT_MOC_LITERAL(6, 68, 16), // "delete_QMimeType"
QT_MOC_LITERAL(7, 85, 3), // "obj"
QT_MOC_LITERAL(8, 89, 7), // "aliases"
QT_MOC_LITERAL(9, 97, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 114, 12), // "allAncestors"
QT_MOC_LITERAL(11, 127, 7), // "comment"
QT_MOC_LITERAL(12, 135, 12), // "filterString"
QT_MOC_LITERAL(13, 148, 15), // "genericIconName"
QT_MOC_LITERAL(14, 164, 12), // "globPatterns"
QT_MOC_LITERAL(15, 177, 8), // "iconName"
QT_MOC_LITERAL(16, 186, 8), // "inherits"
QT_MOC_LITERAL(17, 195, 12), // "mimeTypeName"
QT_MOC_LITERAL(18, 208, 9), // "isDefault"
QT_MOC_LITERAL(19, 218, 7), // "isValid"
QT_MOC_LITERAL(20, 226, 4), // "name"
QT_MOC_LITERAL(21, 231, 6), // "__ne__"
QT_MOC_LITERAL(22, 238, 15), // "operator_assign"
QT_MOC_LITERAL(23, 254, 6), // "__eq__"
QT_MOC_LITERAL(24, 261, 15), // "parentMimeTypes"
QT_MOC_LITERAL(25, 277, 15), // "preferredSuffix"
QT_MOC_LITERAL(26, 293, 8), // "suffixes"
QT_MOC_LITERAL(27, 302, 4), // "swap"
QT_MOC_LITERAL(28, 307, 10), // "QMimeType&"
QT_MOC_LITERAL(29, 318, 11) // "py_toString"

    },
    "PythonQtWrapper_QMimeType\0new_QMimeType\0"
    "QMimeType*\0\0QMimeType\0other\0"
    "delete_QMimeType\0obj\0aliases\0"
    "theWrappedObject\0allAncestors\0comment\0"
    "filterString\0genericIconName\0globPatterns\0"
    "iconName\0inherits\0mimeTypeName\0isDefault\0"
    "isValid\0name\0__ne__\0operator_assign\0"
    "__eq__\0parentMimeTypes\0preferredSuffix\0"
    "suffixes\0swap\0QMimeType&\0py_toString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMimeType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  124,    3, 0x0a /* Public */,
       1,    1,  125,    3, 0x0a /* Public */,
       6,    1,  128,    3, 0x0a /* Public */,
       8,    1,  131,    3, 0x0a /* Public */,
      10,    1,  134,    3, 0x0a /* Public */,
      11,    1,  137,    3, 0x0a /* Public */,
      12,    1,  140,    3, 0x0a /* Public */,
      13,    1,  143,    3, 0x0a /* Public */,
      14,    1,  146,    3, 0x0a /* Public */,
      15,    1,  149,    3, 0x0a /* Public */,
      16,    2,  152,    3, 0x0a /* Public */,
      18,    1,  157,    3, 0x0a /* Public */,
      19,    1,  160,    3, 0x0a /* Public */,
      20,    1,  163,    3, 0x0a /* Public */,
      21,    2,  166,    3, 0x0a /* Public */,
      22,    2,  171,    3, 0x0a /* Public */,
      23,    2,  176,    3, 0x0a /* Public */,
      24,    1,  181,    3, 0x0a /* Public */,
      25,    1,  184,    3, 0x0a /* Public */,
      26,    1,  187,    3, 0x0a /* Public */,
      27,    2,  190,    3, 0x0a /* Public */,
      29,    1,  195,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QStringList, 0x80000000 | 2,    9,
    QMetaType::QStringList, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QStringList, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   17,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::QStringList, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QStringList, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 28,    9,    5,
    QMetaType::QString, 0x80000000 | 2,    3,

       0        // eod
};

void PythonQtWrapper_QMimeType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMimeType *_t = static_cast<PythonQtWrapper_QMimeType *>(_o);
        switch (_id) {
        case 0: { QMimeType* _r = _t->new_QMimeType();
            if (_a[0]) *reinterpret_cast< QMimeType**>(_a[0]) = _r; }  break;
        case 1: { QMimeType* _r = _t->new_QMimeType((*reinterpret_cast< const QMimeType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMimeType**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QMimeType((*reinterpret_cast< QMimeType*(*)>(_a[1]))); break;
        case 3: { QStringList _r = _t->aliases((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 4: { QStringList _r = _t->allAncestors((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->comment((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->filterString((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->genericIconName((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QStringList _r = _t->globPatterns((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->iconName((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->inherits((*reinterpret_cast< QMimeType*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isDefault((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isValid((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->name((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__ne__((*reinterpret_cast< QMimeType*(*)>(_a[1])),(*reinterpret_cast< const QMimeType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QMimeType* _r = _t->operator_assign((*reinterpret_cast< QMimeType*(*)>(_a[1])),(*reinterpret_cast< const QMimeType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeType**>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->__eq__((*reinterpret_cast< QMimeType*(*)>(_a[1])),(*reinterpret_cast< const QMimeType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QStringList _r = _t->parentMimeTypes((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->preferredSuffix((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QStringList _r = _t->suffixes((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 20: _t->swap((*reinterpret_cast< QMimeType*(*)>(_a[1])),(*reinterpret_cast< QMimeType(*)>(_a[2]))); break;
        case 21: { QString _r = _t->py_toString((*reinterpret_cast< QMimeType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMimeType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMimeType.data,
      qt_meta_data_PythonQtWrapper_QMimeType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMimeType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMimeType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMimeType.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMimeType*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMimeType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QModelIndex_t {
    QByteArrayData data[27];
    char stringdata[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QModelIndex_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QModelIndex_t qt_meta_stringdata_PythonQtWrapper_QModelIndex = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QModelIndex"
QT_MOC_LITERAL(1, 28, 15), // "new_QModelIndex"
QT_MOC_LITERAL(2, 44, 12), // "QModelIndex*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 5), // "other"
QT_MOC_LITERAL(5, 64, 18), // "delete_QModelIndex"
QT_MOC_LITERAL(6, 83, 3), // "obj"
QT_MOC_LITERAL(7, 87, 5), // "child"
QT_MOC_LITERAL(8, 93, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 110, 3), // "row"
QT_MOC_LITERAL(10, 114, 6), // "column"
QT_MOC_LITERAL(11, 121, 4), // "data"
QT_MOC_LITERAL(12, 126, 4), // "role"
QT_MOC_LITERAL(13, 131, 5), // "flags"
QT_MOC_LITERAL(14, 137, 13), // "Qt::ItemFlags"
QT_MOC_LITERAL(15, 151, 10), // "internalId"
QT_MOC_LITERAL(16, 162, 8), // "quintptr"
QT_MOC_LITERAL(17, 171, 15), // "internalPointer"
QT_MOC_LITERAL(18, 187, 7), // "isValid"
QT_MOC_LITERAL(19, 195, 5), // "model"
QT_MOC_LITERAL(20, 201, 25), // "const QAbstractItemModel*"
QT_MOC_LITERAL(21, 227, 6), // "__ne__"
QT_MOC_LITERAL(22, 234, 6), // "__lt__"
QT_MOC_LITERAL(23, 241, 6), // "__eq__"
QT_MOC_LITERAL(24, 248, 6), // "parent"
QT_MOC_LITERAL(25, 255, 7), // "sibling"
QT_MOC_LITERAL(26, 263, 11) // "py_toString"

    },
    "PythonQtWrapper_QModelIndex\0new_QModelIndex\0"
    "QModelIndex*\0\0other\0delete_QModelIndex\0"
    "obj\0child\0theWrappedObject\0row\0column\0"
    "data\0role\0flags\0Qt::ItemFlags\0internalId\0"
    "quintptr\0internalPointer\0isValid\0model\0"
    "const QAbstractItemModel*\0__ne__\0"
    "__lt__\0__eq__\0parent\0sibling\0py_toString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QModelIndex[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    3, 0x0a /* Public */,
       1,    1,  110,    3, 0x0a /* Public */,
       5,    1,  113,    3, 0x0a /* Public */,
       7,    3,  116,    3, 0x0a /* Public */,
      10,    1,  123,    3, 0x0a /* Public */,
      11,    2,  126,    3, 0x0a /* Public */,
      11,    1,  131,    3, 0x2a /* Public | MethodCloned */,
      13,    1,  134,    3, 0x0a /* Public */,
      15,    1,  137,    3, 0x0a /* Public */,
      17,    1,  140,    3, 0x0a /* Public */,
      18,    1,  143,    3, 0x0a /* Public */,
      19,    1,  146,    3, 0x0a /* Public */,
      21,    2,  149,    3, 0x0a /* Public */,
      22,    2,  154,    3, 0x0a /* Public */,
      23,    2,  159,    3, 0x0a /* Public */,
      24,    1,  164,    3, 0x0a /* Public */,
       9,    1,  167,    3, 0x0a /* Public */,
      25,    3,  170,    3, 0x0a /* Public */,
      26,    1,  177,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QModelIndex,    4,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int,    8,   12,
    QMetaType::QVariant, 0x80000000 | 2,    8,
    0x80000000 | 14, 0x80000000 | 2,    8,
    0x80000000 | 16, 0x80000000 | 2,    8,
    QMetaType::VoidStar, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    0x80000000 | 20, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::QModelIndex, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,    9,   10,
    QMetaType::QString, 0x80000000 | 2,    3,

       0        // eod
};

void PythonQtWrapper_QModelIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QModelIndex *_t = static_cast<PythonQtWrapper_QModelIndex *>(_o);
        switch (_id) {
        case 0: { QModelIndex* _r = _t->new_QModelIndex();
            if (_a[0]) *reinterpret_cast< QModelIndex**>(_a[0]) = _r; }  break;
        case 1: { QModelIndex* _r = _t->new_QModelIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QModelIndex((*reinterpret_cast< QModelIndex*(*)>(_a[1]))); break;
        case 3: { QModelIndex _r = _t->child((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->column((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QVariant _r = _t->data((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->data((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 8: { quintptr _r = _t->internalId((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quintptr*>(_a[0]) = _r; }  break;
        case 9: { void* _r = _t->internalPointer((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isValid((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { const QAbstractItemModel* _r = _t->model((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractItemModel**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__ne__((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__lt__((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__eq__((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QModelIndex _r = _t->parent((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->row((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { QModelIndex _r = _t->sibling((*reinterpret_cast< QModelIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->py_toString((*reinterpret_cast< QModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QModelIndex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QModelIndex.data,
      qt_meta_data_PythonQtWrapper_QModelIndex,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QModelIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QModelIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QModelIndex.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QModelIndex*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QModelIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMutex_t {
    QByteArrayData data[16];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMutex_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMutex_t qt_meta_stringdata_PythonQtWrapper_QMutex = {
    {
QT_MOC_LITERAL(0, 0, 22), // "PythonQtWrapper_QMutex"
QT_MOC_LITERAL(1, 23, 10), // "new_QMutex"
QT_MOC_LITERAL(2, 34, 7), // "QMutex*"
QT_MOC_LITERAL(3, 42, 0), // ""
QT_MOC_LITERAL(4, 43, 21), // "QMutex::RecursionMode"
QT_MOC_LITERAL(5, 65, 4), // "mode"
QT_MOC_LITERAL(6, 70, 13), // "delete_QMutex"
QT_MOC_LITERAL(7, 84, 3), // "obj"
QT_MOC_LITERAL(8, 88, 4), // "lock"
QT_MOC_LITERAL(9, 93, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 110, 7), // "tryLock"
QT_MOC_LITERAL(11, 118, 7), // "timeout"
QT_MOC_LITERAL(12, 126, 6), // "unlock"
QT_MOC_LITERAL(13, 133, 13), // "RecursionMode"
QT_MOC_LITERAL(14, 147, 12), // "NonRecursive"
QT_MOC_LITERAL(15, 160, 9) // "Recursive"

    },
    "PythonQtWrapper_QMutex\0new_QMutex\0"
    "QMutex*\0\0QMutex::RecursionMode\0mode\0"
    "delete_QMutex\0obj\0lock\0theWrappedObject\0"
    "tryLock\0timeout\0unlock\0RecursionMode\0"
    "NonRecursive\0Recursive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMutex[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    3, 0x0a /* Public */,
       1,    0,   52,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   53,    3, 0x0a /* Public */,
       8,    1,   56,    3, 0x0a /* Public */,
      10,    2,   59,    3, 0x0a /* Public */,
      10,    1,   64,    3, 0x2a /* Public | MethodCloned */,
      12,    1,   67,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    9,   11,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,

 // enums: name, flags, count, data
      13, 0x0,    2,   74,

 // enum data: key, value
      14, uint(PythonQtWrapper_QMutex::NonRecursive),
      15, uint(PythonQtWrapper_QMutex::Recursive),

       0        // eod
};

void PythonQtWrapper_QMutex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMutex *_t = static_cast<PythonQtWrapper_QMutex *>(_o);
        switch (_id) {
        case 0: { QMutex* _r = _t->new_QMutex((*reinterpret_cast< QMutex::RecursionMode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMutex**>(_a[0]) = _r; }  break;
        case 1: { QMutex* _r = _t->new_QMutex();
            if (_a[0]) *reinterpret_cast< QMutex**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QMutex((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        case 3: _t->lock((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->tryLock((*reinterpret_cast< QMutex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->tryLock((*reinterpret_cast< QMutex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->unlock((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMutex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMutex.data,
      qt_meta_data_PythonQtWrapper_QMutex,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMutex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMutex::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMutex.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMutex*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMutex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QObject_t {
    QByteArrayData data[46];
    char stringdata[534];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QObject_t qt_meta_stringdata_PythonQtWrapper_QObject = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PythonQtWrapper_QObject"
QT_MOC_LITERAL(1, 24, 11), // "new_QObject"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "parent"
QT_MOC_LITERAL(4, 44, 14), // "delete_QObject"
QT_MOC_LITERAL(5, 59, 3), // "obj"
QT_MOC_LITERAL(6, 63, 12), // "blockSignals"
QT_MOC_LITERAL(7, 76, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 93, 1), // "b"
QT_MOC_LITERAL(9, 95, 10), // "childEvent"
QT_MOC_LITERAL(10, 106, 12), // "QChildEvent*"
QT_MOC_LITERAL(11, 119, 6), // "arg__1"
QT_MOC_LITERAL(12, 126, 8), // "children"
QT_MOC_LITERAL(13, 135, 22), // "const QList<QObject*>*"
QT_MOC_LITERAL(14, 158, 11), // "customEvent"
QT_MOC_LITERAL(15, 170, 7), // "QEvent*"
QT_MOC_LITERAL(16, 178, 14), // "dumpObjectInfo"
QT_MOC_LITERAL(17, 193, 14), // "dumpObjectTree"
QT_MOC_LITERAL(18, 208, 20), // "dynamicPropertyNames"
QT_MOC_LITERAL(19, 229, 5), // "event"
QT_MOC_LITERAL(20, 235, 11), // "eventFilter"
QT_MOC_LITERAL(21, 247, 6), // "arg__2"
QT_MOC_LITERAL(22, 254, 18), // "installEventFilter"
QT_MOC_LITERAL(23, 273, 17), // "isSignalConnected"
QT_MOC_LITERAL(24, 291, 11), // "QMetaMethod"
QT_MOC_LITERAL(25, 303, 6), // "signal"
QT_MOC_LITERAL(26, 310, 12), // "isWidgetType"
QT_MOC_LITERAL(27, 323, 12), // "isWindowType"
QT_MOC_LITERAL(28, 336, 9), // "killTimer"
QT_MOC_LITERAL(29, 346, 2), // "id"
QT_MOC_LITERAL(30, 349, 12), // "moveToThread"
QT_MOC_LITERAL(31, 362, 8), // "QThread*"
QT_MOC_LITERAL(32, 371, 6), // "thread"
QT_MOC_LITERAL(33, 378, 10), // "objectName"
QT_MOC_LITERAL(34, 389, 17), // "removeEventFilter"
QT_MOC_LITERAL(35, 407, 6), // "sender"
QT_MOC_LITERAL(36, 414, 17), // "senderSignalIndex"
QT_MOC_LITERAL(37, 432, 13), // "setObjectName"
QT_MOC_LITERAL(38, 446, 4), // "name"
QT_MOC_LITERAL(39, 451, 14), // "signalsBlocked"
QT_MOC_LITERAL(40, 466, 10), // "startTimer"
QT_MOC_LITERAL(41, 477, 8), // "interval"
QT_MOC_LITERAL(42, 486, 13), // "Qt::TimerType"
QT_MOC_LITERAL(43, 500, 9), // "timerType"
QT_MOC_LITERAL(44, 510, 10), // "timerEvent"
QT_MOC_LITERAL(45, 521, 12) // "QTimerEvent*"

    },
    "PythonQtWrapper_QObject\0new_QObject\0"
    "\0parent\0delete_QObject\0obj\0blockSignals\0"
    "theWrappedObject\0b\0childEvent\0"
    "QChildEvent*\0arg__1\0children\0"
    "const QList<QObject*>*\0customEvent\0"
    "QEvent*\0dumpObjectInfo\0dumpObjectTree\0"
    "dynamicPropertyNames\0event\0eventFilter\0"
    "arg__2\0installEventFilter\0isSignalConnected\0"
    "QMetaMethod\0signal\0isWidgetType\0"
    "isWindowType\0killTimer\0id\0moveToThread\0"
    "QThread*\0thread\0objectName\0removeEventFilter\0"
    "sender\0senderSignalIndex\0setObjectName\0"
    "name\0signalsBlocked\0startTimer\0interval\0"
    "Qt::TimerType\0timerType\0timerEvent\0"
    "QTimerEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  154,    2, 0x0a /* Public */,
       1,    0,  157,    2, 0x2a /* Public | MethodCloned */,
       4,    1,  158,    2, 0x0a /* Public */,
       6,    2,  161,    2, 0x0a /* Public */,
       9,    2,  166,    2, 0x0a /* Public */,
      12,    1,  171,    2, 0x0a /* Public */,
      14,    2,  174,    2, 0x0a /* Public */,
      16,    1,  179,    2, 0x0a /* Public */,
      17,    1,  182,    2, 0x0a /* Public */,
      18,    1,  185,    2, 0x0a /* Public */,
      19,    2,  188,    2, 0x0a /* Public */,
      20,    3,  193,    2, 0x0a /* Public */,
      22,    2,  200,    2, 0x0a /* Public */,
      23,    2,  205,    2, 0x0a /* Public */,
      26,    1,  210,    2, 0x0a /* Public */,
      27,    1,  213,    2, 0x0a /* Public */,
      28,    2,  216,    2, 0x0a /* Public */,
      30,    2,  221,    2, 0x0a /* Public */,
      33,    1,  226,    2, 0x0a /* Public */,
      34,    2,  229,    2, 0x0a /* Public */,
      35,    1,  234,    2, 0x0a /* Public */,
      36,    1,  237,    2, 0x0a /* Public */,
      37,    2,  240,    2, 0x0a /* Public */,
      39,    1,  245,    2, 0x0a /* Public */,
      40,    3,  248,    2, 0x0a /* Public */,
      40,    2,  255,    2, 0x2a /* Public | MethodCloned */,
      32,    1,  260,    2, 0x0a /* Public */,
      44,    2,  263,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QObjectStar, QMetaType::QObjectStar,    3,
    QMetaType::QObjectStar,
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::Bool,    7,    8,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 10,    7,   11,
    0x80000000 | 13, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 15,    7,   11,
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::QByteArrayList, QMetaType::QObjectStar,    7,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 15,    7,   11,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::QObjectStar, 0x80000000 | 15,    7,   11,   21,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QObjectStar,    7,   11,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 24,    7,   25,
    QMetaType::Bool, QMetaType::QObjectStar,    7,
    QMetaType::Bool, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Int,    7,   29,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 31,    7,   32,
    QMetaType::QString, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QObjectStar,    7,   11,
    QMetaType::QObjectStar, QMetaType::QObjectStar,    7,
    QMetaType::Int, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString,    7,   38,
    QMetaType::Bool, QMetaType::QObjectStar,    7,
    QMetaType::Int, QMetaType::QObjectStar, QMetaType::Int, 0x80000000 | 42,    7,   41,   43,
    QMetaType::Int, QMetaType::QObjectStar, QMetaType::Int,    7,   41,
    0x80000000 | 31, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 45,    7,   11,

       0        // eod
};

void PythonQtWrapper_QObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QObject *_t = static_cast<PythonQtWrapper_QObject *>(_o);
        switch (_id) {
        case 0: { QObject* _r = _t->new_QObject((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 1: { QObject* _r = _t->new_QObject();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->blockSignals((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->childEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QChildEvent*(*)>(_a[2]))); break;
        case 5: { const QList<QObject*>* _r = _t->children((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QList<QObject*>**>(_a[0]) = _r; }  break;
        case 6: _t->customEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 7: _t->dumpObjectInfo((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->dumpObjectTree((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 9: { QList<QByteArray> _r = _t->dynamicPropertyNames((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->event((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->installEventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 13: { bool _r = _t->isSignalConnected((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QMetaMethod(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isWidgetType((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isWindowType((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->killTimer((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->moveToThread((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QThread*(*)>(_a[2]))); break;
        case 18: { QString _r = _t->objectName((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: _t->removeEventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 20: { QObject* _r = _t->sender((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->senderSignalIndex((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: _t->setObjectName((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: { bool _r = _t->signalsBlocked((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->startTimer((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::TimerType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->startTimer((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { QThread* _r = _t->thread((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QThread**>(_a[0]) = _r; }  break;
        case 27: _t->timerEvent((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QObject.data,
      qt_meta_data_PythonQtWrapper_QObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QObject.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QParallelAnimationGroup_t {
    QByteArrayData data[20];
    char stringdata[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QParallelAnimationGroup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QParallelAnimationGroup_t qt_meta_stringdata_PythonQtWrapper_QParallelAnimationGroup = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PythonQtWrapper_QParallelAnim..."
QT_MOC_LITERAL(1, 40, 27), // "new_QParallelAnimationGroup"
QT_MOC_LITERAL(2, 68, 24), // "QParallelAnimationGroup*"
QT_MOC_LITERAL(3, 93, 0), // ""
QT_MOC_LITERAL(4, 94, 6), // "parent"
QT_MOC_LITERAL(5, 101, 30), // "delete_QParallelAnimationGroup"
QT_MOC_LITERAL(6, 132, 3), // "obj"
QT_MOC_LITERAL(7, 136, 8), // "duration"
QT_MOC_LITERAL(8, 145, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 162, 5), // "event"
QT_MOC_LITERAL(10, 168, 7), // "QEvent*"
QT_MOC_LITERAL(11, 176, 17), // "updateCurrentTime"
QT_MOC_LITERAL(12, 194, 11), // "currentTime"
QT_MOC_LITERAL(13, 206, 15), // "updateDirection"
QT_MOC_LITERAL(14, 222, 29), // "QAbstractAnimation::Direction"
QT_MOC_LITERAL(15, 252, 9), // "direction"
QT_MOC_LITERAL(16, 262, 11), // "updateState"
QT_MOC_LITERAL(17, 274, 25), // "QAbstractAnimation::State"
QT_MOC_LITERAL(18, 300, 8), // "newState"
QT_MOC_LITERAL(19, 309, 8) // "oldState"

    },
    "PythonQtWrapper_QParallelAnimationGroup\0"
    "new_QParallelAnimationGroup\0"
    "QParallelAnimationGroup*\0\0parent\0"
    "delete_QParallelAnimationGroup\0obj\0"
    "duration\0theWrappedObject\0event\0QEvent*\0"
    "updateCurrentTime\0currentTime\0"
    "updateDirection\0QAbstractAnimation::Direction\0"
    "direction\0updateState\0QAbstractAnimation::State\0"
    "newState\0oldState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QParallelAnimationGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    3, 0x0a /* Public */,
       1,    0,   57,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   58,    3, 0x0a /* Public */,
       7,    1,   61,    3, 0x0a /* Public */,
       9,    2,   64,    3, 0x0a /* Public */,
      11,    2,   69,    3, 0x0a /* Public */,
      13,    2,   74,    3, 0x0a /* Public */,
      16,    3,   79,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,    8,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    8,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,    8,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17, 0x80000000 | 17,    8,   18,   19,

       0        // eod
};

void PythonQtWrapper_QParallelAnimationGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QParallelAnimationGroup *_t = static_cast<PythonQtWrapper_QParallelAnimationGroup *>(_o);
        switch (_id) {
        case 0: { QParallelAnimationGroup* _r = _t->new_QParallelAnimationGroup((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QParallelAnimationGroup**>(_a[0]) = _r; }  break;
        case 1: { QParallelAnimationGroup* _r = _t->new_QParallelAnimationGroup();
            if (_a[0]) *reinterpret_cast< QParallelAnimationGroup**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QParallelAnimationGroup((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1]))); break;
        case 3: { int _r = _t->duration((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->event((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->updateCurrentTime((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->updateDirection((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::Direction(*)>(_a[2]))); break;
        case 7: _t->updateState((*reinterpret_cast< QParallelAnimationGroup*(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QParallelAnimationGroup* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QParallelAnimationGroup* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QParallelAnimationGroup* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QParallelAnimationGroup* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QParallelAnimationGroup* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QParallelAnimationGroup* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QParallelAnimationGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QParallelAnimationGroup.data,
      qt_meta_data_PythonQtWrapper_QParallelAnimationGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QParallelAnimationGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QParallelAnimationGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QParallelAnimationGroup.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QParallelAnimationGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QParallelAnimationGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
