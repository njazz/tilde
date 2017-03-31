/****************************************************************************
** Meta object code from reading C++ file 'PythonQtTests.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "PythonQtTests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PythonQtTests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PythonQtTestApi_t {
    QByteArrayData data[12];
    char stringdata[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtTestApi_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtTestApi_t qt_meta_stringdata_PythonQtTestApi = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PythonQtTestApi"
QT_MOC_LITERAL(1, 16, 12), // "initTestCase"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "testCall"
QT_MOC_LITERAL(4, 39, 13), // "testVariables"
QT_MOC_LITERAL(5, 53, 12), // "testRedirect"
QT_MOC_LITERAL(6, 66, 12), // "testImporter"
QT_MOC_LITERAL(7, 79, 20), // "testQColorDecorators"
QT_MOC_LITERAL(8, 100, 15), // "testQtNamespace"
QT_MOC_LITERAL(9, 116, 12), // "testConnects"
QT_MOC_LITERAL(10, 129, 14), // "testProperties"
QT_MOC_LITERAL(11, 144, 21) // "testDynamicProperties"

    },
    "PythonQtTestApi\0initTestCase\0\0testCall\0"
    "testVariables\0testRedirect\0testImporter\0"
    "testQColorDecorators\0testQtNamespace\0"
    "testConnects\0testProperties\0"
    "testDynamicProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtTestApi[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
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

       0        // eod
};

void PythonQtTestApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtTestApi *_t = static_cast<PythonQtTestApi *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testCall(); break;
        case 2: _t->testVariables(); break;
        case 3: _t->testRedirect(); break;
        case 4: _t->testImporter(); break;
        case 5: _t->testQColorDecorators(); break;
        case 6: _t->testQtNamespace(); break;
        case 7: _t->testConnects(); break;
        case 8: _t->testProperties(); break;
        case 9: _t->testDynamicProperties(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PythonQtTestApi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtTestApi.data,
      qt_meta_data_PythonQtTestApi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtTestApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtTestApi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtTestApi.stringdata))
        return static_cast<void*>(const_cast< PythonQtTestApi*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtTestApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ClassD_t {
    QByteArrayData data[3];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClassD_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClassD_t qt_meta_stringdata_ClassD = {
    {
QT_MOC_LITERAL(0, 0, 6), // "ClassD"
QT_MOC_LITERAL(1, 7, 4), // "getD"
QT_MOC_LITERAL(2, 12, 0) // ""

    },
    "ClassD\0getD\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClassD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,

       0        // eod
};

void ClassD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClassD *_t = static_cast<ClassD *>(_o);
        switch (_id) {
        case 0: { int _r = _t->getD();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ClassD::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClassD.data,
      qt_meta_data_ClassD,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClassD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassD::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClassD.stringdata))
        return static_cast<void*>(const_cast< ClassD*>(this));
    if (!strcmp(_clname, "ClassA"))
        return static_cast< ClassA*>(const_cast< ClassD*>(this));
    if (!strcmp(_clname, "ClassB"))
        return static_cast< ClassB*>(const_cast< ClassD*>(this));
    return QObject::qt_metacast(_clname);
}

int ClassD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ClassAWrapper_t {
    QByteArrayData data[6];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClassAWrapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClassAWrapper_t qt_meta_stringdata_ClassAWrapper = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClassAWrapper"
QT_MOC_LITERAL(1, 14, 10), // "new_ClassA"
QT_MOC_LITERAL(2, 25, 7), // "ClassA*"
QT_MOC_LITERAL(3, 33, 0), // ""
QT_MOC_LITERAL(4, 34, 4), // "getX"
QT_MOC_LITERAL(5, 39, 1) // "o"

    },
    "ClassAWrapper\0new_ClassA\0ClassA*\0\0"
    "getX\0o"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClassAWrapper[] = {

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
    QMetaType::Int, 0x80000000 | 2,    5,

       0        // eod
};

void ClassAWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClassAWrapper *_t = static_cast<ClassAWrapper *>(_o);
        switch (_id) {
        case 0: { ClassA* _r = _t->new_ClassA();
            if (_a[0]) *reinterpret_cast< ClassA**>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->getX((*reinterpret_cast< ClassA*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ClassAWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClassAWrapper.data,
      qt_meta_data_ClassAWrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClassAWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassAWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClassAWrapper.stringdata))
        return static_cast<void*>(const_cast< ClassAWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int ClassAWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ClassBWrapper_t {
    QByteArrayData data[6];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClassBWrapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClassBWrapper_t qt_meta_stringdata_ClassBWrapper = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClassBWrapper"
QT_MOC_LITERAL(1, 14, 10), // "new_ClassB"
QT_MOC_LITERAL(2, 25, 7), // "ClassB*"
QT_MOC_LITERAL(3, 33, 0), // ""
QT_MOC_LITERAL(4, 34, 4), // "getY"
QT_MOC_LITERAL(5, 39, 1) // "o"

    },
    "ClassBWrapper\0new_ClassB\0ClassB*\0\0"
    "getY\0o"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClassBWrapper[] = {

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
    QMetaType::Int, 0x80000000 | 2,    5,

       0        // eod
};

void ClassBWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClassBWrapper *_t = static_cast<ClassBWrapper *>(_o);
        switch (_id) {
        case 0: { ClassB* _r = _t->new_ClassB();
            if (_a[0]) *reinterpret_cast< ClassB**>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->getY((*reinterpret_cast< ClassB*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ClassBWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClassBWrapper.data,
      qt_meta_data_ClassBWrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClassBWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassBWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClassBWrapper.stringdata))
        return static_cast<void*>(const_cast< ClassBWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int ClassBWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ClassCWrapper_t {
    QByteArrayData data[6];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClassCWrapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClassCWrapper_t qt_meta_stringdata_ClassCWrapper = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClassCWrapper"
QT_MOC_LITERAL(1, 14, 10), // "new_ClassC"
QT_MOC_LITERAL(2, 25, 7), // "ClassC*"
QT_MOC_LITERAL(3, 33, 0), // ""
QT_MOC_LITERAL(4, 34, 4), // "getZ"
QT_MOC_LITERAL(5, 39, 1) // "o"

    },
    "ClassCWrapper\0new_ClassC\0ClassC*\0\0"
    "getZ\0o"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClassCWrapper[] = {

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
    QMetaType::Int, 0x80000000 | 2,    5,

       0        // eod
};

void ClassCWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClassCWrapper *_t = static_cast<ClassCWrapper *>(_o);
        switch (_id) {
        case 0: { ClassC* _r = _t->new_ClassC();
            if (_a[0]) *reinterpret_cast< ClassC**>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->getZ((*reinterpret_cast< ClassC*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ClassCWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClassCWrapper.data,
      qt_meta_data_ClassCWrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClassCWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassCWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClassCWrapper.stringdata))
        return static_cast<void*>(const_cast< ClassCWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int ClassCWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_ClassDWrapper_t {
    QByteArrayData data[4];
    char stringdata[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClassDWrapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClassDWrapper_t qt_meta_stringdata_ClassDWrapper = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ClassDWrapper"
QT_MOC_LITERAL(1, 14, 10), // "new_ClassD"
QT_MOC_LITERAL(2, 25, 7), // "ClassD*"
QT_MOC_LITERAL(3, 33, 0) // ""

    },
    "ClassDWrapper\0new_ClassD\0ClassD*\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClassDWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,

       0        // eod
};

void ClassDWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClassDWrapper *_t = static_cast<ClassDWrapper *>(_o);
        switch (_id) {
        case 0: { ClassD* _r = _t->new_ClassD();
            if (_a[0]) *reinterpret_cast< ClassD**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject ClassDWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClassDWrapper.data,
      qt_meta_data_ClassDWrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClassDWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClassDWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClassDWrapper.stringdata))
        return static_cast<void*>(const_cast< ClassDWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int ClassDWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtTestApiHelper_t {
    QByteArrayData data[5];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtTestApiHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtTestApiHelper_t qt_meta_stringdata_PythonQtTestApiHelper = {
    {
QT_MOC_LITERAL(0, 0, 21), // "PythonQtTestApiHelper"
QT_MOC_LITERAL(1, 22, 9), // "setPassed"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "stdOut"
QT_MOC_LITERAL(4, 40, 6) // "stdErr"

    },
    "PythonQtTestApiHelper\0setPassed\0\0"
    "stdOut\0stdErr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtTestApiHelper[] = {

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
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       4,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void PythonQtTestApiHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtTestApiHelper *_t = static_cast<PythonQtTestApiHelper *>(_o);
        switch (_id) {
        case 0: _t->setPassed(); break;
        case 1: _t->stdOut((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->stdErr((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtTestApiHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtTestApiHelper.data,
      qt_meta_data_PythonQtTestApiHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtTestApiHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtTestApiHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtTestApiHelper.stringdata))
        return static_cast<void*>(const_cast< PythonQtTestApiHelper*>(this));
    if (!strcmp(_clname, "PythonQtImportFileInterface"))
        return static_cast< PythonQtImportFileInterface*>(const_cast< PythonQtTestApiHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtTestApiHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PQCppObjectWrapper_t {
    QByteArrayData data[5];
    char stringdata[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PQCppObjectWrapper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PQCppObjectWrapper_t qt_meta_stringdata_PQCppObjectWrapper = {
    {
QT_MOC_LITERAL(0, 0, 18), // "PQCppObjectWrapper"
QT_MOC_LITERAL(1, 19, 9), // "getHeight"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "setHeight"
QT_MOC_LITERAL(4, 40, 1) // "h"

    },
    "PQCppObjectWrapper\0getHeight\0\0setHeight\0"
    "h"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PQCppObjectWrapper[] = {

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
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void PQCppObjectWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PQCppObjectWrapper *_t = static_cast<PQCppObjectWrapper *>(_o);
        switch (_id) {
        case 0: { int _r = _t->getHeight();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->setHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PQCppObjectWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PQCppObjectWrapper.data,
      qt_meta_data_PQCppObjectWrapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PQCppObjectWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PQCppObjectWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PQCppObjectWrapper.stringdata))
        return static_cast<void*>(const_cast< PQCppObjectWrapper*>(this));
    return QObject::qt_metacast(_clname);
}

int PQCppObjectWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PQCppObjectDecorator_t {
    QByteArrayData data[5];
    char stringdata[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PQCppObjectDecorator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PQCppObjectDecorator_t qt_meta_stringdata_PQCppObjectDecorator = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PQCppObjectDecorator"
QT_MOC_LITERAL(1, 21, 4), // "getH"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "PQCppObject*"
QT_MOC_LITERAL(4, 40, 3) // "obj"

    },
    "PQCppObjectDecorator\0getH\0\0PQCppObject*\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PQCppObjectDecorator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3,    4,

       0        // eod
};

void PQCppObjectDecorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PQCppObjectDecorator *_t = static_cast<PQCppObjectDecorator *>(_o);
        switch (_id) {
        case 0: { int _r = _t->getH((*reinterpret_cast< PQCppObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PQCppObjectDecorator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PQCppObjectDecorator.data,
      qt_meta_data_PQCppObjectDecorator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PQCppObjectDecorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PQCppObjectDecorator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PQCppObjectDecorator.stringdata))
        return static_cast<void*>(const_cast< PQCppObjectDecorator*>(this));
    return QObject::qt_metacast(_clname);
}

int PQCppObjectDecorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PQCppObjectNoWrapDecorator_t {
    QByteArrayData data[9];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PQCppObjectNoWrapDecorator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PQCppObjectNoWrapDecorator_t qt_meta_stringdata_PQCppObjectNoWrapDecorator = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PQCppObjectNoWrapDecorator"
QT_MOC_LITERAL(1, 27, 21), // "new_PQCppObjectNoWrap"
QT_MOC_LITERAL(2, 49, 18), // "PQCppObjectNoWrap*"
QT_MOC_LITERAL(3, 68, 0), // ""
QT_MOC_LITERAL(4, 69, 17), // "PQCppObjectNoWrap"
QT_MOC_LITERAL(5, 87, 5), // "other"
QT_MOC_LITERAL(6, 93, 5), // "value"
QT_MOC_LITERAL(7, 99, 4), // "getH"
QT_MOC_LITERAL(8, 104, 3) // "obj"

    },
    "PQCppObjectNoWrapDecorator\0"
    "new_PQCppObjectNoWrap\0PQCppObjectNoWrap*\0"
    "\0PQCppObjectNoWrap\0other\0value\0getH\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PQCppObjectNoWrapDecorator[] = {

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
       1,    0,   34,    3, 0x0a /* Public */,
       1,    1,   35,    3, 0x0a /* Public */,
       1,    1,   38,    3, 0x0a /* Public */,
       7,    1,   41,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::Double,    6,
    QMetaType::Int, 0x80000000 | 2,    8,

       0        // eod
};

void PQCppObjectNoWrapDecorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PQCppObjectNoWrapDecorator *_t = static_cast<PQCppObjectNoWrapDecorator *>(_o);
        switch (_id) {
        case 0: { PQCppObjectNoWrap* _r = _t->new_PQCppObjectNoWrap();
            if (_a[0]) *reinterpret_cast< PQCppObjectNoWrap**>(_a[0]) = _r; }  break;
        case 1: { PQCppObjectNoWrap* _r = _t->new_PQCppObjectNoWrap((*reinterpret_cast< const PQCppObjectNoWrap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PQCppObjectNoWrap**>(_a[0]) = _r; }  break;
        case 2: { PQCppObjectNoWrap* _r = _t->new_PQCppObjectNoWrap((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PQCppObjectNoWrap**>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->getH((*reinterpret_cast< PQCppObjectNoWrap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PQCppObjectNoWrapDecorator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PQCppObjectNoWrapDecorator.data,
      qt_meta_data_PQCppObjectNoWrapDecorator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PQCppObjectNoWrapDecorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PQCppObjectNoWrapDecorator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PQCppObjectNoWrapDecorator.stringdata))
        return static_cast<void*>(const_cast< PQCppObjectNoWrapDecorator*>(this));
    return QObject::qt_metacast(_clname);
}

int PQCppObjectNoWrapDecorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PQCppObject2Decorator_t {
    QByteArrayData data[14];
    char stringdata[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PQCppObject2Decorator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PQCppObject2Decorator_t qt_meta_stringdata_PQCppObject2Decorator = {
    {
QT_MOC_LITERAL(0, 0, 21), // "PQCppObject2Decorator"
QT_MOC_LITERAL(1, 22, 16), // "new_PQCppObject2"
QT_MOC_LITERAL(2, 39, 13), // "PQCppObject2*"
QT_MOC_LITERAL(3, 53, 0), // ""
QT_MOC_LITERAL(4, 54, 13), // "testEnumFlag1"
QT_MOC_LITERAL(5, 68, 12), // "TestEnumFlag"
QT_MOC_LITERAL(6, 81, 3), // "obj"
QT_MOC_LITERAL(7, 85, 4), // "flag"
QT_MOC_LITERAL(8, 90, 13), // "testEnumFlag2"
QT_MOC_LITERAL(9, 104, 26), // "PQCppObject2::TestEnumFlag"
QT_MOC_LITERAL(10, 131, 13), // "testEnumFlag3"
QT_MOC_LITERAL(11, 145, 14), // "TestEnumValue1"
QT_MOC_LITERAL(12, 160, 14), // "TestEnumValue2"
QT_MOC_LITERAL(13, 175, 8) // "TestEnum"

    },
    "PQCppObject2Decorator\0new_PQCppObject2\0"
    "PQCppObject2*\0\0testEnumFlag1\0TestEnumFlag\0"
    "obj\0flag\0testEnumFlag2\0"
    "PQCppObject2::TestEnumFlag\0testEnumFlag3\0"
    "TestEnumValue1\0TestEnumValue2\0TestEnum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PQCppObject2Decorator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       2,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    3, 0x0a /* Public */,
       4,    2,   40,    3, 0x0a /* Public */,
       8,    2,   45,    3, 0x0a /* Public */,
      10,    2,   50,    3, 0x0a /* Public */,
      10,    2,   55,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 5, 0x80000000 | 2, 0x80000000 | 5,    6,    7,
    0x80000000 | 9, 0x80000000 | 2, 0x80000000 | 9,    6,    7,
    0x80000000 | 5, 0x80000000 | 2, QMetaType::Int,    6,    7,
    0x80000000 | 5, 0x80000000 | 2, 0x80000000 | 5,    6,    7,

 // enums: name, flags, count, data
       5, 0x0,    2,   68,
      13, 0x1,    2,   72,

 // enum data: key, value
      11, uint(PQCppObject2Decorator::TestEnumValue1),
      12, uint(PQCppObject2Decorator::TestEnumValue2),
      11, uint(PQCppObject2Decorator::TestEnumValue1),
      12, uint(PQCppObject2Decorator::TestEnumValue2),

       0        // eod
};

void PQCppObject2Decorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PQCppObject2Decorator *_t = static_cast<PQCppObject2Decorator *>(_o);
        switch (_id) {
        case 0: { PQCppObject2* _r = _t->new_PQCppObject2();
            if (_a[0]) *reinterpret_cast< PQCppObject2**>(_a[0]) = _r; }  break;
        case 1: { TestEnumFlag _r = _t->testEnumFlag1((*reinterpret_cast< PQCppObject2*(*)>(_a[1])),(*reinterpret_cast< TestEnumFlag(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TestEnumFlag*>(_a[0]) = _r; }  break;
        case 2: { PQCppObject2::TestEnumFlag _r = _t->testEnumFlag2((*reinterpret_cast< PQCppObject2*(*)>(_a[1])),(*reinterpret_cast< PQCppObject2::TestEnumFlag(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PQCppObject2::TestEnumFlag*>(_a[0]) = _r; }  break;
        case 3: { TestEnumFlag _r = _t->testEnumFlag3((*reinterpret_cast< PQCppObject2*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TestEnumFlag*>(_a[0]) = _r; }  break;
        case 4: { TestEnumFlag _r = _t->testEnumFlag3((*reinterpret_cast< PQCppObject2*(*)>(_a[1])),(*reinterpret_cast< TestEnumFlag(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TestEnumFlag*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PQCppObject2Decorator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PQCppObject2Decorator.data,
      qt_meta_data_PQCppObject2Decorator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PQCppObject2Decorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PQCppObject2Decorator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PQCppObject2Decorator.stringdata))
        return static_cast<void*>(const_cast< PQCppObject2Decorator*>(this));
    return QObject::qt_metacast(_clname);
}

int PQCppObject2Decorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtTestSlotCalling_t {
    QByteArrayData data[18];
    char stringdata[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtTestSlotCalling_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtTestSlotCalling_t qt_meta_stringdata_PythonQtTestSlotCalling = {
    {
QT_MOC_LITERAL(0, 0, 23), // "PythonQtTestSlotCalling"
QT_MOC_LITERAL(1, 24, 12), // "initTestCase"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "init"
QT_MOC_LITERAL(4, 43, 17), // "testNoArgSlotCall"
QT_MOC_LITERAL(5, 61, 16), // "testPODSlotCalls"
QT_MOC_LITERAL(6, 78, 16), // "testCPPSlotCalls"
QT_MOC_LITERAL(7, 95, 21), // "testQVariantSlotCalls"
QT_MOC_LITERAL(8, 117, 18), // "testQListSlotCalls"
QT_MOC_LITERAL(9, 136, 17), // "testQMapSlotCalls"
QT_MOC_LITERAL(10, 154, 19), // "testObjectSlotCalls"
QT_MOC_LITERAL(11, 174, 21), // "testMultiArgsSlotCall"
QT_MOC_LITERAL(12, 196, 20), // "testPyObjectSlotCall"
QT_MOC_LITERAL(13, 217, 18), // "testOverloadedCall"
QT_MOC_LITERAL(14, 236, 14), // "testCppFactory"
QT_MOC_LITERAL(15, 251, 15), // "testInheritance"
QT_MOC_LITERAL(16, 267, 18), // "testAutoConversion"
QT_MOC_LITERAL(17, 286, 14) // "testProperties"

    },
    "PythonQtTestSlotCalling\0initTestCase\0"
    "\0init\0testNoArgSlotCall\0testPODSlotCalls\0"
    "testCPPSlotCalls\0testQVariantSlotCalls\0"
    "testQListSlotCalls\0testQMapSlotCalls\0"
    "testObjectSlotCalls\0testMultiArgsSlotCall\0"
    "testPyObjectSlotCall\0testOverloadedCall\0"
    "testCppFactory\0testInheritance\0"
    "testAutoConversion\0testProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtTestSlotCalling[] = {

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
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
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

       0        // eod
};

void PythonQtTestSlotCalling::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtTestSlotCalling *_t = static_cast<PythonQtTestSlotCalling *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->init(); break;
        case 2: _t->testNoArgSlotCall(); break;
        case 3: _t->testPODSlotCalls(); break;
        case 4: _t->testCPPSlotCalls(); break;
        case 5: _t->testQVariantSlotCalls(); break;
        case 6: _t->testQListSlotCalls(); break;
        case 7: _t->testQMapSlotCalls(); break;
        case 8: _t->testObjectSlotCalls(); break;
        case 9: _t->testMultiArgsSlotCall(); break;
        case 10: _t->testPyObjectSlotCall(); break;
        case 11: _t->testOverloadedCall(); break;
        case 12: _t->testCppFactory(); break;
        case 13: _t->testInheritance(); break;
        case 14: _t->testAutoConversion(); break;
        case 15: _t->testProperties(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PythonQtTestSlotCalling::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtTestSlotCalling.data,
      qt_meta_data_PythonQtTestSlotCalling,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtTestSlotCalling::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtTestSlotCalling::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtTestSlotCalling.stringdata))
        return static_cast<void*>(const_cast< PythonQtTestSlotCalling*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtTestSlotCalling::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtTestSlotCallingHelper_t {
    QByteArrayData data[136];
    char stringdata[1846];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtTestSlotCallingHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtTestSlotCallingHelper_t qt_meta_stringdata_PythonQtTestSlotCallingHelper = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtTestSlotCallingHelper"
QT_MOC_LITERAL(1, 30, 9), // "setPassed"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 9), // "testNoArg"
QT_MOC_LITERAL(4, 51, 8), // "overload"
QT_MOC_LITERAL(5, 60, 1), // "a"
QT_MOC_LITERAL(6, 62, 3), // "str"
QT_MOC_LITERAL(7, 66, 1), // "b"
QT_MOC_LITERAL(8, 68, 6), // "getInt"
QT_MOC_LITERAL(9, 75, 7), // "getUInt"
QT_MOC_LITERAL(10, 83, 7), // "getBool"
QT_MOC_LITERAL(11, 91, 7), // "getChar"
QT_MOC_LITERAL(12, 99, 8), // "getUChar"
QT_MOC_LITERAL(13, 108, 7), // "getLong"
QT_MOC_LITERAL(14, 116, 8), // "getULong"
QT_MOC_LITERAL(15, 125, 8), // "getShort"
QT_MOC_LITERAL(16, 134, 9), // "getUShort"
QT_MOC_LITERAL(17, 144, 8), // "getQChar"
QT_MOC_LITERAL(18, 153, 11), // "getLongLong"
QT_MOC_LITERAL(19, 165, 12), // "getULongLong"
QT_MOC_LITERAL(20, 178, 9), // "getDouble"
QT_MOC_LITERAL(21, 188, 1), // "d"
QT_MOC_LITERAL(22, 190, 8), // "getFloat"
QT_MOC_LITERAL(23, 199, 10), // "getQString"
QT_MOC_LITERAL(24, 210, 1), // "s"
QT_MOC_LITERAL(25, 212, 14), // "getQStringList"
QT_MOC_LITERAL(26, 227, 1), // "l"
QT_MOC_LITERAL(27, 229, 11), // "getQVariant"
QT_MOC_LITERAL(28, 241, 3), // "var"
QT_MOC_LITERAL(29, 245, 11), // "getQListInt"
QT_MOC_LITERAL(30, 257, 10), // "QList<int>"
QT_MOC_LITERAL(31, 268, 19), // "getQListUnsignedInt"
QT_MOC_LITERAL(32, 288, 11), // "QList<uint>"
QT_MOC_LITERAL(33, 300, 13), // "getQListqreal"
QT_MOC_LITERAL(34, 314, 12), // "QList<qreal>"
QT_MOC_LITERAL(35, 327, 13), // "getQListfloat"
QT_MOC_LITERAL(36, 341, 12), // "QList<float>"
QT_MOC_LITERAL(37, 354, 14), // "getQListdouble"
QT_MOC_LITERAL(38, 369, 13), // "QList<double>"
QT_MOC_LITERAL(39, 383, 15), // "getQListquint64"
QT_MOC_LITERAL(40, 399, 14), // "QList<quint64>"
QT_MOC_LITERAL(41, 414, 14), // "getQListqint64"
QT_MOC_LITERAL(42, 429, 13), // "QList<qint64>"
QT_MOC_LITERAL(43, 443, 13), // "getQListQSize"
QT_MOC_LITERAL(44, 457, 12), // "QList<QSize>"
QT_MOC_LITERAL(45, 470, 4), // "list"
QT_MOC_LITERAL(46, 475, 17), // "getQListDayOfWeek"
QT_MOC_LITERAL(47, 493, 20), // "QList<Qt::DayOfWeek>"
QT_MOC_LITERAL(48, 514, 4), // "days"
QT_MOC_LITERAL(49, 519, 17), // "getQMapIntVariant"
QT_MOC_LITERAL(50, 537, 18), // "QMap<int,QVariant>"
QT_MOC_LITERAL(51, 556, 3), // "map"
QT_MOC_LITERAL(52, 560, 16), // "getQMapIntString"
QT_MOC_LITERAL(53, 577, 17), // "QMap<int,QString>"
QT_MOC_LITERAL(54, 595, 16), // "getQVectorQPair1"
QT_MOC_LITERAL(55, 612, 30), // "QVector<QPair<double,QColor> >"
QT_MOC_LITERAL(56, 643, 16), // "getQVectorQPair2"
QT_MOC_LITERAL(57, 660, 29), // "QVector<QPair<qreal,QColor> >"
QT_MOC_LITERAL(58, 690, 8), // "getQPair"
QT_MOC_LITERAL(59, 699, 20), // "QPair<double,QColor>"
QT_MOC_LITERAL(60, 720, 4), // "pair"
QT_MOC_LITERAL(61, 725, 15), // "getQPairVariant"
QT_MOC_LITERAL(62, 741, 22), // "QPair<double,QVariant>"
QT_MOC_LITERAL(63, 764, 10), // "getQColor1"
QT_MOC_LITERAL(64, 775, 10), // "getQColor2"
QT_MOC_LITERAL(65, 786, 7), // "QColor&"
QT_MOC_LITERAL(66, 794, 10), // "getQColor3"
QT_MOC_LITERAL(67, 805, 7), // "QColor*"
QT_MOC_LITERAL(68, 813, 3), // "col"
QT_MOC_LITERAL(69, 817, 10), // "getQColor4"
QT_MOC_LITERAL(70, 828, 5), // "color"
QT_MOC_LITERAL(71, 834, 10), // "getQColor5"
QT_MOC_LITERAL(72, 845, 11), // "getPyObject"
QT_MOC_LITERAL(73, 857, 9), // "PyObject*"
QT_MOC_LITERAL(74, 867, 3), // "obj"
QT_MOC_LITERAL(75, 871, 22), // "getPyObjectFromVariant"
QT_MOC_LITERAL(76, 894, 3), // "val"
QT_MOC_LITERAL(77, 898, 23), // "getPyObjectFromVariant2"
QT_MOC_LITERAL(78, 922, 13), // "getTestObject"
QT_MOC_LITERAL(79, 936, 30), // "PythonQtTestSlotCallingHelper*"
QT_MOC_LITERAL(80, 967, 10), // "getQObject"
QT_MOC_LITERAL(81, 978, 10), // "getQWidget"
QT_MOC_LITERAL(82, 989, 8), // "QWidget*"
QT_MOC_LITERAL(83, 998, 12), // "getNewObject"
QT_MOC_LITERAL(84, 1011, 12), // "getMultiArgs"
QT_MOC_LITERAL(85, 1024, 17), // "createPQCppObject"
QT_MOC_LITERAL(86, 1042, 12), // "PQCppObject*"
QT_MOC_LITERAL(87, 1055, 1), // "h"
QT_MOC_LITERAL(88, 1057, 14), // "getPQCppObject"
QT_MOC_LITERAL(89, 1072, 1), // "p"
QT_MOC_LITERAL(90, 1074, 23), // "createPQCppObjectNoWrap"
QT_MOC_LITERAL(91, 1098, 18), // "PQCppObjectNoWrap*"
QT_MOC_LITERAL(92, 1117, 20), // "getPQCppObjectNoWrap"
QT_MOC_LITERAL(93, 1138, 27), // "getPQCppObjectNoWrapAsValue"
QT_MOC_LITERAL(94, 1166, 17), // "PQCppObjectNoWrap"
QT_MOC_LITERAL(95, 1184, 41), // "getUnknownButRegisteredValueO..."
QT_MOC_LITERAL(96, 1226, 33), // "PQUnknownButRegisteredValueOb..."
QT_MOC_LITERAL(97, 1260, 28), // "getUnknownValueObjectAsValue"
QT_MOC_LITERAL(98, 1289, 20), // "PQUnknownValueObject"
QT_MOC_LITERAL(99, 1310, 39), // "getUnknownButRegisteredValueO..."
QT_MOC_LITERAL(100, 1350, 34), // "PQUnknownButRegisteredValueOb..."
QT_MOC_LITERAL(101, 1385, 26), // "getUnknownValueObjectAsPtr"
QT_MOC_LITERAL(102, 1412, 21), // "PQUnknownValueObject*"
QT_MOC_LITERAL(103, 1434, 12), // "getClassAPtr"
QT_MOC_LITERAL(104, 1447, 7), // "ClassA*"
QT_MOC_LITERAL(105, 1455, 1), // "o"
QT_MOC_LITERAL(106, 1457, 12), // "getClassBPtr"
QT_MOC_LITERAL(107, 1470, 7), // "ClassB*"
QT_MOC_LITERAL(108, 1478, 12), // "getClassCPtr"
QT_MOC_LITERAL(109, 1491, 7), // "ClassC*"
QT_MOC_LITERAL(110, 1499, 12), // "getClassDPtr"
QT_MOC_LITERAL(111, 1512, 7), // "ClassD*"
QT_MOC_LITERAL(112, 1520, 12), // "createClassA"
QT_MOC_LITERAL(113, 1533, 12), // "createClassB"
QT_MOC_LITERAL(114, 1546, 12), // "createClassC"
QT_MOC_LITERAL(115, 1559, 12), // "createClassD"
QT_MOC_LITERAL(116, 1572, 15), // "createClassCAsA"
QT_MOC_LITERAL(117, 1588, 15), // "createClassCAsB"
QT_MOC_LITERAL(118, 1604, 15), // "createClassDAsA"
QT_MOC_LITERAL(119, 1620, 15), // "createClassDAsB"
QT_MOC_LITERAL(120, 1636, 19), // "setAutoConvertColor"
QT_MOC_LITERAL(121, 1656, 19), // "setAutoConvertBrush"
QT_MOC_LITERAL(122, 1676, 5), // "brush"
QT_MOC_LITERAL(123, 1682, 17), // "setAutoConvertPen"
QT_MOC_LITERAL(124, 1700, 3), // "pen"
QT_MOC_LITERAL(125, 1704, 20), // "setAutoConvertCursor"
QT_MOC_LITERAL(126, 1725, 6), // "cursor"
QT_MOC_LITERAL(127, 1732, 7), // "intProp"
QT_MOC_LITERAL(128, 1740, 9), // "floatProp"
QT_MOC_LITERAL(129, 1750, 15), // "variantListProp"
QT_MOC_LITERAL(130, 1766, 14), // "variantMapProp"
QT_MOC_LITERAL(131, 1781, 11), // "variantProp"
QT_MOC_LITERAL(132, 1793, 11), // "qObjectProp"
QT_MOC_LITERAL(133, 1805, 15), // "qObjectListProp"
QT_MOC_LITERAL(134, 1821, 15), // "QList<QObject*>"
QT_MOC_LITERAL(135, 1837, 8) // "sizeProp"

    },
    "PythonQtTestSlotCallingHelper\0setPassed\0"
    "\0testNoArg\0overload\0a\0str\0b\0getInt\0"
    "getUInt\0getBool\0getChar\0getUChar\0"
    "getLong\0getULong\0getShort\0getUShort\0"
    "getQChar\0getLongLong\0getULongLong\0"
    "getDouble\0d\0getFloat\0getQString\0s\0"
    "getQStringList\0l\0getQVariant\0var\0"
    "getQListInt\0QList<int>\0getQListUnsignedInt\0"
    "QList<uint>\0getQListqreal\0QList<qreal>\0"
    "getQListfloat\0QList<float>\0getQListdouble\0"
    "QList<double>\0getQListquint64\0"
    "QList<quint64>\0getQListqint64\0"
    "QList<qint64>\0getQListQSize\0QList<QSize>\0"
    "list\0getQListDayOfWeek\0QList<Qt::DayOfWeek>\0"
    "days\0getQMapIntVariant\0QMap<int,QVariant>\0"
    "map\0getQMapIntString\0QMap<int,QString>\0"
    "getQVectorQPair1\0QVector<QPair<double,QColor> >\0"
    "getQVectorQPair2\0QVector<QPair<qreal,QColor> >\0"
    "getQPair\0QPair<double,QColor>\0pair\0"
    "getQPairVariant\0QPair<double,QVariant>\0"
    "getQColor1\0getQColor2\0QColor&\0getQColor3\0"
    "QColor*\0col\0getQColor4\0color\0getQColor5\0"
    "getPyObject\0PyObject*\0obj\0"
    "getPyObjectFromVariant\0val\0"
    "getPyObjectFromVariant2\0getTestObject\0"
    "PythonQtTestSlotCallingHelper*\0"
    "getQObject\0getQWidget\0QWidget*\0"
    "getNewObject\0getMultiArgs\0createPQCppObject\0"
    "PQCppObject*\0h\0getPQCppObject\0p\0"
    "createPQCppObjectNoWrap\0PQCppObjectNoWrap*\0"
    "getPQCppObjectNoWrap\0getPQCppObjectNoWrapAsValue\0"
    "PQCppObjectNoWrap\0"
    "getUnknownButRegisteredValueObjectAsValue\0"
    "PQUnknownButRegisteredValueObject\0"
    "getUnknownValueObjectAsValue\0"
    "PQUnknownValueObject\0"
    "getUnknownButRegisteredValueObjectAsPtr\0"
    "PQUnknownButRegisteredValueObject*\0"
    "getUnknownValueObjectAsPtr\0"
    "PQUnknownValueObject*\0getClassAPtr\0"
    "ClassA*\0o\0getClassBPtr\0ClassB*\0"
    "getClassCPtr\0ClassC*\0getClassDPtr\0"
    "ClassD*\0createClassA\0createClassB\0"
    "createClassC\0createClassD\0createClassCAsA\0"
    "createClassCAsB\0createClassDAsA\0"
    "createClassDAsB\0setAutoConvertColor\0"
    "setAutoConvertBrush\0brush\0setAutoConvertPen\0"
    "pen\0setAutoConvertCursor\0cursor\0intProp\0"
    "floatProp\0variantListProp\0variantMapProp\0"
    "variantProp\0qObjectProp\0qObjectListProp\0"
    "QList<QObject*>\0sizeProp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtTestSlotCallingHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      80,   14, // methods
       8,  610, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  414,    2, 0x0a /* Public */,
       3,    0,  415,    2, 0x0a /* Public */,
       4,    1,  416,    2, 0x0a /* Public */,
       4,    1,  419,    2, 0x0a /* Public */,
       4,    1,  422,    2, 0x0a /* Public */,
       4,    1,  425,    2, 0x0a /* Public */,
       4,    1,  428,    2, 0x0a /* Public */,
       4,    1,  431,    2, 0x0a /* Public */,
       4,    2,  434,    2, 0x0a /* Public */,
       8,    1,  439,    2, 0x0a /* Public */,
       9,    1,  442,    2, 0x0a /* Public */,
      10,    1,  445,    2, 0x0a /* Public */,
      11,    1,  448,    2, 0x0a /* Public */,
      12,    1,  451,    2, 0x0a /* Public */,
      13,    1,  454,    2, 0x0a /* Public */,
      14,    1,  457,    2, 0x0a /* Public */,
      15,    1,  460,    2, 0x0a /* Public */,
      16,    1,  463,    2, 0x0a /* Public */,
      17,    1,  466,    2, 0x0a /* Public */,
      18,    1,  469,    2, 0x0a /* Public */,
      19,    1,  472,    2, 0x0a /* Public */,
      20,    1,  475,    2, 0x0a /* Public */,
      22,    1,  478,    2, 0x0a /* Public */,
      23,    1,  481,    2, 0x0a /* Public */,
      25,    1,  484,    2, 0x0a /* Public */,
      27,    1,  487,    2, 0x0a /* Public */,
      29,    0,  490,    2, 0x0a /* Public */,
      31,    0,  491,    2, 0x0a /* Public */,
      33,    0,  492,    2, 0x0a /* Public */,
      35,    0,  493,    2, 0x0a /* Public */,
      37,    0,  494,    2, 0x0a /* Public */,
      39,    0,  495,    2, 0x0a /* Public */,
      41,    0,  496,    2, 0x0a /* Public */,
      43,    0,  497,    2, 0x0a /* Public */,
      43,    1,  498,    2, 0x0a /* Public */,
      46,    1,  501,    2, 0x0a /* Public */,
      49,    1,  504,    2, 0x0a /* Public */,
      52,    1,  507,    2, 0x0a /* Public */,
      54,    1,  510,    2, 0x0a /* Public */,
      56,    1,  513,    2, 0x0a /* Public */,
      58,    1,  516,    2, 0x0a /* Public */,
      61,    1,  519,    2, 0x0a /* Public */,
      63,    1,  522,    2, 0x0a /* Public */,
      64,    1,  525,    2, 0x0a /* Public */,
      66,    1,  528,    2, 0x0a /* Public */,
      69,    1,  531,    2, 0x0a /* Public */,
      71,    0,  534,    2, 0x0a /* Public */,
      72,    1,  535,    2, 0x0a /* Public */,
      75,    1,  538,    2, 0x0a /* Public */,
      77,    1,  541,    2, 0x0a /* Public */,
      78,    1,  544,    2, 0x0a /* Public */,
      80,    1,  547,    2, 0x0a /* Public */,
      81,    1,  550,    2, 0x0a /* Public */,
      83,    0,  553,    2, 0x0a /* Public */,
      84,    3,  554,    2, 0x0a /* Public */,
      85,    1,  561,    2, 0x0a /* Public */,
      88,    1,  564,    2, 0x0a /* Public */,
      90,    1,  567,    2, 0x0a /* Public */,
      92,    1,  570,    2, 0x0a /* Public */,
      93,    0,  573,    2, 0x0a /* Public */,
      95,    0,  574,    2, 0x0a /* Public */,
      97,    0,  575,    2, 0x0a /* Public */,
      99,    0,  576,    2, 0x0a /* Public */,
     101,    0,  577,    2, 0x0a /* Public */,
     103,    1,  578,    2, 0x0a /* Public */,
     106,    1,  581,    2, 0x0a /* Public */,
     108,    1,  584,    2, 0x0a /* Public */,
     110,    1,  587,    2, 0x0a /* Public */,
     112,    0,  590,    2, 0x0a /* Public */,
     113,    0,  591,    2, 0x0a /* Public */,
     114,    0,  592,    2, 0x0a /* Public */,
     115,    0,  593,    2, 0x0a /* Public */,
     116,    0,  594,    2, 0x0a /* Public */,
     117,    0,  595,    2, 0x0a /* Public */,
     118,    0,  596,    2, 0x0a /* Public */,
     119,    0,  597,    2, 0x0a /* Public */,
     120,    1,  598,    2, 0x0a /* Public */,
     121,    1,  601,    2, 0x0a /* Public */,
     123,    1,  604,    2, 0x0a /* Public */,
     125,    1,  607,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QStringList,    6,
    QMetaType::Void, QMetaType::QObjectStar,    6,
    QMetaType::Void, QMetaType::Float, QMetaType::Int,    5,    7,
    QMetaType::Int, QMetaType::Int,    5,
    QMetaType::UInt, QMetaType::UInt,    5,
    QMetaType::Bool, QMetaType::Bool,    5,
    QMetaType::Char, QMetaType::Char,    5,
    QMetaType::UChar, QMetaType::UChar,    5,
    QMetaType::Long, QMetaType::Long,    5,
    QMetaType::ULong, QMetaType::ULong,    5,
    QMetaType::Short, QMetaType::Short,    5,
    QMetaType::UShort, QMetaType::UShort,    5,
    QMetaType::QChar, QMetaType::QChar,    5,
    QMetaType::LongLong, QMetaType::LongLong,    5,
    QMetaType::ULongLong, QMetaType::ULongLong,    5,
    QMetaType::Double, QMetaType::Double,   21,
    QMetaType::Float, QMetaType::Float,   21,
    QMetaType::QString, QMetaType::QString,   24,
    QMetaType::QStringList, QMetaType::QStringList,   26,
    QMetaType::QVariant, QMetaType::QVariant,   28,
    0x80000000 | 30,
    0x80000000 | 32,
    0x80000000 | 34,
    0x80000000 | 36,
    0x80000000 | 38,
    0x80000000 | 40,
    0x80000000 | 42,
    0x80000000 | 44,
    0x80000000 | 44, 0x80000000 | 44,   45,
    0x80000000 | 47, 0x80000000 | 47,   48,
    0x80000000 | 50, 0x80000000 | 50,   51,
    0x80000000 | 53, 0x80000000 | 53,   51,
    0x80000000 | 55, 0x80000000 | 55,   45,
    0x80000000 | 57, 0x80000000 | 57,   45,
    0x80000000 | 59, 0x80000000 | 59,   60,
    0x80000000 | 62, 0x80000000 | 62,   60,
    QMetaType::QColor, QMetaType::QColor,   28,
    QMetaType::QColor, 0x80000000 | 65,   28,
    QMetaType::QColor, 0x80000000 | 67,   68,
    QMetaType::QColor, QMetaType::QVariant,   70,
    0x80000000 | 67,
    0x80000000 | 73, 0x80000000 | 73,   74,
    0x80000000 | 73, QMetaType::QVariant,   76,
    QMetaType::QVariant, QMetaType::QVariant,   76,
    0x80000000 | 79, 0x80000000 | 79,   74,
    QMetaType::QObjectStar, QMetaType::QObjectStar,   74,
    0x80000000 | 82, 0x80000000 | 82,   74,
    QMetaType::QObjectStar,
    QMetaType::QVariantList, QMetaType::Int, QMetaType::Double, QMetaType::QString,    5,    7,    6,
    0x80000000 | 86, QMetaType::Int,   87,
    0x80000000 | 86, 0x80000000 | 86,   89,
    0x80000000 | 91, QMetaType::Int,   87,
    0x80000000 | 91, 0x80000000 | 91,   89,
    0x80000000 | 94,
    0x80000000 | 96,
    0x80000000 | 98,
    0x80000000 | 100,
    0x80000000 | 102,
    0x80000000 | 104, 0x80000000 | 104,  105,
    0x80000000 | 107, 0x80000000 | 107,  105,
    0x80000000 | 109, 0x80000000 | 109,  105,
    0x80000000 | 111, 0x80000000 | 111,  105,
    0x80000000 | 104,
    0x80000000 | 107,
    0x80000000 | 109,
    0x80000000 | 111,
    0x80000000 | 104,
    0x80000000 | 107,
    0x80000000 | 104,
    0x80000000 | 107,
    QMetaType::QColor, QMetaType::QColor,   70,
    QMetaType::QBrush, QMetaType::QBrush,  122,
    QMetaType::QPen, QMetaType::QPen,  124,
    QMetaType::QCursor, QMetaType::QCursor,  126,

 // properties: name, type, flags
     127, QMetaType::Int, 0x00095103,
     128, QMetaType::Float, 0x00095103,
     129, QMetaType::QVariantList, 0x00095103,
     130, QMetaType::QVariantMap, 0x00095103,
     131, QMetaType::QVariant, 0x00095103,
     132, QMetaType::QObjectStar, 0x00095103,
     133, 0x80000000 | 134, 0x0009510b,
     135, QMetaType::QSize, 0x00095103,

       0        // eod
};

void PythonQtTestSlotCallingHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtTestSlotCallingHelper *_t = static_cast<PythonQtTestSlotCallingHelper *>(_o);
        switch (_id) {
        case 0: _t->setPassed(); break;
        case 1: _t->testNoArg(); break;
        case 2: _t->overload((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->overload((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->overload((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->overload((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->overload((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 7: _t->overload((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->overload((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: { int _r = _t->getInt((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { uint _r = _t->getUInt((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->getBool((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { char _r = _t->getChar((*reinterpret_cast< char(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< char*>(_a[0]) = _r; }  break;
        case 13: { unsigned char _r = _t->getUChar((*reinterpret_cast< unsigned char(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned char*>(_a[0]) = _r; }  break;
        case 14: { long _r = _t->getLong((*reinterpret_cast< long(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 15: { ulong _r = _t->getULong((*reinterpret_cast< ulong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ulong*>(_a[0]) = _r; }  break;
        case 16: { short _r = _t->getShort((*reinterpret_cast< short(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< short*>(_a[0]) = _r; }  break;
        case 17: { unsigned short _r = _t->getUShort((*reinterpret_cast< unsigned short(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 18: { QChar _r = _t->getQChar((*reinterpret_cast< QChar(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 19: { qint64 _r = _t->getLongLong((*reinterpret_cast< qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 20: { quint64 _r = _t->getULongLong((*reinterpret_cast< quint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 21: { double _r = _t->getDouble((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 22: { float _r = _t->getFloat((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->getQString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { QStringList _r = _t->getQStringList((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 25: { QVariant _r = _t->getQVariant((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 26: { QList<int> _r = _t->getQListInt();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 27: { QList<uint> _r = _t->getQListUnsignedInt();
            if (_a[0]) *reinterpret_cast< QList<uint>*>(_a[0]) = _r; }  break;
        case 28: { QList<qreal> _r = _t->getQListqreal();
            if (_a[0]) *reinterpret_cast< QList<qreal>*>(_a[0]) = _r; }  break;
        case 29: { QList<float> _r = _t->getQListfloat();
            if (_a[0]) *reinterpret_cast< QList<float>*>(_a[0]) = _r; }  break;
        case 30: { QList<double> _r = _t->getQListdouble();
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = _r; }  break;
        case 31: { QList<quint64> _r = _t->getQListquint64();
            if (_a[0]) *reinterpret_cast< QList<quint64>*>(_a[0]) = _r; }  break;
        case 32: { QList<qint64> _r = _t->getQListqint64();
            if (_a[0]) *reinterpret_cast< QList<qint64>*>(_a[0]) = _r; }  break;
        case 33: { QList<QSize> _r = _t->getQListQSize();
            if (_a[0]) *reinterpret_cast< QList<QSize>*>(_a[0]) = _r; }  break;
        case 34: { QList<QSize> _r = _t->getQListQSize((*reinterpret_cast< const QList<QSize>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSize>*>(_a[0]) = _r; }  break;
        case 35: { QList<Qt::DayOfWeek> _r = _t->getQListDayOfWeek((*reinterpret_cast< const QList<Qt::DayOfWeek>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<Qt::DayOfWeek>*>(_a[0]) = _r; }  break;
        case 36: { QMap<int,QVariant> _r = _t->getQMapIntVariant((*reinterpret_cast< const QMap<int,QVariant>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<int,QVariant>*>(_a[0]) = _r; }  break;
        case 37: { QMap<int,QString> _r = _t->getQMapIntString((*reinterpret_cast< const QMap<int,QString>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<int,QString>*>(_a[0]) = _r; }  break;
        case 38: { QVector<QPair<double,QColor> > _r = _t->getQVectorQPair1((*reinterpret_cast< const QVector<QPair<double,QColor> >(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QPair<double,QColor> >*>(_a[0]) = _r; }  break;
        case 39: { QVector<QPair<qreal,QColor> > _r = _t->getQVectorQPair2((*reinterpret_cast< const QVector<QPair<qreal,QColor> >(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QPair<qreal,QColor> >*>(_a[0]) = _r; }  break;
        case 40: { QPair<double,QColor> _r = _t->getQPair((*reinterpret_cast< const QPair<double,QColor>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPair<double,QColor>*>(_a[0]) = _r; }  break;
        case 41: { QPair<double,QVariant> _r = _t->getQPairVariant((*reinterpret_cast< const QPair<double,QVariant>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPair<double,QVariant>*>(_a[0]) = _r; }  break;
        case 42: { QColor _r = _t->getQColor1((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 43: { QColor _r = _t->getQColor2((*reinterpret_cast< QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 44: { QColor _r = _t->getQColor3((*reinterpret_cast< QColor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 45: { QColor _r = _t->getQColor4((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 46: { QColor* _r = _t->getQColor5();
            if (_a[0]) *reinterpret_cast< QColor**>(_a[0]) = _r; }  break;
        case 47: { PyObject* _r = _t->getPyObject((*reinterpret_cast< PyObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PyObject**>(_a[0]) = _r; }  break;
        case 48: { PyObject* _r = _t->getPyObjectFromVariant((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PyObject**>(_a[0]) = _r; }  break;
        case 49: { QVariant _r = _t->getPyObjectFromVariant2((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 50: { PythonQtTestSlotCallingHelper* _r = _t->getTestObject((*reinterpret_cast< PythonQtTestSlotCallingHelper*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PythonQtTestSlotCallingHelper**>(_a[0]) = _r; }  break;
        case 51: { QObject* _r = _t->getQObject((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 52: { QWidget* _r = _t->getQWidget((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QWidget**>(_a[0]) = _r; }  break;
        case 53: { QObject* _r = _t->getNewObject();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 54: { QVariantList _r = _t->getMultiArgs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = _r; }  break;
        case 55: { PQCppObject* _r = _t->createPQCppObject((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PQCppObject**>(_a[0]) = _r; }  break;
        case 56: { PQCppObject* _r = _t->getPQCppObject((*reinterpret_cast< PQCppObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PQCppObject**>(_a[0]) = _r; }  break;
        case 57: { PQCppObjectNoWrap* _r = _t->createPQCppObjectNoWrap((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PQCppObjectNoWrap**>(_a[0]) = _r; }  break;
        case 58: { PQCppObjectNoWrap* _r = _t->getPQCppObjectNoWrap((*reinterpret_cast< PQCppObjectNoWrap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PQCppObjectNoWrap**>(_a[0]) = _r; }  break;
        case 59: { PQCppObjectNoWrap _r = _t->getPQCppObjectNoWrapAsValue();
            if (_a[0]) *reinterpret_cast< PQCppObjectNoWrap*>(_a[0]) = _r; }  break;
        case 60: { PQUnknownButRegisteredValueObject _r = _t->getUnknownButRegisteredValueObjectAsValue();
            if (_a[0]) *reinterpret_cast< PQUnknownButRegisteredValueObject*>(_a[0]) = _r; }  break;
        case 61: { PQUnknownValueObject _r = _t->getUnknownValueObjectAsValue();
            if (_a[0]) *reinterpret_cast< PQUnknownValueObject*>(_a[0]) = _r; }  break;
        case 62: { PQUnknownButRegisteredValueObject* _r = _t->getUnknownButRegisteredValueObjectAsPtr();
            if (_a[0]) *reinterpret_cast< PQUnknownButRegisteredValueObject**>(_a[0]) = _r; }  break;
        case 63: { PQUnknownValueObject* _r = _t->getUnknownValueObjectAsPtr();
            if (_a[0]) *reinterpret_cast< PQUnknownValueObject**>(_a[0]) = _r; }  break;
        case 64: { ClassA* _r = _t->getClassAPtr((*reinterpret_cast< ClassA*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ClassA**>(_a[0]) = _r; }  break;
        case 65: { ClassB* _r = _t->getClassBPtr((*reinterpret_cast< ClassB*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ClassB**>(_a[0]) = _r; }  break;
        case 66: { ClassC* _r = _t->getClassCPtr((*reinterpret_cast< ClassC*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ClassC**>(_a[0]) = _r; }  break;
        case 67: { ClassD* _r = _t->getClassDPtr((*reinterpret_cast< ClassD*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ClassD**>(_a[0]) = _r; }  break;
        case 68: { ClassA* _r = _t->createClassA();
            if (_a[0]) *reinterpret_cast< ClassA**>(_a[0]) = _r; }  break;
        case 69: { ClassB* _r = _t->createClassB();
            if (_a[0]) *reinterpret_cast< ClassB**>(_a[0]) = _r; }  break;
        case 70: { ClassC* _r = _t->createClassC();
            if (_a[0]) *reinterpret_cast< ClassC**>(_a[0]) = _r; }  break;
        case 71: { ClassD* _r = _t->createClassD();
            if (_a[0]) *reinterpret_cast< ClassD**>(_a[0]) = _r; }  break;
        case 72: { ClassA* _r = _t->createClassCAsA();
            if (_a[0]) *reinterpret_cast< ClassA**>(_a[0]) = _r; }  break;
        case 73: { ClassB* _r = _t->createClassCAsB();
            if (_a[0]) *reinterpret_cast< ClassB**>(_a[0]) = _r; }  break;
        case 74: { ClassA* _r = _t->createClassDAsA();
            if (_a[0]) *reinterpret_cast< ClassA**>(_a[0]) = _r; }  break;
        case 75: { ClassB* _r = _t->createClassDAsB();
            if (_a[0]) *reinterpret_cast< ClassB**>(_a[0]) = _r; }  break;
        case 76: { QColor _r = _t->setAutoConvertColor((*reinterpret_cast< const QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 77: { QBrush _r = _t->setAutoConvertBrush((*reinterpret_cast< const QBrush(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 78: { QPen _r = _t->setAutoConvertPen((*reinterpret_cast< const QPen(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPen*>(_a[0]) = _r; }  break;
        case 79: { QCursor _r = _t->setAutoConvertCursor((*reinterpret_cast< const QCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QCursor*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSize> >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PythonQtTestSlotCallingHelper* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ClassD* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }

}

const QMetaObject PythonQtTestSlotCallingHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtTestSlotCallingHelper.data,
      qt_meta_data_PythonQtTestSlotCallingHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtTestSlotCallingHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtTestSlotCallingHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtTestSlotCallingHelper.stringdata))
        return static_cast<void*>(const_cast< PythonQtTestSlotCallingHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtTestSlotCallingHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 80)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 80;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = intProp(); break;
        case 1: *reinterpret_cast< float*>(_v) = floatProp(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = variantListProp(); break;
        case 3: *reinterpret_cast< QVariantMap*>(_v) = variantMapProp(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = variantProp(); break;
        case 5: *reinterpret_cast< QObject**>(_v) = qObjectProp(); break;
        case 6: *reinterpret_cast< QList<QObject*>*>(_v) = qObjectListProp(); break;
        case 7: *reinterpret_cast< QSize*>(_v) = sizeProp(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setIntProp(*reinterpret_cast< int*>(_v)); break;
        case 1: setFloatProp(*reinterpret_cast< float*>(_v)); break;
        case 2: setVariantListProp(*reinterpret_cast< QVariantList*>(_v)); break;
        case 3: setVariantMapProp(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 4: setVariantProp(*reinterpret_cast< QVariant*>(_v)); break;
        case 5: setQObjectProp(*reinterpret_cast< QObject**>(_v)); break;
        case 6: setQObjectListProp(*reinterpret_cast< QList<QObject*>*>(_v)); break;
        case 7: setSizeProp(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_PythonQtTestSignalHandler_t {
    QByteArrayData data[5];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtTestSignalHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtTestSignalHandler_t qt_meta_stringdata_PythonQtTestSignalHandler = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtTestSignalHandler"
QT_MOC_LITERAL(1, 26, 12), // "initTestCase"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "testSignalHandler"
QT_MOC_LITERAL(4, 58, 26) // "testRecursiveSignalHandler"

    },
    "PythonQtTestSignalHandler\0initTestCase\0"
    "\0testSignalHandler\0testRecursiveSignalHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtTestSignalHandler[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PythonQtTestSignalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtTestSignalHandler *_t = static_cast<PythonQtTestSignalHandler *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testSignalHandler(); break;
        case 2: _t->testRecursiveSignalHandler(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PythonQtTestSignalHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtTestSignalHandler.data,
      qt_meta_data_PythonQtTestSignalHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtTestSignalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtTestSignalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtTestSignalHandler.stringdata))
        return static_cast<void*>(const_cast< PythonQtTestSignalHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtTestSignalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtTestSignalHandlerHelper_t {
    QByteArrayData data[29];
    char stringdata[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtTestSignalHandlerHelper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtTestSignalHandlerHelper_t qt_meta_stringdata_PythonQtTestSignalHandlerHelper = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtTestSignalHandlerHelper"
QT_MOC_LITERAL(1, 32, 9), // "intSignal"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "floatSignal"
QT_MOC_LITERAL(4, 55, 13), // "variantSignal"
QT_MOC_LITERAL(5, 69, 1), // "v"
QT_MOC_LITERAL(6, 71, 13), // "complexSignal"
QT_MOC_LITERAL(7, 85, 1), // "a"
QT_MOC_LITERAL(8, 87, 1), // "b"
QT_MOC_LITERAL(9, 89, 1), // "l"
QT_MOC_LITERAL(10, 91, 3), // "obj"
QT_MOC_LITERAL(11, 95, 10), // "enumSignal"
QT_MOC_LITERAL(12, 106, 26), // "PQCppObject2::TestEnumFlag"
QT_MOC_LITERAL(13, 133, 4), // "flag"
QT_MOC_LITERAL(14, 138, 7), // "signal1"
QT_MOC_LITERAL(15, 146, 7), // "signal2"
QT_MOC_LITERAL(16, 154, 7), // "signal3"
QT_MOC_LITERAL(17, 162, 9), // "setPassed"
QT_MOC_LITERAL(18, 172, 13), // "emitIntSignal"
QT_MOC_LITERAL(19, 186, 15), // "emitFloatSignal"
QT_MOC_LITERAL(20, 202, 14), // "emitEnumSignal"
QT_MOC_LITERAL(21, 217, 17), // "emitVariantSignal"
QT_MOC_LITERAL(22, 235, 15), // "expectedVariant"
QT_MOC_LITERAL(23, 251, 18), // "setExpectedVariant"
QT_MOC_LITERAL(24, 270, 17), // "emitComplexSignal"
QT_MOC_LITERAL(25, 288, 11), // "emitSignal1"
QT_MOC_LITERAL(26, 300, 11), // "emitSignal2"
QT_MOC_LITERAL(27, 312, 1), // "s"
QT_MOC_LITERAL(28, 314, 11) // "emitSignal3"

    },
    "PythonQtTestSignalHandlerHelper\0"
    "intSignal\0\0floatSignal\0variantSignal\0"
    "v\0complexSignal\0a\0b\0l\0obj\0enumSignal\0"
    "PQCppObject2::TestEnumFlag\0flag\0signal1\0"
    "signal2\0signal3\0setPassed\0emitIntSignal\0"
    "emitFloatSignal\0emitEnumSignal\0"
    "emitVariantSignal\0expectedVariant\0"
    "setExpectedVariant\0emitComplexSignal\0"
    "emitSignal1\0emitSignal2\0s\0emitSignal3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtTestSignalHandlerHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  109,    2, 0x06 /* Public */,
       3,    1,  112,    2, 0x06 /* Public */,
       4,    1,  115,    2, 0x06 /* Public */,
       6,    4,  118,    2, 0x06 /* Public */,
      11,    1,  127,    2, 0x06 /* Public */,
      14,    1,  130,    2, 0x06 /* Public */,
      15,    1,  133,    2, 0x06 /* Public */,
      16,    1,  136,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  139,    2, 0x0a /* Public */,
      18,    1,  140,    2, 0x0a /* Public */,
      19,    1,  143,    2, 0x0a /* Public */,
      20,    1,  146,    2, 0x0a /* Public */,
      21,    1,  149,    2, 0x0a /* Public */,
      22,    0,  152,    2, 0x0a /* Public */,
      23,    1,  153,    2, 0x0a /* Public */,
      24,    4,  156,    2, 0x0a /* Public */,
      25,    1,  165,    2, 0x0a /* Public */,
      26,    1,  168,    2, 0x0a /* Public */,
      28,    1,  171,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::QStringList, QMetaType::QObjectStar,    7,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Float,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Int,    7,
    QMetaType::Bool, QMetaType::Float,    7,
    QMetaType::Bool, 0x80000000 | 12,   13,
    QMetaType::Bool, QMetaType::QVariant,    5,
    QMetaType::QVariant,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Bool, QMetaType::Int, QMetaType::Float, QMetaType::QStringList, QMetaType::QObjectStar,    7,    8,    9,   10,
    QMetaType::Bool, QMetaType::Int,    7,
    QMetaType::Bool, QMetaType::QString,   27,
    QMetaType::Bool, QMetaType::Float,    7,

       0        // eod
};

void PythonQtTestSignalHandlerHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtTestSignalHandlerHelper *_t = static_cast<PythonQtTestSignalHandlerHelper *>(_o);
        switch (_id) {
        case 0: _t->intSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->floatSignal((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->variantSignal((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->complexSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4]))); break;
        case 4: _t->enumSignal((*reinterpret_cast< PQCppObject2::TestEnumFlag(*)>(_a[1]))); break;
        case 5: _t->signal1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->signal2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->signal3((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->setPassed(); break;
        case 9: { bool _r = _t->emitIntSignal((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->emitFloatSignal((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->emitEnumSignal((*reinterpret_cast< PQCppObject2::TestEnumFlag(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->emitVariantSignal((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->expectedVariant();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: _t->setExpectedVariant((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 15: { bool _r = _t->emitComplexSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< QObject*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->emitSignal1((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->emitSignal2((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->emitSignal3((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PythonQtTestSignalHandlerHelper::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PythonQtTestSignalHandlerHelper::intSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (PythonQtTestSignalHandlerHelper::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PythonQtTestSignalHandlerHelper::floatSignal)) {
                *result = 1;
            }
        }
        {
            typedef void (PythonQtTestSignalHandlerHelper::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PythonQtTestSignalHandlerHelper::variantSignal)) {
                *result = 2;
            }
        }
        {
            typedef void (PythonQtTestSignalHandlerHelper::*_t)(int , float , const QStringList & , QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PythonQtTestSignalHandlerHelper::complexSignal)) {
                *result = 3;
            }
        }
        {
            typedef void (PythonQtTestSignalHandlerHelper::*_t)(PQCppObject2::TestEnumFlag );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PythonQtTestSignalHandlerHelper::enumSignal)) {
                *result = 4;
            }
        }
        {
            typedef void (PythonQtTestSignalHandlerHelper::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PythonQtTestSignalHandlerHelper::signal1)) {
                *result = 5;
            }
        }
        {
            typedef void (PythonQtTestSignalHandlerHelper::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PythonQtTestSignalHandlerHelper::signal2)) {
                *result = 6;
            }
        }
        {
            typedef void (PythonQtTestSignalHandlerHelper::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PythonQtTestSignalHandlerHelper::signal3)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject PythonQtTestSignalHandlerHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtTestSignalHandlerHelper.data,
      qt_meta_data_PythonQtTestSignalHandlerHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtTestSignalHandlerHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtTestSignalHandlerHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtTestSignalHandlerHelper.stringdata))
        return static_cast<void*>(const_cast< PythonQtTestSignalHandlerHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtTestSignalHandlerHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PythonQtTestSignalHandlerHelper::intSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PythonQtTestSignalHandlerHelper::floatSignal(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PythonQtTestSignalHandlerHelper::variantSignal(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PythonQtTestSignalHandlerHelper::complexSignal(int _t1, float _t2, const QStringList & _t3, QObject * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PythonQtTestSignalHandlerHelper::enumSignal(PQCppObject2::TestEnumFlag _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PythonQtTestSignalHandlerHelper::signal1(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PythonQtTestSignalHandlerHelper::signal2(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PythonQtTestSignalHandlerHelper::signal3(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
