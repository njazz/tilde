/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui7.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generated_cpp_54/com_trolltech_qt_gui/com_trolltech_qt_gui7.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui7.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PythonQtWrapper_QResizeEvent_t {
    QByteArrayData data[10];
    char stringdata[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QResizeEvent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QResizeEvent_t qt_meta_stringdata_PythonQtWrapper_QResizeEvent = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QResizeEvent"
QT_MOC_LITERAL(1, 29, 16), // "new_QResizeEvent"
QT_MOC_LITERAL(2, 46, 13), // "QResizeEvent*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 4), // "size"
QT_MOC_LITERAL(5, 66, 7), // "oldSize"
QT_MOC_LITERAL(6, 74, 19), // "delete_QResizeEvent"
QT_MOC_LITERAL(7, 94, 3), // "obj"
QT_MOC_LITERAL(8, 98, 12), // "const QSize*"
QT_MOC_LITERAL(9, 111, 16) // "theWrappedObject"

    },
    "PythonQtWrapper_QResizeEvent\0"
    "new_QResizeEvent\0QResizeEvent*\0\0size\0"
    "oldSize\0delete_QResizeEvent\0obj\0"
    "const QSize*\0theWrappedObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QResizeEvent[] = {

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
       1,    2,   34,    3, 0x0a /* Public */,
       6,    1,   39,    3, 0x0a /* Public */,
       5,    1,   42,    3, 0x0a /* Public */,
       4,    1,   45,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QSize, QMetaType::QSize,    4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 8, 0x80000000 | 2,    9,
    0x80000000 | 8, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QResizeEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QResizeEvent *_t = static_cast<PythonQtWrapper_QResizeEvent *>(_o);
        switch (_id) {
        case 0: { QResizeEvent* _r = _t->new_QResizeEvent((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QResizeEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QResizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 2: { const QSize* _r = _t->oldSize((*reinterpret_cast< QResizeEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSize**>(_a[0]) = _r; }  break;
        case 3: { const QSize* _r = _t->size((*reinterpret_cast< QResizeEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSize**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QResizeEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QResizeEvent.data,
      qt_meta_data_PythonQtWrapper_QResizeEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QResizeEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QResizeEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QResizeEvent.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QResizeEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QResizeEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QRubberBand_t {
    QByteArrayData data[40];
    char stringdata[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QRubberBand_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QRubberBand_t qt_meta_stringdata_PythonQtWrapper_QRubberBand = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QRubberBand"
QT_MOC_LITERAL(1, 28, 15), // "new_QRubberBand"
QT_MOC_LITERAL(2, 44, 12), // "QRubberBand*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 18), // "QRubberBand::Shape"
QT_MOC_LITERAL(5, 77, 6), // "arg__1"
QT_MOC_LITERAL(6, 84, 8), // "QWidget*"
QT_MOC_LITERAL(7, 93, 6), // "arg__2"
QT_MOC_LITERAL(8, 100, 18), // "delete_QRubberBand"
QT_MOC_LITERAL(9, 119, 3), // "obj"
QT_MOC_LITERAL(10, 123, 11), // "changeEvent"
QT_MOC_LITERAL(11, 135, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 152, 7), // "QEvent*"
QT_MOC_LITERAL(13, 160, 5), // "event"
QT_MOC_LITERAL(14, 166, 1), // "e"
QT_MOC_LITERAL(15, 168, 15), // "initStyleOption"
QT_MOC_LITERAL(16, 184, 23), // "QStyleOptionRubberBand*"
QT_MOC_LITERAL(17, 208, 6), // "option"
QT_MOC_LITERAL(18, 215, 4), // "move"
QT_MOC_LITERAL(19, 220, 1), // "p"
QT_MOC_LITERAL(20, 222, 1), // "x"
QT_MOC_LITERAL(21, 224, 1), // "y"
QT_MOC_LITERAL(22, 226, 9), // "moveEvent"
QT_MOC_LITERAL(23, 236, 11), // "QMoveEvent*"
QT_MOC_LITERAL(24, 248, 10), // "paintEvent"
QT_MOC_LITERAL(25, 259, 12), // "QPaintEvent*"
QT_MOC_LITERAL(26, 272, 6), // "resize"
QT_MOC_LITERAL(27, 279, 1), // "s"
QT_MOC_LITERAL(28, 281, 1), // "w"
QT_MOC_LITERAL(29, 283, 1), // "h"
QT_MOC_LITERAL(30, 285, 11), // "resizeEvent"
QT_MOC_LITERAL(31, 297, 13), // "QResizeEvent*"
QT_MOC_LITERAL(32, 311, 11), // "setGeometry"
QT_MOC_LITERAL(33, 323, 1), // "r"
QT_MOC_LITERAL(34, 325, 5), // "shape"
QT_MOC_LITERAL(35, 331, 9), // "showEvent"
QT_MOC_LITERAL(36, 341, 11), // "QShowEvent*"
QT_MOC_LITERAL(37, 353, 5), // "Shape"
QT_MOC_LITERAL(38, 359, 4), // "Line"
QT_MOC_LITERAL(39, 364, 9) // "Rectangle"

    },
    "PythonQtWrapper_QRubberBand\0new_QRubberBand\0"
    "QRubberBand*\0\0QRubberBand::Shape\0"
    "arg__1\0QWidget*\0arg__2\0delete_QRubberBand\0"
    "obj\0changeEvent\0theWrappedObject\0"
    "QEvent*\0event\0e\0initStyleOption\0"
    "QStyleOptionRubberBand*\0option\0move\0"
    "p\0x\0y\0moveEvent\0QMoveEvent*\0paintEvent\0"
    "QPaintEvent*\0resize\0s\0w\0h\0resizeEvent\0"
    "QResizeEvent*\0setGeometry\0r\0shape\0"
    "showEvent\0QShowEvent*\0Shape\0Line\0"
    "Rectangle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QRubberBand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       1,  188, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   99,    3, 0x0a /* Public */,
       1,    1,  104,    3, 0x2a /* Public | MethodCloned */,
       8,    1,  107,    3, 0x0a /* Public */,
      10,    2,  110,    3, 0x0a /* Public */,
      13,    2,  115,    3, 0x0a /* Public */,
      15,    2,  120,    3, 0x0a /* Public */,
      18,    2,  125,    3, 0x0a /* Public */,
      18,    3,  130,    3, 0x0a /* Public */,
      22,    2,  137,    3, 0x0a /* Public */,
      24,    2,  142,    3, 0x0a /* Public */,
      26,    2,  147,    3, 0x0a /* Public */,
      26,    3,  152,    3, 0x0a /* Public */,
      30,    2,  159,    3, 0x0a /* Public */,
      32,    2,  164,    3, 0x0a /* Public */,
      32,    5,  169,    3, 0x0a /* Public */,
      34,    1,  180,    3, 0x0a /* Public */,
      35,    2,  183,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,   11,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 12,   11,   14,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   11,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QPoint,   11,   19,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   11,   20,   21,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,   11,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25,   11,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QSize,   11,   27,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   11,   28,   29,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 31,   11,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QRect,   11,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   11,   20,   21,   28,   29,
    0x80000000 | 4, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 36,   11,    5,

 // enums: name, flags, count, data
      37, 0x0,    2,  192,

 // enum data: key, value
      38, uint(PythonQtWrapper_QRubberBand::Line),
      39, uint(PythonQtWrapper_QRubberBand::Rectangle),

       0        // eod
};

void PythonQtWrapper_QRubberBand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QRubberBand *_t = static_cast<PythonQtWrapper_QRubberBand *>(_o);
        switch (_id) {
        case 0: { QRubberBand* _r = _t->new_QRubberBand((*reinterpret_cast< QRubberBand::Shape(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRubberBand**>(_a[0]) = _r; }  break;
        case 1: { QRubberBand* _r = _t->new_QRubberBand((*reinterpret_cast< QRubberBand::Shape(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRubberBand**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QRubberBand((*reinterpret_cast< QRubberBand*(*)>(_a[1]))); break;
        case 3: _t->changeEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 4: { bool _r = _t->event((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->initStyleOption((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionRubberBand*(*)>(_a[2]))); break;
        case 6: _t->move((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 7: _t->move((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->moveEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QMoveEvent*(*)>(_a[2]))); break;
        case 9: _t->paintEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 10: _t->resize((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 11: _t->resize((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 12: _t->resizeEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 13: _t->setGeometry((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 14: _t->setGeometry((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 15: { QRubberBand::Shape _r = _t->shape((*reinterpret_cast< QRubberBand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRubberBand::Shape*>(_a[0]) = _r; }  break;
        case 16: _t->showEvent((*reinterpret_cast< QRubberBand*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRubberBand* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QRubberBand::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QRubberBand.data,
      qt_meta_data_PythonQtWrapper_QRubberBand,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QRubberBand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QRubberBand::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QRubberBand.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QRubberBand*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QRubberBand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QScreen_t {
    QByteArrayData data[51];
    char stringdata[652];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QScreen_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QScreen_t qt_meta_stringdata_PythonQtWrapper_QScreen = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PythonQtWrapper_QScreen"
QT_MOC_LITERAL(1, 24, 14), // "delete_QScreen"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "QScreen*"
QT_MOC_LITERAL(4, 49, 3), // "obj"
QT_MOC_LITERAL(5, 53, 12), // "angleBetween"
QT_MOC_LITERAL(6, 66, 16), // "theWrappedObject"
QT_MOC_LITERAL(7, 83, 21), // "Qt::ScreenOrientation"
QT_MOC_LITERAL(8, 105, 1), // "a"
QT_MOC_LITERAL(9, 107, 1), // "b"
QT_MOC_LITERAL(10, 109, 17), // "availableGeometry"
QT_MOC_LITERAL(11, 127, 13), // "availableSize"
QT_MOC_LITERAL(12, 141, 24), // "availableVirtualGeometry"
QT_MOC_LITERAL(13, 166, 20), // "availableVirtualSize"
QT_MOC_LITERAL(14, 187, 5), // "depth"
QT_MOC_LITERAL(15, 193, 16), // "devicePixelRatio"
QT_MOC_LITERAL(16, 210, 8), // "geometry"
QT_MOC_LITERAL(17, 219, 10), // "grabWindow"
QT_MOC_LITERAL(18, 230, 3), // "WId"
QT_MOC_LITERAL(19, 234, 6), // "window"
QT_MOC_LITERAL(20, 241, 1), // "x"
QT_MOC_LITERAL(21, 243, 1), // "y"
QT_MOC_LITERAL(22, 245, 1), // "w"
QT_MOC_LITERAL(23, 247, 1), // "h"
QT_MOC_LITERAL(24, 249, 11), // "isLandscape"
QT_MOC_LITERAL(25, 261, 11), // "orientation"
QT_MOC_LITERAL(26, 273, 10), // "isPortrait"
QT_MOC_LITERAL(27, 284, 18), // "logicalDotsPerInch"
QT_MOC_LITERAL(28, 303, 19), // "logicalDotsPerInchX"
QT_MOC_LITERAL(29, 323, 19), // "logicalDotsPerInchY"
QT_MOC_LITERAL(30, 343, 10), // "mapBetween"
QT_MOC_LITERAL(31, 354, 4), // "rect"
QT_MOC_LITERAL(32, 359, 4), // "name"
QT_MOC_LITERAL(33, 364, 17), // "nativeOrientation"
QT_MOC_LITERAL(34, 382, 21), // "orientationUpdateMask"
QT_MOC_LITERAL(35, 404, 22), // "Qt::ScreenOrientations"
QT_MOC_LITERAL(36, 427, 19), // "physicalDotsPerInch"
QT_MOC_LITERAL(37, 447, 20), // "physicalDotsPerInchX"
QT_MOC_LITERAL(38, 468, 20), // "physicalDotsPerInchY"
QT_MOC_LITERAL(39, 489, 12), // "physicalSize"
QT_MOC_LITERAL(40, 502, 18), // "primaryOrientation"
QT_MOC_LITERAL(41, 521, 11), // "refreshRate"
QT_MOC_LITERAL(42, 533, 24), // "setOrientationUpdateMask"
QT_MOC_LITERAL(43, 558, 4), // "mask"
QT_MOC_LITERAL(44, 563, 4), // "size"
QT_MOC_LITERAL(45, 568, 16), // "transformBetween"
QT_MOC_LITERAL(46, 585, 6), // "target"
QT_MOC_LITERAL(47, 592, 15), // "virtualGeometry"
QT_MOC_LITERAL(48, 608, 15), // "virtualSiblings"
QT_MOC_LITERAL(49, 624, 15), // "QList<QScreen*>"
QT_MOC_LITERAL(50, 640, 11) // "virtualSize"

    },
    "PythonQtWrapper_QScreen\0delete_QScreen\0"
    "\0QScreen*\0obj\0angleBetween\0theWrappedObject\0"
    "Qt::ScreenOrientation\0a\0b\0availableGeometry\0"
    "availableSize\0availableVirtualGeometry\0"
    "availableVirtualSize\0depth\0devicePixelRatio\0"
    "geometry\0grabWindow\0WId\0window\0x\0y\0w\0"
    "h\0isLandscape\0orientation\0isPortrait\0"
    "logicalDotsPerInch\0logicalDotsPerInchX\0"
    "logicalDotsPerInchY\0mapBetween\0rect\0"
    "name\0nativeOrientation\0orientationUpdateMask\0"
    "Qt::ScreenOrientations\0physicalDotsPerInch\0"
    "physicalDotsPerInchX\0physicalDotsPerInchY\0"
    "physicalSize\0primaryOrientation\0"
    "refreshRate\0setOrientationUpdateMask\0"
    "mask\0size\0transformBetween\0target\0"
    "virtualGeometry\0virtualSiblings\0"
    "QList<QScreen*>\0virtualSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  194,    2, 0x0a /* Public */,
       5,    3,  197,    2, 0x0a /* Public */,
      10,    1,  204,    2, 0x0a /* Public */,
      11,    1,  207,    2, 0x0a /* Public */,
      12,    1,  210,    2, 0x0a /* Public */,
      13,    1,  213,    2, 0x0a /* Public */,
      14,    1,  216,    2, 0x0a /* Public */,
      15,    1,  219,    2, 0x0a /* Public */,
      16,    1,  222,    2, 0x0a /* Public */,
      17,    6,  225,    2, 0x0a /* Public */,
      17,    5,  238,    2, 0x2a /* Public | MethodCloned */,
      17,    4,  249,    2, 0x2a /* Public | MethodCloned */,
      17,    3,  258,    2, 0x2a /* Public | MethodCloned */,
      17,    2,  265,    2, 0x2a /* Public | MethodCloned */,
      24,    2,  270,    2, 0x0a /* Public */,
      26,    2,  275,    2, 0x0a /* Public */,
      27,    1,  280,    2, 0x0a /* Public */,
      28,    1,  283,    2, 0x0a /* Public */,
      29,    1,  286,    2, 0x0a /* Public */,
      30,    4,  289,    2, 0x0a /* Public */,
      32,    1,  298,    2, 0x0a /* Public */,
      33,    1,  301,    2, 0x0a /* Public */,
      25,    1,  304,    2, 0x0a /* Public */,
      34,    1,  307,    2, 0x0a /* Public */,
      36,    1,  310,    2, 0x0a /* Public */,
      37,    1,  313,    2, 0x0a /* Public */,
      38,    1,  316,    2, 0x0a /* Public */,
      39,    1,  319,    2, 0x0a /* Public */,
      40,    1,  322,    2, 0x0a /* Public */,
      41,    1,  325,    2, 0x0a /* Public */,
      42,    2,  328,    2, 0x0a /* Public */,
      44,    1,  333,    2, 0x0a /* Public */,
      45,    4,  336,    2, 0x0a /* Public */,
      47,    1,  345,    2, 0x0a /* Public */,
      48,    1,  348,    2, 0x0a /* Public */,
      50,    1,  351,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Int, 0x80000000 | 3, 0x80000000 | 7, 0x80000000 | 7,    6,    8,    9,
    QMetaType::QRect, 0x80000000 | 3,    6,
    QMetaType::QSize, 0x80000000 | 3,    6,
    QMetaType::QRect, 0x80000000 | 3,    6,
    QMetaType::QSize, 0x80000000 | 3,    6,
    QMetaType::Int, 0x80000000 | 3,    6,
    QMetaType::QReal, 0x80000000 | 3,    6,
    QMetaType::QRect, 0x80000000 | 3,    6,
    QMetaType::QPixmap, 0x80000000 | 3, 0x80000000 | 18, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,   19,   20,   21,   22,   23,
    QMetaType::QPixmap, 0x80000000 | 3, 0x80000000 | 18, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,   19,   20,   21,   22,
    QMetaType::QPixmap, 0x80000000 | 3, 0x80000000 | 18, QMetaType::Int, QMetaType::Int,    6,   19,   20,   21,
    QMetaType::QPixmap, 0x80000000 | 3, 0x80000000 | 18, QMetaType::Int,    6,   19,   20,
    QMetaType::QPixmap, 0x80000000 | 3, 0x80000000 | 18,    6,   19,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 7,    6,   25,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 7,    6,   25,
    QMetaType::QReal, 0x80000000 | 3,    6,
    QMetaType::QReal, 0x80000000 | 3,    6,
    QMetaType::QReal, 0x80000000 | 3,    6,
    QMetaType::QRect, 0x80000000 | 3, 0x80000000 | 7, 0x80000000 | 7, QMetaType::QRect,    6,    8,    9,   31,
    QMetaType::QString, 0x80000000 | 3,    6,
    0x80000000 | 7, 0x80000000 | 3,    6,
    0x80000000 | 7, 0x80000000 | 3,    6,
    0x80000000 | 35, 0x80000000 | 3,    6,
    QMetaType::QReal, 0x80000000 | 3,    6,
    QMetaType::QReal, 0x80000000 | 3,    6,
    QMetaType::QReal, 0x80000000 | 3,    6,
    QMetaType::QSizeF, 0x80000000 | 3,    6,
    0x80000000 | 7, 0x80000000 | 3,    6,
    QMetaType::QReal, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 35,    6,   43,
    QMetaType::QSize, 0x80000000 | 3,    6,
    QMetaType::QTransform, 0x80000000 | 3, 0x80000000 | 7, 0x80000000 | 7, QMetaType::QRect,    6,    8,    9,   46,
    QMetaType::QRect, 0x80000000 | 3,    6,
    0x80000000 | 49, 0x80000000 | 3,    6,
    QMetaType::QSize, 0x80000000 | 3,    6,

       0        // eod
};

void PythonQtWrapper_QScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QScreen *_t = static_cast<PythonQtWrapper_QScreen *>(_o);
        switch (_id) {
        case 0: _t->delete_QScreen((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 1: { int _r = _t->angleBetween((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[2])),(*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { QRect _r = _t->availableGeometry((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 3: { QSize _r = _t->availableSize((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 4: { QRect _r = _t->availableVirtualGeometry((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 5: { QSize _r = _t->availableVirtualSize((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->depth((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->devicePixelRatio((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: { QRect _r = _t->geometry((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 9: { QPixmap _r = _t->grabWindow((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< WId(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 10: { QPixmap _r = _t->grabWindow((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< WId(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 11: { QPixmap _r = _t->grabWindow((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< WId(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 12: { QPixmap _r = _t->grabWindow((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< WId(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 13: { QPixmap _r = _t->grabWindow((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< WId(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isLandscape((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isPortrait((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { qreal _r = _t->logicalDotsPerInch((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 17: { qreal _r = _t->logicalDotsPerInchX((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 18: { qreal _r = _t->logicalDotsPerInchY((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 19: { QRect _r = _t->mapBetween((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[2])),(*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->name((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { Qt::ScreenOrientation _r = _t->nativeOrientation((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ScreenOrientation*>(_a[0]) = _r; }  break;
        case 22: { Qt::ScreenOrientation _r = _t->orientation((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ScreenOrientation*>(_a[0]) = _r; }  break;
        case 23: { Qt::ScreenOrientations _r = _t->orientationUpdateMask((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ScreenOrientations*>(_a[0]) = _r; }  break;
        case 24: { qreal _r = _t->physicalDotsPerInch((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 25: { qreal _r = _t->physicalDotsPerInchX((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 26: { qreal _r = _t->physicalDotsPerInchY((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 27: { QSizeF _r = _t->physicalSize((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 28: { Qt::ScreenOrientation _r = _t->primaryOrientation((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ScreenOrientation*>(_a[0]) = _r; }  break;
        case 29: { qreal _r = _t->refreshRate((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 30: _t->setOrientationUpdateMask((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< Qt::ScreenOrientations(*)>(_a[2]))); break;
        case 31: { QSize _r = _t->size((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 32: { QTransform _r = _t->transformBetween((*reinterpret_cast< QScreen*(*)>(_a[1])),(*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[2])),(*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTransform*>(_a[0]) = _r; }  break;
        case 33: { QRect _r = _t->virtualGeometry((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 34: { QList<QScreen*> _r = _t->virtualSiblings((*reinterpret_cast< QScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QScreen*>*>(_a[0]) = _r; }  break;
        case 35: { QSize _r = _t->virtualSize((*reinterpret_cast< QScreen*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScreen* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QScreen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QScreen.data,
      qt_meta_data_PythonQtWrapper_QScreen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QScreen.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QScreen*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QScrollArea_t {
    QByteArrayData data[40];
    char stringdata[466];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QScrollArea_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QScrollArea_t qt_meta_stringdata_PythonQtWrapper_QScrollArea = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QScrollArea"
QT_MOC_LITERAL(1, 28, 15), // "new_QScrollArea"
QT_MOC_LITERAL(2, 44, 12), // "QScrollArea*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 8), // "QWidget*"
QT_MOC_LITERAL(5, 67, 6), // "parent"
QT_MOC_LITERAL(6, 74, 18), // "delete_QScrollArea"
QT_MOC_LITERAL(7, 93, 3), // "obj"
QT_MOC_LITERAL(8, 97, 9), // "alignment"
QT_MOC_LITERAL(9, 107, 13), // "Qt::Alignment"
QT_MOC_LITERAL(10, 121, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 138, 13), // "ensureVisible"
QT_MOC_LITERAL(12, 152, 1), // "x"
QT_MOC_LITERAL(13, 154, 1), // "y"
QT_MOC_LITERAL(14, 156, 7), // "xmargin"
QT_MOC_LITERAL(15, 164, 7), // "ymargin"
QT_MOC_LITERAL(16, 172, 19), // "ensureWidgetVisible"
QT_MOC_LITERAL(17, 192, 11), // "childWidget"
QT_MOC_LITERAL(18, 204, 5), // "event"
QT_MOC_LITERAL(19, 210, 7), // "QEvent*"
QT_MOC_LITERAL(20, 218, 6), // "arg__1"
QT_MOC_LITERAL(21, 225, 11), // "eventFilter"
QT_MOC_LITERAL(22, 237, 6), // "arg__2"
QT_MOC_LITERAL(23, 244, 18), // "focusNextPrevChild"
QT_MOC_LITERAL(24, 263, 4), // "next"
QT_MOC_LITERAL(25, 268, 11), // "resizeEvent"
QT_MOC_LITERAL(26, 280, 13), // "QResizeEvent*"
QT_MOC_LITERAL(27, 294, 16), // "scrollContentsBy"
QT_MOC_LITERAL(28, 311, 2), // "dx"
QT_MOC_LITERAL(29, 314, 2), // "dy"
QT_MOC_LITERAL(30, 317, 12), // "setAlignment"
QT_MOC_LITERAL(31, 330, 9), // "setWidget"
QT_MOC_LITERAL(32, 340, 36), // "PythonQtPassOwnershipToCPP<QW..."
QT_MOC_LITERAL(33, 377, 6), // "widget"
QT_MOC_LITERAL(34, 384, 18), // "setWidgetResizable"
QT_MOC_LITERAL(35, 403, 9), // "resizable"
QT_MOC_LITERAL(36, 413, 8), // "sizeHint"
QT_MOC_LITERAL(37, 422, 10), // "takeWidget"
QT_MOC_LITERAL(38, 433, 16), // "viewportSizeHint"
QT_MOC_LITERAL(39, 450, 15) // "widgetResizable"

    },
    "PythonQtWrapper_QScrollArea\0new_QScrollArea\0"
    "QScrollArea*\0\0QWidget*\0parent\0"
    "delete_QScrollArea\0obj\0alignment\0"
    "Qt::Alignment\0theWrappedObject\0"
    "ensureVisible\0x\0y\0xmargin\0ymargin\0"
    "ensureWidgetVisible\0childWidget\0event\0"
    "QEvent*\0arg__1\0eventFilter\0arg__2\0"
    "focusNextPrevChild\0next\0resizeEvent\0"
    "QResizeEvent*\0scrollContentsBy\0dx\0dy\0"
    "setAlignment\0setWidget\0"
    "PythonQtPassOwnershipToCPP<QWidget*>\0"
    "widget\0setWidgetResizable\0resizable\0"
    "sizeHint\0takeWidget\0viewportSizeHint\0"
    "widgetResizable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QScrollArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  129,    3, 0x0a /* Public */,
       1,    0,  132,    3, 0x2a /* Public | MethodCloned */,
       6,    1,  133,    3, 0x0a /* Public */,
       8,    1,  136,    3, 0x0a /* Public */,
      11,    5,  139,    3, 0x0a /* Public */,
      11,    4,  150,    3, 0x2a /* Public | MethodCloned */,
      11,    3,  159,    3, 0x2a /* Public | MethodCloned */,
      16,    4,  166,    3, 0x0a /* Public */,
      16,    3,  175,    3, 0x2a /* Public | MethodCloned */,
      16,    2,  182,    3, 0x2a /* Public | MethodCloned */,
      18,    2,  187,    3, 0x0a /* Public */,
      21,    3,  192,    3, 0x0a /* Public */,
      23,    2,  199,    3, 0x0a /* Public */,
      25,    2,  204,    3, 0x0a /* Public */,
      27,    3,  209,    3, 0x0a /* Public */,
      30,    2,  216,    3, 0x0a /* Public */,
      31,    2,  221,    3, 0x0a /* Public */,
      34,    2,  226,    3, 0x0a /* Public */,
      36,    1,  231,    3, 0x0a /* Public */,
      37,    1,  234,    3, 0x0a /* Public */,
      38,    1,  237,    3, 0x0a /* Public */,
      33,    1,  240,    3, 0x0a /* Public */,
      39,    1,  243,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   12,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   12,   13,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   12,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4, QMetaType::Int, QMetaType::Int,   10,   17,   14,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4, QMetaType::Int,   10,   17,   14,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   10,   17,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 19,   10,   20,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QObjectStar, 0x80000000 | 19,   10,   20,   22,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Bool,   10,   24,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 26,   10,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   28,   29,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9,   10,   20,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 32,   10,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   35,
    QMetaType::QSize, 0x80000000 | 2,   10,
    0x80000000 | 4, 0x80000000 | 2,   10,
    QMetaType::QSize, 0x80000000 | 2,   10,
    0x80000000 | 4, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QScrollArea *_t = static_cast<PythonQtWrapper_QScrollArea *>(_o);
        switch (_id) {
        case 0: { QScrollArea* _r = _t->new_QScrollArea((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollArea**>(_a[0]) = _r; }  break;
        case 1: { QScrollArea* _r = _t->new_QScrollArea();
            if (_a[0]) *reinterpret_cast< QScrollArea**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QScrollArea((*reinterpret_cast< QScrollArea*(*)>(_a[1]))); break;
        case 3: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 4: _t->ensureVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 5: _t->ensureVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->ensureVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->ensureWidgetVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 8: _t->ensureWidgetVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->ensureWidgetVisible((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 10: { bool _r = _t->event((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->eventFilter((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->resizeEvent((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 14: _t->scrollContentsBy((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->setAlignment((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 16: _t->setWidget((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2]))); break;
        case 17: _t->setWidgetResizable((*reinterpret_cast< QScrollArea*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: { QSize _r = _t->sizeHint((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 19: { QWidget* _r = _t->takeWidget((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 20: { QSize _r = _t->viewportSizeHint((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 21: { QWidget* _r = _t->widget((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->widgetResizable((*reinterpret_cast< QScrollArea*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollArea* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QScrollArea::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QScrollArea.data,
      qt_meta_data_PythonQtWrapper_QScrollArea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QScrollArea.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QScrollArea*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QScrollBar_t {
    QByteArrayData data[31];
    char stringdata[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QScrollBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QScrollBar_t qt_meta_stringdata_PythonQtWrapper_QScrollBar = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QScrollBar"
QT_MOC_LITERAL(1, 27, 14), // "new_QScrollBar"
QT_MOC_LITERAL(2, 42, 11), // "QScrollBar*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 8), // "QWidget*"
QT_MOC_LITERAL(5, 64, 6), // "parent"
QT_MOC_LITERAL(6, 71, 15), // "Qt::Orientation"
QT_MOC_LITERAL(7, 87, 6), // "arg__1"
QT_MOC_LITERAL(8, 94, 17), // "delete_QScrollBar"
QT_MOC_LITERAL(9, 112, 3), // "obj"
QT_MOC_LITERAL(10, 116, 16), // "contextMenuEvent"
QT_MOC_LITERAL(11, 133, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 150, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(13, 169, 5), // "event"
QT_MOC_LITERAL(14, 175, 7), // "QEvent*"
QT_MOC_LITERAL(15, 183, 9), // "hideEvent"
QT_MOC_LITERAL(16, 193, 11), // "QHideEvent*"
QT_MOC_LITERAL(17, 205, 15), // "initStyleOption"
QT_MOC_LITERAL(18, 221, 19), // "QStyleOptionSlider*"
QT_MOC_LITERAL(19, 241, 6), // "option"
QT_MOC_LITERAL(20, 248, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(21, 263, 12), // "QMouseEvent*"
QT_MOC_LITERAL(22, 276, 15), // "mousePressEvent"
QT_MOC_LITERAL(23, 292, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(24, 310, 10), // "paintEvent"
QT_MOC_LITERAL(25, 321, 12), // "QPaintEvent*"
QT_MOC_LITERAL(26, 334, 8), // "sizeHint"
QT_MOC_LITERAL(27, 343, 12), // "sliderChange"
QT_MOC_LITERAL(28, 356, 6), // "change"
QT_MOC_LITERAL(29, 363, 10), // "wheelEvent"
QT_MOC_LITERAL(30, 374, 12) // "QWheelEvent*"

    },
    "PythonQtWrapper_QScrollBar\0new_QScrollBar\0"
    "QScrollBar*\0\0QWidget*\0parent\0"
    "Qt::Orientation\0arg__1\0delete_QScrollBar\0"
    "obj\0contextMenuEvent\0theWrappedObject\0"
    "QContextMenuEvent*\0event\0QEvent*\0"
    "hideEvent\0QHideEvent*\0initStyleOption\0"
    "QStyleOptionSlider*\0option\0mouseMoveEvent\0"
    "QMouseEvent*\0mousePressEvent\0"
    "mouseReleaseEvent\0paintEvent\0QPaintEvent*\0"
    "sizeHint\0sliderChange\0change\0wheelEvent\0"
    "QWheelEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QScrollBar[] = {

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
       1,    1,   94,    3, 0x0a /* Public */,
       1,    0,   97,    3, 0x2a /* Public | MethodCloned */,
       1,    2,   98,    3, 0x0a /* Public */,
       1,    1,  103,    3, 0x2a /* Public | MethodCloned */,
       8,    1,  106,    3, 0x0a /* Public */,
      10,    2,  109,    3, 0x0a /* Public */,
      13,    2,  114,    3, 0x0a /* Public */,
      15,    2,  119,    3, 0x0a /* Public */,
      17,    2,  124,    3, 0x0a /* Public */,
      20,    2,  129,    3, 0x0a /* Public */,
      22,    2,  134,    3, 0x0a /* Public */,
      23,    2,  139,    3, 0x0a /* Public */,
      24,    2,  144,    3, 0x0a /* Public */,
      26,    1,  149,    3, 0x0a /* Public */,
      27,    2,  152,    3, 0x0a /* Public */,
      29,    2,  157,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 6, 0x80000000 | 4,    7,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,   11,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 14,   11,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   11,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   11,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,   11,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,   11,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,   11,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25,   11,    7,
    QMetaType::QSize, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   11,   28,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 30,   11,    7,

       0        // eod
};

void PythonQtWrapper_QScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QScrollBar *_t = static_cast<PythonQtWrapper_QScrollBar *>(_o);
        switch (_id) {
        case 0: { QScrollBar* _r = _t->new_QScrollBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollBar**>(_a[0]) = _r; }  break;
        case 1: { QScrollBar* _r = _t->new_QScrollBar();
            if (_a[0]) *reinterpret_cast< QScrollBar**>(_a[0]) = _r; }  break;
        case 2: { QScrollBar* _r = _t->new_QScrollBar((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScrollBar**>(_a[0]) = _r; }  break;
        case 3: { QScrollBar* _r = _t->new_QScrollBar((*reinterpret_cast< Qt::Orientation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollBar**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QScrollBar((*reinterpret_cast< QScrollBar*(*)>(_a[1]))); break;
        case 5: _t->contextMenuEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->hideEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QHideEvent*(*)>(_a[2]))); break;
        case 8: _t->initStyleOption((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionSlider*(*)>(_a[2]))); break;
        case 9: _t->mouseMoveEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 10: _t->mousePressEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 11: _t->mouseReleaseEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 12: _t->paintEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 13: { QSize _r = _t->sizeHint((*reinterpret_cast< QScrollBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 14: _t->sliderChange((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->wheelEvent((*reinterpret_cast< QScrollBar*(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScrollBar* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QScrollBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QScrollBar.data,
      qt_meta_data_PythonQtWrapper_QScrollBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QScrollBar.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QScrollBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QScrollEvent_t {
    QByteArrayData data[16];
    char stringdata[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QScrollEvent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QScrollEvent_t qt_meta_stringdata_PythonQtWrapper_QScrollEvent = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QScrollEvent"
QT_MOC_LITERAL(1, 29, 16), // "new_QScrollEvent"
QT_MOC_LITERAL(2, 46, 13), // "QScrollEvent*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 10), // "contentPos"
QT_MOC_LITERAL(5, 72, 9), // "overshoot"
QT_MOC_LITERAL(6, 82, 25), // "QScrollEvent::ScrollState"
QT_MOC_LITERAL(7, 108, 11), // "scrollState"
QT_MOC_LITERAL(8, 120, 19), // "delete_QScrollEvent"
QT_MOC_LITERAL(9, 140, 3), // "obj"
QT_MOC_LITERAL(10, 144, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 161, 17), // "overshootDistance"
QT_MOC_LITERAL(12, 179, 11), // "ScrollState"
QT_MOC_LITERAL(13, 191, 13), // "ScrollStarted"
QT_MOC_LITERAL(14, 205, 13), // "ScrollUpdated"
QT_MOC_LITERAL(15, 219, 14) // "ScrollFinished"

    },
    "PythonQtWrapper_QScrollEvent\0"
    "new_QScrollEvent\0QScrollEvent*\0\0"
    "contentPos\0overshoot\0QScrollEvent::ScrollState\0"
    "scrollState\0delete_QScrollEvent\0obj\0"
    "theWrappedObject\0overshootDistance\0"
    "ScrollState\0ScrollStarted\0ScrollUpdated\0"
    "ScrollFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QScrollEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       1,   58, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    3, 0x0a /* Public */,
       8,    1,   46,    3, 0x0a /* Public */,
       4,    1,   49,    3, 0x0a /* Public */,
      11,    1,   52,    3, 0x0a /* Public */,
       7,    1,   55,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QPointF, QMetaType::QPointF, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::QPointF, 0x80000000 | 2,   10,
    QMetaType::QPointF, 0x80000000 | 2,   10,
    0x80000000 | 6, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
      12, 0x0,    3,   62,

 // enum data: key, value
      13, uint(PythonQtWrapper_QScrollEvent::ScrollStarted),
      14, uint(PythonQtWrapper_QScrollEvent::ScrollUpdated),
      15, uint(PythonQtWrapper_QScrollEvent::ScrollFinished),

       0        // eod
};

void PythonQtWrapper_QScrollEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QScrollEvent *_t = static_cast<PythonQtWrapper_QScrollEvent *>(_o);
        switch (_id) {
        case 0: { QScrollEvent* _r = _t->new_QScrollEvent((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< QScrollEvent::ScrollState(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QScrollEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QScrollEvent((*reinterpret_cast< QScrollEvent*(*)>(_a[1]))); break;
        case 2: { QPointF _r = _t->contentPos((*reinterpret_cast< QScrollEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 3: { QPointF _r = _t->overshootDistance((*reinterpret_cast< QScrollEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 4: { QScrollEvent::ScrollState _r = _t->scrollState((*reinterpret_cast< QScrollEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollEvent::ScrollState*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QScrollEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QScrollEvent.data,
      qt_meta_data_PythonQtWrapper_QScrollEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QScrollEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QScrollEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QScrollEvent.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QScrollEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QScrollEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QScrollPrepareEvent_t {
    QByteArrayData data[17];
    char stringdata[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QScrollPrepareEvent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QScrollPrepareEvent_t qt_meta_stringdata_PythonQtWrapper_QScrollPrepareEvent = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_QScrollPrepar..."
QT_MOC_LITERAL(1, 36, 23), // "new_QScrollPrepareEvent"
QT_MOC_LITERAL(2, 60, 20), // "QScrollPrepareEvent*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 8), // "startPos"
QT_MOC_LITERAL(5, 91, 26), // "delete_QScrollPrepareEvent"
QT_MOC_LITERAL(6, 118, 3), // "obj"
QT_MOC_LITERAL(7, 122, 10), // "contentPos"
QT_MOC_LITERAL(8, 133, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 150, 15), // "contentPosRange"
QT_MOC_LITERAL(10, 166, 13), // "setContentPos"
QT_MOC_LITERAL(11, 180, 3), // "pos"
QT_MOC_LITERAL(12, 184, 18), // "setContentPosRange"
QT_MOC_LITERAL(13, 203, 4), // "rect"
QT_MOC_LITERAL(14, 208, 15), // "setViewportSize"
QT_MOC_LITERAL(15, 224, 4), // "size"
QT_MOC_LITERAL(16, 229, 12) // "viewportSize"

    },
    "PythonQtWrapper_QScrollPrepareEvent\0"
    "new_QScrollPrepareEvent\0QScrollPrepareEvent*\0"
    "\0startPos\0delete_QScrollPrepareEvent\0"
    "obj\0contentPos\0theWrappedObject\0"
    "contentPosRange\0setContentPos\0pos\0"
    "setContentPosRange\0rect\0setViewportSize\0"
    "size\0viewportSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QScrollPrepareEvent[] = {

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
       1,    1,   59,    3, 0x0a /* Public */,
       5,    1,   62,    3, 0x0a /* Public */,
       7,    1,   65,    3, 0x0a /* Public */,
       9,    1,   68,    3, 0x0a /* Public */,
      10,    2,   71,    3, 0x0a /* Public */,
      12,    2,   76,    3, 0x0a /* Public */,
      14,    2,   81,    3, 0x0a /* Public */,
       4,    1,   86,    3, 0x0a /* Public */,
      16,    1,   89,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QPointF,    4,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::QPointF, 0x80000000 | 2,    8,
    QMetaType::QRectF, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QPointF,    8,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QRectF,    8,   13,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QSizeF,    8,   15,
    QMetaType::QPointF, 0x80000000 | 2,    8,
    QMetaType::QSizeF, 0x80000000 | 2,    8,

       0        // eod
};

void PythonQtWrapper_QScrollPrepareEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QScrollPrepareEvent *_t = static_cast<PythonQtWrapper_QScrollPrepareEvent *>(_o);
        switch (_id) {
        case 0: { QScrollPrepareEvent* _r = _t->new_QScrollPrepareEvent((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollPrepareEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QScrollPrepareEvent((*reinterpret_cast< QScrollPrepareEvent*(*)>(_a[1]))); break;
        case 2: { QPointF _r = _t->contentPos((*reinterpret_cast< QScrollPrepareEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 3: { QRectF _r = _t->contentPosRange((*reinterpret_cast< QScrollPrepareEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 4: _t->setContentPos((*reinterpret_cast< QScrollPrepareEvent*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 5: _t->setContentPosRange((*reinterpret_cast< QScrollPrepareEvent*(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 6: _t->setViewportSize((*reinterpret_cast< QScrollPrepareEvent*(*)>(_a[1])),(*reinterpret_cast< const QSizeF(*)>(_a[2]))); break;
        case 7: { QPointF _r = _t->startPos((*reinterpret_cast< QScrollPrepareEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 8: { QSizeF _r = _t->viewportSize((*reinterpret_cast< QScrollPrepareEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QScrollPrepareEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QScrollPrepareEvent.data,
      qt_meta_data_PythonQtWrapper_QScrollPrepareEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QScrollPrepareEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QScrollPrepareEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QScrollPrepareEvent.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QScrollPrepareEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QScrollPrepareEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QScroller_t {
    QByteArrayData data[45];
    char stringdata[728];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QScroller_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QScroller_t qt_meta_stringdata_PythonQtWrapper_QScroller = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QScroller"
QT_MOC_LITERAL(1, 26, 32), // "static_QScroller_activeScrollers"
QT_MOC_LITERAL(2, 59, 17), // "QList<QScroller*>"
QT_MOC_LITERAL(3, 77, 0), // ""
QT_MOC_LITERAL(4, 78, 13), // "finalPosition"
QT_MOC_LITERAL(5, 92, 10), // "QScroller*"
QT_MOC_LITERAL(6, 103, 16), // "theWrappedObject"
QT_MOC_LITERAL(7, 120, 28), // "static_QScroller_grabGesture"
QT_MOC_LITERAL(8, 149, 15), // "Qt::GestureType"
QT_MOC_LITERAL(9, 165, 6), // "target"
QT_MOC_LITERAL(10, 172, 30), // "QScroller::ScrollerGestureType"
QT_MOC_LITERAL(11, 203, 11), // "gestureType"
QT_MOC_LITERAL(12, 215, 31), // "static_QScroller_grabbedGesture"
QT_MOC_LITERAL(13, 247, 11), // "handleInput"
QT_MOC_LITERAL(14, 259, 16), // "QScroller::Input"
QT_MOC_LITERAL(15, 276, 5), // "input"
QT_MOC_LITERAL(16, 282, 8), // "position"
QT_MOC_LITERAL(17, 291, 9), // "timestamp"
QT_MOC_LITERAL(18, 301, 28), // "static_QScroller_hasScroller"
QT_MOC_LITERAL(19, 330, 13), // "pixelPerMeter"
QT_MOC_LITERAL(20, 344, 25), // "static_QScroller_scroller"
QT_MOC_LITERAL(21, 370, 16), // "const QScroller*"
QT_MOC_LITERAL(22, 387, 14), // "const QObject*"
QT_MOC_LITERAL(23, 402, 18), // "scrollerProperties"
QT_MOC_LITERAL(24, 421, 19), // "QScrollerProperties"
QT_MOC_LITERAL(25, 441, 17), // "setSnapPositionsX"
QT_MOC_LITERAL(26, 459, 12), // "QList<qreal>"
QT_MOC_LITERAL(27, 472, 9), // "positions"
QT_MOC_LITERAL(28, 482, 5), // "first"
QT_MOC_LITERAL(29, 488, 8), // "interval"
QT_MOC_LITERAL(30, 497, 17), // "setSnapPositionsY"
QT_MOC_LITERAL(31, 515, 5), // "state"
QT_MOC_LITERAL(32, 521, 16), // "QScroller::State"
QT_MOC_LITERAL(33, 538, 4), // "stop"
QT_MOC_LITERAL(34, 543, 30), // "static_QScroller_ungrabGesture"
QT_MOC_LITERAL(35, 574, 8), // "velocity"
QT_MOC_LITERAL(36, 583, 5), // "Input"
QT_MOC_LITERAL(37, 589, 10), // "InputPress"
QT_MOC_LITERAL(38, 600, 9), // "InputMove"
QT_MOC_LITERAL(39, 610, 12), // "InputRelease"
QT_MOC_LITERAL(40, 623, 19), // "ScrollerGestureType"
QT_MOC_LITERAL(41, 643, 12), // "TouchGesture"
QT_MOC_LITERAL(42, 656, 22), // "LeftMouseButtonGesture"
QT_MOC_LITERAL(43, 679, 23), // "RightMouseButtonGesture"
QT_MOC_LITERAL(44, 703, 24) // "MiddleMouseButtonGesture"

    },
    "PythonQtWrapper_QScroller\0"
    "static_QScroller_activeScrollers\0"
    "QList<QScroller*>\0\0finalPosition\0"
    "QScroller*\0theWrappedObject\0"
    "static_QScroller_grabGesture\0"
    "Qt::GestureType\0target\0"
    "QScroller::ScrollerGestureType\0"
    "gestureType\0static_QScroller_grabbedGesture\0"
    "handleInput\0QScroller::Input\0input\0"
    "position\0timestamp\0static_QScroller_hasScroller\0"
    "pixelPerMeter\0static_QScroller_scroller\0"
    "const QScroller*\0const QObject*\0"
    "scrollerProperties\0QScrollerProperties\0"
    "setSnapPositionsX\0QList<qreal>\0positions\0"
    "first\0interval\0setSnapPositionsY\0state\0"
    "QScroller::State\0stop\0"
    "static_QScroller_ungrabGesture\0velocity\0"
    "Input\0InputPress\0InputMove\0InputRelease\0"
    "ScrollerGestureType\0TouchGesture\0"
    "LeftMouseButtonGesture\0RightMouseButtonGesture\0"
    "MiddleMouseButtonGesture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QScroller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       2,  204, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  119,    3, 0x0a /* Public */,
       4,    1,  120,    3, 0x0a /* Public */,
       7,    2,  123,    3, 0x0a /* Public */,
       7,    1,  128,    3, 0x2a /* Public | MethodCloned */,
      12,    1,  131,    3, 0x0a /* Public */,
      13,    4,  134,    3, 0x0a /* Public */,
      13,    3,  143,    3, 0x2a /* Public | MethodCloned */,
      18,    1,  150,    3, 0x0a /* Public */,
      19,    1,  153,    3, 0x0a /* Public */,
      20,    1,  156,    3, 0x0a /* Public */,
      20,    1,  159,    3, 0x0a /* Public */,
      23,    1,  162,    3, 0x0a /* Public */,
      25,    2,  165,    3, 0x0a /* Public */,
      25,    3,  170,    3, 0x0a /* Public */,
      30,    2,  177,    3, 0x0a /* Public */,
      30,    3,  182,    3, 0x0a /* Public */,
      31,    1,  189,    3, 0x0a /* Public */,
      33,    1,  192,    3, 0x0a /* Public */,
       9,    1,  195,    3, 0x0a /* Public */,
      34,    1,  198,    3, 0x0a /* Public */,
      35,    1,  201,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::QPointF, 0x80000000 | 5,    6,
    0x80000000 | 8, QMetaType::QObjectStar, 0x80000000 | 10,    9,   11,
    0x80000000 | 8, QMetaType::QObjectStar,    9,
    0x80000000 | 8, QMetaType::QObjectStar,    9,
    QMetaType::Bool, 0x80000000 | 5, 0x80000000 | 14, QMetaType::QPointF, QMetaType::LongLong,    6,   15,   16,   17,
    QMetaType::Bool, 0x80000000 | 5, 0x80000000 | 14, QMetaType::QPointF,    6,   15,   16,
    QMetaType::Bool, QMetaType::QObjectStar,    9,
    QMetaType::QPointF, 0x80000000 | 5,    6,
    0x80000000 | 5, QMetaType::QObjectStar,    9,
    0x80000000 | 21, 0x80000000 | 22,    9,
    0x80000000 | 24, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 26,    6,   27,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QReal, QMetaType::QReal,    6,   28,   29,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 26,    6,   27,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QReal, QMetaType::QReal,    6,   28,   29,
    0x80000000 | 32, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::QObjectStar, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::QPointF, 0x80000000 | 5,    6,

 // enums: name, flags, count, data
      36, 0x0,    3,  212,
      40, 0x0,    4,  218,

 // enum data: key, value
      37, uint(PythonQtWrapper_QScroller::InputPress),
      38, uint(PythonQtWrapper_QScroller::InputMove),
      39, uint(PythonQtWrapper_QScroller::InputRelease),
      41, uint(PythonQtWrapper_QScroller::TouchGesture),
      42, uint(PythonQtWrapper_QScroller::LeftMouseButtonGesture),
      43, uint(PythonQtWrapper_QScroller::RightMouseButtonGesture),
      44, uint(PythonQtWrapper_QScroller::MiddleMouseButtonGesture),

       0        // eod
};

void PythonQtWrapper_QScroller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QScroller *_t = static_cast<PythonQtWrapper_QScroller *>(_o);
        switch (_id) {
        case 0: { QList<QScroller*> _r = _t->static_QScroller_activeScrollers();
            if (_a[0]) *reinterpret_cast< QList<QScroller*>*>(_a[0]) = _r; }  break;
        case 1: { QPointF _r = _t->finalPosition((*reinterpret_cast< QScroller*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 2: { Qt::GestureType _r = _t->static_QScroller_grabGesture((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QScroller::ScrollerGestureType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::GestureType*>(_a[0]) = _r; }  break;
        case 3: { Qt::GestureType _r = _t->static_QScroller_grabGesture((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::GestureType*>(_a[0]) = _r; }  break;
        case 4: { Qt::GestureType _r = _t->static_QScroller_grabbedGesture((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::GestureType*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->handleInput((*reinterpret_cast< QScroller*(*)>(_a[1])),(*reinterpret_cast< QScroller::Input(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->handleInput((*reinterpret_cast< QScroller*(*)>(_a[1])),(*reinterpret_cast< QScroller::Input(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->static_QScroller_hasScroller((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QPointF _r = _t->pixelPerMeter((*reinterpret_cast< QScroller*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 9: { QScroller* _r = _t->static_QScroller_scroller((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScroller**>(_a[0]) = _r; }  break;
        case 10: { const QScroller* _r = _t->static_QScroller_scroller((*reinterpret_cast< const QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QScroller**>(_a[0]) = _r; }  break;
        case 11: { QScrollerProperties _r = _t->scrollerProperties((*reinterpret_cast< QScroller*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollerProperties*>(_a[0]) = _r; }  break;
        case 12: _t->setSnapPositionsX((*reinterpret_cast< QScroller*(*)>(_a[1])),(*reinterpret_cast< const QList<qreal>(*)>(_a[2]))); break;
        case 13: _t->setSnapPositionsX((*reinterpret_cast< QScroller*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 14: _t->setSnapPositionsY((*reinterpret_cast< QScroller*(*)>(_a[1])),(*reinterpret_cast< const QList<qreal>(*)>(_a[2]))); break;
        case 15: _t->setSnapPositionsY((*reinterpret_cast< QScroller*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 16: { QScroller::State _r = _t->state((*reinterpret_cast< QScroller*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScroller::State*>(_a[0]) = _r; }  break;
        case 17: _t->stop((*reinterpret_cast< QScroller*(*)>(_a[1]))); break;
        case 18: { QObject* _r = _t->target((*reinterpret_cast< QScroller*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 19: _t->static_QScroller_ungrabGesture((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 20: { QPointF _r = _t->velocity((*reinterpret_cast< QScroller*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qreal> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qreal> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScroller* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QScroller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QScroller.data,
      qt_meta_data_PythonQtWrapper_QScroller,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QScroller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QScroller::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QScroller.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QScroller*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QScroller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QScrollerProperties_t {
    QByteArrayData data[50];
    char stringdata[953];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QScrollerProperties_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QScrollerProperties_t qt_meta_stringdata_PythonQtWrapper_QScrollerProperties = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_QScrollerProp..."
QT_MOC_LITERAL(1, 36, 23), // "new_QScrollerProperties"
QT_MOC_LITERAL(2, 60, 20), // "QScrollerProperties*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 19), // "QScrollerProperties"
QT_MOC_LITERAL(5, 102, 2), // "sp"
QT_MOC_LITERAL(6, 105, 26), // "delete_QScrollerProperties"
QT_MOC_LITERAL(7, 132, 3), // "obj"
QT_MOC_LITERAL(8, 136, 6), // "__ne__"
QT_MOC_LITERAL(9, 143, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 160, 15), // "operator_assign"
QT_MOC_LITERAL(11, 176, 6), // "__eq__"
QT_MOC_LITERAL(12, 183, 12), // "scrollMetric"
QT_MOC_LITERAL(13, 196, 33), // "QScrollerProperties::ScrollMe..."
QT_MOC_LITERAL(14, 230, 6), // "metric"
QT_MOC_LITERAL(15, 237, 55), // "static_QScrollerProperties_se..."
QT_MOC_LITERAL(16, 293, 15), // "setScrollMetric"
QT_MOC_LITERAL(17, 309, 5), // "value"
QT_MOC_LITERAL(18, 315, 57), // "static_QScrollerProperties_un..."
QT_MOC_LITERAL(19, 373, 10), // "FrameRates"
QT_MOC_LITERAL(20, 384, 8), // "Standard"
QT_MOC_LITERAL(21, 393, 5), // "Fps60"
QT_MOC_LITERAL(22, 399, 5), // "Fps30"
QT_MOC_LITERAL(23, 405, 5), // "Fps20"
QT_MOC_LITERAL(24, 411, 15), // "OvershootPolicy"
QT_MOC_LITERAL(25, 427, 23), // "OvershootWhenScrollable"
QT_MOC_LITERAL(26, 451, 18), // "OvershootAlwaysOff"
QT_MOC_LITERAL(27, 470, 17), // "OvershootAlwaysOn"
QT_MOC_LITERAL(28, 488, 12), // "ScrollMetric"
QT_MOC_LITERAL(29, 501, 20), // "MousePressEventDelay"
QT_MOC_LITERAL(30, 522, 17), // "DragStartDistance"
QT_MOC_LITERAL(31, 540, 27), // "DragVelocitySmoothingFactor"
QT_MOC_LITERAL(32, 568, 17), // "AxisLockThreshold"
QT_MOC_LITERAL(33, 586, 14), // "ScrollingCurve"
QT_MOC_LITERAL(34, 601, 18), // "DecelerationFactor"
QT_MOC_LITERAL(35, 620, 15), // "MinimumVelocity"
QT_MOC_LITERAL(36, 636, 15), // "MaximumVelocity"
QT_MOC_LITERAL(37, 652, 27), // "MaximumClickThroughVelocity"
QT_MOC_LITERAL(38, 680, 28), // "AcceleratingFlickMaximumTime"
QT_MOC_LITERAL(39, 709, 30), // "AcceleratingFlickSpeedupFactor"
QT_MOC_LITERAL(40, 740, 17), // "SnapPositionRatio"
QT_MOC_LITERAL(41, 758, 8), // "SnapTime"
QT_MOC_LITERAL(42, 767, 29), // "OvershootDragResistanceFactor"
QT_MOC_LITERAL(43, 797, 27), // "OvershootDragDistanceFactor"
QT_MOC_LITERAL(44, 825, 29), // "OvershootScrollDistanceFactor"
QT_MOC_LITERAL(45, 855, 19), // "OvershootScrollTime"
QT_MOC_LITERAL(46, 875, 25), // "HorizontalOvershootPolicy"
QT_MOC_LITERAL(47, 901, 23), // "VerticalOvershootPolicy"
QT_MOC_LITERAL(48, 925, 9), // "FrameRate"
QT_MOC_LITERAL(49, 935, 17) // "ScrollMetricCount"

    },
    "PythonQtWrapper_QScrollerProperties\0"
    "new_QScrollerProperties\0QScrollerProperties*\0"
    "\0QScrollerProperties\0sp\0"
    "delete_QScrollerProperties\0obj\0__ne__\0"
    "theWrappedObject\0operator_assign\0"
    "__eq__\0scrollMetric\0"
    "QScrollerProperties::ScrollMetric\0"
    "metric\0static_QScrollerProperties_setDefaultScrollerProperties\0"
    "setScrollMetric\0value\0"
    "static_QScrollerProperties_unsetDefaultScrollerProperties\0"
    "FrameRates\0Standard\0Fps60\0Fps30\0Fps20\0"
    "OvershootPolicy\0OvershootWhenScrollable\0"
    "OvershootAlwaysOff\0OvershootAlwaysOn\0"
    "ScrollMetric\0MousePressEventDelay\0"
    "DragStartDistance\0DragVelocitySmoothingFactor\0"
    "AxisLockThreshold\0ScrollingCurve\0"
    "DecelerationFactor\0MinimumVelocity\0"
    "MaximumVelocity\0MaximumClickThroughVelocity\0"
    "AcceleratingFlickMaximumTime\0"
    "AcceleratingFlickSpeedupFactor\0"
    "SnapPositionRatio\0SnapTime\0"
    "OvershootDragResistanceFactor\0"
    "OvershootDragDistanceFactor\0"
    "OvershootScrollDistanceFactor\0"
    "OvershootScrollTime\0HorizontalOvershootPolicy\0"
    "VerticalOvershootPolicy\0FrameRate\0"
    "ScrollMetricCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QScrollerProperties[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       3,  102, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    3, 0x0a /* Public */,
       1,    1,   65,    3, 0x0a /* Public */,
       6,    1,   68,    3, 0x0a /* Public */,
       8,    2,   71,    3, 0x0a /* Public */,
      10,    2,   76,    3, 0x0a /* Public */,
      11,    2,   81,    3, 0x0a /* Public */,
      12,    2,   86,    3, 0x0a /* Public */,
      15,    1,   91,    3, 0x0a /* Public */,
      16,    3,   94,    3, 0x0a /* Public */,
      18,    0,  101,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 13,    9,   14,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13, QMetaType::QVariant,    9,   14,   17,
    QMetaType::Void,

 // enums: name, flags, count, data
      19, 0x0,    4,  114,
      24, 0x0,    3,  122,
      28, 0x0,   21,  128,

 // enum data: key, value
      20, uint(PythonQtWrapper_QScrollerProperties::Standard),
      21, uint(PythonQtWrapper_QScrollerProperties::Fps60),
      22, uint(PythonQtWrapper_QScrollerProperties::Fps30),
      23, uint(PythonQtWrapper_QScrollerProperties::Fps20),
      25, uint(PythonQtWrapper_QScrollerProperties::OvershootWhenScrollable),
      26, uint(PythonQtWrapper_QScrollerProperties::OvershootAlwaysOff),
      27, uint(PythonQtWrapper_QScrollerProperties::OvershootAlwaysOn),
      29, uint(PythonQtWrapper_QScrollerProperties::MousePressEventDelay),
      30, uint(PythonQtWrapper_QScrollerProperties::DragStartDistance),
      31, uint(PythonQtWrapper_QScrollerProperties::DragVelocitySmoothingFactor),
      32, uint(PythonQtWrapper_QScrollerProperties::AxisLockThreshold),
      33, uint(PythonQtWrapper_QScrollerProperties::ScrollingCurve),
      34, uint(PythonQtWrapper_QScrollerProperties::DecelerationFactor),
      35, uint(PythonQtWrapper_QScrollerProperties::MinimumVelocity),
      36, uint(PythonQtWrapper_QScrollerProperties::MaximumVelocity),
      37, uint(PythonQtWrapper_QScrollerProperties::MaximumClickThroughVelocity),
      38, uint(PythonQtWrapper_QScrollerProperties::AcceleratingFlickMaximumTime),
      39, uint(PythonQtWrapper_QScrollerProperties::AcceleratingFlickSpeedupFactor),
      40, uint(PythonQtWrapper_QScrollerProperties::SnapPositionRatio),
      41, uint(PythonQtWrapper_QScrollerProperties::SnapTime),
      42, uint(PythonQtWrapper_QScrollerProperties::OvershootDragResistanceFactor),
      43, uint(PythonQtWrapper_QScrollerProperties::OvershootDragDistanceFactor),
      44, uint(PythonQtWrapper_QScrollerProperties::OvershootScrollDistanceFactor),
      45, uint(PythonQtWrapper_QScrollerProperties::OvershootScrollTime),
      46, uint(PythonQtWrapper_QScrollerProperties::HorizontalOvershootPolicy),
      47, uint(PythonQtWrapper_QScrollerProperties::VerticalOvershootPolicy),
      48, uint(PythonQtWrapper_QScrollerProperties::FrameRate),
      49, uint(PythonQtWrapper_QScrollerProperties::ScrollMetricCount),

       0        // eod
};

void PythonQtWrapper_QScrollerProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QScrollerProperties *_t = static_cast<PythonQtWrapper_QScrollerProperties *>(_o);
        switch (_id) {
        case 0: { QScrollerProperties* _r = _t->new_QScrollerProperties();
            if (_a[0]) *reinterpret_cast< QScrollerProperties**>(_a[0]) = _r; }  break;
        case 1: { QScrollerProperties* _r = _t->new_QScrollerProperties((*reinterpret_cast< const QScrollerProperties(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScrollerProperties**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QScrollerProperties((*reinterpret_cast< QScrollerProperties*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__ne__((*reinterpret_cast< QScrollerProperties*(*)>(_a[1])),(*reinterpret_cast< const QScrollerProperties(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QScrollerProperties* _r = _t->operator_assign((*reinterpret_cast< QScrollerProperties*(*)>(_a[1])),(*reinterpret_cast< const QScrollerProperties(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScrollerProperties**>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__eq__((*reinterpret_cast< QScrollerProperties*(*)>(_a[1])),(*reinterpret_cast< const QScrollerProperties(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->scrollMetric((*reinterpret_cast< QScrollerProperties*(*)>(_a[1])),(*reinterpret_cast< QScrollerProperties::ScrollMetric(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: _t->static_QScrollerProperties_setDefaultScrollerProperties((*reinterpret_cast< const QScrollerProperties(*)>(_a[1]))); break;
        case 8: _t->setScrollMetric((*reinterpret_cast< QScrollerProperties*(*)>(_a[1])),(*reinterpret_cast< QScrollerProperties::ScrollMetric(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 9: _t->static_QScrollerProperties_unsetDefaultScrollerProperties(); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QScrollerProperties::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QScrollerProperties.data,
      qt_meta_data_PythonQtWrapper_QScrollerProperties,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QScrollerProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QScrollerProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QScrollerProperties.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QScrollerProperties*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QScrollerProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSessionManager_t {
    QByteArrayData data[28];
    char stringdata[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSessionManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSessionManager_t qt_meta_stringdata_PythonQtWrapper_QSessionManager = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QSessionManager"
QT_MOC_LITERAL(1, 32, 22), // "allowsErrorInteraction"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 16), // "QSessionManager*"
QT_MOC_LITERAL(4, 73, 16), // "theWrappedObject"
QT_MOC_LITERAL(5, 90, 17), // "allowsInteraction"
QT_MOC_LITERAL(6, 108, 6), // "cancel"
QT_MOC_LITERAL(7, 115, 14), // "discardCommand"
QT_MOC_LITERAL(8, 130, 8), // "isPhase2"
QT_MOC_LITERAL(9, 139, 7), // "release"
QT_MOC_LITERAL(10, 147, 13), // "requestPhase2"
QT_MOC_LITERAL(11, 161, 14), // "restartCommand"
QT_MOC_LITERAL(12, 176, 11), // "restartHint"
QT_MOC_LITERAL(13, 188, 28), // "QSessionManager::RestartHint"
QT_MOC_LITERAL(14, 217, 9), // "sessionId"
QT_MOC_LITERAL(15, 227, 10), // "sessionKey"
QT_MOC_LITERAL(16, 238, 17), // "setDiscardCommand"
QT_MOC_LITERAL(17, 256, 6), // "arg__1"
QT_MOC_LITERAL(18, 263, 18), // "setManagerProperty"
QT_MOC_LITERAL(19, 282, 4), // "name"
QT_MOC_LITERAL(20, 287, 5), // "value"
QT_MOC_LITERAL(21, 293, 17), // "setRestartCommand"
QT_MOC_LITERAL(22, 311, 14), // "setRestartHint"
QT_MOC_LITERAL(23, 326, 11), // "RestartHint"
QT_MOC_LITERAL(24, 338, 16), // "RestartIfRunning"
QT_MOC_LITERAL(25, 355, 13), // "RestartAnyway"
QT_MOC_LITERAL(26, 369, 18), // "RestartImmediately"
QT_MOC_LITERAL(27, 388, 12) // "RestartNever"

    },
    "PythonQtWrapper_QSessionManager\0"
    "allowsErrorInteraction\0\0QSessionManager*\0"
    "theWrappedObject\0allowsInteraction\0"
    "cancel\0discardCommand\0isPhase2\0release\0"
    "requestPhase2\0restartCommand\0restartHint\0"
    "QSessionManager::RestartHint\0sessionId\0"
    "sessionKey\0setDiscardCommand\0arg__1\0"
    "setManagerProperty\0name\0value\0"
    "setRestartCommand\0setRestartHint\0"
    "RestartHint\0RestartIfRunning\0RestartAnyway\0"
    "RestartImmediately\0RestartNever"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSessionManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       1,  156, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       5,    1,   97,    2, 0x0a /* Public */,
       6,    1,  100,    2, 0x0a /* Public */,
       7,    1,  103,    2, 0x0a /* Public */,
       8,    1,  106,    2, 0x0a /* Public */,
       9,    1,  109,    2, 0x0a /* Public */,
      10,    1,  112,    2, 0x0a /* Public */,
      11,    1,  115,    2, 0x0a /* Public */,
      12,    1,  118,    2, 0x0a /* Public */,
      14,    1,  121,    2, 0x0a /* Public */,
      15,    1,  124,    2, 0x0a /* Public */,
      16,    2,  127,    2, 0x0a /* Public */,
      18,    3,  132,    2, 0x0a /* Public */,
      18,    3,  139,    2, 0x0a /* Public */,
      21,    2,  146,    2, 0x0a /* Public */,
      22,    2,  151,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::QStringList, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::QStringList, 0x80000000 | 3,    4,
    0x80000000 | 13, 0x80000000 | 3,    4,
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    4,   17,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,   19,   20,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QStringList,    4,   19,   20,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    4,   17,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13,    4,   17,

 // enums: name, flags, count, data
      23, 0x0,    4,  160,

 // enum data: key, value
      24, uint(PythonQtWrapper_QSessionManager::RestartIfRunning),
      25, uint(PythonQtWrapper_QSessionManager::RestartAnyway),
      26, uint(PythonQtWrapper_QSessionManager::RestartImmediately),
      27, uint(PythonQtWrapper_QSessionManager::RestartNever),

       0        // eod
};

void PythonQtWrapper_QSessionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSessionManager *_t = static_cast<PythonQtWrapper_QSessionManager *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->allowsErrorInteraction((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->allowsInteraction((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->cancel((*reinterpret_cast< QSessionManager*(*)>(_a[1]))); break;
        case 3: { QStringList _r = _t->discardCommand((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isPhase2((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->release((*reinterpret_cast< QSessionManager*(*)>(_a[1]))); break;
        case 6: _t->requestPhase2((*reinterpret_cast< QSessionManager*(*)>(_a[1]))); break;
        case 7: { QStringList _r = _t->restartCommand((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 8: { QSessionManager::RestartHint _r = _t->restartHint((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSessionManager::RestartHint*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->sessionId((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->sessionKey((*reinterpret_cast< QSessionManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: _t->setDiscardCommand((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 12: _t->setManagerProperty((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: _t->setManagerProperty((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 14: _t->setRestartCommand((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 15: _t->setRestartHint((*reinterpret_cast< QSessionManager*(*)>(_a[1])),(*reinterpret_cast< QSessionManager::RestartHint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSessionManager* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSessionManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSessionManager.data,
      qt_meta_data_PythonQtWrapper_QSessionManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSessionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSessionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSessionManager.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSessionManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSessionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QShortcut_t {
    QByteArrayData data[31];
    char stringdata[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QShortcut_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QShortcut_t qt_meta_stringdata_PythonQtWrapper_QShortcut = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QShortcut"
QT_MOC_LITERAL(1, 26, 13), // "new_QShortcut"
QT_MOC_LITERAL(2, 40, 10), // "QShortcut*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 8), // "QWidget*"
QT_MOC_LITERAL(5, 61, 6), // "parent"
QT_MOC_LITERAL(6, 68, 3), // "key"
QT_MOC_LITERAL(7, 72, 11), // "const char*"
QT_MOC_LITERAL(8, 84, 6), // "member"
QT_MOC_LITERAL(9, 91, 15), // "ambiguousMember"
QT_MOC_LITERAL(10, 107, 19), // "Qt::ShortcutContext"
QT_MOC_LITERAL(11, 127, 7), // "context"
QT_MOC_LITERAL(12, 135, 16), // "delete_QShortcut"
QT_MOC_LITERAL(13, 152, 3), // "obj"
QT_MOC_LITERAL(14, 156, 10), // "autoRepeat"
QT_MOC_LITERAL(15, 167, 16), // "theWrappedObject"
QT_MOC_LITERAL(16, 184, 5), // "event"
QT_MOC_LITERAL(17, 190, 7), // "QEvent*"
QT_MOC_LITERAL(18, 198, 1), // "e"
QT_MOC_LITERAL(19, 200, 2), // "id"
QT_MOC_LITERAL(20, 203, 9), // "isEnabled"
QT_MOC_LITERAL(21, 213, 12), // "parentWidget"
QT_MOC_LITERAL(22, 226, 13), // "setAutoRepeat"
QT_MOC_LITERAL(23, 240, 2), // "on"
QT_MOC_LITERAL(24, 243, 10), // "setContext"
QT_MOC_LITERAL(25, 254, 10), // "setEnabled"
QT_MOC_LITERAL(26, 265, 6), // "enable"
QT_MOC_LITERAL(27, 272, 6), // "setKey"
QT_MOC_LITERAL(28, 279, 12), // "setWhatsThis"
QT_MOC_LITERAL(29, 292, 4), // "text"
QT_MOC_LITERAL(30, 297, 9) // "whatsThis"

    },
    "PythonQtWrapper_QShortcut\0new_QShortcut\0"
    "QShortcut*\0\0QWidget*\0parent\0key\0"
    "const char*\0member\0ambiguousMember\0"
    "Qt::ShortcutContext\0context\0"
    "delete_QShortcut\0obj\0autoRepeat\0"
    "theWrappedObject\0event\0QEvent*\0e\0id\0"
    "isEnabled\0parentWidget\0setAutoRepeat\0"
    "on\0setContext\0setEnabled\0enable\0setKey\0"
    "setWhatsThis\0text\0whatsThis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QShortcut[] = {

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
       1,    1,  109,    3, 0x0a /* Public */,
       1,    5,  112,    3, 0x0a /* Public */,
       1,    4,  123,    3, 0x2a /* Public | MethodCloned */,
       1,    3,  132,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  139,    3, 0x2a /* Public | MethodCloned */,
      12,    1,  144,    3, 0x0a /* Public */,
      14,    1,  147,    3, 0x0a /* Public */,
      11,    1,  150,    3, 0x0a /* Public */,
      16,    2,  153,    3, 0x0a /* Public */,
      19,    1,  158,    3, 0x0a /* Public */,
      20,    1,  161,    3, 0x0a /* Public */,
       6,    1,  164,    3, 0x0a /* Public */,
      21,    1,  167,    3, 0x0a /* Public */,
      22,    2,  170,    3, 0x0a /* Public */,
      24,    2,  175,    3, 0x0a /* Public */,
      25,    2,  180,    3, 0x0a /* Public */,
      27,    2,  185,    3, 0x0a /* Public */,
      28,    2,  190,    3, 0x0a /* Public */,
      30,    1,  195,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QKeySequence, 0x80000000 | 4, 0x80000000 | 7, 0x80000000 | 7, 0x80000000 | 10,    6,    5,    8,    9,   11,
    0x80000000 | 2, QMetaType::QKeySequence, 0x80000000 | 4, 0x80000000 | 7, 0x80000000 | 7,    6,    5,    8,    9,
    0x80000000 | 2, QMetaType::QKeySequence, 0x80000000 | 4, 0x80000000 | 7,    6,    5,    8,
    0x80000000 | 2, QMetaType::QKeySequence, 0x80000000 | 4,    6,    5,
    QMetaType::Void, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   15,
    0x80000000 | 10, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 17,   15,   18,
    QMetaType::Int, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::QKeySequence, 0x80000000 | 2,   15,
    0x80000000 | 4, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   15,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,   15,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   15,   26,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QKeySequence,   15,    6,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   15,   29,
    QMetaType::QString, 0x80000000 | 2,   15,

       0        // eod
};

void PythonQtWrapper_QShortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QShortcut *_t = static_cast<PythonQtWrapper_QShortcut *>(_o);
        switch (_id) {
        case 0: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 1: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])),(*reinterpret_cast< Qt::ShortcutContext(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 2: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])),(*reinterpret_cast< const char*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 3: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 4: { QShortcut* _r = _t->new_QShortcut((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QShortcut**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QShortcut((*reinterpret_cast< QShortcut*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->autoRepeat((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { Qt::ShortcutContext _r = _t->context((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ShortcutContext*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->event((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->id((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isEnabled((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QKeySequence _r = _t->key((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QKeySequence*>(_a[0]) = _r; }  break;
        case 12: { QWidget* _r = _t->parentWidget((*reinterpret_cast< QShortcut*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 13: _t->setAutoRepeat((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->setContext((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< Qt::ShortcutContext(*)>(_a[2]))); break;
        case 15: _t->setEnabled((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->setKey((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< const QKeySequence(*)>(_a[2]))); break;
        case 17: _t->setWhatsThis((*reinterpret_cast< QShortcut*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: { QString _r = _t->whatsThis((*reinterpret_cast< QShortcut*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QShortcut* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QShortcut::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QShortcut.data,
      qt_meta_data_PythonQtWrapper_QShortcut,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QShortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QShortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QShortcut.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QShortcut*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QShortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QShortcutEvent_t {
    QByteArrayData data[13];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QShortcutEvent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QShortcutEvent_t qt_meta_stringdata_PythonQtWrapper_QShortcutEvent = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QShortcutEvent"
QT_MOC_LITERAL(1, 31, 18), // "new_QShortcutEvent"
QT_MOC_LITERAL(2, 50, 15), // "QShortcutEvent*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 3), // "key"
QT_MOC_LITERAL(5, 71, 2), // "id"
QT_MOC_LITERAL(6, 74, 9), // "ambiguous"
QT_MOC_LITERAL(7, 84, 21), // "delete_QShortcutEvent"
QT_MOC_LITERAL(8, 106, 3), // "obj"
QT_MOC_LITERAL(9, 110, 11), // "isAmbiguous"
QT_MOC_LITERAL(10, 122, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 139, 19), // "const QKeySequence*"
QT_MOC_LITERAL(12, 159, 10) // "shortcutId"

    },
    "PythonQtWrapper_QShortcutEvent\0"
    "new_QShortcutEvent\0QShortcutEvent*\0\0"
    "key\0id\0ambiguous\0delete_QShortcutEvent\0"
    "obj\0isAmbiguous\0theWrappedObject\0"
    "const QKeySequence*\0shortcutId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QShortcutEvent[] = {

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
       1,    3,   44,    3, 0x0a /* Public */,
       1,    2,   51,    3, 0x2a /* Public | MethodCloned */,
       7,    1,   56,    3, 0x0a /* Public */,
       9,    1,   59,    3, 0x0a /* Public */,
       4,    1,   62,    3, 0x0a /* Public */,
      12,    1,   65,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QKeySequence, QMetaType::Int, QMetaType::Bool,    4,    5,    6,
    0x80000000 | 2, QMetaType::QKeySequence, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,   10,
    0x80000000 | 11, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QShortcutEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QShortcutEvent *_t = static_cast<PythonQtWrapper_QShortcutEvent *>(_o);
        switch (_id) {
        case 0: { QShortcutEvent* _r = _t->new_QShortcutEvent((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QShortcutEvent**>(_a[0]) = _r; }  break;
        case 1: { QShortcutEvent* _r = _t->new_QShortcutEvent((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QShortcutEvent**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QShortcutEvent((*reinterpret_cast< QShortcutEvent*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isAmbiguous((*reinterpret_cast< QShortcutEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { const QKeySequence* _r = _t->key((*reinterpret_cast< QShortcutEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QKeySequence**>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->shortcutId((*reinterpret_cast< QShortcutEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QShortcutEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QShortcutEvent.data,
      qt_meta_data_PythonQtWrapper_QShortcutEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QShortcutEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QShortcutEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QShortcutEvent.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QShortcutEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QShortcutEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QShowEvent_t {
    QByteArrayData data[6];
    char stringdata[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QShowEvent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QShowEvent_t qt_meta_stringdata_PythonQtWrapper_QShowEvent = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QShowEvent"
QT_MOC_LITERAL(1, 27, 14), // "new_QShowEvent"
QT_MOC_LITERAL(2, 42, 11), // "QShowEvent*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 17), // "delete_QShowEvent"
QT_MOC_LITERAL(5, 73, 3) // "obj"

    },
    "PythonQtWrapper_QShowEvent\0new_QShowEvent\0"
    "QShowEvent*\0\0delete_QShowEvent\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QShowEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    3, 0x0a /* Public */,
       4,    1,   25,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,

       0        // eod
};

void PythonQtWrapper_QShowEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QShowEvent *_t = static_cast<PythonQtWrapper_QShowEvent *>(_o);
        switch (_id) {
        case 0: { QShowEvent* _r = _t->new_QShowEvent();
            if (_a[0]) *reinterpret_cast< QShowEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QShowEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QShowEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QShowEvent.data,
      qt_meta_data_PythonQtWrapper_QShowEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QShowEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QShowEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QShowEvent.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QShowEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QShowEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSizeGrip_t {
    QByteArrayData data[29];
    char stringdata[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSizeGrip_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSizeGrip_t qt_meta_stringdata_PythonQtWrapper_QSizeGrip = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QSizeGrip"
QT_MOC_LITERAL(1, 26, 13), // "new_QSizeGrip"
QT_MOC_LITERAL(2, 40, 10), // "QSizeGrip*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 8), // "QWidget*"
QT_MOC_LITERAL(5, 61, 6), // "parent"
QT_MOC_LITERAL(6, 68, 16), // "delete_QSizeGrip"
QT_MOC_LITERAL(7, 85, 3), // "obj"
QT_MOC_LITERAL(8, 89, 5), // "event"
QT_MOC_LITERAL(9, 95, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 112, 7), // "QEvent*"
QT_MOC_LITERAL(11, 120, 6), // "arg__1"
QT_MOC_LITERAL(12, 127, 11), // "eventFilter"
QT_MOC_LITERAL(13, 139, 6), // "arg__2"
QT_MOC_LITERAL(14, 146, 9), // "hideEvent"
QT_MOC_LITERAL(15, 156, 11), // "QHideEvent*"
QT_MOC_LITERAL(16, 168, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(17, 183, 12), // "QMouseEvent*"
QT_MOC_LITERAL(18, 196, 15), // "mousePressEvent"
QT_MOC_LITERAL(19, 212, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(20, 230, 10), // "mouseEvent"
QT_MOC_LITERAL(21, 241, 9), // "moveEvent"
QT_MOC_LITERAL(22, 251, 11), // "QMoveEvent*"
QT_MOC_LITERAL(23, 263, 10), // "paintEvent"
QT_MOC_LITERAL(24, 274, 12), // "QPaintEvent*"
QT_MOC_LITERAL(25, 287, 10), // "setVisible"
QT_MOC_LITERAL(26, 298, 9), // "showEvent"
QT_MOC_LITERAL(27, 308, 11), // "QShowEvent*"
QT_MOC_LITERAL(28, 320, 8) // "sizeHint"

    },
    "PythonQtWrapper_QSizeGrip\0new_QSizeGrip\0"
    "QSizeGrip*\0\0QWidget*\0parent\0"
    "delete_QSizeGrip\0obj\0event\0theWrappedObject\0"
    "QEvent*\0arg__1\0eventFilter\0arg__2\0"
    "hideEvent\0QHideEvent*\0mouseMoveEvent\0"
    "QMouseEvent*\0mousePressEvent\0"
    "mouseReleaseEvent\0mouseEvent\0moveEvent\0"
    "QMoveEvent*\0paintEvent\0QPaintEvent*\0"
    "setVisible\0showEvent\0QShowEvent*\0"
    "sizeHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSizeGrip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    3, 0x0a /* Public */,
       6,    1,   82,    3, 0x0a /* Public */,
       8,    2,   85,    3, 0x0a /* Public */,
      12,    3,   90,    3, 0x0a /* Public */,
      14,    2,   97,    3, 0x0a /* Public */,
      16,    2,  102,    3, 0x0a /* Public */,
      18,    2,  107,    3, 0x0a /* Public */,
      19,    2,  112,    3, 0x0a /* Public */,
      21,    2,  117,    3, 0x0a /* Public */,
      23,    2,  122,    3, 0x0a /* Public */,
      25,    2,  127,    3, 0x0a /* Public */,
      26,    2,  132,    3, 0x0a /* Public */,
      28,    1,  137,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QObjectStar, 0x80000000 | 10,    9,   11,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 15,    9,   14,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17,    9,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17,    9,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17,    9,   20,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,    9,   21,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,    9,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 27,    9,   26,
    QMetaType::QSize, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QSizeGrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSizeGrip *_t = static_cast<PythonQtWrapper_QSizeGrip *>(_o);
        switch (_id) {
        case 0: { QSizeGrip* _r = _t->new_QSizeGrip((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeGrip**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSizeGrip((*reinterpret_cast< QSizeGrip*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->event((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->eventFilter((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->hideEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QHideEvent*(*)>(_a[2]))); break;
        case 5: _t->mouseMoveEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 6: _t->mousePressEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 7: _t->mouseReleaseEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 8: _t->moveEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QMoveEvent*(*)>(_a[2]))); break;
        case 9: _t->paintEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 10: _t->setVisible((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->showEvent((*reinterpret_cast< QSizeGrip*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 12: { QSize _r = _t->sizeHint((*reinterpret_cast< QSizeGrip*(*)>(_a[1])));
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSizeGrip* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSizeGrip::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSizeGrip.data,
      qt_meta_data_PythonQtWrapper_QSizeGrip,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSizeGrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSizeGrip::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSizeGrip.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSizeGrip*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSizeGrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSlider_t {
    QByteArrayData data[32];
    char stringdata[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSlider_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSlider_t qt_meta_stringdata_PythonQtWrapper_QSlider = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PythonQtWrapper_QSlider"
QT_MOC_LITERAL(1, 24, 11), // "new_QSlider"
QT_MOC_LITERAL(2, 36, 8), // "QSlider*"
QT_MOC_LITERAL(3, 45, 0), // ""
QT_MOC_LITERAL(4, 46, 8), // "QWidget*"
QT_MOC_LITERAL(5, 55, 6), // "parent"
QT_MOC_LITERAL(6, 62, 15), // "Qt::Orientation"
QT_MOC_LITERAL(7, 78, 11), // "orientation"
QT_MOC_LITERAL(8, 90, 14), // "delete_QSlider"
QT_MOC_LITERAL(9, 105, 3), // "obj"
QT_MOC_LITERAL(10, 109, 5), // "event"
QT_MOC_LITERAL(11, 115, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 132, 7), // "QEvent*"
QT_MOC_LITERAL(13, 140, 15), // "initStyleOption"
QT_MOC_LITERAL(14, 156, 19), // "QStyleOptionSlider*"
QT_MOC_LITERAL(15, 176, 6), // "option"
QT_MOC_LITERAL(16, 183, 15), // "minimumSizeHint"
QT_MOC_LITERAL(17, 199, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(18, 214, 12), // "QMouseEvent*"
QT_MOC_LITERAL(19, 227, 2), // "ev"
QT_MOC_LITERAL(20, 230, 15), // "mousePressEvent"
QT_MOC_LITERAL(21, 246, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(22, 264, 10), // "paintEvent"
QT_MOC_LITERAL(23, 275, 12), // "QPaintEvent*"
QT_MOC_LITERAL(24, 288, 15), // "setTickInterval"
QT_MOC_LITERAL(25, 304, 2), // "ti"
QT_MOC_LITERAL(26, 307, 15), // "setTickPosition"
QT_MOC_LITERAL(27, 323, 21), // "QSlider::TickPosition"
QT_MOC_LITERAL(28, 345, 8), // "position"
QT_MOC_LITERAL(29, 354, 8), // "sizeHint"
QT_MOC_LITERAL(30, 363, 12), // "tickInterval"
QT_MOC_LITERAL(31, 376, 12) // "tickPosition"

    },
    "PythonQtWrapper_QSlider\0new_QSlider\0"
    "QSlider*\0\0QWidget*\0parent\0Qt::Orientation\0"
    "orientation\0delete_QSlider\0obj\0event\0"
    "theWrappedObject\0QEvent*\0initStyleOption\0"
    "QStyleOptionSlider*\0option\0minimumSizeHint\0"
    "mouseMoveEvent\0QMouseEvent*\0ev\0"
    "mousePressEvent\0mouseReleaseEvent\0"
    "paintEvent\0QPaintEvent*\0setTickInterval\0"
    "ti\0setTickPosition\0QSlider::TickPosition\0"
    "position\0sizeHint\0tickInterval\0"
    "tickPosition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSlider[] = {

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
       1,    2,  103,    3, 0x0a /* Public */,
       1,    1,  108,    3, 0x2a /* Public | MethodCloned */,
       8,    1,  111,    3, 0x0a /* Public */,
      10,    2,  114,    3, 0x0a /* Public */,
      13,    2,  119,    3, 0x0a /* Public */,
      16,    1,  124,    3, 0x0a /* Public */,
      17,    2,  127,    3, 0x0a /* Public */,
      20,    2,  132,    3, 0x0a /* Public */,
      21,    2,  137,    3, 0x0a /* Public */,
      22,    2,  142,    3, 0x0a /* Public */,
      24,    2,  147,    3, 0x0a /* Public */,
      26,    2,  152,    3, 0x0a /* Public */,
      29,    1,  157,    3, 0x0a /* Public */,
      30,    1,  160,    3, 0x0a /* Public */,
      31,    1,  163,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 6, 0x80000000 | 4,    7,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 12,   11,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   11,   15,
    QMetaType::QSize, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   11,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   11,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   11,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,   11,   19,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   11,   25,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 27,   11,   28,
    QMetaType::QSize, 0x80000000 | 2,   11,
    QMetaType::Int, 0x80000000 | 2,   11,
    0x80000000 | 27, 0x80000000 | 2,   11,

       0        // eod
};

void PythonQtWrapper_QSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSlider *_t = static_cast<PythonQtWrapper_QSlider *>(_o);
        switch (_id) {
        case 0: { QSlider* _r = _t->new_QSlider((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSlider**>(_a[0]) = _r; }  break;
        case 1: { QSlider* _r = _t->new_QSlider();
            if (_a[0]) *reinterpret_cast< QSlider**>(_a[0]) = _r; }  break;
        case 2: { QSlider* _r = _t->new_QSlider((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSlider**>(_a[0]) = _r; }  break;
        case 3: { QSlider* _r = _t->new_QSlider((*reinterpret_cast< Qt::Orientation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSlider**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSlider((*reinterpret_cast< QSlider*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->initStyleOption((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QStyleOptionSlider*(*)>(_a[2]))); break;
        case 7: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 8: _t->mouseMoveEvent((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 9: _t->mousePressEvent((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 10: _t->mouseReleaseEvent((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 11: _t->paintEvent((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 12: _t->setTickInterval((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->setTickPosition((*reinterpret_cast< QSlider*(*)>(_a[1])),(*reinterpret_cast< QSlider::TickPosition(*)>(_a[2]))); break;
        case 14: { QSize _r = _t->sizeHint((*reinterpret_cast< QSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->tickInterval((*reinterpret_cast< QSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QSlider::TickPosition _r = _t->tickPosition((*reinterpret_cast< QSlider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSlider::TickPosition*>(_a[0]) = _r; }  break;
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSlider* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSlider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSlider.data,
      qt_meta_data_PythonQtWrapper_QSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSlider.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSlider*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSortFilterProxyModel_t {
    QByteArrayData data[99];
    char stringdata[1247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSortFilterProxyModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSortFilterProxyModel_t qt_meta_stringdata_PythonQtWrapper_QSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_QSortFilterPr..."
QT_MOC_LITERAL(1, 38, 25), // "new_QSortFilterProxyModel"
QT_MOC_LITERAL(2, 64, 22), // "QSortFilterProxyModel*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 6), // "parent"
QT_MOC_LITERAL(5, 95, 28), // "delete_QSortFilterProxyModel"
QT_MOC_LITERAL(6, 124, 3), // "obj"
QT_MOC_LITERAL(7, 128, 5), // "buddy"
QT_MOC_LITERAL(8, 134, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 151, 5), // "index"
QT_MOC_LITERAL(10, 157, 12), // "canFetchMore"
QT_MOC_LITERAL(11, 170, 11), // "columnCount"
QT_MOC_LITERAL(12, 182, 4), // "data"
QT_MOC_LITERAL(13, 187, 4), // "role"
QT_MOC_LITERAL(14, 192, 12), // "dropMimeData"
QT_MOC_LITERAL(15, 205, 16), // "const QMimeData*"
QT_MOC_LITERAL(16, 222, 14), // "Qt::DropAction"
QT_MOC_LITERAL(17, 237, 6), // "action"
QT_MOC_LITERAL(18, 244, 3), // "row"
QT_MOC_LITERAL(19, 248, 6), // "column"
QT_MOC_LITERAL(20, 255, 17), // "dynamicSortFilter"
QT_MOC_LITERAL(21, 273, 9), // "fetchMore"
QT_MOC_LITERAL(22, 283, 19), // "filterAcceptsColumn"
QT_MOC_LITERAL(23, 303, 13), // "source_column"
QT_MOC_LITERAL(24, 317, 13), // "source_parent"
QT_MOC_LITERAL(25, 331, 16), // "filterAcceptsRow"
QT_MOC_LITERAL(26, 348, 10), // "source_row"
QT_MOC_LITERAL(27, 359, 21), // "filterCaseSensitivity"
QT_MOC_LITERAL(28, 381, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(29, 401, 15), // "filterKeyColumn"
QT_MOC_LITERAL(30, 417, 12), // "filterRegExp"
QT_MOC_LITERAL(31, 430, 10), // "filterRole"
QT_MOC_LITERAL(32, 441, 5), // "flags"
QT_MOC_LITERAL(33, 447, 13), // "Qt::ItemFlags"
QT_MOC_LITERAL(34, 461, 11), // "hasChildren"
QT_MOC_LITERAL(35, 473, 10), // "headerData"
QT_MOC_LITERAL(36, 484, 7), // "section"
QT_MOC_LITERAL(37, 492, 15), // "Qt::Orientation"
QT_MOC_LITERAL(38, 508, 11), // "orientation"
QT_MOC_LITERAL(39, 520, 13), // "insertColumns"
QT_MOC_LITERAL(40, 534, 5), // "count"
QT_MOC_LITERAL(41, 540, 10), // "insertRows"
QT_MOC_LITERAL(42, 551, 16), // "invalidateFilter"
QT_MOC_LITERAL(43, 568, 17), // "isSortLocaleAware"
QT_MOC_LITERAL(44, 586, 8), // "lessThan"
QT_MOC_LITERAL(45, 595, 4), // "left"
QT_MOC_LITERAL(46, 600, 5), // "right"
QT_MOC_LITERAL(47, 606, 13), // "mapFromSource"
QT_MOC_LITERAL(48, 620, 11), // "sourceIndex"
QT_MOC_LITERAL(49, 632, 22), // "mapSelectionFromSource"
QT_MOC_LITERAL(50, 655, 14), // "QItemSelection"
QT_MOC_LITERAL(51, 670, 15), // "sourceSelection"
QT_MOC_LITERAL(52, 686, 20), // "mapSelectionToSource"
QT_MOC_LITERAL(53, 707, 14), // "proxySelection"
QT_MOC_LITERAL(54, 722, 11), // "mapToSource"
QT_MOC_LITERAL(55, 734, 10), // "proxyIndex"
QT_MOC_LITERAL(56, 745, 5), // "match"
QT_MOC_LITERAL(57, 751, 18), // "QList<QModelIndex>"
QT_MOC_LITERAL(58, 770, 5), // "start"
QT_MOC_LITERAL(59, 776, 5), // "value"
QT_MOC_LITERAL(60, 782, 4), // "hits"
QT_MOC_LITERAL(61, 787, 14), // "Qt::MatchFlags"
QT_MOC_LITERAL(62, 802, 8), // "mimeData"
QT_MOC_LITERAL(63, 811, 10), // "QMimeData*"
QT_MOC_LITERAL(64, 822, 7), // "indexes"
QT_MOC_LITERAL(65, 830, 9), // "mimeTypes"
QT_MOC_LITERAL(66, 840, 5), // "child"
QT_MOC_LITERAL(67, 846, 13), // "removeColumns"
QT_MOC_LITERAL(68, 860, 10), // "removeRows"
QT_MOC_LITERAL(69, 871, 8), // "rowCount"
QT_MOC_LITERAL(70, 880, 7), // "setData"
QT_MOC_LITERAL(71, 888, 20), // "setDynamicSortFilter"
QT_MOC_LITERAL(72, 909, 6), // "enable"
QT_MOC_LITERAL(73, 916, 24), // "setFilterCaseSensitivity"
QT_MOC_LITERAL(74, 941, 2), // "cs"
QT_MOC_LITERAL(75, 944, 18), // "setFilterKeyColumn"
QT_MOC_LITERAL(76, 963, 15), // "setFilterRegExp"
QT_MOC_LITERAL(77, 979, 6), // "regExp"
QT_MOC_LITERAL(78, 986, 13), // "setFilterRole"
QT_MOC_LITERAL(79, 1000, 13), // "setHeaderData"
QT_MOC_LITERAL(80, 1014, 22), // "setSortCaseSensitivity"
QT_MOC_LITERAL(81, 1037, 18), // "setSortLocaleAware"
QT_MOC_LITERAL(82, 1056, 2), // "on"
QT_MOC_LITERAL(83, 1059, 11), // "setSortRole"
QT_MOC_LITERAL(84, 1071, 14), // "setSourceModel"
QT_MOC_LITERAL(85, 1086, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(86, 1106, 11), // "sourceModel"
QT_MOC_LITERAL(87, 1118, 7), // "sibling"
QT_MOC_LITERAL(88, 1126, 3), // "idx"
QT_MOC_LITERAL(89, 1130, 4), // "sort"
QT_MOC_LITERAL(90, 1135, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(91, 1149, 5), // "order"
QT_MOC_LITERAL(92, 1155, 19), // "sortCaseSensitivity"
QT_MOC_LITERAL(93, 1175, 10), // "sortColumn"
QT_MOC_LITERAL(94, 1186, 9), // "sortOrder"
QT_MOC_LITERAL(95, 1196, 8), // "sortRole"
QT_MOC_LITERAL(96, 1205, 4), // "span"
QT_MOC_LITERAL(97, 1210, 20), // "supportedDropActions"
QT_MOC_LITERAL(98, 1231, 15) // "Qt::DropActions"

    },
    "PythonQtWrapper_QSortFilterProxyModel\0"
    "new_QSortFilterProxyModel\0"
    "QSortFilterProxyModel*\0\0parent\0"
    "delete_QSortFilterProxyModel\0obj\0buddy\0"
    "theWrappedObject\0index\0canFetchMore\0"
    "columnCount\0data\0role\0dropMimeData\0"
    "const QMimeData*\0Qt::DropAction\0action\0"
    "row\0column\0dynamicSortFilter\0fetchMore\0"
    "filterAcceptsColumn\0source_column\0"
    "source_parent\0filterAcceptsRow\0"
    "source_row\0filterCaseSensitivity\0"
    "Qt::CaseSensitivity\0filterKeyColumn\0"
    "filterRegExp\0filterRole\0flags\0"
    "Qt::ItemFlags\0hasChildren\0headerData\0"
    "section\0Qt::Orientation\0orientation\0"
    "insertColumns\0count\0insertRows\0"
    "invalidateFilter\0isSortLocaleAware\0"
    "lessThan\0left\0right\0mapFromSource\0"
    "sourceIndex\0mapSelectionFromSource\0"
    "QItemSelection\0sourceSelection\0"
    "mapSelectionToSource\0proxySelection\0"
    "mapToSource\0proxyIndex\0match\0"
    "QList<QModelIndex>\0start\0value\0hits\0"
    "Qt::MatchFlags\0mimeData\0QMimeData*\0"
    "indexes\0mimeTypes\0child\0removeColumns\0"
    "removeRows\0rowCount\0setData\0"
    "setDynamicSortFilter\0enable\0"
    "setFilterCaseSensitivity\0cs\0"
    "setFilterKeyColumn\0setFilterRegExp\0"
    "regExp\0setFilterRole\0setHeaderData\0"
    "setSortCaseSensitivity\0setSortLocaleAware\0"
    "on\0setSortRole\0setSourceModel\0"
    "QAbstractItemModel*\0sourceModel\0sibling\0"
    "idx\0sort\0Qt::SortOrder\0order\0"
    "sortCaseSensitivity\0sortColumn\0sortOrder\0"
    "sortRole\0span\0supportedDropActions\0"
    "Qt::DropActions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSortFilterProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  364,    3, 0x0a /* Public */,
       1,    0,  367,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  368,    3, 0x0a /* Public */,
       7,    2,  371,    3, 0x0a /* Public */,
      10,    2,  376,    3, 0x0a /* Public */,
      11,    2,  381,    3, 0x0a /* Public */,
      11,    1,  386,    3, 0x2a /* Public | MethodCloned */,
      12,    3,  389,    3, 0x0a /* Public */,
      12,    2,  396,    3, 0x2a /* Public | MethodCloned */,
      14,    6,  401,    3, 0x0a /* Public */,
      20,    1,  414,    3, 0x0a /* Public */,
      21,    2,  417,    3, 0x0a /* Public */,
      22,    3,  422,    3, 0x0a /* Public */,
      25,    3,  429,    3, 0x0a /* Public */,
      27,    1,  436,    3, 0x0a /* Public */,
      29,    1,  439,    3, 0x0a /* Public */,
      30,    1,  442,    3, 0x0a /* Public */,
      31,    1,  445,    3, 0x0a /* Public */,
      32,    2,  448,    3, 0x0a /* Public */,
      34,    2,  453,    3, 0x0a /* Public */,
      34,    1,  458,    3, 0x2a /* Public | MethodCloned */,
      35,    4,  461,    3, 0x0a /* Public */,
      35,    3,  470,    3, 0x2a /* Public | MethodCloned */,
       9,    4,  477,    3, 0x0a /* Public */,
       9,    3,  486,    3, 0x2a /* Public | MethodCloned */,
      39,    4,  493,    3, 0x0a /* Public */,
      39,    3,  502,    3, 0x2a /* Public | MethodCloned */,
      41,    4,  509,    3, 0x0a /* Public */,
      41,    3,  518,    3, 0x2a /* Public | MethodCloned */,
      42,    1,  525,    3, 0x0a /* Public */,
      43,    1,  528,    3, 0x0a /* Public */,
      44,    3,  531,    3, 0x0a /* Public */,
      47,    2,  538,    3, 0x0a /* Public */,
      49,    2,  543,    3, 0x0a /* Public */,
      52,    2,  548,    3, 0x0a /* Public */,
      54,    2,  553,    3, 0x0a /* Public */,
      56,    6,  558,    3, 0x0a /* Public */,
      56,    5,  571,    3, 0x2a /* Public | MethodCloned */,
      56,    4,  582,    3, 0x2a /* Public | MethodCloned */,
      62,    2,  591,    3, 0x0a /* Public */,
      65,    1,  596,    3, 0x0a /* Public */,
       4,    2,  599,    3, 0x0a /* Public */,
      67,    4,  604,    3, 0x0a /* Public */,
      67,    3,  613,    3, 0x2a /* Public | MethodCloned */,
      68,    4,  620,    3, 0x0a /* Public */,
      68,    3,  629,    3, 0x2a /* Public | MethodCloned */,
      69,    2,  636,    3, 0x0a /* Public */,
      69,    1,  641,    3, 0x2a /* Public | MethodCloned */,
      70,    4,  644,    3, 0x0a /* Public */,
      70,    3,  653,    3, 0x2a /* Public | MethodCloned */,
      71,    2,  660,    3, 0x0a /* Public */,
      73,    2,  665,    3, 0x0a /* Public */,
      75,    2,  670,    3, 0x0a /* Public */,
      76,    2,  675,    3, 0x0a /* Public */,
      78,    2,  680,    3, 0x0a /* Public */,
      79,    5,  685,    3, 0x0a /* Public */,
      79,    4,  696,    3, 0x2a /* Public | MethodCloned */,
      80,    2,  705,    3, 0x0a /* Public */,
      81,    2,  710,    3, 0x0a /* Public */,
      83,    2,  715,    3, 0x0a /* Public */,
      84,    2,  720,    3, 0x0a /* Public */,
      87,    4,  725,    3, 0x0a /* Public */,
      89,    3,  734,    3, 0x0a /* Public */,
      89,    2,  741,    3, 0x2a /* Public | MethodCloned */,
      92,    1,  746,    3, 0x0a /* Public */,
      93,    1,  749,    3, 0x0a /* Public */,
      94,    1,  752,    3, 0x0a /* Public */,
      95,    1,  755,    3, 0x0a /* Public */,
      96,    2,  758,    3, 0x0a /* Public */,
      97,    1,  763,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,    8,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int,    8,    9,   13,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex,    8,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15, 0x80000000 | 16, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   12,   17,   18,   19,    4,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::QModelIndex,    8,   23,   24,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::QModelIndex,    8,   26,   24,
    0x80000000 | 28, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QRegExp, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    0x80000000 | 33, 0x80000000 | 2, QMetaType::QModelIndex,    8,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 37, QMetaType::Int,    8,   36,   38,   13,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 37,    8,   36,   38,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   18,   19,    4,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   18,   19,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   19,   40,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   19,   40,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   18,   40,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   18,   40,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QModelIndex,    8,   45,   46,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,    8,   48,
    0x80000000 | 50, 0x80000000 | 2, 0x80000000 | 50,    8,   51,
    0x80000000 | 50, 0x80000000 | 2, 0x80000000 | 50,    8,   53,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,    8,   55,
    0x80000000 | 57, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::QVariant, QMetaType::Int, 0x80000000 | 61,    8,   58,   13,   59,   60,   32,
    0x80000000 | 57, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::QVariant, QMetaType::Int,    8,   58,   13,   59,   60,
    0x80000000 | 57, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::QVariant,    8,   58,   13,   59,
    0x80000000 | 63, 0x80000000 | 2, 0x80000000 | 57,    8,   64,
    QMetaType::QStringList, 0x80000000 | 2,    8,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,    8,   66,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   19,   40,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   19,   40,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   18,   40,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   18,   40,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant, QMetaType::Int,    8,    9,   59,   13,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant,    8,    9,   59,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    8,   72,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 28,    8,   74,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    8,   19,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QRegExp,    8,   77,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    8,   13,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 37, QMetaType::QVariant, QMetaType::Int,    8,   36,   38,   59,   13,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 37, QMetaType::QVariant,    8,   36,   38,   59,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 28,    8,   74,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    8,   82,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    8,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 85,    8,   86,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   18,   19,   88,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 90,    8,   19,   91,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    8,   19,
    0x80000000 | 28, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    0x80000000 | 90, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QSize, 0x80000000 | 2, QMetaType::QModelIndex,    8,    9,
    0x80000000 | 98, 0x80000000 | 2,    8,

       0        // eod
};

void PythonQtWrapper_QSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSortFilterProxyModel *_t = static_cast<PythonQtWrapper_QSortFilterProxyModel *>(_o);
        switch (_id) {
        case 0: { QSortFilterProxyModel* _r = _t->new_QSortFilterProxyModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSortFilterProxyModel**>(_a[0]) = _r; }  break;
        case 1: { QSortFilterProxyModel* _r = _t->new_QSortFilterProxyModel();
            if (_a[0]) *reinterpret_cast< QSortFilterProxyModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSortFilterProxyModel((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1]))); break;
        case 3: { QModelIndex _r = _t->buddy((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->canFetchMore((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->columnCount((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->columnCount((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->data((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->data((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->dropMimeData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QModelIndex(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->dynamicSortFilter((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->fetchMore((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 12: { bool _r = _t->filterAcceptsColumn((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->filterAcceptsRow((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { Qt::CaseSensitivity _r = _t->filterCaseSensitivity((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CaseSensitivity*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->filterKeyColumn((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QRegExp _r = _t->filterRegExp((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRegExp*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->filterRole((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->hasChildren((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->hasChildren((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QVariant _r = _t->headerData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 22: { QVariant _r = _t->headerData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 23: { QModelIndex _r = _t->index((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 24: { QModelIndex _r = _t->index((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->insertColumns((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->insertColumns((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->insertRows((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->insertRows((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->invalidateFilter((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1]))); break;
        case 30: { bool _r = _t->isSortLocaleAware((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->lessThan((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { QModelIndex _r = _t->mapFromSource((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 33: { QItemSelection _r = _t->mapSelectionFromSource((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelection*>(_a[0]) = _r; }  break;
        case 34: { QItemSelection _r = _t->mapSelectionToSource((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QItemSelection*>(_a[0]) = _r; }  break;
        case 35: { QModelIndex _r = _t->mapToSource((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 36: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 37: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 38: { QList<QModelIndex> _r = _t->match((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QModelIndex>*>(_a[0]) = _r; }  break;
        case 39: { QMimeData* _r = _t->mimeData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QList<QModelIndex>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 40: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 41: { QModelIndex _r = _t->parent((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->removeColumns((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->removeColumns((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->removeRows((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->removeRows((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { int _r = _t->rowCount((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 47: { int _r = _t->rowCount((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->setData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->setData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: _t->setDynamicSortFilter((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->setFilterCaseSensitivity((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 52: _t->setFilterKeyColumn((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 53: _t->setFilterRegExp((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2]))); break;
        case 54: _t->setFilterRole((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 55: { bool _r = _t->setHeaderData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { bool _r = _t->setHeaderData((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: _t->setSortCaseSensitivity((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 58: _t->setSortLocaleAware((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 59: _t->setSortRole((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->setSourceModel((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[2]))); break;
        case 61: { QModelIndex _r = _t->sibling((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 62: _t->sort((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 63: _t->sort((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 64: { Qt::CaseSensitivity _r = _t->sortCaseSensitivity((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CaseSensitivity*>(_a[0]) = _r; }  break;
        case 65: { int _r = _t->sortColumn((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 66: { Qt::SortOrder _r = _t->sortOrder((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::SortOrder*>(_a[0]) = _r; }  break;
        case 67: { int _r = _t->sortRole((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 68: { QSize _r = _t->span((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 69: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QSortFilterProxyModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QModelIndex> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSortFilterProxyModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSortFilterProxyModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSortFilterProxyModel.data,
      qt_meta_data_PythonQtWrapper_QSortFilterProxyModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSortFilterProxyModel.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSortFilterProxyModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSound_t {
    QByteArrayData data[18];
    char stringdata[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSound_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSound_t qt_meta_stringdata_PythonQtWrapper_QSound = {
    {
QT_MOC_LITERAL(0, 0, 22), // "PythonQtWrapper_QSound"
QT_MOC_LITERAL(1, 23, 10), // "new_QSound"
QT_MOC_LITERAL(2, 34, 7), // "QSound*"
QT_MOC_LITERAL(3, 42, 0), // ""
QT_MOC_LITERAL(4, 43, 8), // "filename"
QT_MOC_LITERAL(5, 52, 6), // "parent"
QT_MOC_LITERAL(6, 59, 13), // "delete_QSound"
QT_MOC_LITERAL(7, 73, 3), // "obj"
QT_MOC_LITERAL(8, 77, 8), // "fileName"
QT_MOC_LITERAL(9, 86, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 103, 10), // "isFinished"
QT_MOC_LITERAL(11, 114, 5), // "loops"
QT_MOC_LITERAL(12, 120, 14), // "loopsRemaining"
QT_MOC_LITERAL(13, 135, 18), // "static_QSound_play"
QT_MOC_LITERAL(14, 154, 8), // "setLoops"
QT_MOC_LITERAL(15, 163, 6), // "arg__1"
QT_MOC_LITERAL(16, 170, 4), // "Loop"
QT_MOC_LITERAL(17, 175, 8) // "Infinite"

    },
    "PythonQtWrapper_QSound\0new_QSound\0"
    "QSound*\0\0filename\0parent\0delete_QSound\0"
    "obj\0fileName\0theWrappedObject\0isFinished\0"
    "loops\0loopsRemaining\0static_QSound_play\0"
    "setLoops\0arg__1\0Loop\0Infinite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSound[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,   90, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   59,    3, 0x0a /* Public */,
       1,    1,   64,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   67,    3, 0x0a /* Public */,
       8,    1,   70,    3, 0x0a /* Public */,
      10,    1,   73,    3, 0x0a /* Public */,
      11,    1,   76,    3, 0x0a /* Public */,
      12,    1,   79,    3, 0x0a /* Public */,
      13,    1,   82,    3, 0x0a /* Public */,
      14,    2,   85,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QObjectStar,    4,    5,
    0x80000000 | 2, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   15,

 // enums: name, flags, count, data
      16, 0x0,    1,   94,

 // enum data: key, value
      17, uint(PythonQtWrapper_QSound::Infinite),

       0        // eod
};

void PythonQtWrapper_QSound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSound *_t = static_cast<PythonQtWrapper_QSound *>(_o);
        switch (_id) {
        case 0: { QSound* _r = _t->new_QSound((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSound**>(_a[0]) = _r; }  break;
        case 1: { QSound* _r = _t->new_QSound((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSound**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSound((*reinterpret_cast< QSound*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->fileName((*reinterpret_cast< QSound*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isFinished((*reinterpret_cast< QSound*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->loops((*reinterpret_cast< QSound*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->loopsRemaining((*reinterpret_cast< QSound*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->static_QSound_play((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setLoops((*reinterpret_cast< QSound*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSound* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSound* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSound* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSound* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSound* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSound* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSound::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSound.data,
      qt_meta_data_PythonQtWrapper_QSound,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSound::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSound.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSound*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSpacerItem_t {
    QByteArrayData data[23];
    char stringdata[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSpacerItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSpacerItem_t qt_meta_stringdata_PythonQtWrapper_QSpacerItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QSpacerItem"
QT_MOC_LITERAL(1, 28, 15), // "new_QSpacerItem"
QT_MOC_LITERAL(2, 44, 12), // "QSpacerItem*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 1), // "w"
QT_MOC_LITERAL(5, 60, 1), // "h"
QT_MOC_LITERAL(6, 62, 19), // "QSizePolicy::Policy"
QT_MOC_LITERAL(7, 82, 5), // "hData"
QT_MOC_LITERAL(8, 88, 5), // "vData"
QT_MOC_LITERAL(9, 94, 18), // "delete_QSpacerItem"
QT_MOC_LITERAL(10, 113, 3), // "obj"
QT_MOC_LITERAL(11, 117, 10), // "changeSize"
QT_MOC_LITERAL(12, 128, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 145, 19), // "expandingDirections"
QT_MOC_LITERAL(14, 165, 16), // "Qt::Orientations"
QT_MOC_LITERAL(15, 182, 8), // "geometry"
QT_MOC_LITERAL(16, 191, 7), // "isEmpty"
QT_MOC_LITERAL(17, 199, 11), // "maximumSize"
QT_MOC_LITERAL(18, 211, 11), // "minimumSize"
QT_MOC_LITERAL(19, 223, 11), // "setGeometry"
QT_MOC_LITERAL(20, 235, 6), // "arg__1"
QT_MOC_LITERAL(21, 242, 8), // "sizeHint"
QT_MOC_LITERAL(22, 251, 10) // "spacerItem"

    },
    "PythonQtWrapper_QSpacerItem\0new_QSpacerItem\0"
    "QSpacerItem*\0\0w\0h\0QSizePolicy::Policy\0"
    "hData\0vData\0delete_QSpacerItem\0obj\0"
    "changeSize\0theWrappedObject\0"
    "expandingDirections\0Qt::Orientations\0"
    "geometry\0isEmpty\0maximumSize\0minimumSize\0"
    "setGeometry\0arg__1\0sizeHint\0spacerItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSpacerItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   89,    3, 0x0a /* Public */,
       1,    3,   98,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  105,    3, 0x2a /* Public | MethodCloned */,
       9,    1,  110,    3, 0x0a /* Public */,
      11,    5,  113,    3, 0x0a /* Public */,
      11,    4,  124,    3, 0x2a /* Public | MethodCloned */,
      11,    3,  133,    3, 0x2a /* Public | MethodCloned */,
      13,    1,  140,    3, 0x0a /* Public */,
      15,    1,  143,    3, 0x0a /* Public */,
      16,    1,  146,    3, 0x0a /* Public */,
      17,    1,  149,    3, 0x0a /* Public */,
      18,    1,  152,    3, 0x0a /* Public */,
      19,    2,  155,    3, 0x0a /* Public */,
      21,    1,  160,    3, 0x0a /* Public */,
      22,    1,  163,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::Int, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 6,    4,    5,    7,    8,
    0x80000000 | 2, QMetaType::Int, QMetaType::Int, 0x80000000 | 6,    4,    5,    7,
    0x80000000 | 2, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 6,   12,    4,    5,    7,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, 0x80000000 | 6,   12,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   12,    4,    5,
    0x80000000 | 14, 0x80000000 | 2,   12,
    QMetaType::QRect, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::QSize, 0x80000000 | 2,   12,
    QMetaType::QSize, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QRect,   12,   20,
    QMetaType::QSize, 0x80000000 | 2,   12,
    0x80000000 | 2, 0x80000000 | 2,   12,

       0        // eod
};

void PythonQtWrapper_QSpacerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSpacerItem *_t = static_cast<PythonQtWrapper_QSpacerItem *>(_o);
        switch (_id) {
        case 0: { QSpacerItem* _r = _t->new_QSpacerItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[3])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSpacerItem**>(_a[0]) = _r; }  break;
        case 1: { QSpacerItem* _r = _t->new_QSpacerItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSpacerItem**>(_a[0]) = _r; }  break;
        case 2: { QSpacerItem* _r = _t->new_QSpacerItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSpacerItem**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSpacerItem((*reinterpret_cast< QSpacerItem*(*)>(_a[1]))); break;
        case 4: _t->changeSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[4])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[5]))); break;
        case 5: _t->changeSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QSizePolicy::Policy(*)>(_a[4]))); break;
        case 6: _t->changeSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: { Qt::Orientations _r = _t->expandingDirections((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientations*>(_a[0]) = _r; }  break;
        case 8: { QRect _r = _t->geometry((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isEmpty((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QSize _r = _t->maximumSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 11: { QSize _r = _t->minimumSize((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 12: _t->setGeometry((*reinterpret_cast< QSpacerItem*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 13: { QSize _r = _t->sizeHint((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 14: { QSpacerItem* _r = _t->spacerItem((*reinterpret_cast< QSpacerItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSpacerItem**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSpacerItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSpacerItem.data,
      qt_meta_data_PythonQtWrapper_QSpacerItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSpacerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSpacerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSpacerItem.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSpacerItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSpacerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSpinBox_t {
    QByteArrayData data[41];
    char stringdata[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSpinBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSpinBox_t qt_meta_stringdata_PythonQtWrapper_QSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PythonQtWrapper_QSpinBox"
QT_MOC_LITERAL(1, 25, 12), // "new_QSpinBox"
QT_MOC_LITERAL(2, 38, 9), // "QSpinBox*"
QT_MOC_LITERAL(3, 48, 0), // ""
QT_MOC_LITERAL(4, 49, 8), // "QWidget*"
QT_MOC_LITERAL(5, 58, 6), // "parent"
QT_MOC_LITERAL(6, 65, 15), // "delete_QSpinBox"
QT_MOC_LITERAL(7, 81, 3), // "obj"
QT_MOC_LITERAL(8, 85, 9), // "cleanText"
QT_MOC_LITERAL(9, 95, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 112, 18), // "displayIntegerBase"
QT_MOC_LITERAL(11, 131, 5), // "event"
QT_MOC_LITERAL(12, 137, 7), // "QEvent*"
QT_MOC_LITERAL(13, 145, 5), // "fixup"
QT_MOC_LITERAL(14, 151, 8), // "QString&"
QT_MOC_LITERAL(15, 160, 3), // "str"
QT_MOC_LITERAL(16, 164, 7), // "maximum"
QT_MOC_LITERAL(17, 172, 7), // "minimum"
QT_MOC_LITERAL(18, 180, 6), // "prefix"
QT_MOC_LITERAL(19, 187, 21), // "setDisplayIntegerBase"
QT_MOC_LITERAL(20, 209, 4), // "base"
QT_MOC_LITERAL(21, 214, 10), // "setMaximum"
QT_MOC_LITERAL(22, 225, 3), // "max"
QT_MOC_LITERAL(23, 229, 10), // "setMinimum"
QT_MOC_LITERAL(24, 240, 3), // "min"
QT_MOC_LITERAL(25, 244, 9), // "setPrefix"
QT_MOC_LITERAL(26, 254, 8), // "setRange"
QT_MOC_LITERAL(27, 263, 13), // "setSingleStep"
QT_MOC_LITERAL(28, 277, 3), // "val"
QT_MOC_LITERAL(29, 281, 9), // "setSuffix"
QT_MOC_LITERAL(30, 291, 6), // "suffix"
QT_MOC_LITERAL(31, 298, 10), // "singleStep"
QT_MOC_LITERAL(32, 309, 13), // "textFromValue"
QT_MOC_LITERAL(33, 323, 8), // "validate"
QT_MOC_LITERAL(34, 332, 17), // "QValidator::State"
QT_MOC_LITERAL(35, 350, 5), // "input"
QT_MOC_LITERAL(36, 356, 4), // "int&"
QT_MOC_LITERAL(37, 361, 3), // "pos"
QT_MOC_LITERAL(38, 365, 5), // "value"
QT_MOC_LITERAL(39, 371, 13), // "valueFromText"
QT_MOC_LITERAL(40, 385, 4) // "text"

    },
    "PythonQtWrapper_QSpinBox\0new_QSpinBox\0"
    "QSpinBox*\0\0QWidget*\0parent\0delete_QSpinBox\0"
    "obj\0cleanText\0theWrappedObject\0"
    "displayIntegerBase\0event\0QEvent*\0fixup\0"
    "QString&\0str\0maximum\0minimum\0prefix\0"
    "setDisplayIntegerBase\0base\0setMaximum\0"
    "max\0setMinimum\0min\0setPrefix\0setRange\0"
    "setSingleStep\0val\0setSuffix\0suffix\0"
    "singleStep\0textFromValue\0validate\0"
    "QValidator::State\0input\0int&\0pos\0value\0"
    "valueFromText\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  129,    3, 0x0a /* Public */,
       1,    0,  132,    3, 0x2a /* Public | MethodCloned */,
       6,    1,  133,    3, 0x0a /* Public */,
       8,    1,  136,    3, 0x0a /* Public */,
      10,    1,  139,    3, 0x0a /* Public */,
      11,    2,  142,    3, 0x0a /* Public */,
      13,    2,  147,    3, 0x0a /* Public */,
      16,    1,  152,    3, 0x0a /* Public */,
      17,    1,  155,    3, 0x0a /* Public */,
      18,    1,  158,    3, 0x0a /* Public */,
      19,    2,  161,    3, 0x0a /* Public */,
      21,    2,  166,    3, 0x0a /* Public */,
      23,    2,  171,    3, 0x0a /* Public */,
      25,    2,  176,    3, 0x0a /* Public */,
      26,    3,  181,    3, 0x0a /* Public */,
      27,    2,  188,    3, 0x0a /* Public */,
      29,    2,  193,    3, 0x0a /* Public */,
      31,    1,  198,    3, 0x0a /* Public */,
      30,    1,  201,    3, 0x0a /* Public */,
      32,    2,  204,    3, 0x0a /* Public */,
      33,    3,  209,    3, 0x0a /* Public */,
      38,    1,  216,    3, 0x0a /* Public */,
      39,    2,  219,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 12,    9,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,    9,   15,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   22,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   24,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   24,   22,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   28,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   30,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,    9,   28,
    0x80000000 | 34, 0x80000000 | 2, 0x80000000 | 14, 0x80000000 | 36,    9,   35,   37,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QString,    9,   40,

       0        // eod
};

void PythonQtWrapper_QSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSpinBox *_t = static_cast<PythonQtWrapper_QSpinBox *>(_o);
        switch (_id) {
        case 0: { QSpinBox* _r = _t->new_QSpinBox((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSpinBox**>(_a[0]) = _r; }  break;
        case 1: { QSpinBox* _r = _t->new_QSpinBox();
            if (_a[0]) *reinterpret_cast< QSpinBox**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSpinBox((*reinterpret_cast< QSpinBox*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->cleanText((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->displayIntegerBase((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->event((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->fixup((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: { int _r = _t->maximum((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->minimum((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->prefix((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->setDisplayIntegerBase((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->setMaximum((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->setMinimum((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->setPrefix((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->setRange((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->setSingleStep((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->setSuffix((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: { int _r = _t->singleStep((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->suffix((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QString _r = _t->textFromValue((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { QValidator::State _r = _t->validate((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QValidator::State*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->value((*reinterpret_cast< QSpinBox*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->valueFromText((*reinterpret_cast< QSpinBox*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSpinBox* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSpinBox::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSpinBox.data,
      qt_meta_data_PythonQtWrapper_QSpinBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSpinBox.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSpinBox*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSplashScreen_t {
    QByteArrayData data[25];
    char stringdata[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSplashScreen_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSplashScreen_t qt_meta_stringdata_PythonQtWrapper_QSplashScreen = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QSplashScreen"
QT_MOC_LITERAL(1, 30, 17), // "new_QSplashScreen"
QT_MOC_LITERAL(2, 48, 14), // "QSplashScreen*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 8), // "QWidget*"
QT_MOC_LITERAL(5, 73, 6), // "parent"
QT_MOC_LITERAL(6, 80, 6), // "pixmap"
QT_MOC_LITERAL(7, 87, 15), // "Qt::WindowFlags"
QT_MOC_LITERAL(8, 103, 1), // "f"
QT_MOC_LITERAL(9, 105, 20), // "delete_QSplashScreen"
QT_MOC_LITERAL(10, 126, 3), // "obj"
QT_MOC_LITERAL(11, 130, 12), // "drawContents"
QT_MOC_LITERAL(12, 143, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 160, 9), // "QPainter*"
QT_MOC_LITERAL(14, 170, 7), // "painter"
QT_MOC_LITERAL(15, 178, 5), // "event"
QT_MOC_LITERAL(16, 184, 7), // "QEvent*"
QT_MOC_LITERAL(17, 192, 1), // "e"
QT_MOC_LITERAL(18, 194, 6), // "finish"
QT_MOC_LITERAL(19, 201, 1), // "w"
QT_MOC_LITERAL(20, 203, 7), // "message"
QT_MOC_LITERAL(21, 211, 15), // "mousePressEvent"
QT_MOC_LITERAL(22, 227, 12), // "QMouseEvent*"
QT_MOC_LITERAL(23, 240, 6), // "arg__1"
QT_MOC_LITERAL(24, 247, 9) // "setPixmap"

    },
    "PythonQtWrapper_QSplashScreen\0"
    "new_QSplashScreen\0QSplashScreen*\0\0"
    "QWidget*\0parent\0pixmap\0Qt::WindowFlags\0"
    "f\0delete_QSplashScreen\0obj\0drawContents\0"
    "theWrappedObject\0QPainter*\0painter\0"
    "event\0QEvent*\0e\0finish\0w\0message\0"
    "mousePressEvent\0QMouseEvent*\0arg__1\0"
    "setPixmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSplashScreen[] = {

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
       1,    3,   84,    3, 0x0a /* Public */,
       1,    2,   91,    3, 0x2a /* Public | MethodCloned */,
       1,    1,   96,    3, 0x2a /* Public | MethodCloned */,
       1,    2,   99,    3, 0x0a /* Public */,
       1,    1,  104,    3, 0x2a /* Public | MethodCloned */,
       1,    0,  107,    3, 0x2a /* Public | MethodCloned */,
       9,    1,  108,    3, 0x0a /* Public */,
      11,    2,  111,    3, 0x0a /* Public */,
      15,    2,  116,    3, 0x0a /* Public */,
      18,    2,  121,    3, 0x0a /* Public */,
      20,    1,  126,    3, 0x0a /* Public */,
      21,    2,  129,    3, 0x0a /* Public */,
       6,    1,  134,    3, 0x0a /* Public */,
      24,    2,  137,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QPixmap, 0x80000000 | 7,    5,    6,    8,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QPixmap,    5,    6,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QPixmap, 0x80000000 | 7,    6,    8,
    0x80000000 | 2, QMetaType::QPixmap,    6,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13,   12,   14,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 16,   12,   17,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   12,   19,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,   12,   23,
    QMetaType::QPixmap, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QPixmap,   12,    6,

       0        // eod
};

void PythonQtWrapper_QSplashScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSplashScreen *_t = static_cast<PythonQtWrapper_QSplashScreen *>(_o);
        switch (_id) {
        case 0: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 1: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 2: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 3: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< Qt::WindowFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 4: { QSplashScreen* _r = _t->new_QSplashScreen((*reinterpret_cast< const QPixmap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 5: { QSplashScreen* _r = _t->new_QSplashScreen();
            if (_a[0]) *reinterpret_cast< QSplashScreen**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QSplashScreen((*reinterpret_cast< QSplashScreen*(*)>(_a[1]))); break;
        case 7: _t->drawContents((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 8: { bool _r = _t->event((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->finish((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 10: { QString _r = _t->message((*reinterpret_cast< QSplashScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: _t->mousePressEvent((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 12: { QPixmap _r = _t->pixmap((*reinterpret_cast< QSplashScreen*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 13: _t->setPixmap((*reinterpret_cast< QSplashScreen*(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
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
        case 1:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplashScreen* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplashScreen* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplashScreen* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplashScreen* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplashScreen* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplashScreen* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplashScreen* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplashScreen* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSplashScreen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSplashScreen.data,
      qt_meta_data_PythonQtWrapper_QSplashScreen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSplashScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSplashScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSplashScreen.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSplashScreen*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSplashScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSplitter_t {
    QByteArrayData data[61];
    char stringdata[709];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSplitter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSplitter_t qt_meta_stringdata_PythonQtWrapper_QSplitter = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QSplitter"
QT_MOC_LITERAL(1, 26, 13), // "new_QSplitter"
QT_MOC_LITERAL(2, 40, 10), // "QSplitter*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 8), // "QWidget*"
QT_MOC_LITERAL(5, 61, 6), // "parent"
QT_MOC_LITERAL(6, 68, 15), // "Qt::Orientation"
QT_MOC_LITERAL(7, 84, 6), // "arg__1"
QT_MOC_LITERAL(8, 91, 16), // "delete_QSplitter"
QT_MOC_LITERAL(9, 108, 3), // "obj"
QT_MOC_LITERAL(10, 112, 9), // "addWidget"
QT_MOC_LITERAL(11, 122, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 139, 36), // "PythonQtPassOwnershipToCPP<QW..."
QT_MOC_LITERAL(13, 176, 6), // "widget"
QT_MOC_LITERAL(14, 183, 11), // "changeEvent"
QT_MOC_LITERAL(15, 195, 7), // "QEvent*"
QT_MOC_LITERAL(16, 203, 10), // "childEvent"
QT_MOC_LITERAL(17, 214, 12), // "QChildEvent*"
QT_MOC_LITERAL(18, 227, 19), // "childrenCollapsible"
QT_MOC_LITERAL(19, 247, 20), // "closestLegalPosition"
QT_MOC_LITERAL(20, 268, 6), // "arg__2"
QT_MOC_LITERAL(21, 275, 5), // "count"
QT_MOC_LITERAL(22, 281, 12), // "createHandle"
QT_MOC_LITERAL(23, 294, 16), // "QSplitterHandle*"
QT_MOC_LITERAL(24, 311, 5), // "event"
QT_MOC_LITERAL(25, 317, 6), // "handle"
QT_MOC_LITERAL(26, 324, 5), // "index"
QT_MOC_LITERAL(27, 330, 11), // "handleWidth"
QT_MOC_LITERAL(28, 342, 7), // "indexOf"
QT_MOC_LITERAL(29, 350, 1), // "w"
QT_MOC_LITERAL(30, 352, 12), // "insertWidget"
QT_MOC_LITERAL(31, 365, 13), // "isCollapsible"
QT_MOC_LITERAL(32, 379, 15), // "minimumSizeHint"
QT_MOC_LITERAL(33, 395, 12), // "moveSplitter"
QT_MOC_LITERAL(34, 408, 3), // "pos"
QT_MOC_LITERAL(35, 412, 12), // "opaqueResize"
QT_MOC_LITERAL(36, 425, 7), // "writeTo"
QT_MOC_LITERAL(37, 433, 12), // "QTextStream&"
QT_MOC_LITERAL(38, 446, 8), // "readFrom"
QT_MOC_LITERAL(39, 455, 11), // "orientation"
QT_MOC_LITERAL(40, 467, 7), // "refresh"
QT_MOC_LITERAL(41, 475, 11), // "resizeEvent"
QT_MOC_LITERAL(42, 487, 13), // "QResizeEvent*"
QT_MOC_LITERAL(43, 501, 12), // "restoreState"
QT_MOC_LITERAL(44, 514, 5), // "state"
QT_MOC_LITERAL(45, 520, 9), // "saveState"
QT_MOC_LITERAL(46, 530, 22), // "setChildrenCollapsible"
QT_MOC_LITERAL(47, 553, 14), // "setCollapsible"
QT_MOC_LITERAL(48, 568, 14), // "setHandleWidth"
QT_MOC_LITERAL(49, 583, 15), // "setOpaqueResize"
QT_MOC_LITERAL(50, 599, 6), // "opaque"
QT_MOC_LITERAL(51, 606, 14), // "setOrientation"
QT_MOC_LITERAL(52, 621, 13), // "setRubberBand"
QT_MOC_LITERAL(53, 635, 8), // "position"
QT_MOC_LITERAL(54, 644, 8), // "setSizes"
QT_MOC_LITERAL(55, 653, 10), // "QList<int>"
QT_MOC_LITERAL(56, 664, 4), // "list"
QT_MOC_LITERAL(57, 669, 16), // "setStretchFactor"
QT_MOC_LITERAL(58, 686, 7), // "stretch"
QT_MOC_LITERAL(59, 694, 8), // "sizeHint"
QT_MOC_LITERAL(60, 703, 5) // "sizes"

    },
    "PythonQtWrapper_QSplitter\0new_QSplitter\0"
    "QSplitter*\0\0QWidget*\0parent\0Qt::Orientation\0"
    "arg__1\0delete_QSplitter\0obj\0addWidget\0"
    "theWrappedObject\0PythonQtPassOwnershipToCPP<QWidget*>\0"
    "widget\0changeEvent\0QEvent*\0childEvent\0"
    "QChildEvent*\0childrenCollapsible\0"
    "closestLegalPosition\0arg__2\0count\0"
    "createHandle\0QSplitterHandle*\0event\0"
    "handle\0index\0handleWidth\0indexOf\0w\0"
    "insertWidget\0isCollapsible\0minimumSizeHint\0"
    "moveSplitter\0pos\0opaqueResize\0writeTo\0"
    "QTextStream&\0readFrom\0orientation\0"
    "refresh\0resizeEvent\0QResizeEvent*\0"
    "restoreState\0state\0saveState\0"
    "setChildrenCollapsible\0setCollapsible\0"
    "setHandleWidth\0setOpaqueResize\0opaque\0"
    "setOrientation\0setRubberBand\0position\0"
    "setSizes\0QList<int>\0list\0setStretchFactor\0"
    "stretch\0sizeHint\0sizes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSplitter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  214,    3, 0x0a /* Public */,
       1,    0,  217,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  218,    3, 0x0a /* Public */,
       1,    1,  223,    3, 0x2a /* Public | MethodCloned */,
       8,    1,  226,    3, 0x0a /* Public */,
      10,    2,  229,    3, 0x0a /* Public */,
      14,    2,  234,    3, 0x0a /* Public */,
      16,    2,  239,    3, 0x0a /* Public */,
      18,    1,  244,    3, 0x0a /* Public */,
      19,    3,  247,    3, 0x0a /* Public */,
      21,    1,  254,    3, 0x0a /* Public */,
      22,    1,  257,    3, 0x0a /* Public */,
      24,    2,  260,    3, 0x0a /* Public */,
      25,    2,  265,    3, 0x0a /* Public */,
      27,    1,  270,    3, 0x0a /* Public */,
      28,    2,  273,    3, 0x0a /* Public */,
      30,    3,  278,    3, 0x0a /* Public */,
      31,    2,  285,    3, 0x0a /* Public */,
      32,    1,  290,    3, 0x0a /* Public */,
      33,    3,  293,    3, 0x0a /* Public */,
      35,    1,  300,    3, 0x0a /* Public */,
      36,    2,  303,    3, 0x0a /* Public */,
      38,    2,  308,    3, 0x0a /* Public */,
      39,    1,  313,    3, 0x0a /* Public */,
      40,    1,  316,    3, 0x0a /* Public */,
      41,    2,  319,    3, 0x0a /* Public */,
      43,    2,  324,    3, 0x0a /* Public */,
      45,    1,  329,    3, 0x0a /* Public */,
      46,    2,  332,    3, 0x0a /* Public */,
      47,    3,  337,    3, 0x0a /* Public */,
      48,    2,  344,    3, 0x0a /* Public */,
      49,    2,  349,    3, 0x0a /* Public */,
      49,    1,  354,    3, 0x2a /* Public | MethodCloned */,
      51,    2,  357,    3, 0x0a /* Public */,
      52,    2,  362,    3, 0x0a /* Public */,
      54,    2,  367,    3, 0x0a /* Public */,
      57,    3,  372,    3, 0x0a /* Public */,
      59,    1,  379,    3, 0x0a /* Public */,
      60,    1,  382,    3, 0x0a /* Public */,
      13,    2,  385,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 6, 0x80000000 | 4,    7,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 15,   11,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17,   11,    7,
    QMetaType::Bool, 0x80000000 | 2,   11,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   11,    7,   20,
    QMetaType::Int, 0x80000000 | 2,   11,
    0x80000000 | 23, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,   11,    7,
    0x80000000 | 23, 0x80000000 | 2, QMetaType::Int,   11,   26,
    QMetaType::Int, 0x80000000 | 2,   11,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 4,   11,   29,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 12,   11,   26,   13,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   11,   26,
    QMetaType::QSize, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   11,   34,   26,
    QMetaType::Bool, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 37,   11,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 37,   11,    7,
    0x80000000 | 6, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 42,   11,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray,   11,   44,
    QMetaType::QByteArray, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   11,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Bool,   11,   26,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   11,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   11,   50,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 6,   11,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   11,   53,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 55,   11,   56,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   11,   26,   58,
    QMetaType::QSize, 0x80000000 | 2,   11,
    0x80000000 | 55, 0x80000000 | 2,   11,
    0x80000000 | 4, 0x80000000 | 2, QMetaType::Int,   11,   26,

       0        // eod
};

void PythonQtWrapper_QSplitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSplitter *_t = static_cast<PythonQtWrapper_QSplitter *>(_o);
        switch (_id) {
        case 0: { QSplitter* _r = _t->new_QSplitter((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        case 1: { QSplitter* _r = _t->new_QSplitter();
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        case 2: { QSplitter* _r = _t->new_QSplitter((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        case 3: { QSplitter* _r = _t->new_QSplitter((*reinterpret_cast< Qt::Orientation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSplitter((*reinterpret_cast< QSplitter*(*)>(_a[1]))); break;
        case 5: _t->addWidget((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2]))); break;
        case 6: _t->changeEvent((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 7: _t->childEvent((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QChildEvent*(*)>(_a[2]))); break;
        case 8: { bool _r = _t->childrenCollapsible((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->closestLegalPosition((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->count((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QSplitterHandle* _r = _t->createHandle((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplitterHandle**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->event((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QSplitterHandle* _r = _t->handle((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplitterHandle**>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->handleWidth((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->indexOf((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: _t->insertWidget((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3]))); break;
        case 17: { bool _r = _t->isCollapsible((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QSize _r = _t->minimumSizeHint((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 19: _t->moveSplitter((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: { bool _r = _t->opaqueResize((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->writeTo((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2]))); break;
        case 22: _t->readFrom((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2]))); break;
        case 23: { Qt::Orientation _r = _t->orientation((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        case 24: _t->refresh((*reinterpret_cast< QSplitter*(*)>(_a[1]))); break;
        case 25: _t->resizeEvent((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 26: { bool _r = _t->restoreState((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { QByteArray _r = _t->saveState((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 28: _t->setChildrenCollapsible((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->setCollapsible((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 30: _t->setHandleWidth((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->setOpaqueResize((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 32: _t->setOpaqueResize((*reinterpret_cast< QSplitter*(*)>(_a[1]))); break;
        case 33: _t->setOrientation((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 34: _t->setRubberBand((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->setSizes((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 36: _t->setStretchFactor((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: { QSize _r = _t->sizeHint((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 38: { QList<int> _r = _t->sizes((*reinterpret_cast< QSplitter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 39: { QWidget* _r = _t->widget((*reinterpret_cast< QSplitter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSplitter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSplitter.data,
      qt_meta_data_PythonQtWrapper_QSplitter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSplitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSplitter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSplitter.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSplitter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSplitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSplitterHandle_t {
    QByteArrayData data[30];
    char stringdata[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSplitterHandle_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSplitterHandle_t qt_meta_stringdata_PythonQtWrapper_QSplitterHandle = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QSplitterHandle"
QT_MOC_LITERAL(1, 32, 19), // "new_QSplitterHandle"
QT_MOC_LITERAL(2, 52, 16), // "QSplitterHandle*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 15), // "Qt::Orientation"
QT_MOC_LITERAL(5, 86, 1), // "o"
QT_MOC_LITERAL(6, 88, 10), // "QSplitter*"
QT_MOC_LITERAL(7, 99, 6), // "parent"
QT_MOC_LITERAL(8, 106, 22), // "delete_QSplitterHandle"
QT_MOC_LITERAL(9, 129, 3), // "obj"
QT_MOC_LITERAL(10, 133, 20), // "closestLegalPosition"
QT_MOC_LITERAL(11, 154, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 171, 1), // "p"
QT_MOC_LITERAL(13, 173, 5), // "event"
QT_MOC_LITERAL(14, 179, 7), // "QEvent*"
QT_MOC_LITERAL(15, 187, 6), // "arg__1"
QT_MOC_LITERAL(16, 194, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(17, 209, 12), // "QMouseEvent*"
QT_MOC_LITERAL(18, 222, 15), // "mousePressEvent"
QT_MOC_LITERAL(19, 238, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(20, 256, 12), // "moveSplitter"
QT_MOC_LITERAL(21, 269, 12), // "opaqueResize"
QT_MOC_LITERAL(22, 282, 11), // "orientation"
QT_MOC_LITERAL(23, 294, 10), // "paintEvent"
QT_MOC_LITERAL(24, 305, 12), // "QPaintEvent*"
QT_MOC_LITERAL(25, 318, 11), // "resizeEvent"
QT_MOC_LITERAL(26, 330, 13), // "QResizeEvent*"
QT_MOC_LITERAL(27, 344, 14), // "setOrientation"
QT_MOC_LITERAL(28, 359, 8), // "sizeHint"
QT_MOC_LITERAL(29, 368, 8) // "splitter"

    },
    "PythonQtWrapper_QSplitterHandle\0"
    "new_QSplitterHandle\0QSplitterHandle*\0"
    "\0Qt::Orientation\0o\0QSplitter*\0parent\0"
    "delete_QSplitterHandle\0obj\0"
    "closestLegalPosition\0theWrappedObject\0"
    "p\0event\0QEvent*\0arg__1\0mouseMoveEvent\0"
    "QMouseEvent*\0mousePressEvent\0"
    "mouseReleaseEvent\0moveSplitter\0"
    "opaqueResize\0orientation\0paintEvent\0"
    "QPaintEvent*\0resizeEvent\0QResizeEvent*\0"
    "setOrientation\0sizeHint\0splitter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSplitterHandle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   89,    3, 0x0a /* Public */,
       8,    1,   94,    3, 0x0a /* Public */,
      10,    2,   97,    3, 0x0a /* Public */,
      13,    2,  102,    3, 0x0a /* Public */,
      16,    2,  107,    3, 0x0a /* Public */,
      18,    2,  112,    3, 0x0a /* Public */,
      19,    2,  117,    3, 0x0a /* Public */,
      20,    2,  122,    3, 0x0a /* Public */,
      21,    1,  127,    3, 0x0a /* Public */,
      22,    1,  130,    3, 0x0a /* Public */,
      23,    2,  133,    3, 0x0a /* Public */,
      25,    2,  138,    3, 0x0a /* Public */,
      27,    2,  143,    3, 0x0a /* Public */,
      28,    1,  148,    3, 0x0a /* Public */,
      29,    1,  151,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,   11,   12,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 14,   11,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17,   11,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17,   11,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17,   11,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   11,   12,
    QMetaType::Bool, 0x80000000 | 2,   11,
    0x80000000 | 4, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,   11,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 26,   11,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   11,    5,
    QMetaType::QSize, 0x80000000 | 2,   11,
    0x80000000 | 6, 0x80000000 | 2,   11,

       0        // eod
};

void PythonQtWrapper_QSplitterHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSplitterHandle *_t = static_cast<PythonQtWrapper_QSplitterHandle *>(_o);
        switch (_id) {
        case 0: { QSplitterHandle* _r = _t->new_QSplitterHandle((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< QSplitter*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSplitterHandle**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSplitterHandle((*reinterpret_cast< QSplitterHandle*(*)>(_a[1]))); break;
        case 2: { int _r = _t->closestLegalPosition((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->event((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->mouseMoveEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 5: _t->mousePressEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 6: _t->mouseReleaseEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 7: _t->moveSplitter((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { bool _r = _t->opaqueResize((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { Qt::Orientation _r = _t->orientation((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Orientation*>(_a[0]) = _r; }  break;
        case 10: _t->paintEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 11: _t->resizeEvent((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 12: _t->setOrientation((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2]))); break;
        case 13: { QSize _r = _t->sizeHint((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 14: { QSplitter* _r = _t->splitter((*reinterpret_cast< QSplitterHandle*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSplitter**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitter* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSplitterHandle* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSplitterHandle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSplitterHandle.data,
      qt_meta_data_PythonQtWrapper_QSplitterHandle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSplitterHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSplitterHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSplitterHandle.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSplitterHandle*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSplitterHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QStackedLayout_t {
    QByteArrayData data[36];
    char stringdata[438];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QStackedLayout_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QStackedLayout_t qt_meta_stringdata_PythonQtWrapper_QStackedLayout = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QStackedLayout"
QT_MOC_LITERAL(1, 31, 18), // "new_QStackedLayout"
QT_MOC_LITERAL(2, 50, 15), // "QStackedLayout*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 8), // "QLayout*"
QT_MOC_LITERAL(5, 76, 12), // "parentLayout"
QT_MOC_LITERAL(6, 89, 8), // "QWidget*"
QT_MOC_LITERAL(7, 98, 6), // "parent"
QT_MOC_LITERAL(8, 105, 21), // "delete_QStackedLayout"
QT_MOC_LITERAL(9, 127, 3), // "obj"
QT_MOC_LITERAL(10, 131, 7), // "addItem"
QT_MOC_LITERAL(11, 139, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 156, 12), // "QLayoutItem*"
QT_MOC_LITERAL(13, 169, 4), // "item"
QT_MOC_LITERAL(14, 174, 9), // "addWidget"
QT_MOC_LITERAL(15, 184, 1), // "w"
QT_MOC_LITERAL(16, 186, 5), // "count"
QT_MOC_LITERAL(17, 192, 12), // "currentIndex"
QT_MOC_LITERAL(18, 205, 13), // "currentWidget"
QT_MOC_LITERAL(19, 219, 17), // "hasHeightForWidth"
QT_MOC_LITERAL(20, 237, 14), // "heightForWidth"
QT_MOC_LITERAL(21, 252, 5), // "width"
QT_MOC_LITERAL(22, 258, 12), // "insertWidget"
QT_MOC_LITERAL(23, 271, 5), // "index"
QT_MOC_LITERAL(24, 277, 36), // "PythonQtPassOwnershipToCPP<QW..."
QT_MOC_LITERAL(25, 314, 6), // "itemAt"
QT_MOC_LITERAL(26, 321, 6), // "arg__1"
QT_MOC_LITERAL(27, 328, 11), // "minimumSize"
QT_MOC_LITERAL(28, 340, 11), // "setGeometry"
QT_MOC_LITERAL(29, 352, 4), // "rect"
QT_MOC_LITERAL(30, 357, 15), // "setStackingMode"
QT_MOC_LITERAL(31, 373, 28), // "QStackedLayout::StackingMode"
QT_MOC_LITERAL(32, 402, 12), // "stackingMode"
QT_MOC_LITERAL(33, 415, 8), // "sizeHint"
QT_MOC_LITERAL(34, 424, 6), // "takeAt"
QT_MOC_LITERAL(35, 431, 6) // "widget"

    },
    "PythonQtWrapper_QStackedLayout\0"
    "new_QStackedLayout\0QStackedLayout*\0\0"
    "QLayout*\0parentLayout\0QWidget*\0parent\0"
    "delete_QStackedLayout\0obj\0addItem\0"
    "theWrappedObject\0QLayoutItem*\0item\0"
    "addWidget\0w\0count\0currentIndex\0"
    "currentWidget\0hasHeightForWidth\0"
    "heightForWidth\0width\0insertWidget\0"
    "index\0PythonQtPassOwnershipToCPP<QWidget*>\0"
    "itemAt\0arg__1\0minimumSize\0setGeometry\0"
    "rect\0setStackingMode\0QStackedLayout::StackingMode\0"
    "stackingMode\0sizeHint\0takeAt\0widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QStackedLayout[] = {

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
       1,    0,  119,    3, 0x0a /* Public */,
       1,    1,  120,    3, 0x0a /* Public */,
       1,    1,  123,    3, 0x0a /* Public */,
       8,    1,  126,    3, 0x0a /* Public */,
      10,    2,  129,    3, 0x0a /* Public */,
      14,    2,  134,    3, 0x0a /* Public */,
      16,    1,  139,    3, 0x0a /* Public */,
      17,    1,  142,    3, 0x0a /* Public */,
      18,    1,  145,    3, 0x0a /* Public */,
      19,    1,  148,    3, 0x0a /* Public */,
      20,    2,  151,    3, 0x0a /* Public */,
      22,    3,  156,    3, 0x0a /* Public */,
      25,    2,  163,    3, 0x0a /* Public */,
      27,    1,  168,    3, 0x0a /* Public */,
      28,    2,  171,    3, 0x0a /* Public */,
      30,    2,  176,    3, 0x0a /* Public */,
      33,    1,  181,    3, 0x0a /* Public */,
      32,    1,  184,    3, 0x0a /* Public */,
      34,    2,  187,    3, 0x0a /* Public */,
      35,    1,  192,    3, 0x0a /* Public */,
      35,    2,  195,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,   11,   13,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 6,   11,   15,
    QMetaType::Int, 0x80000000 | 2,   11,
    QMetaType::Int, 0x80000000 | 2,   11,
    0x80000000 | 6, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2,   11,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,   11,   21,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 24,   11,   23,   15,
    0x80000000 | 12, 0x80000000 | 2, QMetaType::Int,   11,   26,
    QMetaType::QSize, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QRect,   11,   29,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 31,   11,   32,
    QMetaType::QSize, 0x80000000 | 2,   11,
    0x80000000 | 31, 0x80000000 | 2,   11,
    0x80000000 | 12, 0x80000000 | 2, QMetaType::Int,   11,   26,
    0x80000000 | 6, 0x80000000 | 2,   11,
    0x80000000 | 6, 0x80000000 | 2, QMetaType::Int,   11,   26,

       0        // eod
};

void PythonQtWrapper_QStackedLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QStackedLayout *_t = static_cast<PythonQtWrapper_QStackedLayout *>(_o);
        switch (_id) {
        case 0: { QStackedLayout* _r = _t->new_QStackedLayout();
            if (_a[0]) *reinterpret_cast< QStackedLayout**>(_a[0]) = _r; }  break;
        case 1: { QStackedLayout* _r = _t->new_QStackedLayout((*reinterpret_cast< QLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStackedLayout**>(_a[0]) = _r; }  break;
        case 2: { QStackedLayout* _r = _t->new_QStackedLayout((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStackedLayout**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStackedLayout((*reinterpret_cast< QStackedLayout*(*)>(_a[1]))); break;
        case 4: _t->addItem((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< QLayoutItem*(*)>(_a[2]))); break;
        case 5: { int _r = _t->addWidget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->count((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->currentIndex((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QWidget* _r = _t->currentWidget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasHeightForWidth((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->heightForWidth((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->insertWidget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { QLayoutItem* _r = _t->itemAt((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 13: { QSize _r = _t->minimumSize((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 14: _t->setGeometry((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< const QRect(*)>(_a[2]))); break;
        case 15: _t->setStackingMode((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< QStackedLayout::StackingMode(*)>(_a[2]))); break;
        case 16: { QSize _r = _t->sizeHint((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 17: { QStackedLayout::StackingMode _r = _t->stackingMode((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStackedLayout::StackingMode*>(_a[0]) = _r; }  break;
        case 18: { QLayoutItem* _r = _t->takeAt((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QLayoutItem**>(_a[0]) = _r; }  break;
        case 19: { QWidget* _r = _t->widget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 20: { QWidget* _r = _t->widget((*reinterpret_cast< QStackedLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLayout* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedLayout* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QStackedLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStackedLayout.data,
      qt_meta_data_PythonQtWrapper_QStackedLayout,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QStackedLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QStackedLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStackedLayout.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStackedLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStackedLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QStackedWidget_t {
    QByteArrayData data[25];
    char stringdata[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QStackedWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QStackedWidget_t qt_meta_stringdata_PythonQtWrapper_QStackedWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QStackedWidget"
QT_MOC_LITERAL(1, 31, 18), // "new_QStackedWidget"
QT_MOC_LITERAL(2, 50, 15), // "QStackedWidget*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 8), // "QWidget*"
QT_MOC_LITERAL(5, 76, 6), // "parent"
QT_MOC_LITERAL(6, 83, 21), // "delete_QStackedWidget"
QT_MOC_LITERAL(7, 105, 3), // "obj"
QT_MOC_LITERAL(8, 109, 9), // "addWidget"
QT_MOC_LITERAL(9, 119, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 136, 36), // "PythonQtPassOwnershipToCPP<QW..."
QT_MOC_LITERAL(11, 173, 1), // "w"
QT_MOC_LITERAL(12, 175, 5), // "count"
QT_MOC_LITERAL(13, 181, 12), // "currentIndex"
QT_MOC_LITERAL(14, 194, 13), // "currentWidget"
QT_MOC_LITERAL(15, 208, 5), // "event"
QT_MOC_LITERAL(16, 214, 7), // "QEvent*"
QT_MOC_LITERAL(17, 222, 1), // "e"
QT_MOC_LITERAL(18, 224, 7), // "indexOf"
QT_MOC_LITERAL(19, 232, 6), // "arg__1"
QT_MOC_LITERAL(20, 239, 12), // "insertWidget"
QT_MOC_LITERAL(21, 252, 5), // "index"
QT_MOC_LITERAL(22, 258, 12), // "removeWidget"
QT_MOC_LITERAL(23, 271, 39), // "PythonQtPassOwnershipToPython..."
QT_MOC_LITERAL(24, 311, 6) // "widget"

    },
    "PythonQtWrapper_QStackedWidget\0"
    "new_QStackedWidget\0QStackedWidget*\0\0"
    "QWidget*\0parent\0delete_QStackedWidget\0"
    "obj\0addWidget\0theWrappedObject\0"
    "PythonQtPassOwnershipToCPP<QWidget*>\0"
    "w\0count\0currentIndex\0currentWidget\0"
    "event\0QEvent*\0e\0indexOf\0arg__1\0"
    "insertWidget\0index\0removeWidget\0"
    "PythonQtPassOwnershipToPython<QWidget*>\0"
    "widget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QStackedWidget[] = {

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
       1,    1,   74,    3, 0x0a /* Public */,
       1,    0,   77,    3, 0x2a /* Public | MethodCloned */,
       6,    1,   78,    3, 0x0a /* Public */,
       8,    2,   81,    3, 0x0a /* Public */,
      12,    1,   86,    3, 0x0a /* Public */,
      13,    1,   89,    3, 0x0a /* Public */,
      14,    1,   92,    3, 0x0a /* Public */,
      15,    2,   95,    3, 0x0a /* Public */,
      18,    2,  100,    3, 0x0a /* Public */,
      20,    3,  105,    3, 0x0a /* Public */,
      22,    2,  112,    3, 0x0a /* Public */,
      24,    2,  117,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 16,    9,   17,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 4,    9,   19,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 10,    9,   21,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,    9,   11,
    0x80000000 | 4, 0x80000000 | 2, QMetaType::Int,    9,   19,

       0        // eod
};

void PythonQtWrapper_QStackedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QStackedWidget *_t = static_cast<PythonQtWrapper_QStackedWidget *>(_o);
        switch (_id) {
        case 0: { QStackedWidget* _r = _t->new_QStackedWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStackedWidget**>(_a[0]) = _r; }  break;
        case 1: { QStackedWidget* _r = _t->new_QStackedWidget();
            if (_a[0]) *reinterpret_cast< QStackedWidget**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStackedWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1]))); break;
        case 3: { int _r = _t->addWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->count((*reinterpret_cast< QStackedWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->currentIndex((*reinterpret_cast< QStackedWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QWidget* _r = _t->currentWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->event((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->indexOf((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->insertWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->removeWidget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToPython<QWidget*>(*)>(_a[2]))); break;
        case 11: { QWidget* _r = _t->widget((*reinterpret_cast< QStackedWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStackedWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QStackedWidget::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStackedWidget.data,
      qt_meta_data_PythonQtWrapper_QStackedWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QStackedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QStackedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStackedWidget.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStackedWidget*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStackedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QStandardItem_t {
    QByteArrayData data[116];
    char stringdata[1369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QStandardItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QStandardItem_t qt_meta_stringdata_PythonQtWrapper_QStandardItem = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QStandardItem"
QT_MOC_LITERAL(1, 30, 17), // "new_QStandardItem"
QT_MOC_LITERAL(2, 48, 14), // "QStandardItem*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 4), // "icon"
QT_MOC_LITERAL(5, 69, 4), // "text"
QT_MOC_LITERAL(6, 74, 13), // "QStandardItem"
QT_MOC_LITERAL(7, 88, 5), // "other"
QT_MOC_LITERAL(8, 94, 4), // "rows"
QT_MOC_LITERAL(9, 99, 7), // "columns"
QT_MOC_LITERAL(10, 107, 20), // "delete_QStandardItem"
QT_MOC_LITERAL(11, 128, 3), // "obj"
QT_MOC_LITERAL(12, 132, 21), // "accessibleDescription"
QT_MOC_LITERAL(13, 154, 16), // "theWrappedObject"
QT_MOC_LITERAL(14, 171, 14), // "accessibleText"
QT_MOC_LITERAL(15, 186, 12), // "appendColumn"
QT_MOC_LITERAL(16, 199, 50), // "PythonQtPassOwnershipToCPP<QL..."
QT_MOC_LITERAL(17, 250, 5), // "items"
QT_MOC_LITERAL(18, 256, 9), // "appendRow"
QT_MOC_LITERAL(19, 266, 42), // "PythonQtPassOwnershipToCPP<QS..."
QT_MOC_LITERAL(20, 309, 4), // "item"
QT_MOC_LITERAL(21, 314, 10), // "appendRows"
QT_MOC_LITERAL(22, 325, 10), // "background"
QT_MOC_LITERAL(23, 336, 10), // "checkState"
QT_MOC_LITERAL(24, 347, 14), // "Qt::CheckState"
QT_MOC_LITERAL(25, 362, 5), // "child"
QT_MOC_LITERAL(26, 368, 3), // "row"
QT_MOC_LITERAL(27, 372, 6), // "column"
QT_MOC_LITERAL(28, 379, 5), // "clone"
QT_MOC_LITERAL(29, 385, 11), // "columnCount"
QT_MOC_LITERAL(30, 397, 4), // "data"
QT_MOC_LITERAL(31, 402, 4), // "role"
QT_MOC_LITERAL(32, 407, 15), // "emitDataChanged"
QT_MOC_LITERAL(33, 423, 5), // "flags"
QT_MOC_LITERAL(34, 429, 13), // "Qt::ItemFlags"
QT_MOC_LITERAL(35, 443, 4), // "font"
QT_MOC_LITERAL(36, 448, 10), // "foreground"
QT_MOC_LITERAL(37, 459, 11), // "hasChildren"
QT_MOC_LITERAL(38, 471, 5), // "index"
QT_MOC_LITERAL(39, 477, 12), // "insertColumn"
QT_MOC_LITERAL(40, 490, 13), // "insertColumns"
QT_MOC_LITERAL(41, 504, 5), // "count"
QT_MOC_LITERAL(42, 510, 9), // "insertRow"
QT_MOC_LITERAL(43, 520, 10), // "insertRows"
QT_MOC_LITERAL(44, 531, 11), // "isCheckable"
QT_MOC_LITERAL(45, 543, 13), // "isDragEnabled"
QT_MOC_LITERAL(46, 557, 13), // "isDropEnabled"
QT_MOC_LITERAL(47, 571, 10), // "isEditable"
QT_MOC_LITERAL(48, 582, 9), // "isEnabled"
QT_MOC_LITERAL(49, 592, 12), // "isSelectable"
QT_MOC_LITERAL(50, 605, 10), // "isTristate"
QT_MOC_LITERAL(51, 616, 5), // "model"
QT_MOC_LITERAL(52, 622, 19), // "QStandardItemModel*"
QT_MOC_LITERAL(53, 642, 7), // "writeTo"
QT_MOC_LITERAL(54, 650, 12), // "QDataStream&"
QT_MOC_LITERAL(55, 663, 3), // "out"
QT_MOC_LITERAL(56, 667, 8), // "readFrom"
QT_MOC_LITERAL(57, 676, 2), // "in"
QT_MOC_LITERAL(58, 679, 6), // "parent"
QT_MOC_LITERAL(59, 686, 12), // "removeColumn"
QT_MOC_LITERAL(60, 699, 13), // "removeColumns"
QT_MOC_LITERAL(61, 713, 9), // "removeRow"
QT_MOC_LITERAL(62, 723, 10), // "removeRows"
QT_MOC_LITERAL(63, 734, 8), // "rowCount"
QT_MOC_LITERAL(64, 743, 24), // "setAccessibleDescription"
QT_MOC_LITERAL(65, 768, 17), // "setAccessibleText"
QT_MOC_LITERAL(66, 786, 13), // "setBackground"
QT_MOC_LITERAL(67, 800, 5), // "brush"
QT_MOC_LITERAL(68, 806, 13), // "setCheckState"
QT_MOC_LITERAL(69, 820, 12), // "setCheckable"
QT_MOC_LITERAL(70, 833, 9), // "checkable"
QT_MOC_LITERAL(71, 843, 8), // "setChild"
QT_MOC_LITERAL(72, 852, 14), // "setColumnCount"
QT_MOC_LITERAL(73, 867, 7), // "setData"
QT_MOC_LITERAL(74, 875, 5), // "value"
QT_MOC_LITERAL(75, 881, 14), // "setDragEnabled"
QT_MOC_LITERAL(76, 896, 11), // "dragEnabled"
QT_MOC_LITERAL(77, 908, 14), // "setDropEnabled"
QT_MOC_LITERAL(78, 923, 11), // "dropEnabled"
QT_MOC_LITERAL(79, 935, 11), // "setEditable"
QT_MOC_LITERAL(80, 947, 8), // "editable"
QT_MOC_LITERAL(81, 956, 10), // "setEnabled"
QT_MOC_LITERAL(82, 967, 7), // "enabled"
QT_MOC_LITERAL(83, 975, 8), // "setFlags"
QT_MOC_LITERAL(84, 984, 7), // "setFont"
QT_MOC_LITERAL(85, 992, 13), // "setForeground"
QT_MOC_LITERAL(86, 1006, 7), // "setIcon"
QT_MOC_LITERAL(87, 1014, 11), // "setRowCount"
QT_MOC_LITERAL(88, 1026, 13), // "setSelectable"
QT_MOC_LITERAL(89, 1040, 10), // "selectable"
QT_MOC_LITERAL(90, 1051, 11), // "setSizeHint"
QT_MOC_LITERAL(91, 1063, 8), // "sizeHint"
QT_MOC_LITERAL(92, 1072, 12), // "setStatusTip"
QT_MOC_LITERAL(93, 1085, 9), // "statusTip"
QT_MOC_LITERAL(94, 1095, 7), // "setText"
QT_MOC_LITERAL(95, 1103, 16), // "setTextAlignment"
QT_MOC_LITERAL(96, 1120, 13), // "Qt::Alignment"
QT_MOC_LITERAL(97, 1134, 13), // "textAlignment"
QT_MOC_LITERAL(98, 1148, 10), // "setToolTip"
QT_MOC_LITERAL(99, 1159, 7), // "toolTip"
QT_MOC_LITERAL(100, 1167, 11), // "setTristate"
QT_MOC_LITERAL(101, 1179, 8), // "tristate"
QT_MOC_LITERAL(102, 1188, 12), // "setWhatsThis"
QT_MOC_LITERAL(103, 1201, 9), // "whatsThis"
QT_MOC_LITERAL(104, 1211, 12), // "sortChildren"
QT_MOC_LITERAL(105, 1224, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(106, 1238, 5), // "order"
QT_MOC_LITERAL(107, 1244, 9), // "takeChild"
QT_MOC_LITERAL(108, 1254, 45), // "PythonQtPassOwnershipToPython..."
QT_MOC_LITERAL(109, 1300, 10), // "takeColumn"
QT_MOC_LITERAL(110, 1311, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(111, 1333, 7), // "takeRow"
QT_MOC_LITERAL(112, 1341, 4), // "type"
QT_MOC_LITERAL(113, 1346, 8), // "ItemType"
QT_MOC_LITERAL(114, 1355, 4), // "Type"
QT_MOC_LITERAL(115, 1360, 8) // "UserType"

    },
    "PythonQtWrapper_QStandardItem\0"
    "new_QStandardItem\0QStandardItem*\0\0"
    "icon\0text\0QStandardItem\0other\0rows\0"
    "columns\0delete_QStandardItem\0obj\0"
    "accessibleDescription\0theWrappedObject\0"
    "accessibleText\0appendColumn\0"
    "PythonQtPassOwnershipToCPP<QList<QStandardItem*> >\0"
    "items\0appendRow\0"
    "PythonQtPassOwnershipToCPP<QStandardItem*>\0"
    "item\0appendRows\0background\0checkState\0"
    "Qt::CheckState\0child\0row\0column\0clone\0"
    "columnCount\0data\0role\0emitDataChanged\0"
    "flags\0Qt::ItemFlags\0font\0foreground\0"
    "hasChildren\0index\0insertColumn\0"
    "insertColumns\0count\0insertRow\0insertRows\0"
    "isCheckable\0isDragEnabled\0isDropEnabled\0"
    "isEditable\0isEnabled\0isSelectable\0"
    "isTristate\0model\0QStandardItemModel*\0"
    "writeTo\0QDataStream&\0out\0readFrom\0in\0"
    "parent\0removeColumn\0removeColumns\0"
    "removeRow\0removeRows\0rowCount\0"
    "setAccessibleDescription\0setAccessibleText\0"
    "setBackground\0brush\0setCheckState\0"
    "setCheckable\0checkable\0setChild\0"
    "setColumnCount\0setData\0value\0"
    "setDragEnabled\0dragEnabled\0setDropEnabled\0"
    "dropEnabled\0setEditable\0editable\0"
    "setEnabled\0enabled\0setFlags\0setFont\0"
    "setForeground\0setIcon\0setRowCount\0"
    "setSelectable\0selectable\0setSizeHint\0"
    "sizeHint\0setStatusTip\0statusTip\0setText\0"
    "setTextAlignment\0Qt::Alignment\0"
    "textAlignment\0setToolTip\0toolTip\0"
    "setTristate\0tristate\0setWhatsThis\0"
    "whatsThis\0sortChildren\0Qt::SortOrder\0"
    "order\0takeChild\0"
    "PythonQtPassOwnershipToPython<QStandardItem*>\0"
    "takeColumn\0QList<QStandardItem*>\0"
    "takeRow\0type\0ItemType\0Type\0UserType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QStandardItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      92,   14, // methods
       0,    0, // properties
       1,  886, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  474,    3, 0x0a /* Public */,
       1,    2,  475,    3, 0x0a /* Public */,
       1,    1,  480,    3, 0x0a /* Public */,
       1,    1,  483,    3, 0x0a /* Public */,
       1,    2,  486,    3, 0x0a /* Public */,
       1,    1,  491,    3, 0x2a /* Public | MethodCloned */,
      10,    1,  494,    3, 0x0a /* Public */,
      12,    1,  497,    3, 0x0a /* Public */,
      14,    1,  500,    3, 0x0a /* Public */,
      15,    2,  503,    3, 0x0a /* Public */,
      18,    2,  508,    3, 0x0a /* Public */,
      18,    2,  513,    3, 0x0a /* Public */,
      21,    2,  518,    3, 0x0a /* Public */,
      22,    1,  523,    3, 0x0a /* Public */,
      23,    1,  526,    3, 0x0a /* Public */,
      25,    3,  529,    3, 0x0a /* Public */,
      25,    2,  536,    3, 0x2a /* Public | MethodCloned */,
      28,    1,  541,    3, 0x0a /* Public */,
      27,    1,  544,    3, 0x0a /* Public */,
      29,    1,  547,    3, 0x0a /* Public */,
      30,    2,  550,    3, 0x0a /* Public */,
      30,    1,  555,    3, 0x2a /* Public | MethodCloned */,
      32,    1,  558,    3, 0x0a /* Public */,
      33,    1,  561,    3, 0x0a /* Public */,
      35,    1,  564,    3, 0x0a /* Public */,
      36,    1,  567,    3, 0x0a /* Public */,
      37,    1,  570,    3, 0x0a /* Public */,
       4,    1,  573,    3, 0x0a /* Public */,
      38,    1,  576,    3, 0x0a /* Public */,
      39,    3,  579,    3, 0x0a /* Public */,
      40,    3,  586,    3, 0x0a /* Public */,
      42,    3,  593,    3, 0x0a /* Public */,
      42,    3,  600,    3, 0x0a /* Public */,
      43,    3,  607,    3, 0x0a /* Public */,
      43,    3,  614,    3, 0x0a /* Public */,
      44,    1,  621,    3, 0x0a /* Public */,
      45,    1,  624,    3, 0x0a /* Public */,
      46,    1,  627,    3, 0x0a /* Public */,
      47,    1,  630,    3, 0x0a /* Public */,
      48,    1,  633,    3, 0x0a /* Public */,
      49,    1,  636,    3, 0x0a /* Public */,
      50,    1,  639,    3, 0x0a /* Public */,
      51,    1,  642,    3, 0x0a /* Public */,
      53,    2,  645,    3, 0x0a /* Public */,
      56,    2,  650,    3, 0x0a /* Public */,
      58,    1,  655,    3, 0x0a /* Public */,
      59,    2,  658,    3, 0x0a /* Public */,
      60,    3,  663,    3, 0x0a /* Public */,
      61,    2,  670,    3, 0x0a /* Public */,
      62,    3,  675,    3, 0x0a /* Public */,
      26,    1,  682,    3, 0x0a /* Public */,
      63,    1,  685,    3, 0x0a /* Public */,
      64,    2,  688,    3, 0x0a /* Public */,
      65,    2,  693,    3, 0x0a /* Public */,
      66,    2,  698,    3, 0x0a /* Public */,
      68,    2,  703,    3, 0x0a /* Public */,
      69,    2,  708,    3, 0x0a /* Public */,
      71,    3,  713,    3, 0x0a /* Public */,
      71,    4,  720,    3, 0x0a /* Public */,
      72,    2,  729,    3, 0x0a /* Public */,
      73,    3,  734,    3, 0x0a /* Public */,
      73,    2,  741,    3, 0x2a /* Public | MethodCloned */,
      75,    2,  746,    3, 0x0a /* Public */,
      77,    2,  751,    3, 0x0a /* Public */,
      79,    2,  756,    3, 0x0a /* Public */,
      81,    2,  761,    3, 0x0a /* Public */,
      83,    2,  766,    3, 0x0a /* Public */,
      84,    2,  771,    3, 0x0a /* Public */,
      85,    2,  776,    3, 0x0a /* Public */,
      86,    2,  781,    3, 0x0a /* Public */,
      87,    2,  786,    3, 0x0a /* Public */,
      88,    2,  791,    3, 0x0a /* Public */,
      90,    2,  796,    3, 0x0a /* Public */,
      92,    2,  801,    3, 0x0a /* Public */,
      94,    2,  806,    3, 0x0a /* Public */,
      95,    2,  811,    3, 0x0a /* Public */,
      98,    2,  816,    3, 0x0a /* Public */,
     100,    2,  821,    3, 0x0a /* Public */,
     102,    2,  826,    3, 0x0a /* Public */,
      91,    1,  831,    3, 0x0a /* Public */,
     104,    3,  834,    3, 0x0a /* Public */,
     104,    2,  841,    3, 0x2a /* Public | MethodCloned */,
      93,    1,  846,    3, 0x0a /* Public */,
     107,    3,  849,    3, 0x0a /* Public */,
     107,    2,  856,    3, 0x2a /* Public | MethodCloned */,
     109,    2,  861,    3, 0x0a /* Public */,
     111,    2,  866,    3, 0x0a /* Public */,
       5,    1,  871,    3, 0x0a /* Public */,
      97,    1,  874,    3, 0x0a /* Public */,
      99,    1,  877,    3, 0x0a /* Public */,
     112,    1,  880,    3, 0x0a /* Public */,
     103,    1,  883,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QIcon, QMetaType::QString,    4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, QMetaType::QString,    5,
    0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,    9,
    0x80000000 | 2, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::QString, 0x80000000 | 2,   13,
    QMetaType::QString, 0x80000000 | 2,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   13,   17,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 19,   13,   20,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   13,   17,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   13,   17,
    QMetaType::QBrush, 0x80000000 | 2,   13,
    0x80000000 | 24, 0x80000000 | 2,   13,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   13,   26,   27,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::Int,   13,   26,
    0x80000000 | 2, 0x80000000 | 2,   13,
    QMetaType::Int, 0x80000000 | 2,   13,
    QMetaType::Int, 0x80000000 | 2,   13,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int,   13,   31,
    QMetaType::QVariant, 0x80000000 | 2,   13,
    QMetaType::Void, 0x80000000 | 2,   13,
    0x80000000 | 34, 0x80000000 | 2,   13,
    QMetaType::QFont, 0x80000000 | 2,   13,
    QMetaType::QBrush, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    QMetaType::QIcon, 0x80000000 | 2,   13,
    QMetaType::QModelIndex, 0x80000000 | 2,   13,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 16,   13,   27,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   13,   27,   41,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 2,   13,   26,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 16,   13,   26,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 16,   13,   26,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   13,   26,   41,
    QMetaType::Bool, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    0x80000000 | 52, 0x80000000 | 2,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 54,   13,   55,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 54,   13,   57,
    0x80000000 | 2, 0x80000000 | 2,   13,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   13,   27,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   13,   27,   41,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   13,   26,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   13,   26,   41,
    QMetaType::Int, 0x80000000 | 2,   13,
    QMetaType::Int, 0x80000000 | 2,   13,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   13,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   13,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QBrush,   13,   67,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,   13,   23,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   13,   70,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 19,   13,   26,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, 0x80000000 | 19,   13,   26,   27,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   13,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant, QMetaType::Int,   13,   74,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant,   13,   74,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   13,   76,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   13,   78,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   13,   80,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   13,   82,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 34,   13,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QFont,   13,   35,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QBrush,   13,   67,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QIcon,   13,    4,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   13,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   13,   89,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QSize,   13,   91,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   13,   93,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   13,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 96,   13,   97,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   13,   99,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   13,  101,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   13,  103,
    QMetaType::QSize, 0x80000000 | 2,   13,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 105,   13,   27,  106,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   13,   27,
    QMetaType::QString, 0x80000000 | 2,   13,
    0x80000000 | 108, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   13,   26,   27,
    0x80000000 | 108, 0x80000000 | 2, QMetaType::Int,   13,   26,
    0x80000000 | 110, 0x80000000 | 2, QMetaType::Int,   13,   27,
    0x80000000 | 110, 0x80000000 | 2, QMetaType::Int,   13,   26,
    QMetaType::QString, 0x80000000 | 2,   13,
    0x80000000 | 96, 0x80000000 | 2,   13,
    QMetaType::QString, 0x80000000 | 2,   13,
    QMetaType::Int, 0x80000000 | 2,   13,
    QMetaType::QString, 0x80000000 | 2,   13,

 // enums: name, flags, count, data
     113, 0x0,    2,  890,

 // enum data: key, value
     114, uint(PythonQtWrapper_QStandardItem::Type),
     115, uint(PythonQtWrapper_QStandardItem::UserType),

       0        // eod
};

void PythonQtWrapper_QStandardItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QStandardItem *_t = static_cast<PythonQtWrapper_QStandardItem *>(_o);
        switch (_id) {
        case 0: { QStandardItem* _r = _t->new_QStandardItem();
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 1: { QStandardItem* _r = _t->new_QStandardItem((*reinterpret_cast< const QIcon(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 2: { QStandardItem* _r = _t->new_QStandardItem((*reinterpret_cast< const QStandardItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 3: { QStandardItem* _r = _t->new_QStandardItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 4: { QStandardItem* _r = _t->new_QStandardItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 5: { QStandardItem* _r = _t->new_QStandardItem((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QStandardItem((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 7: { QString _r = _t->accessibleDescription((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->accessibleText((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: _t->appendColumn((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[2]))); break;
        case 10: _t->appendRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QStandardItem*>(*)>(_a[2]))); break;
        case 11: _t->appendRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[2]))); break;
        case 12: _t->appendRows((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[2]))); break;
        case 13: { QBrush _r = _t->background((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 14: { Qt::CheckState _r = _t->checkState((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CheckState*>(_a[0]) = _r; }  break;
        case 15: { QStandardItem* _r = _t->child((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 16: { QStandardItem* _r = _t->child((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 17: { QStandardItem* _r = _t->clone((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->column((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { int _r = _t->columnCount((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { QVariant _r = _t->data((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 21: { QVariant _r = _t->data((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 22: _t->emitDataChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 23: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 24: { QFont _r = _t->font((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 25: { QBrush _r = _t->foreground((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->hasChildren((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { QIcon _r = _t->icon((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIcon*>(_a[0]) = _r; }  break;
        case 28: { QModelIndex _r = _t->index((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 29: _t->insertColumn((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[3]))); break;
        case 30: _t->insertColumns((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: _t->insertRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStandardItem*(*)>(_a[3]))); break;
        case 32: _t->insertRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[3]))); break;
        case 33: _t->insertRows((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[3]))); break;
        case 34: _t->insertRows((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 35: { bool _r = _t->isCheckable((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->isDragEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->isDropEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->isEditable((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->isEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->isSelectable((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->isTristate((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { QStandardItemModel* _r = _t->model((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 43: _t->writeTo((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 44: _t->readFrom((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 45: { QStandardItem* _r = _t->parent((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 46: _t->removeColumn((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->removeColumns((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 48: _t->removeRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: _t->removeRows((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 50: { int _r = _t->row((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 51: { int _r = _t->rowCount((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 52: _t->setAccessibleDescription((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 53: _t->setAccessibleText((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 54: _t->setBackground((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 55: _t->setCheckState((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< Qt::CheckState(*)>(_a[2]))); break;
        case 56: _t->setCheckable((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 57: _t->setChild((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QStandardItem*>(*)>(_a[3]))); break;
        case 58: _t->setChild((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QStandardItem*>(*)>(_a[4]))); break;
        case 59: _t->setColumnCount((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 60: _t->setData((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 61: _t->setData((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 62: _t->setDragEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 63: _t->setDropEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 64: _t->setEditable((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 65: _t->setEnabled((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 66: _t->setFlags((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< Qt::ItemFlags(*)>(_a[2]))); break;
        case 67: _t->setFont((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 68: _t->setForeground((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 69: _t->setIcon((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QIcon(*)>(_a[2]))); break;
        case 70: _t->setRowCount((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 71: _t->setSelectable((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 72: _t->setSizeHint((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2]))); break;
        case 73: _t->setStatusTip((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 74: _t->setText((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 75: _t->setTextAlignment((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 76: _t->setToolTip((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 77: _t->setTristate((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 78: _t->setWhatsThis((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 79: { QSize _r = _t->sizeHint((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = _r; }  break;
        case 80: _t->sortChildren((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 81: _t->sortChildren((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 82: { QString _r = _t->statusTip((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 83: { PythonQtPassOwnershipToPython<QStandardItem*> _r = _t->takeChild((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 84: { PythonQtPassOwnershipToPython<QStandardItem*> _r = _t->takeChild((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 85: { QList<QStandardItem*> _r = _t->takeColumn((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 86: { QList<QStandardItem*> _r = _t->takeRow((*reinterpret_cast< QStandardItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 87: { QString _r = _t->text((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 88: { Qt::Alignment _r = _t->textAlignment((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 89: { QString _r = _t->toolTip((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 90: { int _r = _t->type((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 91: { QString _r = _t->whatsThis((*reinterpret_cast< QStandardItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QStandardItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStandardItem.data,
      qt_meta_data_PythonQtWrapper_QStandardItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QStandardItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QStandardItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStandardItem.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStandardItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStandardItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 92;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QStandardItemModel_t {
    QByteArrayData data[96];
    char stringdata[1387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QStandardItemModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QStandardItemModel_t qt_meta_stringdata_PythonQtWrapper_QStandardItemModel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QStandardItem..."
QT_MOC_LITERAL(1, 35, 22), // "new_QStandardItemModel"
QT_MOC_LITERAL(2, 58, 19), // "QStandardItemModel*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 6), // "parent"
QT_MOC_LITERAL(5, 86, 4), // "rows"
QT_MOC_LITERAL(6, 91, 7), // "columns"
QT_MOC_LITERAL(7, 99, 25), // "delete_QStandardItemModel"
QT_MOC_LITERAL(8, 125, 3), // "obj"
QT_MOC_LITERAL(9, 129, 12), // "appendColumn"
QT_MOC_LITERAL(10, 142, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 159, 50), // "PythonQtPassOwnershipToCPP<QL..."
QT_MOC_LITERAL(12, 210, 5), // "items"
QT_MOC_LITERAL(13, 216, 9), // "appendRow"
QT_MOC_LITERAL(14, 226, 42), // "PythonQtPassOwnershipToCPP<QS..."
QT_MOC_LITERAL(15, 269, 4), // "item"
QT_MOC_LITERAL(16, 274, 5), // "clear"
QT_MOC_LITERAL(17, 280, 11), // "columnCount"
QT_MOC_LITERAL(18, 292, 4), // "data"
QT_MOC_LITERAL(19, 297, 5), // "index"
QT_MOC_LITERAL(20, 303, 4), // "role"
QT_MOC_LITERAL(21, 308, 12), // "dropMimeData"
QT_MOC_LITERAL(22, 321, 16), // "const QMimeData*"
QT_MOC_LITERAL(23, 338, 14), // "Qt::DropAction"
QT_MOC_LITERAL(24, 353, 6), // "action"
QT_MOC_LITERAL(25, 360, 3), // "row"
QT_MOC_LITERAL(26, 364, 6), // "column"
QT_MOC_LITERAL(27, 371, 9), // "findItems"
QT_MOC_LITERAL(28, 381, 21), // "QList<QStandardItem*>"
QT_MOC_LITERAL(29, 403, 4), // "text"
QT_MOC_LITERAL(30, 408, 14), // "Qt::MatchFlags"
QT_MOC_LITERAL(31, 423, 5), // "flags"
QT_MOC_LITERAL(32, 429, 13), // "Qt::ItemFlags"
QT_MOC_LITERAL(33, 443, 11), // "hasChildren"
QT_MOC_LITERAL(34, 455, 10), // "headerData"
QT_MOC_LITERAL(35, 466, 7), // "section"
QT_MOC_LITERAL(36, 474, 15), // "Qt::Orientation"
QT_MOC_LITERAL(37, 490, 11), // "orientation"
QT_MOC_LITERAL(38, 502, 20), // "horizontalHeaderItem"
QT_MOC_LITERAL(39, 523, 14), // "QStandardItem*"
QT_MOC_LITERAL(40, 538, 13), // "indexFromItem"
QT_MOC_LITERAL(41, 552, 20), // "const QStandardItem*"
QT_MOC_LITERAL(42, 573, 12), // "insertColumn"
QT_MOC_LITERAL(43, 586, 13), // "insertColumns"
QT_MOC_LITERAL(44, 600, 5), // "count"
QT_MOC_LITERAL(45, 606, 9), // "insertRow"
QT_MOC_LITERAL(46, 616, 10), // "insertRows"
QT_MOC_LITERAL(47, 627, 17), // "invisibleRootItem"
QT_MOC_LITERAL(48, 645, 8), // "itemData"
QT_MOC_LITERAL(49, 654, 18), // "QMap<int,QVariant>"
QT_MOC_LITERAL(50, 673, 13), // "itemFromIndex"
QT_MOC_LITERAL(51, 687, 13), // "itemPrototype"
QT_MOC_LITERAL(52, 701, 8), // "mimeData"
QT_MOC_LITERAL(53, 710, 10), // "QMimeData*"
QT_MOC_LITERAL(54, 721, 18), // "QList<QModelIndex>"
QT_MOC_LITERAL(55, 740, 7), // "indexes"
QT_MOC_LITERAL(56, 748, 9), // "mimeTypes"
QT_MOC_LITERAL(57, 758, 5), // "child"
QT_MOC_LITERAL(58, 764, 13), // "removeColumns"
QT_MOC_LITERAL(59, 778, 10), // "removeRows"
QT_MOC_LITERAL(60, 789, 8), // "rowCount"
QT_MOC_LITERAL(61, 798, 14), // "setColumnCount"
QT_MOC_LITERAL(62, 813, 7), // "setData"
QT_MOC_LITERAL(63, 821, 5), // "value"
QT_MOC_LITERAL(64, 827, 13), // "setHeaderData"
QT_MOC_LITERAL(65, 841, 23), // "setHorizontalHeaderItem"
QT_MOC_LITERAL(66, 865, 25), // "setHorizontalHeaderLabels"
QT_MOC_LITERAL(67, 891, 6), // "labels"
QT_MOC_LITERAL(68, 898, 7), // "setItem"
QT_MOC_LITERAL(69, 906, 11), // "setItemData"
QT_MOC_LITERAL(70, 918, 5), // "roles"
QT_MOC_LITERAL(71, 924, 16), // "setItemPrototype"
QT_MOC_LITERAL(72, 941, 48), // "PythonQtPassOwnershipToCPP<co..."
QT_MOC_LITERAL(73, 990, 16), // "setItemRoleNames"
QT_MOC_LITERAL(74, 1007, 21), // "QHash<int,QByteArray>"
QT_MOC_LITERAL(75, 1029, 9), // "roleNames"
QT_MOC_LITERAL(76, 1039, 11), // "setRowCount"
QT_MOC_LITERAL(77, 1051, 11), // "setSortRole"
QT_MOC_LITERAL(78, 1063, 21), // "setVerticalHeaderItem"
QT_MOC_LITERAL(79, 1085, 23), // "setVerticalHeaderLabels"
QT_MOC_LITERAL(80, 1109, 7), // "sibling"
QT_MOC_LITERAL(81, 1117, 3), // "idx"
QT_MOC_LITERAL(82, 1121, 4), // "sort"
QT_MOC_LITERAL(83, 1126, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(84, 1140, 5), // "order"
QT_MOC_LITERAL(85, 1146, 8), // "sortRole"
QT_MOC_LITERAL(86, 1155, 20), // "supportedDropActions"
QT_MOC_LITERAL(87, 1176, 15), // "Qt::DropActions"
QT_MOC_LITERAL(88, 1192, 10), // "takeColumn"
QT_MOC_LITERAL(89, 1203, 53), // "PythonQtPassOwnershipToPython..."
QT_MOC_LITERAL(90, 1257, 24), // "takeHorizontalHeaderItem"
QT_MOC_LITERAL(91, 1282, 45), // "PythonQtPassOwnershipToPython..."
QT_MOC_LITERAL(92, 1328, 8), // "takeItem"
QT_MOC_LITERAL(93, 1337, 7), // "takeRow"
QT_MOC_LITERAL(94, 1345, 22), // "takeVerticalHeaderItem"
QT_MOC_LITERAL(95, 1368, 18) // "verticalHeaderItem"

    },
    "PythonQtWrapper_QStandardItemModel\0"
    "new_QStandardItemModel\0QStandardItemModel*\0"
    "\0parent\0rows\0columns\0delete_QStandardItemModel\0"
    "obj\0appendColumn\0theWrappedObject\0"
    "PythonQtPassOwnershipToCPP<QList<QStandardItem*> >\0"
    "items\0appendRow\0"
    "PythonQtPassOwnershipToCPP<QStandardItem*>\0"
    "item\0clear\0columnCount\0data\0index\0"
    "role\0dropMimeData\0const QMimeData*\0"
    "Qt::DropAction\0action\0row\0column\0"
    "findItems\0QList<QStandardItem*>\0text\0"
    "Qt::MatchFlags\0flags\0Qt::ItemFlags\0"
    "hasChildren\0headerData\0section\0"
    "Qt::Orientation\0orientation\0"
    "horizontalHeaderItem\0QStandardItem*\0"
    "indexFromItem\0const QStandardItem*\0"
    "insertColumn\0insertColumns\0count\0"
    "insertRow\0insertRows\0invisibleRootItem\0"
    "itemData\0QMap<int,QVariant>\0itemFromIndex\0"
    "itemPrototype\0mimeData\0QMimeData*\0"
    "QList<QModelIndex>\0indexes\0mimeTypes\0"
    "child\0removeColumns\0removeRows\0rowCount\0"
    "setColumnCount\0setData\0value\0setHeaderData\0"
    "setHorizontalHeaderItem\0"
    "setHorizontalHeaderLabels\0labels\0"
    "setItem\0setItemData\0roles\0setItemPrototype\0"
    "PythonQtPassOwnershipToCPP<const QStandardItem*>\0"
    "setItemRoleNames\0QHash<int,QByteArray>\0"
    "roleNames\0setRowCount\0setSortRole\0"
    "setVerticalHeaderItem\0setVerticalHeaderLabels\0"
    "sibling\0idx\0sort\0Qt::SortOrder\0order\0"
    "sortRole\0supportedDropActions\0"
    "Qt::DropActions\0takeColumn\0"
    "PythonQtPassOwnershipToPython<QList<QStandardItem*> >\0"
    "takeHorizontalHeaderItem\0"
    "PythonQtPassOwnershipToPython<QStandardItem*>\0"
    "takeItem\0takeRow\0takeVerticalHeaderItem\0"
    "verticalHeaderItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QStandardItemModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      76,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  394,    3, 0x0a /* Public */,
       1,    0,  397,    3, 0x2a /* Public | MethodCloned */,
       1,    3,  398,    3, 0x0a /* Public */,
       1,    2,  405,    3, 0x2a /* Public | MethodCloned */,
       7,    1,  410,    3, 0x0a /* Public */,
       9,    2,  413,    3, 0x0a /* Public */,
      13,    2,  418,    3, 0x0a /* Public */,
      13,    2,  423,    3, 0x0a /* Public */,
      16,    1,  428,    3, 0x0a /* Public */,
      17,    2,  431,    3, 0x0a /* Public */,
      17,    1,  436,    3, 0x2a /* Public | MethodCloned */,
      18,    3,  439,    3, 0x0a /* Public */,
      18,    2,  446,    3, 0x2a /* Public | MethodCloned */,
      21,    6,  451,    3, 0x0a /* Public */,
      27,    4,  464,    3, 0x0a /* Public */,
      27,    3,  473,    3, 0x2a /* Public | MethodCloned */,
      27,    2,  480,    3, 0x2a /* Public | MethodCloned */,
      31,    2,  485,    3, 0x0a /* Public */,
      33,    2,  490,    3, 0x0a /* Public */,
      33,    1,  495,    3, 0x2a /* Public | MethodCloned */,
      34,    4,  498,    3, 0x0a /* Public */,
      34,    3,  507,    3, 0x2a /* Public | MethodCloned */,
      38,    2,  514,    3, 0x0a /* Public */,
      19,    4,  519,    3, 0x0a /* Public */,
      19,    3,  528,    3, 0x2a /* Public | MethodCloned */,
      40,    2,  535,    3, 0x0a /* Public */,
      42,    3,  540,    3, 0x0a /* Public */,
      43,    4,  547,    3, 0x0a /* Public */,
      43,    3,  556,    3, 0x2a /* Public | MethodCloned */,
      45,    3,  563,    3, 0x0a /* Public */,
      45,    3,  570,    3, 0x0a /* Public */,
      46,    4,  577,    3, 0x0a /* Public */,
      46,    3,  586,    3, 0x2a /* Public | MethodCloned */,
      47,    1,  593,    3, 0x0a /* Public */,
      15,    3,  596,    3, 0x0a /* Public */,
      15,    2,  603,    3, 0x2a /* Public | MethodCloned */,
      48,    2,  608,    3, 0x0a /* Public */,
      50,    2,  613,    3, 0x0a /* Public */,
      51,    1,  618,    3, 0x0a /* Public */,
      52,    2,  621,    3, 0x0a /* Public */,
      56,    1,  626,    3, 0x0a /* Public */,
       4,    2,  629,    3, 0x0a /* Public */,
      58,    4,  634,    3, 0x0a /* Public */,
      58,    3,  643,    3, 0x2a /* Public | MethodCloned */,
      59,    4,  650,    3, 0x0a /* Public */,
      59,    3,  659,    3, 0x2a /* Public | MethodCloned */,
      60,    2,  666,    3, 0x0a /* Public */,
      60,    1,  671,    3, 0x2a /* Public | MethodCloned */,
      61,    2,  674,    3, 0x0a /* Public */,
      62,    4,  679,    3, 0x0a /* Public */,
      62,    3,  688,    3, 0x2a /* Public | MethodCloned */,
      64,    5,  695,    3, 0x0a /* Public */,
      64,    4,  706,    3, 0x2a /* Public | MethodCloned */,
      65,    3,  715,    3, 0x0a /* Public */,
      66,    2,  722,    3, 0x0a /* Public */,
      68,    3,  727,    3, 0x0a /* Public */,
      68,    4,  734,    3, 0x0a /* Public */,
      69,    3,  743,    3, 0x0a /* Public */,
      71,    2,  750,    3, 0x0a /* Public */,
      73,    2,  755,    3, 0x0a /* Public */,
      76,    2,  760,    3, 0x0a /* Public */,
      77,    2,  765,    3, 0x0a /* Public */,
      78,    3,  770,    3, 0x0a /* Public */,
      79,    2,  777,    3, 0x0a /* Public */,
      80,    4,  782,    3, 0x0a /* Public */,
      82,    3,  791,    3, 0x0a /* Public */,
      82,    2,  798,    3, 0x2a /* Public | MethodCloned */,
      85,    1,  803,    3, 0x0a /* Public */,
      86,    1,  806,    3, 0x0a /* Public */,
      88,    2,  809,    3, 0x0a /* Public */,
      90,    2,  814,    3, 0x0a /* Public */,
      92,    3,  819,    3, 0x0a /* Public */,
      92,    2,  826,    3, 0x2a /* Public | MethodCloned */,
      93,    2,  831,    3, 0x0a /* Public */,
      94,    2,  836,    3, 0x0a /* Public */,
      95,    2,  841,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QObjectStar,    5,    6,    4,
    0x80000000 | 2, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   10,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,   10,    4,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int,   10,   19,   20,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex,   10,   19,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 22, 0x80000000 | 23, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   18,   24,   25,   26,    4,
    0x80000000 | 28, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 30, QMetaType::Int,   10,   29,   31,   26,
    0x80000000 | 28, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 30,   10,   29,   31,
    0x80000000 | 28, 0x80000000 | 2, QMetaType::QString,   10,   29,
    0x80000000 | 32, 0x80000000 | 2, QMetaType::QModelIndex,   10,   19,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex,   10,    4,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 36, QMetaType::Int,   10,   35,   37,   20,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 36,   10,   35,   37,
    0x80000000 | 39, 0x80000000 | 2, QMetaType::Int,   10,   26,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   25,   26,    4,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   25,   26,
    QMetaType::QModelIndex, 0x80000000 | 2, 0x80000000 | 41,   10,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 11,   10,   26,   12,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   26,   44,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   26,   44,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 14,   10,   25,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 11,   10,   25,   12,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   25,   44,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   25,   44,
    0x80000000 | 39, 0x80000000 | 2,   10,
    0x80000000 | 39, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   25,   26,
    0x80000000 | 39, 0x80000000 | 2, QMetaType::Int,   10,   25,
    0x80000000 | 49, 0x80000000 | 2, QMetaType::QModelIndex,   10,   19,
    0x80000000 | 39, 0x80000000 | 2, QMetaType::QModelIndex,   10,   19,
    0x80000000 | 41, 0x80000000 | 2,   10,
    0x80000000 | 53, 0x80000000 | 2, 0x80000000 | 54,   10,   55,
    QMetaType::QStringList, 0x80000000 | 2,   10,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,   10,   57,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   26,   44,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   26,   44,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   25,   44,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   25,   44,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,   10,    4,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,    6,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant, QMetaType::Int,   10,   19,   63,   20,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant,   10,   19,   63,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 36, QMetaType::QVariant, QMetaType::Int,   10,   35,   37,   63,   20,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 36, QMetaType::QVariant,   10,   35,   37,   63,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 14,   10,   26,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QStringList,   10,   67,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 14,   10,   25,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, 0x80000000 | 14,   10,   25,   26,   15,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, 0x80000000 | 49,   10,   19,   70,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 72,   10,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 74,   10,   75,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 14,   10,   25,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QStringList,   10,   67,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   25,   26,   81,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 83,   10,   26,   84,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,   26,
    QMetaType::Int, 0x80000000 | 2,   10,
    0x80000000 | 87, 0x80000000 | 2,   10,
    0x80000000 | 89, 0x80000000 | 2, QMetaType::Int,   10,   26,
    0x80000000 | 91, 0x80000000 | 2, QMetaType::Int,   10,   26,
    0x80000000 | 91, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   25,   26,
    0x80000000 | 91, 0x80000000 | 2, QMetaType::Int,   10,   25,
    0x80000000 | 89, 0x80000000 | 2, QMetaType::Int,   10,   25,
    0x80000000 | 91, 0x80000000 | 2, QMetaType::Int,   10,   25,
    0x80000000 | 39, 0x80000000 | 2, QMetaType::Int,   10,   25,

       0        // eod
};

void PythonQtWrapper_QStandardItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QStandardItemModel *_t = static_cast<PythonQtWrapper_QStandardItemModel *>(_o);
        switch (_id) {
        case 0: { QStandardItemModel* _r = _t->new_QStandardItemModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 1: { QStandardItemModel* _r = _t->new_QStandardItemModel();
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 2: { QStandardItemModel* _r = _t->new_QStandardItemModel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QObject*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 3: { QStandardItemModel* _r = _t->new_QStandardItemModel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItemModel**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QStandardItemModel((*reinterpret_cast< QStandardItemModel*(*)>(_a[1]))); break;
        case 5: _t->appendColumn((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[2]))); break;
        case 6: _t->appendRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QStandardItem*>(*)>(_a[2]))); break;
        case 7: _t->appendRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[2]))); break;
        case 8: _t->clear((*reinterpret_cast< QStandardItemModel*(*)>(_a[1]))); break;
        case 9: { int _r = _t->columnCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->columnCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QVariant _r = _t->data((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 12: { QVariant _r = _t->data((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->dropMimeData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])),(*reinterpret_cast< Qt::DropAction(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< const QModelIndex(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QList<QStandardItem*> _r = _t->findItems((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 15: { QList<QStandardItem*> _r = _t->findItems((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 16: { QList<QStandardItem*> _r = _t->findItems((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 17: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->hasChildren((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->hasChildren((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { QVariant _r = _t->headerData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 21: { QVariant _r = _t->headerData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 22: { QStandardItem* _r = _t->horizontalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 23: { QModelIndex _r = _t->index((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 24: { QModelIndex _r = _t->index((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 25: { QModelIndex _r = _t->indexFromItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QStandardItem*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 26: _t->insertColumn((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[3]))); break;
        case 27: { bool _r = _t->insertColumns((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->insertColumns((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: _t->insertRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QStandardItem*>(*)>(_a[3]))); break;
        case 30: _t->insertRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QList<QStandardItem*> >(*)>(_a[3]))); break;
        case 31: { bool _r = _t->insertRows((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->insertRows((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { QStandardItem* _r = _t->invisibleRootItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 34: { QStandardItem* _r = _t->item((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 35: { QStandardItem* _r = _t->item((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 36: { QMap<int,QVariant> _r = _t->itemData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMap<int,QVariant>*>(_a[0]) = _r; }  break;
        case 37: { QStandardItem* _r = _t->itemFromIndex((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        case 38: { const QStandardItem* _r = _t->itemPrototype((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QStandardItem**>(_a[0]) = _r; }  break;
        case 39: { QMimeData* _r = _t->mimeData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QList<QModelIndex>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 40: { QStringList _r = _t->mimeTypes((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 41: { QModelIndex _r = _t->parent((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->removeColumns((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->removeColumns((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->removeRows((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->removeRows((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { int _r = _t->rowCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 47: { int _r = _t->rowCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 48: _t->setColumnCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: { bool _r = _t->setData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->setData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->setHeaderData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->setHeaderData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: _t->setHorizontalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QStandardItem*>(*)>(_a[3]))); break;
        case 54: _t->setHorizontalHeaderLabels((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 55: _t->setItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QStandardItem*>(*)>(_a[3]))); break;
        case 56: _t->setItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QStandardItem*>(*)>(_a[4]))); break;
        case 57: { bool _r = _t->setItemData((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QMap<int,QVariant>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: _t->setItemPrototype((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<const QStandardItem*>(*)>(_a[2]))); break;
        case 59: _t->setItemRoleNames((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QHash<int,QByteArray>(*)>(_a[2]))); break;
        case 60: _t->setRowCount((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 61: _t->setSortRole((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 62: _t->setVerticalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QStandardItem*>(*)>(_a[3]))); break;
        case 63: _t->setVerticalHeaderLabels((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 64: { QModelIndex _r = _t->sibling((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 65: _t->sort((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 66: _t->sort((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 67: { int _r = _t->sortRole((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 68: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        case 69: { PythonQtPassOwnershipToPython<QList<QStandardItem*> > _r = _t->takeColumn((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QList<QStandardItem*> >*>(_a[0]) = _r; }  break;
        case 70: { PythonQtPassOwnershipToPython<QStandardItem*> _r = _t->takeHorizontalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 71: { PythonQtPassOwnershipToPython<QStandardItem*> _r = _t->takeItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 72: { PythonQtPassOwnershipToPython<QStandardItem*> _r = _t->takeItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 73: { PythonQtPassOwnershipToPython<QList<QStandardItem*> > _r = _t->takeRow((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QList<QStandardItem*> >*>(_a[0]) = _r; }  break;
        case 74: { PythonQtPassOwnershipToPython<QStandardItem*> _r = _t->takeVerticalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PythonQtPassOwnershipToPython<QStandardItem*>*>(_a[0]) = _r; }  break;
        case 75: { QStandardItem* _r = _t->verticalHeaderItem((*reinterpret_cast< QStandardItemModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStandardItem**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QModelIndex> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QStandardItemModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStandardItemModel.data,
      qt_meta_data_PythonQtWrapper_QStandardItemModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QStandardItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QStandardItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStandardItemModel.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStandardItemModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStandardItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 76)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 76;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 76)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 76;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QStaticText_t {
    QByteArrayData data[35];
    char stringdata[423];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QStaticText_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QStaticText_t qt_meta_stringdata_PythonQtWrapper_QStaticText = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QStaticText"
QT_MOC_LITERAL(1, 28, 15), // "new_QStaticText"
QT_MOC_LITERAL(2, 44, 12), // "QStaticText*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 11), // "QStaticText"
QT_MOC_LITERAL(5, 70, 5), // "other"
QT_MOC_LITERAL(6, 76, 4), // "text"
QT_MOC_LITERAL(7, 81, 18), // "delete_QStaticText"
QT_MOC_LITERAL(8, 100, 3), // "obj"
QT_MOC_LITERAL(9, 104, 6), // "__ne__"
QT_MOC_LITERAL(10, 111, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 128, 6), // "arg__1"
QT_MOC_LITERAL(12, 135, 15), // "operator_assign"
QT_MOC_LITERAL(13, 151, 6), // "__eq__"
QT_MOC_LITERAL(14, 158, 15), // "performanceHint"
QT_MOC_LITERAL(15, 174, 28), // "QStaticText::PerformanceHint"
QT_MOC_LITERAL(16, 203, 7), // "prepare"
QT_MOC_LITERAL(17, 211, 6), // "matrix"
QT_MOC_LITERAL(18, 218, 4), // "font"
QT_MOC_LITERAL(19, 223, 18), // "setPerformanceHint"
QT_MOC_LITERAL(20, 242, 7), // "setText"
QT_MOC_LITERAL(21, 250, 13), // "setTextFormat"
QT_MOC_LITERAL(22, 264, 14), // "Qt::TextFormat"
QT_MOC_LITERAL(23, 279, 10), // "textFormat"
QT_MOC_LITERAL(24, 290, 13), // "setTextOption"
QT_MOC_LITERAL(25, 304, 11), // "QTextOption"
QT_MOC_LITERAL(26, 316, 10), // "textOption"
QT_MOC_LITERAL(27, 327, 12), // "setTextWidth"
QT_MOC_LITERAL(28, 340, 9), // "textWidth"
QT_MOC_LITERAL(29, 350, 4), // "size"
QT_MOC_LITERAL(30, 355, 4), // "swap"
QT_MOC_LITERAL(31, 360, 12), // "QStaticText&"
QT_MOC_LITERAL(32, 373, 15), // "PerformanceHint"
QT_MOC_LITERAL(33, 389, 15), // "ModerateCaching"
QT_MOC_LITERAL(34, 405, 17) // "AggressiveCaching"

    },
    "PythonQtWrapper_QStaticText\0new_QStaticText\0"
    "QStaticText*\0\0QStaticText\0other\0text\0"
    "delete_QStaticText\0obj\0__ne__\0"
    "theWrappedObject\0arg__1\0operator_assign\0"
    "__eq__\0performanceHint\0"
    "QStaticText::PerformanceHint\0prepare\0"
    "matrix\0font\0setPerformanceHint\0setText\0"
    "setTextFormat\0Qt::TextFormat\0textFormat\0"
    "setTextOption\0QTextOption\0textOption\0"
    "setTextWidth\0textWidth\0size\0swap\0"
    "QStaticText&\0PerformanceHint\0"
    "ModerateCaching\0AggressiveCaching"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QStaticText[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       1,  212, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  124,    3, 0x0a /* Public */,
       1,    1,  125,    3, 0x0a /* Public */,
       1,    1,  128,    3, 0x0a /* Public */,
       7,    1,  131,    3, 0x0a /* Public */,
       9,    2,  134,    3, 0x0a /* Public */,
      12,    2,  139,    3, 0x0a /* Public */,
      13,    2,  144,    3, 0x0a /* Public */,
      14,    1,  149,    3, 0x0a /* Public */,
      16,    3,  152,    3, 0x0a /* Public */,
      16,    2,  159,    3, 0x2a /* Public | MethodCloned */,
      16,    1,  164,    3, 0x2a /* Public | MethodCloned */,
      19,    2,  167,    3, 0x0a /* Public */,
      20,    2,  172,    3, 0x0a /* Public */,
      21,    2,  177,    3, 0x0a /* Public */,
      24,    2,  182,    3, 0x0a /* Public */,
      27,    2,  187,    3, 0x0a /* Public */,
      29,    1,  192,    3, 0x0a /* Public */,
      30,    2,  195,    3, 0x0a /* Public */,
       6,    1,  200,    3, 0x0a /* Public */,
      23,    1,  203,    3, 0x0a /* Public */,
      26,    1,  206,    3, 0x0a /* Public */,
      28,    1,  209,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,   11,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,   10,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,   11,
    0x80000000 | 15, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QTransform, QMetaType::QFont,   10,   17,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QTransform,   10,   17,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 15,   10,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,    6,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25,   10,   26,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   28,
    QMetaType::QSizeF, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 31,   10,    5,
    QMetaType::QString, 0x80000000 | 2,   10,
    0x80000000 | 22, 0x80000000 | 2,   10,
    0x80000000 | 25, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
      32, 0x0,    2,  216,

 // enum data: key, value
      33, uint(PythonQtWrapper_QStaticText::ModerateCaching),
      34, uint(PythonQtWrapper_QStaticText::AggressiveCaching),

       0        // eod
};

void PythonQtWrapper_QStaticText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QStaticText *_t = static_cast<PythonQtWrapper_QStaticText *>(_o);
        switch (_id) {
        case 0: { QStaticText* _r = _t->new_QStaticText();
            if (_a[0]) *reinterpret_cast< QStaticText**>(_a[0]) = _r; }  break;
        case 1: { QStaticText* _r = _t->new_QStaticText((*reinterpret_cast< const QStaticText(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStaticText**>(_a[0]) = _r; }  break;
        case 2: { QStaticText* _r = _t->new_QStaticText((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStaticText**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QStaticText((*reinterpret_cast< QStaticText*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->__ne__((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QStaticText(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { QStaticText* _r = _t->operator_assign((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QStaticText(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStaticText**>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__eq__((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QStaticText(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QStaticText::PerformanceHint _r = _t->performanceHint((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStaticText::PerformanceHint*>(_a[0]) = _r; }  break;
        case 8: _t->prepare((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2])),(*reinterpret_cast< const QFont(*)>(_a[3]))); break;
        case 9: _t->prepare((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QTransform(*)>(_a[2]))); break;
        case 10: _t->prepare((*reinterpret_cast< QStaticText*(*)>(_a[1]))); break;
        case 11: _t->setPerformanceHint((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< QStaticText::PerformanceHint(*)>(_a[2]))); break;
        case 12: _t->setText((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->setTextFormat((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< Qt::TextFormat(*)>(_a[2]))); break;
        case 14: _t->setTextOption((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< const QTextOption(*)>(_a[2]))); break;
        case 15: _t->setTextWidth((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 16: { QSizeF _r = _t->size((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 17: _t->swap((*reinterpret_cast< QStaticText*(*)>(_a[1])),(*reinterpret_cast< QStaticText(*)>(_a[2]))); break;
        case 18: { QString _r = _t->text((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { Qt::TextFormat _r = _t->textFormat((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextFormat*>(_a[0]) = _r; }  break;
        case 20: { QTextOption _r = _t->textOption((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption*>(_a[0]) = _r; }  break;
        case 21: { qreal _r = _t->textWidth((*reinterpret_cast< QStaticText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStaticText >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStaticText >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStaticText >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStaticText >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QStaticText::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStaticText.data,
      qt_meta_data_PythonQtWrapper_QStaticText,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QStaticText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QStaticText::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStaticText.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStaticText*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStaticText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QStatusBar_t {
    QByteArrayData data[32];
    char stringdata[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QStatusBar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QStatusBar_t qt_meta_stringdata_PythonQtWrapper_QStatusBar = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QStatusBar"
QT_MOC_LITERAL(1, 27, 14), // "new_QStatusBar"
QT_MOC_LITERAL(2, 42, 11), // "QStatusBar*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 8), // "QWidget*"
QT_MOC_LITERAL(5, 64, 6), // "parent"
QT_MOC_LITERAL(6, 71, 17), // "delete_QStatusBar"
QT_MOC_LITERAL(7, 89, 3), // "obj"
QT_MOC_LITERAL(8, 93, 18), // "addPermanentWidget"
QT_MOC_LITERAL(9, 112, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 129, 36), // "PythonQtPassOwnershipToCPP<QW..."
QT_MOC_LITERAL(11, 166, 6), // "widget"
QT_MOC_LITERAL(12, 173, 7), // "stretch"
QT_MOC_LITERAL(13, 181, 9), // "addWidget"
QT_MOC_LITERAL(14, 191, 14), // "currentMessage"
QT_MOC_LITERAL(15, 206, 5), // "event"
QT_MOC_LITERAL(16, 212, 7), // "QEvent*"
QT_MOC_LITERAL(17, 220, 6), // "arg__1"
QT_MOC_LITERAL(18, 227, 10), // "hideOrShow"
QT_MOC_LITERAL(19, 238, 21), // "insertPermanentWidget"
QT_MOC_LITERAL(20, 260, 5), // "index"
QT_MOC_LITERAL(21, 266, 12), // "insertWidget"
QT_MOC_LITERAL(22, 279, 17), // "isSizeGripEnabled"
QT_MOC_LITERAL(23, 297, 10), // "paintEvent"
QT_MOC_LITERAL(24, 308, 12), // "QPaintEvent*"
QT_MOC_LITERAL(25, 321, 8), // "reformat"
QT_MOC_LITERAL(26, 330, 12), // "removeWidget"
QT_MOC_LITERAL(27, 343, 11), // "resizeEvent"
QT_MOC_LITERAL(28, 355, 13), // "QResizeEvent*"
QT_MOC_LITERAL(29, 369, 18), // "setSizeGripEnabled"
QT_MOC_LITERAL(30, 388, 9), // "showEvent"
QT_MOC_LITERAL(31, 398, 11) // "QShowEvent*"

    },
    "PythonQtWrapper_QStatusBar\0new_QStatusBar\0"
    "QStatusBar*\0\0QWidget*\0parent\0"
    "delete_QStatusBar\0obj\0addPermanentWidget\0"
    "theWrappedObject\0PythonQtPassOwnershipToCPP<QWidget*>\0"
    "widget\0stretch\0addWidget\0currentMessage\0"
    "event\0QEvent*\0arg__1\0hideOrShow\0"
    "insertPermanentWidget\0index\0insertWidget\0"
    "isSizeGripEnabled\0paintEvent\0QPaintEvent*\0"
    "reformat\0removeWidget\0resizeEvent\0"
    "QResizeEvent*\0setSizeGripEnabled\0"
    "showEvent\0QShowEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QStatusBar[] = {

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
       6,    1,  123,    3, 0x0a /* Public */,
       8,    3,  126,    3, 0x0a /* Public */,
       8,    2,  133,    3, 0x2a /* Public | MethodCloned */,
      13,    3,  138,    3, 0x0a /* Public */,
      13,    2,  145,    3, 0x2a /* Public | MethodCloned */,
      14,    1,  150,    3, 0x0a /* Public */,
      15,    2,  153,    3, 0x0a /* Public */,
      18,    1,  158,    3, 0x0a /* Public */,
      19,    4,  161,    3, 0x0a /* Public */,
      19,    3,  170,    3, 0x2a /* Public | MethodCloned */,
      21,    4,  177,    3, 0x0a /* Public */,
      21,    3,  186,    3, 0x2a /* Public | MethodCloned */,
      22,    1,  193,    3, 0x0a /* Public */,
      23,    2,  196,    3, 0x0a /* Public */,
      25,    1,  201,    3, 0x0a /* Public */,
      26,    2,  204,    3, 0x0a /* Public */,
      27,    2,  209,    3, 0x0a /* Public */,
      29,    2,  214,    3, 0x0a /* Public */,
      30,    2,  219,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10, QMetaType::Int,    9,   11,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10, QMetaType::Int,    9,   11,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 16,    9,   17,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 10, QMetaType::Int,    9,   20,   11,   12,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 10,    9,   20,   11,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 10, QMetaType::Int,    9,   20,   11,   12,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 10,    9,   20,   11,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,    9,   17,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,    9,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 28,    9,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,   17,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 31,    9,   17,

       0        // eod
};

void PythonQtWrapper_QStatusBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QStatusBar *_t = static_cast<PythonQtWrapper_QStatusBar *>(_o);
        switch (_id) {
        case 0: { QStatusBar* _r = _t->new_QStatusBar((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStatusBar**>(_a[0]) = _r; }  break;
        case 1: { QStatusBar* _r = _t->new_QStatusBar();
            if (_a[0]) *reinterpret_cast< QStatusBar**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QStatusBar((*reinterpret_cast< QStatusBar*(*)>(_a[1]))); break;
        case 3: _t->addPermanentWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->addPermanentWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2]))); break;
        case 5: _t->addWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->addWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[2]))); break;
        case 7: { QString _r = _t->currentMessage((*reinterpret_cast< QStatusBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->event((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->hideOrShow((*reinterpret_cast< QStatusBar*(*)>(_a[1]))); break;
        case 10: { int _r = _t->insertPermanentWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->insertPermanentWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->insertWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->insertWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PythonQtPassOwnershipToCPP<QWidget*>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isSizeGripEnabled((*reinterpret_cast< QStatusBar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->paintEvent((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 16: _t->reformat((*reinterpret_cast< QStatusBar*(*)>(_a[1]))); break;
        case 17: _t->removeWidget((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 18: _t->resizeEvent((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 19: _t->setSizeGripEnabled((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->showEvent((*reinterpret_cast< QStatusBar*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStatusBar* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QStatusBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStatusBar.data,
      qt_meta_data_PythonQtWrapper_QStatusBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QStatusBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QStatusBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStatusBar.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStatusBar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStatusBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QStatusTipEvent_t {
    QByteArrayData data[8];
    char stringdata[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QStatusTipEvent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QStatusTipEvent_t qt_meta_stringdata_PythonQtWrapper_QStatusTipEvent = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QStatusTipEvent"
QT_MOC_LITERAL(1, 32, 19), // "new_QStatusTipEvent"
QT_MOC_LITERAL(2, 52, 16), // "QStatusTipEvent*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 3), // "tip"
QT_MOC_LITERAL(5, 74, 22), // "delete_QStatusTipEvent"
QT_MOC_LITERAL(6, 97, 3), // "obj"
QT_MOC_LITERAL(7, 101, 16) // "theWrappedObject"

    },
    "PythonQtWrapper_QStatusTipEvent\0"
    "new_QStatusTipEvent\0QStatusTipEvent*\0"
    "\0tip\0delete_QStatusTipEvent\0obj\0"
    "theWrappedObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QStatusTipEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       5,    1,   32,    3, 0x0a /* Public */,
       4,    1,   35,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::QString, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QStatusTipEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QStatusTipEvent *_t = static_cast<PythonQtWrapper_QStatusTipEvent *>(_o);
        switch (_id) {
        case 0: { QStatusTipEvent* _r = _t->new_QStatusTipEvent((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStatusTipEvent**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QStatusTipEvent((*reinterpret_cast< QStatusTipEvent*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->tip((*reinterpret_cast< QStatusTipEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QStatusTipEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStatusTipEvent.data,
      qt_meta_data_PythonQtWrapper_QStatusTipEvent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QStatusTipEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QStatusTipEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStatusTipEvent.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStatusTipEvent*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStatusTipEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QStringListModel_t {
    QByteArrayData data[31];
    char stringdata[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QStringListModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QStringListModel_t qt_meta_stringdata_PythonQtWrapper_QStringListModel = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QStringListModel"
QT_MOC_LITERAL(1, 33, 20), // "new_QStringListModel"
QT_MOC_LITERAL(2, 54, 17), // "QStringListModel*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 6), // "parent"
QT_MOC_LITERAL(5, 80, 7), // "strings"
QT_MOC_LITERAL(6, 88, 23), // "delete_QStringListModel"
QT_MOC_LITERAL(7, 112, 3), // "obj"
QT_MOC_LITERAL(8, 116, 4), // "data"
QT_MOC_LITERAL(9, 121, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 138, 5), // "index"
QT_MOC_LITERAL(11, 144, 4), // "role"
QT_MOC_LITERAL(12, 149, 5), // "flags"
QT_MOC_LITERAL(13, 155, 13), // "Qt::ItemFlags"
QT_MOC_LITERAL(14, 169, 10), // "insertRows"
QT_MOC_LITERAL(15, 180, 3), // "row"
QT_MOC_LITERAL(16, 184, 5), // "count"
QT_MOC_LITERAL(17, 190, 10), // "removeRows"
QT_MOC_LITERAL(18, 201, 8), // "rowCount"
QT_MOC_LITERAL(19, 210, 7), // "setData"
QT_MOC_LITERAL(20, 218, 5), // "value"
QT_MOC_LITERAL(21, 224, 13), // "setStringList"
QT_MOC_LITERAL(22, 238, 7), // "sibling"
QT_MOC_LITERAL(23, 246, 6), // "column"
QT_MOC_LITERAL(24, 253, 3), // "idx"
QT_MOC_LITERAL(25, 257, 4), // "sort"
QT_MOC_LITERAL(26, 262, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(27, 276, 5), // "order"
QT_MOC_LITERAL(28, 282, 10), // "stringList"
QT_MOC_LITERAL(29, 293, 20), // "supportedDropActions"
QT_MOC_LITERAL(30, 314, 15) // "Qt::DropActions"

    },
    "PythonQtWrapper_QStringListModel\0"
    "new_QStringListModel\0QStringListModel*\0"
    "\0parent\0strings\0delete_QStringListModel\0"
    "obj\0data\0theWrappedObject\0index\0role\0"
    "flags\0Qt::ItemFlags\0insertRows\0row\0"
    "count\0removeRows\0rowCount\0setData\0"
    "value\0setStringList\0sibling\0column\0"
    "idx\0sort\0Qt::SortOrder\0order\0stringList\0"
    "supportedDropActions\0Qt::DropActions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QStringListModel[] = {

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
       1,    2,  123,    3, 0x0a /* Public */,
       1,    1,  128,    3, 0x2a /* Public | MethodCloned */,
       6,    1,  131,    3, 0x0a /* Public */,
       8,    3,  134,    3, 0x0a /* Public */,
      12,    2,  141,    3, 0x0a /* Public */,
      14,    4,  146,    3, 0x0a /* Public */,
      14,    3,  155,    3, 0x2a /* Public | MethodCloned */,
      17,    4,  162,    3, 0x0a /* Public */,
      17,    3,  171,    3, 0x2a /* Public | MethodCloned */,
      18,    2,  178,    3, 0x0a /* Public */,
      18,    1,  183,    3, 0x2a /* Public | MethodCloned */,
      19,    4,  186,    3, 0x0a /* Public */,
      19,    3,  195,    3, 0x2a /* Public | MethodCloned */,
      21,    2,  202,    3, 0x0a /* Public */,
      22,    4,  207,    3, 0x0a /* Public */,
      25,    3,  216,    3, 0x0a /* Public */,
      25,    2,  223,    3, 0x2a /* Public | MethodCloned */,
      28,    1,  228,    3, 0x0a /* Public */,
      29,    1,  231,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QStringList, QMetaType::QObjectStar,    5,    4,
    0x80000000 | 2, QMetaType::QStringList,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int,    9,   10,   11,
    0x80000000 | 13, 0x80000000 | 2, QMetaType::QModelIndex,    9,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    9,   15,   16,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   15,   16,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    9,   15,   16,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   15,   16,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,    9,    4,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant, QMetaType::Int,    9,   10,   20,   11,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant,    9,   10,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QStringList,    9,    5,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    9,   15,   23,   24,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 26,    9,   23,   27,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   23,
    QMetaType::QStringList, 0x80000000 | 2,    9,
    0x80000000 | 30, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QStringListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QStringListModel *_t = static_cast<PythonQtWrapper_QStringListModel *>(_o);
        switch (_id) {
        case 0: { QStringListModel* _r = _t->new_QStringListModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringListModel**>(_a[0]) = _r; }  break;
        case 1: { QStringListModel* _r = _t->new_QStringListModel();
            if (_a[0]) *reinterpret_cast< QStringListModel**>(_a[0]) = _r; }  break;
        case 2: { QStringListModel* _r = _t->new_QStringListModel((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringListModel**>(_a[0]) = _r; }  break;
        case 3: { QStringListModel* _r = _t->new_QStringListModel((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringListModel**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QStringListModel((*reinterpret_cast< QStringListModel*(*)>(_a[1]))); break;
        case 5: { QVariant _r = _t->data((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->insertRows((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->insertRows((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->removeRows((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->removeRows((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->rowCount((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->rowCount((*reinterpret_cast< QStringListModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->setData((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->setData((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->setStringList((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 16: { QModelIndex _r = _t->sibling((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 17: _t->sort((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 18: _t->sort((*reinterpret_cast< QStringListModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: { QStringList _r = _t->stringList((*reinterpret_cast< QStringListModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 20: { Qt::DropActions _r = _t->supportedDropActions((*reinterpret_cast< QStringListModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::DropActions*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStringListModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QStringListModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QStringListModel.data,
      qt_meta_data_PythonQtWrapper_QStringListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QStringListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QStringListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QStringListModel.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QStringListModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QStringListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
