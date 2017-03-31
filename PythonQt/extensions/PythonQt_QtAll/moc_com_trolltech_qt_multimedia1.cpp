/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_multimedia1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generated_cpp_54/com_trolltech_qt_multimedia/com_trolltech_qt_multimedia1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_multimedia1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PythonQtWrapper_QMediaService_t {
    QByteArrayData data[14];
    char stringdata[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMediaService_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMediaService_t qt_meta_stringdata_PythonQtWrapper_QMediaService = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QMediaService"
QT_MOC_LITERAL(1, 30, 17), // "new_QMediaService"
QT_MOC_LITERAL(2, 48, 14), // "QMediaService*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 6), // "parent"
QT_MOC_LITERAL(5, 71, 20), // "delete_QMediaService"
QT_MOC_LITERAL(6, 92, 3), // "obj"
QT_MOC_LITERAL(7, 96, 14), // "releaseControl"
QT_MOC_LITERAL(8, 111, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 128, 14), // "QMediaControl*"
QT_MOC_LITERAL(10, 143, 7), // "control"
QT_MOC_LITERAL(11, 151, 14), // "requestControl"
QT_MOC_LITERAL(12, 166, 11), // "const char*"
QT_MOC_LITERAL(13, 178, 4) // "name"

    },
    "PythonQtWrapper_QMediaService\0"
    "new_QMediaService\0QMediaService*\0\0"
    "parent\0delete_QMediaService\0obj\0"
    "releaseControl\0theWrappedObject\0"
    "QMediaControl*\0control\0requestControl\0"
    "const char*\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMediaService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    3, 0x0a /* Public */,
       5,    1,   37,    3, 0x0a /* Public */,
       7,    2,   40,    3, 0x0a /* Public */,
      11,    2,   45,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9,    8,   10,
    0x80000000 | 9, 0x80000000 | 2, 0x80000000 | 12,    8,   13,

       0        // eod
};

