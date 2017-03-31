/****************************************************************************
** Meta object code from reading C++ file 'CustomObjects.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CustomObjects.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomObjects.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomObjectWrapper_t {
    QByteArrayData data[13];
    char stringdata[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomObjectWrapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomObjectWrapper_t qt_meta_stringdata_CustomObjectWrapper = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CustomObjectWrapper"
QT_MOC_LITERAL(1, 20, 16), // "new_CustomObject"
QT_MOC_LITERAL(2, 37, 13), // "CustomObject*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 5), // "first"
QT_MOC_LITERAL(5, 58, 4), // "last"
QT_MOC_LITERAL(6, 63, 19), // "delete_CustomObject"
QT_MOC_LITERAL(7, 83, 1), // "o"
QT_MOC_LITERAL(8, 85, 9), // "firstName"
QT_MOC_LITERAL(9, 95, 8), // "lastName"
QT_MOC_LITERAL(10, 104, 12), // "setFirstName"
QT_MOC_LITERAL(11, 117, 4), // "name"
QT_MOC_LITERAL(12, 122, 11) // "setLastName"

    },
    "CustomObjectWrapper\0new_CustomObject\0"
    "CustomObject*\0\0first\0last\0delete_CustomObject\0"
    "o\0firstName\0lastName\0setFirstName\0"
    "name\0setLastName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomObjectWrapper[] = {

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
       1,    2,   44,    3, 0x0a /* Public */,
       6,    1,   49,    3, 0x0a /* Public */,
       8,    1,   52,    3, 0x0a /* Public */,
       9,    1,   55,    3, 0x0a /* Public */,
      10,    2,   58,    3, 0x0a /* Public */,
      12,    2,   63,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    7,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    7,   11,

       0        // eod
};

void CustomObjectWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomObjectWrapper *_t = static_cast<CustomObjectWrapper *>(_o);
        switch (_id) {
        case 0: { CustomObject* _r = _t->new_CustomObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< CustomObject**>(_a[0]) = _r; }  break;
        case 1: _t->delete_CustomObject((*reinterpret_cast< CustomObject*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->firstName((*reinterpret_cast< CustomObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->lastName((*reinterpret_cast< CustomObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->setFirstName((*reinterpret_cast< CustomObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->setLastName((*reinterpret_cast< CustomObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject CustomObjectWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CustomObjectWrapper.data,
      qt_meta_data_CustomObjectWrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomObjectWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomObjectWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomObjectWrapper.stringdata))
        return static_cast<void*>(const_cast< CustomObjectWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int CustomObjectWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
