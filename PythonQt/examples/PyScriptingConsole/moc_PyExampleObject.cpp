/****************************************************************************
** Meta object code from reading C++ file 'PyExampleObject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PyExampleObject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PyExampleObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PyExampleObject_t {
    QByteArrayData data[14];
    char stringdata[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PyExampleObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PyExampleObject_t qt_meta_stringdata_PyExampleObject = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PyExampleObject"
QT_MOC_LITERAL(1, 16, 13), // "getMainModule"
QT_MOC_LITERAL(2, 30, 9), // "PyObject*"
QT_MOC_LITERAL(3, 40, 0), // ""
QT_MOC_LITERAL(4, 41, 15), // "showInformation"
QT_MOC_LITERAL(5, 57, 3), // "str"
QT_MOC_LITERAL(6, 61, 13), // "readDirectory"
QT_MOC_LITERAL(7, 75, 3), // "dir"
QT_MOC_LITERAL(8, 79, 12), // "createWindow"
QT_MOC_LITERAL(9, 92, 12), // "QMainWindow*"
QT_MOC_LITERAL(10, 105, 9), // "findChild"
QT_MOC_LITERAL(11, 115, 1), // "o"
QT_MOC_LITERAL(12, 117, 4), // "name"
QT_MOC_LITERAL(13, 122, 7) // "testMap"

    },
    "PyExampleObject\0getMainModule\0PyObject*\0"
    "\0showInformation\0str\0readDirectory\0"
    "dir\0createWindow\0QMainWindow*\0findChild\0"
    "o\0name\0testMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PyExampleObject[] = {

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
       1,    0,   44,    3, 0x0a /* Public */,
       4,    1,   45,    3, 0x0a /* Public */,
       6,    1,   48,    3, 0x0a /* Public */,
       8,    0,   51,    3, 0x0a /* Public */,
      10,    2,   52,    3, 0x0a /* Public */,
      13,    0,   57,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QStringList, QMetaType::QString,    7,
    0x80000000 | 9,
    QMetaType::QObjectStar, QMetaType::QObjectStar, QMetaType::QString,   11,   12,
    QMetaType::QVariantMap,

       0        // eod
};

void PyExampleObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PyExampleObject *_t = static_cast<PyExampleObject *>(_o);
        switch (_id) {
        case 0: { PyObject* _r = _t->getMainModule();
            if (_a[0]) *reinterpret_cast< PyObject**>(_a[0]) = _r; }  break;
        case 1: _t->showInformation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QStringList _r = _t->readDirectory((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 3: { QMainWindow* _r = _t->createWindow();
            if (_a[0]) *reinterpret_cast< QMainWindow**>(_a[0]) = _r; }  break;
        case 4: { QObject* _r = _t->findChild((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 5: { QVariantMap _r = _t->testMap();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PyExampleObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PyExampleObject.data,
      qt_meta_data_PyExampleObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PyExampleObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PyExampleObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PyExampleObject.stringdata))
        return static_cast<void*>(const_cast< PyExampleObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PyExampleObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