void PythonQtWrapper_QMediaService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMediaService *_t = static_cast<PythonQtWrapper_QMediaService *>(_o);
        switch (_id) {
        case 0: { QMediaService* _r = _t->new_QMediaService((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMediaService**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QMediaService((*reinterpret_cast< QMediaService*(*)>(_a[1]))); break;
        case 2: _t->releaseControl((*reinterpret_cast< QMediaService*(*)>(_a[1])),(*reinterpret_cast< QMediaControl*(*)>(_a[2]))); break;
        case 3: { QMediaControl* _r = _t->requestControl((*reinterpret_cast< QMediaService*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaControl**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaService* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaControl* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaService* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaService* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QMediaService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMediaService.data,
      qt_meta_data_PythonQtWrapper_QMediaService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMediaService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMediaService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMediaService.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMediaService*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMediaService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMediaTimeInterval_t {
    QByteArrayData data[19];
    char stringdata[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMediaTimeInterval_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMediaTimeInterval_t qt_meta_stringdata_PythonQtWrapper_QMediaTimeInterval = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QMediaTimeInt..."
QT_MOC_LITERAL(1, 35, 22), // "new_QMediaTimeInterval"
QT_MOC_LITERAL(2, 58, 19), // "QMediaTimeInterval*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 18), // "QMediaTimeInterval"
QT_MOC_LITERAL(5, 98, 6), // "arg__1"
QT_MOC_LITERAL(6, 105, 5), // "start"
QT_MOC_LITERAL(7, 111, 3), // "end"
QT_MOC_LITERAL(8, 115, 25), // "delete_QMediaTimeInterval"
QT_MOC_LITERAL(9, 141, 3), // "obj"
QT_MOC_LITERAL(10, 145, 8), // "contains"
QT_MOC_LITERAL(11, 154, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 171, 4), // "time"
QT_MOC_LITERAL(13, 176, 8), // "isNormal"
QT_MOC_LITERAL(14, 185, 10), // "normalized"
QT_MOC_LITERAL(15, 196, 6), // "__eq__"
QT_MOC_LITERAL(16, 203, 6), // "arg__2"
QT_MOC_LITERAL(17, 210, 10), // "translated"
QT_MOC_LITERAL(18, 221, 6) // "offset"

    },
    "PythonQtWrapper_QMediaTimeInterval\0"
    "new_QMediaTimeInterval\0QMediaTimeInterval*\0"
    "\0QMediaTimeInterval\0arg__1\0start\0end\0"
    "delete_QMediaTimeInterval\0obj\0contains\0"
    "theWrappedObject\0time\0isNormal\0"
    "normalized\0__eq__\0arg__2\0translated\0"
    "offset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMediaTimeInterval[] = {

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
       1,    0,   69,    3, 0x0a /* Public */,
       1,    1,   70,    3, 0x0a /* Public */,
       1,    2,   73,    3, 0x0a /* Public */,
       8,    1,   78,    3, 0x0a /* Public */,
      10,    2,   81,    3, 0x0a /* Public */,
       7,    1,   86,    3, 0x0a /* Public */,
      13,    1,   89,    3, 0x0a /* Public */,
      14,    1,   92,    3, 0x0a /* Public */,
      15,    2,   95,    3, 0x0a /* Public */,
       6,    1,  100,    3, 0x0a /* Public */,
      17,    2,  103,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::LongLong,   11,   12,
    QMetaType::LongLong, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2,   11,
    0x80000000 | 4, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   11,   16,
    QMetaType::LongLong, 0x80000000 | 2,   11,
    0x80000000 | 4, 0x80000000 | 2, QMetaType::LongLong,   11,   18,

       0        // eod
};

void PythonQtWrapper_QMediaTimeInterval::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMediaTimeInterval *_t = static_cast<PythonQtWrapper_QMediaTimeInterval *>(_o);
        switch (_id) {
        case 0: { QMediaTimeInterval* _r = _t->new_QMediaTimeInterval();
            if (_a[0]) *reinterpret_cast< QMediaTimeInterval**>(_a[0]) = _r; }  break;
        case 1: { QMediaTimeInterval* _r = _t->new_QMediaTimeInterval((*reinterpret_cast< const QMediaTimeInterval(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMediaTimeInterval**>(_a[0]) = _r; }  break;
        case 2: { QMediaTimeInterval* _r = _t->new_QMediaTimeInterval((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeInterval**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QMediaTimeInterval((*reinterpret_cast< QMediaTimeInterval*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->contains((*reinterpret_cast< QMediaTimeInterval*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { qint64 _r = _t->end((*reinterpret_cast< QMediaTimeInterval*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isNormal((*reinterpret_cast< QMediaTimeInterval*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QMediaTimeInterval _r = _t->normalized((*reinterpret_cast< QMediaTimeInterval*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMediaTimeInterval*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__eq__((*reinterpret_cast< QMediaTimeInterval*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeInterval(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { qint64 _r = _t->start((*reinterpret_cast< QMediaTimeInterval*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 10: { QMediaTimeInterval _r = _t->translated((*reinterpret_cast< QMediaTimeInterval*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeInterval*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMediaTimeInterval::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMediaTimeInterval.data,
      qt_meta_data_PythonQtWrapper_QMediaTimeInterval,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMediaTimeInterval::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMediaTimeInterval::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMediaTimeInterval.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMediaTimeInterval*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMediaTimeInterval::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QMediaTimeRange_t {
    QByteArrayData data[35];
    char stringdata[414];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMediaTimeRange_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMediaTimeRange_t qt_meta_stringdata_PythonQtWrapper_QMediaTimeRange = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QMediaTimeRange"
QT_MOC_LITERAL(1, 32, 19), // "new_QMediaTimeRange"
QT_MOC_LITERAL(2, 52, 16), // "QMediaTimeRange*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 18), // "QMediaTimeInterval"
QT_MOC_LITERAL(5, 89, 6), // "arg__1"
QT_MOC_LITERAL(6, 96, 15), // "QMediaTimeRange"
QT_MOC_LITERAL(7, 112, 5), // "range"
QT_MOC_LITERAL(8, 118, 5), // "start"
QT_MOC_LITERAL(9, 124, 3), // "end"
QT_MOC_LITERAL(10, 128, 22), // "delete_QMediaTimeRange"
QT_MOC_LITERAL(11, 151, 3), // "obj"
QT_MOC_LITERAL(12, 155, 11), // "addInterval"
QT_MOC_LITERAL(13, 167, 16), // "theWrappedObject"
QT_MOC_LITERAL(14, 184, 8), // "interval"
QT_MOC_LITERAL(15, 193, 12), // "addTimeRange"
QT_MOC_LITERAL(16, 206, 5), // "clear"
QT_MOC_LITERAL(17, 212, 8), // "contains"
QT_MOC_LITERAL(18, 221, 4), // "time"
QT_MOC_LITERAL(19, 226, 12), // "earliestTime"
QT_MOC_LITERAL(20, 239, 9), // "intervals"
QT_MOC_LITERAL(21, 249, 25), // "QList<QMediaTimeInterval>"
QT_MOC_LITERAL(22, 275, 12), // "isContinuous"
QT_MOC_LITERAL(23, 288, 7), // "isEmpty"
QT_MOC_LITERAL(24, 296, 10), // "latestTime"
QT_MOC_LITERAL(25, 307, 7), // "__add__"
QT_MOC_LITERAL(26, 315, 6), // "arg__2"
QT_MOC_LITERAL(27, 322, 8), // "__iadd__"
QT_MOC_LITERAL(28, 331, 7), // "__sub__"
QT_MOC_LITERAL(29, 339, 8), // "__isub__"
QT_MOC_LITERAL(30, 348, 15), // "operator_assign"
QT_MOC_LITERAL(31, 364, 6), // "__eq__"
QT_MOC_LITERAL(32, 371, 14), // "removeInterval"
QT_MOC_LITERAL(33, 386, 15), // "removeTimeRange"
QT_MOC_LITERAL(34, 402, 11) // "py_toString"

    },
    "PythonQtWrapper_QMediaTimeRange\0"
    "new_QMediaTimeRange\0QMediaTimeRange*\0"
    "\0QMediaTimeInterval\0arg__1\0QMediaTimeRange\0"
    "range\0start\0end\0delete_QMediaTimeRange\0"
    "obj\0addInterval\0theWrappedObject\0"
    "interval\0addTimeRange\0clear\0contains\0"
    "time\0earliestTime\0intervals\0"
    "QList<QMediaTimeInterval>\0isContinuous\0"
    "isEmpty\0latestTime\0__add__\0arg__2\0"
    "__iadd__\0__sub__\0__isub__\0operator_assign\0"
    "__eq__\0removeInterval\0removeTimeRange\0"
    "py_toString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMediaTimeRange[] = {

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
       1,    0,  154,    3, 0x0a /* Public */,
       1,    1,  155,    3, 0x0a /* Public */,
       1,    1,  158,    3, 0x0a /* Public */,
       1,    2,  161,    3, 0x0a /* Public */,
      10,    1,  166,    3, 0x0a /* Public */,
      12,    2,  169,    3, 0x0a /* Public */,
      12,    3,  174,    3, 0x0a /* Public */,
      15,    2,  181,    3, 0x0a /* Public */,
      16,    1,  186,    3, 0x0a /* Public */,
      17,    2,  189,    3, 0x0a /* Public */,
      19,    1,  194,    3, 0x0a /* Public */,
      20,    1,  197,    3, 0x0a /* Public */,
      22,    1,  200,    3, 0x0a /* Public */,
      23,    1,  203,    3, 0x0a /* Public */,
      24,    1,  206,    3, 0x0a /* Public */,
      25,    2,  209,    3, 0x0a /* Public */,
      27,    2,  214,    3, 0x0a /* Public */,
      27,    2,  219,    3, 0x0a /* Public */,
      28,    2,  224,    3, 0x0a /* Public */,
      29,    2,  229,    3, 0x0a /* Public */,
      29,    2,  234,    3, 0x0a /* Public */,
      30,    2,  239,    3, 0x0a /* Public */,
      30,    2,  244,    3, 0x0a /* Public */,
      31,    2,  249,    3, 0x0a /* Public */,
      32,    2,  254,    3, 0x0a /* Public */,
      32,    3,  259,    3, 0x0a /* Public */,
      33,    2,  266,    3, 0x0a /* Public */,
      34,    1,  271,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, QMetaType::LongLong, QMetaType::LongLong,    8,    9,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   13,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong, QMetaType::LongLong,   13,    8,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 6,   13,    5,
    QMetaType::Void, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::LongLong,   13,   18,
    QMetaType::LongLong, 0x80000000 | 2,   13,
    0x80000000 | 21, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    QMetaType::LongLong, 0x80000000 | 2,   13,
    0x80000000 | 6, 0x80000000 | 2, 0x80000000 | 6,   13,   26,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,   13,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 6,   13,    5,
    0x80000000 | 6, 0x80000000 | 2, 0x80000000 | 6,   13,   26,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,   13,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 6,   13,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,   13,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 6,   13,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 6,   13,   26,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   13,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong, QMetaType::LongLong,   13,    8,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 6,   13,    5,
    QMetaType::QString, 0x80000000 | 2,    3,

       0        // eod
};

void PythonQtWrapper_QMediaTimeRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QMediaTimeRange *_t = static_cast<PythonQtWrapper_QMediaTimeRange *>(_o);
        switch (_id) {
        case 0: { QMediaTimeRange* _r = _t->new_QMediaTimeRange();
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 1: { QMediaTimeRange* _r = _t->new_QMediaTimeRange((*reinterpret_cast< const QMediaTimeInterval(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 2: { QMediaTimeRange* _r = _t->new_QMediaTimeRange((*reinterpret_cast< const QMediaTimeRange(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 3: { QMediaTimeRange* _r = _t->new_QMediaTimeRange((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QMediaTimeRange((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1]))); break;
        case 5: _t->addInterval((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeInterval(*)>(_a[2]))); break;
        case 6: _t->addInterval((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 7: _t->addTimeRange((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeRange(*)>(_a[2]))); break;
        case 8: _t->clear((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1]))); break;
        case 9: { bool _r = _t->contains((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { qint64 _r = _t->earliestTime((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 11: { QList<QMediaTimeInterval> _r = _t->intervals((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QMediaTimeInterval>*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isContinuous((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isEmpty((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { qint64 _r = _t->latestTime((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 15: { QMediaTimeRange _r = _t->__add__((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange*>(_a[0]) = _r; }  break;
        case 16: { QMediaTimeRange* _r = _t->__iadd__((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeInterval(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 17: { QMediaTimeRange* _r = _t->__iadd__((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 18: { QMediaTimeRange _r = _t->__sub__((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange*>(_a[0]) = _r; }  break;
        case 19: { QMediaTimeRange* _r = _t->__isub__((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeInterval(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 20: { QMediaTimeRange* _r = _t->__isub__((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 21: { QMediaTimeRange* _r = _t->operator_assign((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeInterval(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 22: { QMediaTimeRange* _r = _t->operator_assign((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMediaTimeRange**>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->__eq__((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: _t->removeInterval((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeInterval(*)>(_a[2]))); break;
        case 25: _t->removeInterval((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 26: _t->removeTimeRange((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])),(*reinterpret_cast< const QMediaTimeRange(*)>(_a[2]))); break;
        case 27: { QString _r = _t->py_toString((*reinterpret_cast< QMediaTimeRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QMediaTimeRange::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMediaTimeRange.data,
      qt_meta_data_PythonQtWrapper_QMediaTimeRange,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMediaTimeRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMediaTimeRange::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMediaTimeRange.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMediaTimeRange*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMediaTimeRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QMultimedia_t {
    QByteArrayData data[22];
    char stringdata[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QMultimedia_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QMultimedia_t qt_meta_stringdata_PythonQtWrapper_QMultimedia = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QMultimedia"
QT_MOC_LITERAL(1, 28, 18), // "AvailabilityStatus"
QT_MOC_LITERAL(2, 47, 9), // "Available"
QT_MOC_LITERAL(3, 57, 14), // "ServiceMissing"
QT_MOC_LITERAL(4, 72, 4), // "Busy"
QT_MOC_LITERAL(5, 77, 13), // "ResourceError"
QT_MOC_LITERAL(6, 91, 12), // "EncodingMode"
QT_MOC_LITERAL(7, 104, 23), // "ConstantQualityEncoding"
QT_MOC_LITERAL(8, 128, 23), // "ConstantBitRateEncoding"
QT_MOC_LITERAL(9, 152, 22), // "AverageBitRateEncoding"
QT_MOC_LITERAL(10, 175, 15), // "TwoPassEncoding"
QT_MOC_LITERAL(11, 191, 15), // "EncodingQuality"
QT_MOC_LITERAL(12, 207, 14), // "VeryLowQuality"
QT_MOC_LITERAL(13, 222, 10), // "LowQuality"
QT_MOC_LITERAL(14, 233, 13), // "NormalQuality"
QT_MOC_LITERAL(15, 247, 11), // "HighQuality"
QT_MOC_LITERAL(16, 259, 15), // "VeryHighQuality"
QT_MOC_LITERAL(17, 275, 15), // "SupportEstimate"
QT_MOC_LITERAL(18, 291, 12), // "NotSupported"
QT_MOC_LITERAL(19, 304, 14), // "MaybeSupported"
QT_MOC_LITERAL(20, 319, 17), // "ProbablySupported"
QT_MOC_LITERAL(21, 337, 16) // "PreferredService"

    },
    "PythonQtWrapper_QMultimedia\0"
    "AvailabilityStatus\0Available\0"
    "ServiceMissing\0Busy\0ResourceError\0"
    "EncodingMode\0ConstantQualityEncoding\0"
    "ConstantBitRateEncoding\0AverageBitRateEncoding\0"
    "TwoPassEncoding\0EncodingQuality\0"
    "VeryLowQuality\0LowQuality\0NormalQuality\0"
    "HighQuality\0VeryHighQuality\0SupportEstimate\0"
    "NotSupported\0MaybeSupported\0"
    "ProbablySupported\0PreferredService"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QMultimedia[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       4,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    4,   30,
       6, 0x0,    4,   38,
      11, 0x0,    5,   46,
      17, 0x0,    4,   56,

 // enum data: key, value
       2, uint(PythonQtWrapper_QMultimedia::Available),
       3, uint(PythonQtWrapper_QMultimedia::ServiceMissing),
       4, uint(PythonQtWrapper_QMultimedia::Busy),
       5, uint(PythonQtWrapper_QMultimedia::ResourceError),
       7, uint(PythonQtWrapper_QMultimedia::ConstantQualityEncoding),
       8, uint(PythonQtWrapper_QMultimedia::ConstantBitRateEncoding),
       9, uint(PythonQtWrapper_QMultimedia::AverageBitRateEncoding),
      10, uint(PythonQtWrapper_QMultimedia::TwoPassEncoding),
      12, uint(PythonQtWrapper_QMultimedia::VeryLowQuality),
      13, uint(PythonQtWrapper_QMultimedia::LowQuality),
      14, uint(PythonQtWrapper_QMultimedia::NormalQuality),
      15, uint(PythonQtWrapper_QMultimedia::HighQuality),
      16, uint(PythonQtWrapper_QMultimedia::VeryHighQuality),
      18, uint(PythonQtWrapper_QMultimedia::NotSupported),
      19, uint(PythonQtWrapper_QMultimedia::MaybeSupported),
      20, uint(PythonQtWrapper_QMultimedia::ProbablySupported),
      21, uint(PythonQtWrapper_QMultimedia::PreferredService),

       0        // eod
};

void PythonQtWrapper_QMultimedia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PythonQtWrapper_QMultimedia::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QMultimedia.data,
      qt_meta_data_PythonQtWrapper_QMultimedia,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QMultimedia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QMultimedia::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QMultimedia.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QMultimedia*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QMultimedia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QRadioData_t {
    QByteArrayData data[24];
    char stringdata[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QRadioData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QRadioData_t qt_meta_stringdata_PythonQtWrapper_QRadioData = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QRadioData"
QT_MOC_LITERAL(1, 27, 14), // "new_QRadioData"
QT_MOC_LITERAL(2, 42, 11), // "QRadioData*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 13), // "QMediaObject*"
QT_MOC_LITERAL(5, 69, 11), // "mediaObject"
QT_MOC_LITERAL(6, 81, 6), // "parent"
QT_MOC_LITERAL(7, 88, 17), // "delete_QRadioData"
QT_MOC_LITERAL(8, 106, 3), // "obj"
QT_MOC_LITERAL(9, 110, 12), // "availability"
QT_MOC_LITERAL(10, 123, 31), // "QMultimedia::AvailabilityStatus"
QT_MOC_LITERAL(11, 155, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 172, 5), // "error"
QT_MOC_LITERAL(13, 178, 17), // "QRadioData::Error"
QT_MOC_LITERAL(14, 196, 11), // "errorString"
QT_MOC_LITERAL(15, 208, 31), // "isAlternativeFrequenciesEnabled"
QT_MOC_LITERAL(16, 240, 11), // "programType"
QT_MOC_LITERAL(17, 252, 23), // "QRadioData::ProgramType"
QT_MOC_LITERAL(18, 276, 15), // "programTypeName"
QT_MOC_LITERAL(19, 292, 9), // "radioText"
QT_MOC_LITERAL(20, 302, 14), // "setMediaObject"
QT_MOC_LITERAL(21, 317, 6), // "arg__1"
QT_MOC_LITERAL(22, 324, 9), // "stationId"
QT_MOC_LITERAL(23, 334, 11) // "stationName"

    },
    "PythonQtWrapper_QRadioData\0new_QRadioData\0"
    "QRadioData*\0\0QMediaObject*\0mediaObject\0"
    "parent\0delete_QRadioData\0obj\0availability\0"
    "QMultimedia::AvailabilityStatus\0"
    "theWrappedObject\0error\0QRadioData::Error\0"
    "errorString\0isAlternativeFrequenciesEnabled\0"
    "programType\0QRadioData::ProgramType\0"
    "programTypeName\0radioText\0setMediaObject\0"
    "arg__1\0stationId\0stationName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QRadioData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   84,    3, 0x0a /* Public */,
       1,    1,   89,    3, 0x2a /* Public | MethodCloned */,
       7,    1,   92,    3, 0x0a /* Public */,
       9,    1,   95,    3, 0x0a /* Public */,
      12,    1,   98,    3, 0x0a /* Public */,
      14,    1,  101,    3, 0x0a /* Public */,
      15,    1,  104,    3, 0x0a /* Public */,
       5,    1,  107,    3, 0x0a /* Public */,
      16,    1,  110,    3, 0x0a /* Public */,
      18,    1,  113,    3, 0x0a /* Public */,
      19,    1,  116,    3, 0x0a /* Public */,
      20,    2,  119,    3, 0x0a /* Public */,
      22,    1,  124,    3, 0x0a /* Public */,
      23,    1,  127,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QObjectStar,    5,    6,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    8,
    0x80000000 | 10, 0x80000000 | 2,   11,
    0x80000000 | 13, 0x80000000 | 2,   11,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2,   11,
    0x80000000 | 4, 0x80000000 | 2,   11,
    0x80000000 | 17, 0x80000000 | 2,   11,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   11,   21,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::QString, 0x80000000 | 2,   11,

       0        // eod
};

void PythonQtWrapper_QRadioData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QRadioData *_t = static_cast<PythonQtWrapper_QRadioData *>(_o);
        switch (_id) {
        case 0: { QRadioData* _r = _t->new_QRadioData((*reinterpret_cast< QMediaObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRadioData**>(_a[0]) = _r; }  break;
        case 1: { QRadioData* _r = _t->new_QRadioData((*reinterpret_cast< QMediaObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioData**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QRadioData((*reinterpret_cast< QRadioData*(*)>(_a[1]))); break;
        case 3: { QMultimedia::AvailabilityStatus _r = _t->availability((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMultimedia::AvailabilityStatus*>(_a[0]) = _r; }  break;
        case 4: { QRadioData::Error _r = _t->error((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioData::Error*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->errorString((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isAlternativeFrequenciesEnabled((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QMediaObject* _r = _t->mediaObject((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMediaObject**>(_a[0]) = _r; }  break;
        case 8: { QRadioData::ProgramType _r = _t->programType((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioData::ProgramType*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->programTypeName((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->radioText((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->setMediaObject((*reinterpret_cast< QRadioData*(*)>(_a[1])),(*reinterpret_cast< QMediaObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->stationId((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->stationName((*reinterpret_cast< QRadioData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaObject* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaObject* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaObject* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioData* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QRadioData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QRadioData.data,
      qt_meta_data_PythonQtWrapper_QRadioData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QRadioData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QRadioData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QRadioData.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QRadioData*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QRadioData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PythonQtWrapper_QRadioTuner_t {
    QByteArrayData data[35];
    char stringdata[453];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QRadioTuner_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QRadioTuner_t qt_meta_stringdata_PythonQtWrapper_QRadioTuner = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QRadioTuner"
QT_MOC_LITERAL(1, 28, 15), // "new_QRadioTuner"
QT_MOC_LITERAL(2, 44, 12), // "QRadioTuner*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 6), // "parent"
QT_MOC_LITERAL(5, 65, 18), // "delete_QRadioTuner"
QT_MOC_LITERAL(6, 84, 3), // "obj"
QT_MOC_LITERAL(7, 88, 12), // "availability"
QT_MOC_LITERAL(8, 101, 31), // "QMultimedia::AvailabilityStatus"
QT_MOC_LITERAL(9, 133, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 150, 4), // "band"
QT_MOC_LITERAL(11, 155, 17), // "QRadioTuner::Band"
QT_MOC_LITERAL(12, 173, 5), // "error"
QT_MOC_LITERAL(13, 179, 18), // "QRadioTuner::Error"
QT_MOC_LITERAL(14, 198, 11), // "errorString"
QT_MOC_LITERAL(15, 210, 9), // "frequency"
QT_MOC_LITERAL(16, 220, 14), // "frequencyRange"
QT_MOC_LITERAL(17, 235, 14), // "QPair<int,int>"
QT_MOC_LITERAL(18, 250, 13), // "frequencyStep"
QT_MOC_LITERAL(19, 264, 18), // "isAntennaConnected"
QT_MOC_LITERAL(20, 283, 15), // "isBandSupported"
QT_MOC_LITERAL(21, 299, 1), // "b"
QT_MOC_LITERAL(22, 301, 7), // "isMuted"
QT_MOC_LITERAL(23, 309, 11), // "isSearching"
QT_MOC_LITERAL(24, 321, 8), // "isStereo"
QT_MOC_LITERAL(25, 330, 9), // "radioData"
QT_MOC_LITERAL(26, 340, 11), // "QRadioData*"
QT_MOC_LITERAL(27, 352, 13), // "setStereoMode"
QT_MOC_LITERAL(28, 366, 23), // "QRadioTuner::StereoMode"
QT_MOC_LITERAL(29, 390, 4), // "mode"
QT_MOC_LITERAL(30, 395, 14), // "signalStrength"
QT_MOC_LITERAL(31, 410, 5), // "state"
QT_MOC_LITERAL(32, 416, 18), // "QRadioTuner::State"
QT_MOC_LITERAL(33, 435, 10), // "stereoMode"
QT_MOC_LITERAL(34, 446, 6) // "volume"

    },
    "PythonQtWrapper_QRadioTuner\0new_QRadioTuner\0"
    "QRadioTuner*\0\0parent\0delete_QRadioTuner\0"
    "obj\0availability\0QMultimedia::AvailabilityStatus\0"
    "theWrappedObject\0band\0QRadioTuner::Band\0"
    "error\0QRadioTuner::Error\0errorString\0"
    "frequency\0frequencyRange\0QPair<int,int>\0"
    "frequencyStep\0isAntennaConnected\0"
    "isBandSupported\0b\0isMuted\0isSearching\0"
    "isStereo\0radioData\0QRadioData*\0"
    "setStereoMode\0QRadioTuner::StereoMode\0"
    "mode\0signalStrength\0state\0QRadioTuner::State\0"
    "stereoMode\0volume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QRadioTuner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  119,    3, 0x0a /* Public */,
       1,    0,  122,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  123,    3, 0x0a /* Public */,
       7,    1,  126,    3, 0x0a /* Public */,
      10,    1,  129,    3, 0x0a /* Public */,
      12,    1,  132,    3, 0x0a /* Public */,
      14,    1,  135,    3, 0x0a /* Public */,
      15,    1,  138,    3, 0x0a /* Public */,
      16,    2,  141,    3, 0x0a /* Public */,
      18,    2,  146,    3, 0x0a /* Public */,
      19,    1,  151,    3, 0x0a /* Public */,
      20,    2,  154,    3, 0x0a /* Public */,
      22,    1,  159,    3, 0x0a /* Public */,
      23,    1,  162,    3, 0x0a /* Public */,
      24,    1,  165,    3, 0x0a /* Public */,
      25,    1,  168,    3, 0x0a /* Public */,
      27,    2,  171,    3, 0x0a /* Public */,
      30,    1,  176,    3, 0x0a /* Public */,
      31,    1,  179,    3, 0x0a /* Public */,
      33,    1,  182,    3, 0x0a /* Public */,
      34,    1,  185,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    0x80000000 | 8, 0x80000000 | 2,    9,
    0x80000000 | 11, 0x80000000 | 2,    9,
    0x80000000 | 13, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 17, 0x80000000 | 2, 0x80000000 | 11,    9,   10,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 11,    9,   10,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 11,    9,   21,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    0x80000000 | 26, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 28,    9,   29,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 32, 0x80000000 | 2,    9,
    0x80000000 | 28, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QRadioTuner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QRadioTuner *_t = static_cast<PythonQtWrapper_QRadioTuner *>(_o);
        switch (_id) {
        case 0: { QRadioTuner* _r = _t->new_QRadioTuner((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioTuner**>(_a[0]) = _r; }  break;
        case 1: { QRadioTuner* _r = _t->new_QRadioTuner();
            if (_a[0]) *reinterpret_cast< QRadioTuner**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QRadioTuner((*reinterpret_cast< QRadioTuner*(*)>(_a[1]))); break;
        case 3: { QMultimedia::AvailabilityStatus _r = _t->availability((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMultimedia::AvailabilityStatus*>(_a[0]) = _r; }  break;
        case 4: { QRadioTuner::Band _r = _t->band((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioTuner::Band*>(_a[0]) = _r; }  break;
        case 5: { QRadioTuner::Error _r = _t->error((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioTuner::Error*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->errorString((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->frequency((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QPair<int,int> _r = _t->frequencyRange((*reinterpret_cast< QRadioTuner*(*)>(_a[1])),(*reinterpret_cast< QRadioTuner::Band(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPair<int,int>*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->frequencyStep((*reinterpret_cast< QRadioTuner*(*)>(_a[1])),(*reinterpret_cast< QRadioTuner::Band(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isAntennaConnected((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isBandSupported((*reinterpret_cast< QRadioTuner*(*)>(_a[1])),(*reinterpret_cast< QRadioTuner::Band(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isMuted((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isSearching((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isStereo((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QRadioData* _r = _t->radioData((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioData**>(_a[0]) = _r; }  break;
        case 16: _t->setStereoMode((*reinterpret_cast< QRadioTuner*(*)>(_a[1])),(*reinterpret_cast< QRadioTuner::StereoMode(*)>(_a[2]))); break;
        case 17: { int _r = _t->signalStrength((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { QRadioTuner::State _r = _t->state((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioTuner::State*>(_a[0]) = _r; }  break;
        case 19: { QRadioTuner::StereoMode _r = _t->stereoMode((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRadioTuner::StereoMode*>(_a[0]) = _r; }  break;
        case 20: { int _r = _t->volume((*reinterpret_cast< QRadioTuner*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::Band >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::Band >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::Band >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner::StereoMode >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRadioTuner* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QRadioTuner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QRadioTuner.data,
      qt_meta_data_PythonQtWrapper_QRadioTuner,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QRadioTuner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QRadioTuner::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QRadioTuner.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QRadioTuner*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QRadioTuner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSoundEffect_t {
    QByteArrayData data[33];
    char stringdata[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSoundEffect_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSoundEffect_t qt_meta_stringdata_PythonQtWrapper_QSoundEffect = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QSoundEffect"
QT_MOC_LITERAL(1, 29, 16), // "new_QSoundEffect"
QT_MOC_LITERAL(2, 46, 13), // "QSoundEffect*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 6), // "parent"
QT_MOC_LITERAL(5, 68, 19), // "delete_QSoundEffect"
QT_MOC_LITERAL(6, 88, 3), // "obj"
QT_MOC_LITERAL(7, 92, 8), // "category"
QT_MOC_LITERAL(8, 101, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 118, 8), // "isLoaded"
QT_MOC_LITERAL(10, 127, 7), // "isMuted"
QT_MOC_LITERAL(11, 135, 9), // "isPlaying"
QT_MOC_LITERAL(12, 145, 9), // "loopCount"
QT_MOC_LITERAL(13, 155, 14), // "loopsRemaining"
QT_MOC_LITERAL(14, 170, 11), // "setCategory"
QT_MOC_LITERAL(15, 182, 12), // "setLoopCount"
QT_MOC_LITERAL(16, 195, 8), // "setMuted"
QT_MOC_LITERAL(17, 204, 5), // "muted"
QT_MOC_LITERAL(18, 210, 9), // "setSource"
QT_MOC_LITERAL(19, 220, 3), // "url"
QT_MOC_LITERAL(20, 224, 9), // "setVolume"
QT_MOC_LITERAL(21, 234, 6), // "volume"
QT_MOC_LITERAL(22, 241, 6), // "source"
QT_MOC_LITERAL(23, 248, 6), // "status"
QT_MOC_LITERAL(24, 255, 20), // "QSoundEffect::Status"
QT_MOC_LITERAL(25, 276, 38), // "static_QSoundEffect_supported..."
QT_MOC_LITERAL(26, 315, 4), // "Loop"
QT_MOC_LITERAL(27, 320, 8), // "Infinite"
QT_MOC_LITERAL(28, 329, 6), // "Status"
QT_MOC_LITERAL(29, 336, 4), // "Null"
QT_MOC_LITERAL(30, 341, 7), // "Loading"
QT_MOC_LITERAL(31, 349, 5), // "Ready"
QT_MOC_LITERAL(32, 355, 5) // "Error"

    },
    "PythonQtWrapper_QSoundEffect\0"
    "new_QSoundEffect\0QSoundEffect*\0\0parent\0"
    "delete_QSoundEffect\0obj\0category\0"
    "theWrappedObject\0isLoaded\0isMuted\0"
    "isPlaying\0loopCount\0loopsRemaining\0"
    "setCategory\0setLoopCount\0setMuted\0"
    "muted\0setSource\0url\0setVolume\0volume\0"
    "source\0status\0QSoundEffect::Status\0"
    "static_QSoundEffect_supportedMimeTypes\0"
    "Loop\0Infinite\0Status\0Null\0Loading\0"
    "Ready\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSoundEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       2,  164, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  104,    3, 0x0a /* Public */,
       1,    0,  107,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  108,    3, 0x0a /* Public */,
       7,    1,  111,    3, 0x0a /* Public */,
       9,    1,  114,    3, 0x0a /* Public */,
      10,    1,  117,    3, 0x0a /* Public */,
      11,    1,  120,    3, 0x0a /* Public */,
      12,    1,  123,    3, 0x0a /* Public */,
      13,    1,  126,    3, 0x0a /* Public */,
      14,    2,  129,    3, 0x0a /* Public */,
      15,    2,  134,    3, 0x0a /* Public */,
      16,    2,  139,    3, 0x0a /* Public */,
      18,    2,  144,    3, 0x0a /* Public */,
      20,    2,  149,    3, 0x0a /* Public */,
      22,    1,  154,    3, 0x0a /* Public */,
      23,    1,  157,    3, 0x0a /* Public */,
      25,    0,  160,    3, 0x0a /* Public */,
      21,    1,  161,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::QString, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    8,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    8,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    8,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,    8,   19,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,    8,   21,
    QMetaType::QUrl, 0x80000000 | 2,    8,
    0x80000000 | 24, 0x80000000 | 2,    8,
    QMetaType::QStringList,
    QMetaType::QReal, 0x80000000 | 2,    8,

 // enums: name, flags, count, data
      26, 0x0,    1,  172,
      28, 0x0,    4,  174,

 // enum data: key, value
      27, uint(PythonQtWrapper_QSoundEffect::Infinite),
      29, uint(PythonQtWrapper_QSoundEffect::Null),
      30, uint(PythonQtWrapper_QSoundEffect::Loading),
      31, uint(PythonQtWrapper_QSoundEffect::Ready),
      32, uint(PythonQtWrapper_QSoundEffect::Error),

       0        // eod
};

void PythonQtWrapper_QSoundEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSoundEffect *_t = static_cast<PythonQtWrapper_QSoundEffect *>(_o);
        switch (_id) {
        case 0: { QSoundEffect* _r = _t->new_QSoundEffect((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSoundEffect**>(_a[0]) = _r; }  break;
        case 1: { QSoundEffect* _r = _t->new_QSoundEffect();
            if (_a[0]) *reinterpret_cast< QSoundEffect**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSoundEffect((*reinterpret_cast< QSoundEffect*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->category((*reinterpret_cast< QSoundEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isLoaded((*reinterpret_cast< QSoundEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isMuted((*reinterpret_cast< QSoundEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isPlaying((*reinterpret_cast< QSoundEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->loopCount((*reinterpret_cast< QSoundEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->loopsRemaining((*reinterpret_cast< QSoundEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->setCategory((*reinterpret_cast< QSoundEffect*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->setLoopCount((*reinterpret_cast< QSoundEffect*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->setMuted((*reinterpret_cast< QSoundEffect*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->setSource((*reinterpret_cast< QSoundEffect*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 13: _t->setVolume((*reinterpret_cast< QSoundEffect*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 14: { QUrl _r = _t->source((*reinterpret_cast< QSoundEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 15: { QSoundEffect::Status _r = _t->status((*reinterpret_cast< QSoundEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSoundEffect::Status*>(_a[0]) = _r; }  break;
        case 16: { QStringList _r = _t->static_QSoundEffect_supportedMimeTypes();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 17: { qreal _r = _t->volume((*reinterpret_cast< QSoundEffect*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSoundEffect* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSoundEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSoundEffect.data,
      qt_meta_data_PythonQtWrapper_QSoundEffect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSoundEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSoundEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSoundEffect.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSoundEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSoundEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QVideoEncoderSettings_t {
    QByteArrayData data[40];
    char stringdata[522];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QVideoEncoderSettings_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QVideoEncoderSettings_t qt_meta_stringdata_PythonQtWrapper_QVideoEncoderSettings = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_QVideoEncoder..."
QT_MOC_LITERAL(1, 38, 25), // "new_QVideoEncoderSettings"
QT_MOC_LITERAL(2, 64, 22), // "QVideoEncoderSettings*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 21), // "QVideoEncoderSettings"
QT_MOC_LITERAL(5, 110, 5), // "other"
QT_MOC_LITERAL(6, 116, 28), // "delete_QVideoEncoderSettings"
QT_MOC_LITERAL(7, 145, 3), // "obj"
QT_MOC_LITERAL(8, 149, 7), // "bitRate"
QT_MOC_LITERAL(9, 157, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 174, 5), // "codec"
QT_MOC_LITERAL(11, 180, 12), // "encodingMode"
QT_MOC_LITERAL(12, 193, 25), // "QMultimedia::EncodingMode"
QT_MOC_LITERAL(13, 219, 14), // "encodingOption"
QT_MOC_LITERAL(14, 234, 6), // "option"
QT_MOC_LITERAL(15, 241, 15), // "encodingOptions"
QT_MOC_LITERAL(16, 257, 9), // "frameRate"
QT_MOC_LITERAL(17, 267, 6), // "isNull"
QT_MOC_LITERAL(18, 274, 6), // "__ne__"
QT_MOC_LITERAL(19, 281, 15), // "operator_assign"
QT_MOC_LITERAL(20, 297, 6), // "__eq__"
QT_MOC_LITERAL(21, 304, 7), // "quality"
QT_MOC_LITERAL(22, 312, 28), // "QMultimedia::EncodingQuality"
QT_MOC_LITERAL(23, 341, 10), // "resolution"
QT_MOC_LITERAL(24, 352, 10), // "setBitRate"
QT_MOC_LITERAL(25, 363, 7), // "bitrate"
QT_MOC_LITERAL(26, 371, 8), // "setCodec"
QT_MOC_LITERAL(27, 380, 6), // "arg__1"
QT_MOC_LITERAL(28, 387, 15), // "setEncodingMode"
QT_MOC_LITERAL(29, 403, 17), // "setEncodingOption"
QT_MOC_LITERAL(30, 421, 5), // "value"
QT_MOC_LITERAL(31, 427, 18), // "setEncodingOptions"
QT_MOC_LITERAL(32, 446, 7), // "options"
QT_MOC_LITERAL(33, 454, 12), // "setFrameRate"
QT_MOC_LITERAL(34, 467, 4), // "rate"
QT_MOC_LITERAL(35, 472, 10), // "setQuality"
QT_MOC_LITERAL(36, 483, 13), // "setResolution"
QT_MOC_LITERAL(37, 497, 5), // "width"
QT_MOC_LITERAL(38, 503, 6), // "height"
QT_MOC_LITERAL(39, 510, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QVideoEncoderSettings\0"
    "new_QVideoEncoderSettings\0"
    "QVideoEncoderSettings*\0\0QVideoEncoderSettings\0"
    "other\0delete_QVideoEncoderSettings\0"
    "obj\0bitRate\0theWrappedObject\0codec\0"
    "encodingMode\0QMultimedia::EncodingMode\0"
    "encodingOption\0option\0encodingOptions\0"
    "frameRate\0isNull\0__ne__\0operator_assign\0"
    "__eq__\0quality\0QMultimedia::EncodingQuality\0"
    "resolution\0setBitRate\0bitrate\0setCodec\0"
    "arg__1\0setEncodingMode\0setEncodingOption\0"
    "value\0setEncodingOptions\0options\0"
    "setFrameRate\0rate\0setQuality\0setResolution\0"
    "width\0height\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QVideoEncoderSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  139,    3, 0x0a /* Public */,
       1,    1,  140,    3, 0x0a /* Public */,
       6,    1,  143,    3, 0x0a /* Public */,
       8,    1,  146,    3, 0x0a /* Public */,
      10,    1,  149,    3, 0x0a /* Public */,
      11,    1,  152,    3, 0x0a /* Public */,
      13,    2,  155,    3, 0x0a /* Public */,
      15,    1,  160,    3, 0x0a /* Public */,
      16,    1,  163,    3, 0x0a /* Public */,
      17,    1,  166,    3, 0x0a /* Public */,
      18,    2,  169,    3, 0x0a /* Public */,
      19,    2,  174,    3, 0x0a /* Public */,
      20,    2,  179,    3, 0x0a /* Public */,
      21,    1,  184,    3, 0x0a /* Public */,
      23,    1,  187,    3, 0x0a /* Public */,
      24,    2,  190,    3, 0x0a /* Public */,
      26,    2,  195,    3, 0x0a /* Public */,
      28,    2,  200,    3, 0x0a /* Public */,
      29,    3,  205,    3, 0x0a /* Public */,
      31,    2,  212,    3, 0x0a /* Public */,
      33,    2,  217,    3, 0x0a /* Public */,
      35,    2,  222,    3, 0x0a /* Public */,
      36,    2,  227,    3, 0x0a /* Public */,
      36,    3,  232,    3, 0x0a /* Public */,
      39,    1,  239,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    0x80000000 | 12, 0x80000000 | 2,    9,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QString,    9,   14,
    QMetaType::QVariantMap, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    0x80000000 | 22, 0x80000000 | 2,    9,
    QMetaType::QSize, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   25,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   27,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,    9,   27,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QVariant,    9,   14,   30,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariantMap,    9,   32,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,    9,   34,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,    9,   21,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QSize,    9,   27,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   37,   38,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QVideoEncoderSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QVideoEncoderSettings *_t = static_cast<PythonQtWrapper_QVideoEncoderSettings *>(_o);
        switch (_id) {
        case 0: { QVideoEncoderSettings* _r = _t->new_QVideoEncoderSettings();
            if (_a[0]) *reinterpret_cast< QVideoEncoderSettings**>(_a[0]) = _r; }  break;
        case 1: { QVideoEncoderSettings* _r = _t->new_QVideoEncoderSettings((*reinterpret_cast< const QVideoEncoderSettings(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoEncoderSettings**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QVideoEncoderSettings((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1]))); break;
        case 3: { int _r = _t->bitRate((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->codec((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QMultimedia::EncodingMode _r = _t->encodingMode((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMultimedia::EncodingMode*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->encodingOption((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { QMap<QString,QVariant> _r = _t->encodingOptions((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<QString,QVariant>*>(_a[0]) = _r; }  break;
        case 8: { qreal _r = _t->frameRate((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isNull((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__ne__((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< const QVideoEncoderSettings(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QVideoEncoderSettings* _r = _t->operator_assign((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< const QVideoEncoderSettings(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVideoEncoderSettings**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__eq__((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< const QVideoEncoderSettings(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QMultimedia::EncodingQuality _r = _t->quality((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMultimedia::EncodingQuality*>(_a[0]) = _r; }  break;
        case 14: { QSize _r = _t->resolution((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 15: _t->setBitRate((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->setCodec((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->setEncodingMode((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< QMultimedia::EncodingMode(*)>(_a[2]))); break;
        case 18: _t->setEncodingOption((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 19: _t->setEncodingOptions((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< const QMap<QString,QVariant>(*)>(_a[2]))); break;
        case 20: _t->setFrameRate((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 21: _t->setQuality((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< QMultimedia::EncodingQuality(*)>(_a[2]))); break;
        case 22: _t->setResolution((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 23: _t->setResolution((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 24: { bool _r = _t->__nonzero__((*reinterpret_cast< QVideoEncoderSettings*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoEncoderSettings >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoEncoderSettings >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoEncoderSettings >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoEncoderSettings >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMultimedia::EncodingMode >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMultimedia::EncodingQuality >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QVideoEncoderSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVideoEncoderSettings.data,
      qt_meta_data_PythonQtWrapper_QVideoEncoderSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QVideoEncoderSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QVideoEncoderSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVideoEncoderSettings.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVideoEncoderSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVideoEncoderSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QVideoFrame_t {
    QByteArrayData data[97];
    char stringdata[1315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QVideoFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QVideoFrame_t qt_meta_stringdata_PythonQtWrapper_QVideoFrame = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QVideoFrame"
QT_MOC_LITERAL(1, 28, 15), // "new_QVideoFrame"
QT_MOC_LITERAL(2, 44, 12), // "QVideoFrame*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 21), // "QAbstractVideoBuffer*"
QT_MOC_LITERAL(5, 80, 6), // "buffer"
QT_MOC_LITERAL(6, 87, 4), // "size"
QT_MOC_LITERAL(7, 92, 24), // "QVideoFrame::PixelFormat"
QT_MOC_LITERAL(8, 117, 6), // "format"
QT_MOC_LITERAL(9, 124, 5), // "image"
QT_MOC_LITERAL(10, 130, 11), // "QVideoFrame"
QT_MOC_LITERAL(11, 142, 5), // "other"
QT_MOC_LITERAL(12, 148, 5), // "bytes"
QT_MOC_LITERAL(13, 154, 12), // "bytesPerLine"
QT_MOC_LITERAL(14, 167, 18), // "delete_QVideoFrame"
QT_MOC_LITERAL(15, 186, 3), // "obj"
QT_MOC_LITERAL(16, 190, 17), // "availableMetaData"
QT_MOC_LITERAL(17, 208, 16), // "theWrappedObject"
QT_MOC_LITERAL(18, 225, 4), // "bits"
QT_MOC_LITERAL(19, 230, 6), // "uchar*"
QT_MOC_LITERAL(20, 237, 12), // "const uchar*"
QT_MOC_LITERAL(21, 250, 5), // "plane"
QT_MOC_LITERAL(22, 256, 7), // "endTime"
QT_MOC_LITERAL(23, 264, 9), // "fieldType"
QT_MOC_LITERAL(24, 274, 22), // "QVideoFrame::FieldType"
QT_MOC_LITERAL(25, 297, 6), // "handle"
QT_MOC_LITERAL(26, 304, 10), // "handleType"
QT_MOC_LITERAL(27, 315, 32), // "QAbstractVideoBuffer::HandleType"
QT_MOC_LITERAL(28, 348, 6), // "height"
QT_MOC_LITERAL(29, 355, 45), // "static_QVideoFrame_imageForma..."
QT_MOC_LITERAL(30, 401, 14), // "QImage::Format"
QT_MOC_LITERAL(31, 416, 8), // "isMapped"
QT_MOC_LITERAL(32, 425, 10), // "isReadable"
QT_MOC_LITERAL(33, 436, 7), // "isValid"
QT_MOC_LITERAL(34, 444, 10), // "isWritable"
QT_MOC_LITERAL(35, 455, 3), // "map"
QT_MOC_LITERAL(36, 459, 29), // "QAbstractVideoBuffer::MapMode"
QT_MOC_LITERAL(37, 489, 4), // "mode"
QT_MOC_LITERAL(38, 494, 7), // "mapMode"
QT_MOC_LITERAL(39, 502, 11), // "mappedBytes"
QT_MOC_LITERAL(40, 514, 8), // "metaData"
QT_MOC_LITERAL(41, 523, 3), // "key"
QT_MOC_LITERAL(42, 527, 15), // "operator_assign"
QT_MOC_LITERAL(43, 543, 11), // "pixelFormat"
QT_MOC_LITERAL(44, 555, 45), // "static_QVideoFrame_pixelForma..."
QT_MOC_LITERAL(45, 601, 10), // "planeCount"
QT_MOC_LITERAL(46, 612, 10), // "setEndTime"
QT_MOC_LITERAL(47, 623, 4), // "time"
QT_MOC_LITERAL(48, 628, 12), // "setFieldType"
QT_MOC_LITERAL(49, 641, 6), // "arg__1"
QT_MOC_LITERAL(50, 648, 11), // "setMetaData"
QT_MOC_LITERAL(51, 660, 5), // "value"
QT_MOC_LITERAL(52, 666, 12), // "setStartTime"
QT_MOC_LITERAL(53, 679, 9), // "startTime"
QT_MOC_LITERAL(54, 689, 5), // "unmap"
QT_MOC_LITERAL(55, 695, 5), // "width"
QT_MOC_LITERAL(56, 701, 11), // "py_toString"
QT_MOC_LITERAL(57, 713, 9), // "FieldType"
QT_MOC_LITERAL(58, 723, 16), // "ProgressiveFrame"
QT_MOC_LITERAL(59, 740, 8), // "TopField"
QT_MOC_LITERAL(60, 749, 11), // "BottomField"
QT_MOC_LITERAL(61, 761, 15), // "InterlacedFrame"
QT_MOC_LITERAL(62, 777, 11), // "PixelFormat"
QT_MOC_LITERAL(63, 789, 14), // "Format_Invalid"
QT_MOC_LITERAL(64, 804, 13), // "Format_ARGB32"
QT_MOC_LITERAL(65, 818, 27), // "Format_ARGB32_Premultiplied"
QT_MOC_LITERAL(66, 846, 12), // "Format_RGB32"
QT_MOC_LITERAL(67, 859, 12), // "Format_RGB24"
QT_MOC_LITERAL(68, 872, 13), // "Format_RGB565"
QT_MOC_LITERAL(69, 886, 13), // "Format_RGB555"
QT_MOC_LITERAL(70, 900, 29), // "Format_ARGB8565_Premultiplied"
QT_MOC_LITERAL(71, 930, 13), // "Format_BGRA32"
QT_MOC_LITERAL(72, 944, 27), // "Format_BGRA32_Premultiplied"
QT_MOC_LITERAL(73, 972, 12), // "Format_BGR32"
QT_MOC_LITERAL(74, 985, 12), // "Format_BGR24"
QT_MOC_LITERAL(75, 998, 13), // "Format_BGR565"
QT_MOC_LITERAL(76, 1012, 13), // "Format_BGR555"
QT_MOC_LITERAL(77, 1026, 29), // "Format_BGRA5658_Premultiplied"
QT_MOC_LITERAL(78, 1056, 14), // "Format_AYUV444"
QT_MOC_LITERAL(79, 1071, 28), // "Format_AYUV444_Premultiplied"
QT_MOC_LITERAL(80, 1100, 13), // "Format_YUV444"
QT_MOC_LITERAL(81, 1114, 14), // "Format_YUV420P"
QT_MOC_LITERAL(82, 1129, 11), // "Format_YV12"
QT_MOC_LITERAL(83, 1141, 11), // "Format_UYVY"
QT_MOC_LITERAL(84, 1153, 11), // "Format_YUYV"
QT_MOC_LITERAL(85, 1165, 11), // "Format_NV12"
QT_MOC_LITERAL(86, 1177, 11), // "Format_NV21"
QT_MOC_LITERAL(87, 1189, 11), // "Format_IMC1"
QT_MOC_LITERAL(88, 1201, 11), // "Format_IMC2"
QT_MOC_LITERAL(89, 1213, 11), // "Format_IMC3"
QT_MOC_LITERAL(90, 1225, 11), // "Format_IMC4"
QT_MOC_LITERAL(91, 1237, 9), // "Format_Y8"
QT_MOC_LITERAL(92, 1247, 10), // "Format_Y16"
QT_MOC_LITERAL(93, 1258, 11), // "Format_Jpeg"
QT_MOC_LITERAL(94, 1270, 16), // "Format_CameraRaw"
QT_MOC_LITERAL(95, 1287, 15), // "Format_AdobeDng"
QT_MOC_LITERAL(96, 1303, 11) // "Format_User"

    },
    "PythonQtWrapper_QVideoFrame\0new_QVideoFrame\0"
    "QVideoFrame*\0\0QAbstractVideoBuffer*\0"
    "buffer\0size\0QVideoFrame::PixelFormat\0"
    "format\0image\0QVideoFrame\0other\0bytes\0"
    "bytesPerLine\0delete_QVideoFrame\0obj\0"
    "availableMetaData\0theWrappedObject\0"
    "bits\0uchar*\0const uchar*\0plane\0endTime\0"
    "fieldType\0QVideoFrame::FieldType\0"
    "handle\0handleType\0QAbstractVideoBuffer::HandleType\0"
    "height\0static_QVideoFrame_imageFormatFromPixelFormat\0"
    "QImage::Format\0isMapped\0isReadable\0"
    "isValid\0isWritable\0map\0"
    "QAbstractVideoBuffer::MapMode\0mode\0"
    "mapMode\0mappedBytes\0metaData\0key\0"
    "operator_assign\0pixelFormat\0"
    "static_QVideoFrame_pixelFormatFromImageFormat\0"
    "planeCount\0setEndTime\0time\0setFieldType\0"
    "arg__1\0setMetaData\0value\0setStartTime\0"
    "startTime\0unmap\0width\0py_toString\0"
    "FieldType\0ProgressiveFrame\0TopField\0"
    "BottomField\0InterlacedFrame\0PixelFormat\0"
    "Format_Invalid\0Format_ARGB32\0"
    "Format_ARGB32_Premultiplied\0Format_RGB32\0"
    "Format_RGB24\0Format_RGB565\0Format_RGB555\0"
    "Format_ARGB8565_Premultiplied\0"
    "Format_BGRA32\0Format_BGRA32_Premultiplied\0"
    "Format_BGR32\0Format_BGR24\0Format_BGR565\0"
    "Format_BGR555\0Format_BGRA5658_Premultiplied\0"
    "Format_AYUV444\0Format_AYUV444_Premultiplied\0"
    "Format_YUV444\0Format_YUV420P\0Format_YV12\0"
    "Format_UYVY\0Format_YUYV\0Format_NV12\0"
    "Format_NV21\0Format_IMC1\0Format_IMC2\0"
    "Format_IMC3\0Format_IMC4\0Format_Y8\0"
    "Format_Y16\0Format_Jpeg\0Format_CameraRaw\0"
    "Format_AdobeDng\0Format_User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QVideoFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       2,  364, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  214,    3, 0x0a /* Public */,
       1,    3,  215,    3, 0x0a /* Public */,
       1,    1,  222,    3, 0x0a /* Public */,
       1,    1,  225,    3, 0x0a /* Public */,
       1,    4,  228,    3, 0x0a /* Public */,
      14,    1,  237,    3, 0x0a /* Public */,
      16,    1,  240,    3, 0x0a /* Public */,
      18,    1,  243,    3, 0x0a /* Public */,
      18,    1,  246,    3, 0x0a /* Public */,
      18,    2,  249,    3, 0x0a /* Public */,
      18,    2,  254,    3, 0x0a /* Public */,
      13,    1,  259,    3, 0x0a /* Public */,
      13,    2,  262,    3, 0x0a /* Public */,
      22,    1,  267,    3, 0x0a /* Public */,
      23,    1,  270,    3, 0x0a /* Public */,
      25,    1,  273,    3, 0x0a /* Public */,
      26,    1,  276,    3, 0x0a /* Public */,
      28,    1,  279,    3, 0x0a /* Public */,
      29,    1,  282,    3, 0x0a /* Public */,
      31,    1,  285,    3, 0x0a /* Public */,
      32,    1,  288,    3, 0x0a /* Public */,
      33,    1,  291,    3, 0x0a /* Public */,
      34,    1,  294,    3, 0x0a /* Public */,
      35,    2,  297,    3, 0x0a /* Public */,
      38,    1,  302,    3, 0x0a /* Public */,
      39,    1,  305,    3, 0x0a /* Public */,
      40,    2,  308,    3, 0x0a /* Public */,
      42,    2,  313,    3, 0x0a /* Public */,
      43,    1,  318,    3, 0x0a /* Public */,
      44,    1,  321,    3, 0x0a /* Public */,
      45,    1,  324,    3, 0x0a /* Public */,
      46,    2,  327,    3, 0x0a /* Public */,
      48,    2,  332,    3, 0x0a /* Public */,
      50,    3,  337,    3, 0x0a /* Public */,
      52,    2,  344,    3, 0x0a /* Public */,
       6,    1,  349,    3, 0x0a /* Public */,
      53,    1,  352,    3, 0x0a /* Public */,
      54,    1,  355,    3, 0x0a /* Public */,
      55,    1,  358,    3, 0x0a /* Public */,
      56,    1,  361,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QSize, 0x80000000 | 7,    5,    6,    8,
    0x80000000 | 2, QMetaType::QImage,    9,
    0x80000000 | 2, 0x80000000 | 10,   11,
    0x80000000 | 2, QMetaType::Int, QMetaType::QSize, QMetaType::Int, 0x80000000 | 7,   12,    6,   13,    8,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::QVariantMap, 0x80000000 | 2,   17,
    0x80000000 | 19, 0x80000000 | 2,   17,
    0x80000000 | 20, 0x80000000 | 2,   17,
    0x80000000 | 19, 0x80000000 | 2, QMetaType::Int,   17,   21,
    0x80000000 | 20, 0x80000000 | 2, QMetaType::Int,   17,   21,
    QMetaType::Int, 0x80000000 | 2,   17,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,   17,   21,
    QMetaType::LongLong, 0x80000000 | 2,   17,
    0x80000000 | 24, 0x80000000 | 2,   17,
    QMetaType::QVariant, 0x80000000 | 2,   17,
    0x80000000 | 27, 0x80000000 | 2,   17,
    QMetaType::Int, 0x80000000 | 2,   17,
    0x80000000 | 30, 0x80000000 | 7,    8,
    QMetaType::Bool, 0x80000000 | 2,   17,
    QMetaType::Bool, 0x80000000 | 2,   17,
    QMetaType::Bool, 0x80000000 | 2,   17,
    QMetaType::Bool, 0x80000000 | 2,   17,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 36,   17,   37,
    0x80000000 | 36, 0x80000000 | 2,   17,
    QMetaType::Int, 0x80000000 | 2,   17,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QString,   17,   41,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 10,   17,   11,
    0x80000000 | 7, 0x80000000 | 2,   17,
    0x80000000 | 7, 0x80000000 | 30,    8,
    QMetaType::Int, 0x80000000 | 2,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong,   17,   47,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,   17,   49,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QVariant,   17,   41,   51,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong,   17,   47,
    QMetaType::QSize, 0x80000000 | 2,   17,
    QMetaType::LongLong, 0x80000000 | 2,   17,
    QMetaType::Void, 0x80000000 | 2,   17,
    QMetaType::Int, 0x80000000 | 2,   17,
    QMetaType::QString, 0x80000000 | 2,    3,

 // enums: name, flags, count, data
      57, 0x0,    4,  372,
      62, 0x0,   34,  380,

 // enum data: key, value
      58, uint(PythonQtWrapper_QVideoFrame::ProgressiveFrame),
      59, uint(PythonQtWrapper_QVideoFrame::TopField),
      60, uint(PythonQtWrapper_QVideoFrame::BottomField),
      61, uint(PythonQtWrapper_QVideoFrame::InterlacedFrame),
      63, uint(PythonQtWrapper_QVideoFrame::Format_Invalid),
      64, uint(PythonQtWrapper_QVideoFrame::Format_ARGB32),
      65, uint(PythonQtWrapper_QVideoFrame::Format_ARGB32_Premultiplied),
      66, uint(PythonQtWrapper_QVideoFrame::Format_RGB32),
      67, uint(PythonQtWrapper_QVideoFrame::Format_RGB24),
      68, uint(PythonQtWrapper_QVideoFrame::Format_RGB565),
      69, uint(PythonQtWrapper_QVideoFrame::Format_RGB555),
      70, uint(PythonQtWrapper_QVideoFrame::Format_ARGB8565_Premultiplied),
      71, uint(PythonQtWrapper_QVideoFrame::Format_BGRA32),
      72, uint(PythonQtWrapper_QVideoFrame::Format_BGRA32_Premultiplied),
      73, uint(PythonQtWrapper_QVideoFrame::Format_BGR32),
      74, uint(PythonQtWrapper_QVideoFrame::Format_BGR24),
      75, uint(PythonQtWrapper_QVideoFrame::Format_BGR565),
      76, uint(PythonQtWrapper_QVideoFrame::Format_BGR555),
      77, uint(PythonQtWrapper_QVideoFrame::Format_BGRA5658_Premultiplied),
      78, uint(PythonQtWrapper_QVideoFrame::Format_AYUV444),
      79, uint(PythonQtWrapper_QVideoFrame::Format_AYUV444_Premultiplied),
      80, uint(PythonQtWrapper_QVideoFrame::Format_YUV444),
      81, uint(PythonQtWrapper_QVideoFrame::Format_YUV420P),
      82, uint(PythonQtWrapper_QVideoFrame::Format_YV12),
      83, uint(PythonQtWrapper_QVideoFrame::Format_UYVY),
      84, uint(PythonQtWrapper_QVideoFrame::Format_YUYV),
      85, uint(PythonQtWrapper_QVideoFrame::Format_NV12),
      86, uint(PythonQtWrapper_QVideoFrame::Format_NV21),
      87, uint(PythonQtWrapper_QVideoFrame::Format_IMC1),
      88, uint(PythonQtWrapper_QVideoFrame::Format_IMC2),
      89, uint(PythonQtWrapper_QVideoFrame::Format_IMC3),
      90, uint(PythonQtWrapper_QVideoFrame::Format_IMC4),
      91, uint(PythonQtWrapper_QVideoFrame::Format_Y8),
      92, uint(PythonQtWrapper_QVideoFrame::Format_Y16),
      93, uint(PythonQtWrapper_QVideoFrame::Format_Jpeg),
      94, uint(PythonQtWrapper_QVideoFrame::Format_CameraRaw),
      95, uint(PythonQtWrapper_QVideoFrame::Format_AdobeDng),
      96, uint(PythonQtWrapper_QVideoFrame::Format_User),

       0        // eod
};

void PythonQtWrapper_QVideoFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QVideoFrame *_t = static_cast<PythonQtWrapper_QVideoFrame *>(_o);
        switch (_id) {
        case 0: { QVideoFrame* _r = _t->new_QVideoFrame();
            if (_a[0]) *reinterpret_cast< QVideoFrame**>(_a[0]) = _r; }  break;
        case 1: { QVideoFrame* _r = _t->new_QVideoFrame((*reinterpret_cast< QAbstractVideoBuffer*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< QVideoFrame::PixelFormat(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVideoFrame**>(_a[0]) = _r; }  break;
        case 2: { QVideoFrame* _r = _t->new_QVideoFrame((*reinterpret_cast< const QImage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoFrame**>(_a[0]) = _r; }  break;
        case 3: { QVideoFrame* _r = _t->new_QVideoFrame((*reinterpret_cast< const QVideoFrame(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoFrame**>(_a[0]) = _r; }  break;
        case 4: { QVideoFrame* _r = _t->new_QVideoFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QVideoFrame::PixelFormat(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVideoFrame**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QVideoFrame((*reinterpret_cast< QVideoFrame*(*)>(_a[1]))); break;
        case 6: { QMap<QString,QVariant> _r = _t->availableMetaData((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<QString,QVariant>*>(_a[0]) = _r; }  break;
        case 7: { uchar* _r = _t->bits((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uchar**>(_a[0]) = _r; }  break;
        case 8: { const uchar* _r = _t->bits((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const uchar**>(_a[0]) = _r; }  break;
        case 9: { uchar* _r = _t->bits((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< uchar**>(_a[0]) = _r; }  break;
        case 10: { const uchar* _r = _t->bits((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const uchar**>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->bytesPerLine((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->bytesPerLine((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { qint64 _r = _t->endTime((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 14: { QVideoFrame::FieldType _r = _t->fieldType((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoFrame::FieldType*>(_a[0]) = _r; }  break;
        case 15: { QVariant _r = _t->handle((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 16: { QAbstractVideoBuffer::HandleType _r = _t->handleType((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractVideoBuffer::HandleType*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->height((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { QImage::Format _r = _t->static_QVideoFrame_imageFormatFromPixelFormat((*reinterpret_cast< QVideoFrame::PixelFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage::Format*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isMapped((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isReadable((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isValid((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isWritable((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->map((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< QAbstractVideoBuffer::MapMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { QAbstractVideoBuffer::MapMode _r = _t->mapMode((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractVideoBuffer::MapMode*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->mappedBytes((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { QVariant _r = _t->metaData((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 27: { QVideoFrame* _r = _t->operator_assign((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< const QVideoFrame(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVideoFrame**>(_a[0]) = _r; }  break;
        case 28: { QVideoFrame::PixelFormat _r = _t->pixelFormat((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoFrame::PixelFormat*>(_a[0]) = _r; }  break;
        case 29: { QVideoFrame::PixelFormat _r = _t->static_QVideoFrame_pixelFormatFromImageFormat((*reinterpret_cast< QImage::Format(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoFrame::PixelFormat*>(_a[0]) = _r; }  break;
        case 30: { int _r = _t->planeCount((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 31: _t->setEndTime((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 32: _t->setFieldType((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< QVideoFrame::FieldType(*)>(_a[2]))); break;
        case 33: _t->setMetaData((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 34: _t->setStartTime((*reinterpret_cast< QVideoFrame*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 35: { QSize _r = _t->size((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 36: { qint64 _r = _t->startTime((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 37: _t->unmap((*reinterpret_cast< QVideoFrame*(*)>(_a[1]))); break;
        case 38: { int _r = _t->width((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: { QString _r = _t->py_toString((*reinterpret_cast< QVideoFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame::PixelFormat >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame::PixelFormat >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame::PixelFormat >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractVideoBuffer::MapMode >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame::FieldType >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QVideoFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVideoFrame.data,
      qt_meta_data_PythonQtWrapper_QVideoFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QVideoFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QVideoFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVideoFrame.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVideoFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVideoFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QVideoProbe_t {
    QByteArrayData data[13];
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QVideoProbe_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QVideoProbe_t qt_meta_stringdata_PythonQtWrapper_QVideoProbe = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QVideoProbe"
QT_MOC_LITERAL(1, 28, 15), // "new_QVideoProbe"
QT_MOC_LITERAL(2, 44, 12), // "QVideoProbe*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 6), // "parent"
QT_MOC_LITERAL(5, 65, 18), // "delete_QVideoProbe"
QT_MOC_LITERAL(6, 84, 3), // "obj"
QT_MOC_LITERAL(7, 88, 8), // "isActive"
QT_MOC_LITERAL(8, 97, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 114, 9), // "setSource"
QT_MOC_LITERAL(10, 124, 13), // "QMediaObject*"
QT_MOC_LITERAL(11, 138, 6), // "source"
QT_MOC_LITERAL(12, 145, 15) // "QMediaRecorder*"

    },
    "PythonQtWrapper_QVideoProbe\0new_QVideoProbe\0"
    "QVideoProbe*\0\0parent\0delete_QVideoProbe\0"
    "obj\0isActive\0theWrappedObject\0setSource\0"
    "QMediaObject*\0source\0QMediaRecorder*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QVideoProbe[] = {

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
       5,    1,   48,    3, 0x0a /* Public */,
       7,    1,   51,    3, 0x0a /* Public */,
       9,    2,   54,    3, 0x0a /* Public */,
       9,    2,   59,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,    8,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 12,    8,   11,

       0        // eod
};

void PythonQtWrapper_QVideoProbe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QVideoProbe *_t = static_cast<PythonQtWrapper_QVideoProbe *>(_o);
        switch (_id) {
        case 0: { QVideoProbe* _r = _t->new_QVideoProbe((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoProbe**>(_a[0]) = _r; }  break;
        case 1: { QVideoProbe* _r = _t->new_QVideoProbe();
            if (_a[0]) *reinterpret_cast< QVideoProbe**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QVideoProbe((*reinterpret_cast< QVideoProbe*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isActive((*reinterpret_cast< QVideoProbe*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->setSource((*reinterpret_cast< QVideoProbe*(*)>(_a[1])),(*reinterpret_cast< QMediaObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->setSource((*reinterpret_cast< QVideoProbe*(*)>(_a[1])),(*reinterpret_cast< QMediaRecorder*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoProbe* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoProbe* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaObject* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoProbe* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoProbe* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QVideoProbe::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVideoProbe.data,
      qt_meta_data_PythonQtWrapper_QVideoProbe,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QVideoProbe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QVideoProbe::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVideoProbe.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVideoProbe*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVideoProbe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QVideoSurfaceFormat_t {
    QByteArrayData data[59];
    char stringdata[824];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QVideoSurfaceFormat_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QVideoSurfaceFormat_t qt_meta_stringdata_PythonQtWrapper_QVideoSurfaceFormat = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_QVideoSurface..."
QT_MOC_LITERAL(1, 36, 23), // "new_QVideoSurfaceFormat"
QT_MOC_LITERAL(2, 60, 20), // "QVideoSurfaceFormat*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 4), // "size"
QT_MOC_LITERAL(5, 87, 24), // "QVideoFrame::PixelFormat"
QT_MOC_LITERAL(6, 112, 11), // "pixelFormat"
QT_MOC_LITERAL(7, 124, 32), // "QAbstractVideoBuffer::HandleType"
QT_MOC_LITERAL(8, 157, 10), // "handleType"
QT_MOC_LITERAL(9, 168, 19), // "QVideoSurfaceFormat"
QT_MOC_LITERAL(10, 188, 6), // "format"
QT_MOC_LITERAL(11, 195, 26), // "delete_QVideoSurfaceFormat"
QT_MOC_LITERAL(12, 222, 3), // "obj"
QT_MOC_LITERAL(13, 226, 11), // "frameHeight"
QT_MOC_LITERAL(14, 238, 16), // "theWrappedObject"
QT_MOC_LITERAL(15, 255, 9), // "frameRate"
QT_MOC_LITERAL(16, 265, 9), // "frameSize"
QT_MOC_LITERAL(17, 275, 10), // "frameWidth"
QT_MOC_LITERAL(18, 286, 7), // "isValid"
QT_MOC_LITERAL(19, 294, 6), // "__ne__"
QT_MOC_LITERAL(20, 301, 15), // "operator_assign"
QT_MOC_LITERAL(21, 317, 6), // "__eq__"
QT_MOC_LITERAL(22, 324, 16), // "pixelAspectRatio"
QT_MOC_LITERAL(23, 341, 8), // "property"
QT_MOC_LITERAL(24, 350, 11), // "const char*"
QT_MOC_LITERAL(25, 362, 4), // "name"
QT_MOC_LITERAL(26, 367, 13), // "propertyNames"
QT_MOC_LITERAL(27, 381, 17), // "scanLineDirection"
QT_MOC_LITERAL(28, 399, 30), // "QVideoSurfaceFormat::Direction"
QT_MOC_LITERAL(29, 430, 12), // "setFrameRate"
QT_MOC_LITERAL(30, 443, 4), // "rate"
QT_MOC_LITERAL(31, 448, 12), // "setFrameSize"
QT_MOC_LITERAL(32, 461, 5), // "width"
QT_MOC_LITERAL(33, 467, 6), // "height"
QT_MOC_LITERAL(34, 474, 19), // "setPixelAspectRatio"
QT_MOC_LITERAL(35, 494, 5), // "ratio"
QT_MOC_LITERAL(36, 500, 11), // "setProperty"
QT_MOC_LITERAL(37, 512, 5), // "value"
QT_MOC_LITERAL(38, 518, 20), // "setScanLineDirection"
QT_MOC_LITERAL(39, 539, 9), // "direction"
QT_MOC_LITERAL(40, 549, 11), // "setViewport"
QT_MOC_LITERAL(41, 561, 8), // "viewport"
QT_MOC_LITERAL(42, 570, 18), // "setYCbCrColorSpace"
QT_MOC_LITERAL(43, 589, 36), // "QVideoSurfaceFormat::YCbCrCol..."
QT_MOC_LITERAL(44, 626, 10), // "colorSpace"
QT_MOC_LITERAL(45, 637, 8), // "sizeHint"
QT_MOC_LITERAL(46, 646, 15), // "yCbCrColorSpace"
QT_MOC_LITERAL(47, 662, 11), // "py_toString"
QT_MOC_LITERAL(48, 674, 9), // "Direction"
QT_MOC_LITERAL(49, 684, 11), // "TopToBottom"
QT_MOC_LITERAL(50, 696, 11), // "BottomToTop"
QT_MOC_LITERAL(51, 708, 15), // "YCbCrColorSpace"
QT_MOC_LITERAL(52, 724, 15), // "YCbCr_Undefined"
QT_MOC_LITERAL(53, 740, 11), // "YCbCr_BT601"
QT_MOC_LITERAL(54, 752, 11), // "YCbCr_BT709"
QT_MOC_LITERAL(55, 764, 14), // "YCbCr_xvYCC601"
QT_MOC_LITERAL(56, 779, 14), // "YCbCr_xvYCC709"
QT_MOC_LITERAL(57, 794, 10), // "YCbCr_JPEG"
QT_MOC_LITERAL(58, 805, 18) // "YCbCr_CustomMatrix"

    },
    "PythonQtWrapper_QVideoSurfaceFormat\0"
    "new_QVideoSurfaceFormat\0QVideoSurfaceFormat*\0"
    "\0size\0QVideoFrame::PixelFormat\0"
    "pixelFormat\0QAbstractVideoBuffer::HandleType\0"
    "handleType\0QVideoSurfaceFormat\0format\0"
    "delete_QVideoSurfaceFormat\0obj\0"
    "frameHeight\0theWrappedObject\0frameRate\0"
    "frameSize\0frameWidth\0isValid\0__ne__\0"
    "operator_assign\0__eq__\0pixelAspectRatio\0"
    "property\0const char*\0name\0propertyNames\0"
    "scanLineDirection\0QVideoSurfaceFormat::Direction\0"
    "setFrameRate\0rate\0setFrameSize\0width\0"
    "height\0setPixelAspectRatio\0ratio\0"
    "setProperty\0value\0setScanLineDirection\0"
    "direction\0setViewport\0viewport\0"
    "setYCbCrColorSpace\0"
    "QVideoSurfaceFormat::YCbCrColorSpace\0"
    "colorSpace\0sizeHint\0yCbCrColorSpace\0"
    "py_toString\0Direction\0TopToBottom\0"
    "BottomToTop\0YCbCrColorSpace\0YCbCr_Undefined\0"
    "YCbCr_BT601\0YCbCr_BT709\0YCbCr_xvYCC601\0"
    "YCbCr_xvYCC709\0YCbCr_JPEG\0YCbCr_CustomMatrix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QVideoSurfaceFormat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       2,  306, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  174,    3, 0x0a /* Public */,
       1,    3,  175,    3, 0x0a /* Public */,
       1,    2,  182,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  187,    3, 0x0a /* Public */,
      11,    1,  190,    3, 0x0a /* Public */,
      13,    1,  193,    3, 0x0a /* Public */,
      15,    1,  196,    3, 0x0a /* Public */,
      16,    1,  199,    3, 0x0a /* Public */,
      17,    1,  202,    3, 0x0a /* Public */,
       8,    1,  205,    3, 0x0a /* Public */,
      18,    1,  208,    3, 0x0a /* Public */,
      19,    2,  211,    3, 0x0a /* Public */,
      20,    2,  216,    3, 0x0a /* Public */,
      21,    2,  221,    3, 0x0a /* Public */,
      22,    1,  226,    3, 0x0a /* Public */,
       6,    1,  229,    3, 0x0a /* Public */,
      23,    2,  232,    3, 0x0a /* Public */,
      26,    1,  237,    3, 0x0a /* Public */,
      27,    1,  240,    3, 0x0a /* Public */,
      29,    2,  243,    3, 0x0a /* Public */,
      31,    2,  248,    3, 0x0a /* Public */,
      31,    3,  253,    3, 0x0a /* Public */,
      34,    2,  260,    3, 0x0a /* Public */,
      34,    3,  265,    3, 0x0a /* Public */,
      36,    3,  272,    3, 0x0a /* Public */,
      38,    2,  279,    3, 0x0a /* Public */,
      40,    2,  284,    3, 0x0a /* Public */,
      42,    2,  289,    3, 0x0a /* Public */,
      45,    1,  294,    3, 0x0a /* Public */,
      41,    1,  297,    3, 0x0a /* Public */,
      46,    1,  300,    3, 0x0a /* Public */,
      47,    1,  303,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QSize, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    0x80000000 | 2, QMetaType::QSize, 0x80000000 | 5,    4,    6,
    0x80000000 | 2, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 2,   12,
    QMetaType::Int, 0x80000000 | 2,   14,
    QMetaType::QReal, 0x80000000 | 2,   14,
    QMetaType::QSize, 0x80000000 | 2,   14,
    QMetaType::Int, 0x80000000 | 2,   14,
    0x80000000 | 7, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 9,   14,   10,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 9,   14,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 9,   14,   10,
    QMetaType::QSize, 0x80000000 | 2,   14,
    0x80000000 | 5, 0x80000000 | 2,   14,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 24,   14,   25,
    QMetaType::QByteArrayList, 0x80000000 | 2,   14,
    0x80000000 | 28, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   14,   30,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QSize,   14,    4,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   14,   32,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QSize,   14,   35,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   14,   32,   33,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24, QMetaType::QVariant,   14,   25,   37,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 28,   14,   39,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QRect,   14,   41,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 43,   14,   44,
    QMetaType::QSize, 0x80000000 | 2,   14,
    QMetaType::QRect, 0x80000000 | 2,   14,
    0x80000000 | 43, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,    3,

 // enums: name, flags, count, data
      48, 0x0,    2,  314,
      51, 0x0,    7,  318,

 // enum data: key, value
      49, uint(PythonQtWrapper_QVideoSurfaceFormat::TopToBottom),
      50, uint(PythonQtWrapper_QVideoSurfaceFormat::BottomToTop),
      52, uint(PythonQtWrapper_QVideoSurfaceFormat::YCbCr_Undefined),
      53, uint(PythonQtWrapper_QVideoSurfaceFormat::YCbCr_BT601),
      54, uint(PythonQtWrapper_QVideoSurfaceFormat::YCbCr_BT709),
      55, uint(PythonQtWrapper_QVideoSurfaceFormat::YCbCr_xvYCC601),
      56, uint(PythonQtWrapper_QVideoSurfaceFormat::YCbCr_xvYCC709),
      57, uint(PythonQtWrapper_QVideoSurfaceFormat::YCbCr_JPEG),
      58, uint(PythonQtWrapper_QVideoSurfaceFormat::YCbCr_CustomMatrix),

       0        // eod
};

void PythonQtWrapper_QVideoSurfaceFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QVideoSurfaceFormat *_t = static_cast<PythonQtWrapper_QVideoSurfaceFormat *>(_o);
        switch (_id) {
        case 0: { QVideoSurfaceFormat* _r = _t->new_QVideoSurfaceFormat();
            if (_a[0]) *reinterpret_cast< QVideoSurfaceFormat**>(_a[0]) = _r; }  break;
        case 1: { QVideoSurfaceFormat* _r = _t->new_QVideoSurfaceFormat((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< QVideoFrame::PixelFormat(*)>(_a[2])),(*reinterpret_cast< QAbstractVideoBuffer::HandleType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVideoSurfaceFormat**>(_a[0]) = _r; }  break;
        case 2: { QVideoSurfaceFormat* _r = _t->new_QVideoSurfaceFormat((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< QVideoFrame::PixelFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVideoSurfaceFormat**>(_a[0]) = _r; }  break;
        case 3: { QVideoSurfaceFormat* _r = _t->new_QVideoSurfaceFormat((*reinterpret_cast< const QVideoSurfaceFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoSurfaceFormat**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QVideoSurfaceFormat((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1]))); break;
        case 5: { int _r = _t->frameHeight((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->frameRate((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { QSize _r = _t->frameSize((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->frameWidth((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QAbstractVideoBuffer::HandleType _r = _t->handleType((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractVideoBuffer::HandleType*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isValid((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< const QVideoSurfaceFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QVideoSurfaceFormat* _r = _t->operator_assign((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< const QVideoSurfaceFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVideoSurfaceFormat**>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__eq__((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< const QVideoSurfaceFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QSize _r = _t->pixelAspectRatio((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 15: { QVideoFrame::PixelFormat _r = _t->pixelFormat((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoFrame::PixelFormat*>(_a[0]) = _r; }  break;
        case 16: { QVariant _r = _t->property((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 17: { QList<QByteArray> _r = _t->propertyNames((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 18: { QVideoSurfaceFormat::Direction _r = _t->scanLineDirection((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoSurfaceFormat::Direction*>(_a[0]) = _r; }  break;
        case 19: _t->setFrameRate((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 20: _t->setFrameSize((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 21: _t->setFrameSize((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->setPixelAspectRatio((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 23: _t->setPixelAspectRatio((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 24: _t->setProperty((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 25: _t->setScanLineDirection((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< QVideoSurfaceFormat::Direction(*)>(_a[2]))); break;
        case 26: _t->setViewport((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 27: _t->setYCbCrColorSpace((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])),(*reinterpret_cast< QVideoSurfaceFormat::YCbCrColorSpace(*)>(_a[2]))); break;
        case 28: { QSize _r = _t->sizeHint((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 29: { QRect _r = _t->viewport((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 30: { QVideoSurfaceFormat::YCbCrColorSpace _r = _t->yCbCrColorSpace((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoSurfaceFormat::YCbCrColorSpace*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->py_toString((*reinterpret_cast< QVideoSurfaceFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractVideoBuffer::HandleType >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame::PixelFormat >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame::PixelFormat >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoSurfaceFormat >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoSurfaceFormat >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoSurfaceFormat >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoSurfaceFormat >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoSurfaceFormat::Direction >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoSurfaceFormat::YCbCrColorSpace >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QVideoSurfaceFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVideoSurfaceFormat.data,
      qt_meta_data_PythonQtWrapper_QVideoSurfaceFormat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QVideoSurfaceFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QVideoSurfaceFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVideoSurfaceFormat.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVideoSurfaceFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVideoSurfaceFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QVideoWidget_t {
    QByteArrayData data[32];
    char stringdata[376];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QVideoWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QVideoWidget_t qt_meta_stringdata_PythonQtWrapper_QVideoWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QVideoWidget"
QT_MOC_LITERAL(1, 29, 16), // "new_QVideoWidget"
QT_MOC_LITERAL(2, 46, 13), // "QVideoWidget*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 8), // "QWidget*"
QT_MOC_LITERAL(5, 70, 6), // "parent"
QT_MOC_LITERAL(6, 77, 19), // "delete_QVideoWidget"
QT_MOC_LITERAL(7, 97, 3), // "obj"
QT_MOC_LITERAL(8, 101, 15), // "aspectRatioMode"
QT_MOC_LITERAL(9, 117, 19), // "Qt::AspectRatioMode"
QT_MOC_LITERAL(10, 137, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 154, 10), // "brightness"
QT_MOC_LITERAL(12, 165, 8), // "contrast"
QT_MOC_LITERAL(13, 174, 5), // "event"
QT_MOC_LITERAL(14, 180, 7), // "QEvent*"
QT_MOC_LITERAL(15, 188, 9), // "hideEvent"
QT_MOC_LITERAL(16, 198, 11), // "QHideEvent*"
QT_MOC_LITERAL(17, 210, 3), // "hue"
QT_MOC_LITERAL(18, 214, 11), // "mediaObject"
QT_MOC_LITERAL(19, 226, 13), // "QMediaObject*"
QT_MOC_LITERAL(20, 240, 9), // "moveEvent"
QT_MOC_LITERAL(21, 250, 11), // "QMoveEvent*"
QT_MOC_LITERAL(22, 262, 10), // "paintEvent"
QT_MOC_LITERAL(23, 273, 12), // "QPaintEvent*"
QT_MOC_LITERAL(24, 286, 11), // "resizeEvent"
QT_MOC_LITERAL(25, 298, 13), // "QResizeEvent*"
QT_MOC_LITERAL(26, 312, 10), // "saturation"
QT_MOC_LITERAL(27, 323, 14), // "setMediaObject"
QT_MOC_LITERAL(28, 338, 6), // "object"
QT_MOC_LITERAL(29, 345, 9), // "showEvent"
QT_MOC_LITERAL(30, 355, 11), // "QShowEvent*"
QT_MOC_LITERAL(31, 367, 8) // "sizeHint"

    },
    "PythonQtWrapper_QVideoWidget\0"
    "new_QVideoWidget\0QVideoWidget*\0\0"
    "QWidget*\0parent\0delete_QVideoWidget\0"
    "obj\0aspectRatioMode\0Qt::AspectRatioMode\0"
    "theWrappedObject\0brightness\0contrast\0"
    "event\0QEvent*\0hideEvent\0QHideEvent*\0"
    "hue\0mediaObject\0QMediaObject*\0moveEvent\0"
    "QMoveEvent*\0paintEvent\0QPaintEvent*\0"
    "resizeEvent\0QResizeEvent*\0saturation\0"
    "setMediaObject\0object\0showEvent\0"
    "QShowEvent*\0sizeHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QVideoWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    3, 0x0a /* Public */,
       1,    0,  102,    3, 0x2a /* Public | MethodCloned */,
       6,    1,  103,    3, 0x0a /* Public */,
       8,    1,  106,    3, 0x0a /* Public */,
      11,    1,  109,    3, 0x0a /* Public */,
      12,    1,  112,    3, 0x0a /* Public */,
      13,    2,  115,    3, 0x0a /* Public */,
      15,    2,  120,    3, 0x0a /* Public */,
      17,    1,  125,    3, 0x0a /* Public */,
      18,    1,  128,    3, 0x0a /* Public */,
      20,    2,  131,    3, 0x0a /* Public */,
      22,    2,  136,    3, 0x0a /* Public */,
      24,    2,  141,    3, 0x0a /* Public */,
      26,    1,  146,    3, 0x0a /* Public */,
      27,    2,  149,    3, 0x0a /* Public */,
      29,    2,  154,    3, 0x0a /* Public */,
      31,    1,  159,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 14,   10,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   10,   13,
    QMetaType::Int, 0x80000000 | 2,   10,
    0x80000000 | 19, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,   10,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,   10,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25,   10,   13,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 19,   10,   28,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 30,   10,   13,
    QMetaType::QSize, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QVideoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QVideoWidget *_t = static_cast<PythonQtWrapper_QVideoWidget *>(_o);
        switch (_id) {
        case 0: { QVideoWidget* _r = _t->new_QVideoWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVideoWidget**>(_a[0]) = _r; }  break;
        case 1: { QVideoWidget* _r = _t->new_QVideoWidget();
            if (_a[0]) *reinterpret_cast< QVideoWidget**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QVideoWidget((*reinterpret_cast< QVideoWidget*(*)>(_a[1]))); break;
        case 3: { Qt::AspectRatioMode _r = _t->aspectRatioMode((*reinterpret_cast< QVideoWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::AspectRatioMode*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->brightness((*reinterpret_cast< QVideoWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->contrast((*reinterpret_cast< QVideoWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QVideoWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->hideEvent((*reinterpret_cast< QVideoWidget*(*)>(_a[1])),(*reinterpret_cast< QHideEvent*(*)>(_a[2]))); break;
        case 8: { int _r = _t->hue((*reinterpret_cast< QVideoWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QMediaObject* _r = _t->mediaObject((*reinterpret_cast< QVideoWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMediaObject**>(_a[0]) = _r; }  break;
        case 10: _t->moveEvent((*reinterpret_cast< QVideoWidget*(*)>(_a[1])),(*reinterpret_cast< QMoveEvent*(*)>(_a[2]))); break;
        case 11: _t->paintEvent((*reinterpret_cast< QVideoWidget*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 12: _t->resizeEvent((*reinterpret_cast< QVideoWidget*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 13: { int _r = _t->saturation((*reinterpret_cast< QVideoWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->setMediaObject((*reinterpret_cast< QVideoWidget*(*)>(_a[1])),(*reinterpret_cast< QMediaObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->showEvent((*reinterpret_cast< QVideoWidget*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 16: { QSize _r = _t->sizeHint((*reinterpret_cast< QVideoWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaObject* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QVideoWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QVideoWidget.data,
      qt_meta_data_PythonQtWrapper_QVideoWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QVideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QVideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QVideoWidget.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QVideoWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QVideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
