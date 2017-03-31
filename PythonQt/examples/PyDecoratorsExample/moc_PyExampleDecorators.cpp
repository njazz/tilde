/****************************************************************************
** Meta object code from reading C++ file 'PyExampleDecorators.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PyExampleDecorators.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PyExampleDecorators.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PyExampleDecorators_t {
    QByteArrayData data[22];
    char stringdata[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PyExampleDecorators_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PyExampleDecorators_t qt_meta_stringdata_PyExampleDecorators = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PyExampleDecorators"
QT_MOC_LITERAL(1, 20, 9), // "new_QSize"
QT_MOC_LITERAL(2, 30, 6), // "QSize*"
QT_MOC_LITERAL(3, 37, 0), // ""
QT_MOC_LITERAL(4, 38, 1), // "p"
QT_MOC_LITERAL(5, 40, 15), // "new_QPushButton"
QT_MOC_LITERAL(6, 56, 12), // "QPushButton*"
QT_MOC_LITERAL(7, 69, 4), // "text"
QT_MOC_LITERAL(8, 74, 8), // "QWidget*"
QT_MOC_LITERAL(9, 83, 6), // "parent"
QT_MOC_LITERAL(10, 90, 17), // "new_YourCPPObject"
QT_MOC_LITERAL(11, 108, 14), // "YourCPPObject*"
QT_MOC_LITERAL(12, 123, 4), // "arg1"
QT_MOC_LITERAL(13, 128, 4), // "arg2"
QT_MOC_LITERAL(14, 133, 20), // "delete_YourCPPObject"
QT_MOC_LITERAL(15, 154, 3), // "obj"
QT_MOC_LITERAL(16, 158, 27), // "static_QWidget_mouseGrabber"
QT_MOC_LITERAL(17, 186, 4), // "move"
QT_MOC_LITERAL(18, 191, 1), // "w"
QT_MOC_LITERAL(19, 193, 1), // "x"
QT_MOC_LITERAL(20, 195, 1), // "y"
QT_MOC_LITERAL(21, 197, 11) // "doSomething"

    },
    "PyExampleDecorators\0new_QSize\0QSize*\0"
    "\0p\0new_QPushButton\0QPushButton*\0text\0"
    "QWidget*\0parent\0new_YourCPPObject\0"
    "YourCPPObject*\0arg1\0arg2\0delete_YourCPPObject\0"
    "obj\0static_QWidget_mouseGrabber\0move\0"
    "w\0x\0y\0doSomething"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PyExampleDecorators[] = {

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
       5,    2,   62,    3, 0x0a /* Public */,
       5,    1,   67,    3, 0x2a /* Public | MethodCloned */,
      10,    2,   70,    3, 0x0a /* Public */,
      14,    1,   75,    3, 0x0a /* Public */,
      16,    0,   78,    3, 0x0a /* Public */,
      17,    2,   79,    3, 0x0a /* Public */,
      17,    3,   84,    3, 0x0a /* Public */,
      21,    2,   91,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QPoint,    4,
    0x80000000 | 6, QMetaType::QString, 0x80000000 | 8,    7,    9,
    0x80000000 | 6, QMetaType::QString,    7,
    0x80000000 | 11, QMetaType::Int, QMetaType::Float,   12,   13,
    QMetaType::Void, 0x80000000 | 11,   15,
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QPoint,   18,    4,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int,   18,   19,   20,
    QMetaType::Int, 0x80000000 | 11, QMetaType::Int,   15,   12,

       0        // eod
};

void PyExampleDecorators::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PyExampleDecorators *_t = static_cast<PyExampleDecorators *>(_o);
        switch (_id) {
        case 0: { QSize* _r = _t->new_QSize((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSize**>(_a[0]) = _r; }  break;
        case 1: { QPushButton* _r = _t->new_QPushButton((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = _r; }  break;
        case 2: { QPushButton* _r = _t->new_QPushButton((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPushButton**>(_a[0]) = _r; }  break;
        case 3: { YourCPPObject* _r = _t->new_YourCPPObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< YourCPPObject**>(_a[0]) = _r; }  break;
        case 4: _t->delete_YourCPPObject((*reinterpret_cast< YourCPPObject*(*)>(_a[1]))); break;
        case 5: { QWidget* _r = _t->static_QWidget_mouseGrabber();
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 6: _t->move((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 7: _t->move((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: { int _r = _t->doSomething((*reinterpret_cast< YourCPPObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PyExampleDecorators::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PyExampleDecorators.data,
      qt_meta_data_PyExampleDecorators,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PyExampleDecorators::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PyExampleDecorators::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PyExampleDecorators.stringdata))
        return static_cast<void*>(const_cast< PyExampleDecorators*>(this));
    return QObject::qt_metacast(_clname);
}

int PyExampleDecorators::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
