/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_xmlpatterns0.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generated_cpp_54/com_trolltech_qt_xmlpatterns/com_trolltech_qt_xmlpatterns0.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_xmlpatterns0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PythonQtWrapper_QAbstractMessageHandler_t {
    QByteArrayData data[16];
    char stringdata[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QAbstractMessageHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QAbstractMessageHandler_t qt_meta_stringdata_PythonQtWrapper_QAbstractMessageHandler = {
    {
QT_MOC_LITERAL(0, 0, 39), // "PythonQtWrapper_QAbstractMess..."
QT_MOC_LITERAL(1, 40, 27), // "new_QAbstractMessageHandler"
QT_MOC_LITERAL(2, 68, 24), // "QAbstractMessageHandler*"
QT_MOC_LITERAL(3, 93, 0), // ""
QT_MOC_LITERAL(4, 94, 6), // "parent"
QT_MOC_LITERAL(5, 101, 30), // "delete_QAbstractMessageHandler"
QT_MOC_LITERAL(6, 132, 3), // "obj"
QT_MOC_LITERAL(7, 136, 13), // "handleMessage"
QT_MOC_LITERAL(8, 150, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 167, 9), // "QtMsgType"
QT_MOC_LITERAL(10, 177, 4), // "type"
QT_MOC_LITERAL(11, 182, 11), // "description"
QT_MOC_LITERAL(12, 194, 10), // "identifier"
QT_MOC_LITERAL(13, 205, 15), // "QSourceLocation"
QT_MOC_LITERAL(14, 221, 14), // "sourceLocation"
QT_MOC_LITERAL(15, 236, 7) // "message"

    },
    "PythonQtWrapper_QAbstractMessageHandler\0"
    "new_QAbstractMessageHandler\0"
    "QAbstractMessageHandler*\0\0parent\0"
    "delete_QAbstractMessageHandler\0obj\0"
    "handleMessage\0theWrappedObject\0QtMsgType\0"
    "type\0description\0identifier\0QSourceLocation\0"
    "sourceLocation\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QAbstractMessageHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    3, 0x0a /* Public */,
       1,    0,   52,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   53,    3, 0x0a /* Public */,
       7,    5,   56,    3, 0x0a /* Public */,
      15,    5,   67,    3, 0x0a /* Public */,
      15,    4,   78,    3, 0x2a /* Public | MethodCloned */,
      15,    3,   87,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9, QMetaType::QString, QMetaType::QUrl, 0x80000000 | 13,    8,   10,   11,   12,   14,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9, QMetaType::QString, QMetaType::QUrl, 0x80000000 | 13,    8,   10,   11,   12,   14,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9, QMetaType::QString, QMetaType::QUrl,    8,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9, QMetaType::QString,    8,   10,   11,

       0        // eod
};

void PythonQtWrapper_QAbstractMessageHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QAbstractMessageHandler *_t = static_cast<PythonQtWrapper_QAbstractMessageHandler *>(_o);
        switch (_id) {
        case 0: { QAbstractMessageHandler* _r = _t->new_QAbstractMessageHandler((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 1: { QAbstractMessageHandler* _r = _t->new_QAbstractMessageHandler();
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractMessageHandler((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1]))); break;
        case 3: _t->handleMessage((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1])),(*reinterpret_cast< QtMsgType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QUrl(*)>(_a[4])),(*reinterpret_cast< const QSourceLocation(*)>(_a[5]))); break;
        case 4: _t->message((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1])),(*reinterpret_cast< QtMsgType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QUrl(*)>(_a[4])),(*reinterpret_cast< const QSourceLocation(*)>(_a[5]))); break;
        case 5: _t->message((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1])),(*reinterpret_cast< QtMsgType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QUrl(*)>(_a[4]))); break;
        case 6: _t->message((*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[1])),(*reinterpret_cast< QtMsgType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractMessageHandler* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractMessageHandler* >(); break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSourceLocation >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractMessageHandler* >(); break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSourceLocation >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractMessageHandler* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractMessageHandler* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QAbstractMessageHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractMessageHandler.data,
      qt_meta_data_PythonQtWrapper_QAbstractMessageHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QAbstractMessageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractMessageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractMessageHandler.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractMessageHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractMessageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QAbstractUriResolver_t {
    QByteArrayData data[11];
    char stringdata[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QAbstractUriResolver_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QAbstractUriResolver_t qt_meta_stringdata_PythonQtWrapper_QAbstractUriResolver = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_QAbstractUriR..."
QT_MOC_LITERAL(1, 37, 24), // "new_QAbstractUriResolver"
QT_MOC_LITERAL(2, 62, 21), // "QAbstractUriResolver*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 6), // "parent"
QT_MOC_LITERAL(5, 92, 27), // "delete_QAbstractUriResolver"
QT_MOC_LITERAL(6, 120, 3), // "obj"
QT_MOC_LITERAL(7, 124, 7), // "resolve"
QT_MOC_LITERAL(8, 132, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 149, 8), // "relative"
QT_MOC_LITERAL(10, 158, 7) // "baseURI"

    },
    "PythonQtWrapper_QAbstractUriResolver\0"
    "new_QAbstractUriResolver\0QAbstractUriResolver*\0"
    "\0parent\0delete_QAbstractUriResolver\0"
    "obj\0resolve\0theWrappedObject\0relative\0"
    "baseURI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QAbstractUriResolver[] = {

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
       1,    0,   37,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   38,    3, 0x0a /* Public */,
       7,    3,   41,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::QUrl, 0x80000000 | 2, QMetaType::QUrl, QMetaType::QUrl,    8,    9,   10,

       0        // eod
};

void PythonQtWrapper_QAbstractUriResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QAbstractUriResolver *_t = static_cast<PythonQtWrapper_QAbstractUriResolver *>(_o);
        switch (_id) {
        case 0: { QAbstractUriResolver* _r = _t->new_QAbstractUriResolver((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractUriResolver**>(_a[0]) = _r; }  break;
        case 1: { QAbstractUriResolver* _r = _t->new_QAbstractUriResolver();
            if (_a[0]) *reinterpret_cast< QAbstractUriResolver**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractUriResolver((*reinterpret_cast< QAbstractUriResolver*(*)>(_a[1]))); break;
        case 3: { QUrl _r = _t->resolve((*reinterpret_cast< QAbstractUriResolver*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractUriResolver* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractUriResolver* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QAbstractUriResolver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractUriResolver.data,
      qt_meta_data_PythonQtWrapper_QAbstractUriResolver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QAbstractUriResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractUriResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractUriResolver.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractUriResolver*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractUriResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QAbstractXmlNodeModel_t {
    QByteArrayData data[50];
    char stringdata[680];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QAbstractXmlNodeModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QAbstractXmlNodeModel_t qt_meta_stringdata_PythonQtWrapper_QAbstractXmlNodeModel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_QAbstractXmlN..."
QT_MOC_LITERAL(1, 38, 25), // "new_QAbstractXmlNodeModel"
QT_MOC_LITERAL(2, 64, 22), // "QAbstractXmlNodeModel*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 28), // "delete_QAbstractXmlNodeModel"
QT_MOC_LITERAL(5, 117, 3), // "obj"
QT_MOC_LITERAL(6, 121, 10), // "attributes"
QT_MOC_LITERAL(7, 132, 27), // "QVector<QXmlNodeModelIndex>"
QT_MOC_LITERAL(8, 160, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 177, 18), // "QXmlNodeModelIndex"
QT_MOC_LITERAL(10, 196, 7), // "element"
QT_MOC_LITERAL(11, 204, 7), // "baseUri"
QT_MOC_LITERAL(12, 212, 2), // "ni"
QT_MOC_LITERAL(13, 215, 12), // "compareOrder"
QT_MOC_LITERAL(14, 228, 33), // "QXmlNodeModelIndex::DocumentO..."
QT_MOC_LITERAL(15, 262, 3), // "ni1"
QT_MOC_LITERAL(16, 266, 3), // "ni2"
QT_MOC_LITERAL(17, 270, 11), // "createIndex"
QT_MOC_LITERAL(18, 282, 4), // "data"
QT_MOC_LITERAL(19, 287, 14), // "additionalData"
QT_MOC_LITERAL(20, 302, 7), // "pointer"
QT_MOC_LITERAL(21, 310, 11), // "documentUri"
QT_MOC_LITERAL(22, 322, 11), // "elementById"
QT_MOC_LITERAL(23, 334, 8), // "QXmlName"
QT_MOC_LITERAL(24, 343, 6), // "NCName"
QT_MOC_LITERAL(25, 350, 4), // "kind"
QT_MOC_LITERAL(26, 355, 28), // "QXmlNodeModelIndex::NodeKind"
QT_MOC_LITERAL(27, 384, 4), // "name"
QT_MOC_LITERAL(28, 389, 17), // "namespaceBindings"
QT_MOC_LITERAL(29, 407, 17), // "QVector<QXmlName>"
QT_MOC_LITERAL(30, 425, 1), // "n"
QT_MOC_LITERAL(31, 427, 18), // "nextFromSimpleAxis"
QT_MOC_LITERAL(32, 446, 33), // "QAbstractXmlNodeModel::Simple..."
QT_MOC_LITERAL(33, 480, 4), // "axis"
QT_MOC_LITERAL(34, 485, 6), // "origin"
QT_MOC_LITERAL(35, 492, 12), // "nodesByIdref"
QT_MOC_LITERAL(36, 505, 4), // "root"
QT_MOC_LITERAL(37, 510, 14), // "sourceLocation"
QT_MOC_LITERAL(38, 525, 15), // "QSourceLocation"
QT_MOC_LITERAL(39, 541, 5), // "index"
QT_MOC_LITERAL(40, 547, 11), // "stringValue"
QT_MOC_LITERAL(41, 559, 10), // "typedValue"
QT_MOC_LITERAL(42, 570, 15), // "NodeCopySetting"
QT_MOC_LITERAL(43, 586, 17), // "InheritNamespaces"
QT_MOC_LITERAL(44, 604, 18), // "PreserveNamespaces"
QT_MOC_LITERAL(45, 623, 10), // "SimpleAxis"
QT_MOC_LITERAL(46, 634, 6), // "Parent"
QT_MOC_LITERAL(47, 641, 10), // "FirstChild"
QT_MOC_LITERAL(48, 652, 15), // "PreviousSibling"
QT_MOC_LITERAL(49, 668, 11) // "NextSibling"

    },
    "PythonQtWrapper_QAbstractXmlNodeModel\0"
    "new_QAbstractXmlNodeModel\0"
    "QAbstractXmlNodeModel*\0\0"
    "delete_QAbstractXmlNodeModel\0obj\0"
    "attributes\0QVector<QXmlNodeModelIndex>\0"
    "theWrappedObject\0QXmlNodeModelIndex\0"
    "element\0baseUri\0ni\0compareOrder\0"
    "QXmlNodeModelIndex::DocumentOrder\0ni1\0"
    "ni2\0createIndex\0data\0additionalData\0"
    "pointer\0documentUri\0elementById\0"
    "QXmlName\0NCName\0kind\0QXmlNodeModelIndex::NodeKind\0"
    "name\0namespaceBindings\0QVector<QXmlName>\0"
    "n\0nextFromSimpleAxis\0"
    "QAbstractXmlNodeModel::SimpleAxis\0"
    "axis\0origin\0nodesByIdref\0root\0"
    "sourceLocation\0QSourceLocation\0index\0"
    "stringValue\0typedValue\0NodeCopySetting\0"
    "InheritNamespaces\0PreserveNamespaces\0"
    "SimpleAxis\0Parent\0FirstChild\0"
    "PreviousSibling\0NextSibling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QAbstractXmlNodeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       2,  216, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    3, 0x0a /* Public */,
       4,    1,  115,    3, 0x0a /* Public */,
       6,    2,  118,    3, 0x0a /* Public */,
      11,    2,  123,    3, 0x0a /* Public */,
      13,    3,  128,    3, 0x0a /* Public */,
      17,    2,  135,    3, 0x0a /* Public */,
      17,    3,  140,    3, 0x0a /* Public */,
      17,    3,  147,    3, 0x0a /* Public */,
      17,    2,  154,    3, 0x2a /* Public | MethodCloned */,
      21,    2,  159,    3, 0x0a /* Public */,
      22,    2,  164,    3, 0x0a /* Public */,
      25,    2,  169,    3, 0x0a /* Public */,
      27,    2,  174,    3, 0x0a /* Public */,
      28,    2,  179,    3, 0x0a /* Public */,
      31,    3,  184,    3, 0x0a /* Public */,
      35,    2,  191,    3, 0x0a /* Public */,
      36,    2,  196,    3, 0x0a /* Public */,
      37,    2,  201,    3, 0x0a /* Public */,
      40,    2,  206,    3, 0x0a /* Public */,
      41,    2,  211,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2, 0x80000000 | 9,    8,   10,
    QMetaType::QUrl, 0x80000000 | 2, 0x80000000 | 9,    8,   12,
    0x80000000 | 14, 0x80000000 | 2, 0x80000000 | 9, 0x80000000 | 9,    8,   15,   16,
    0x80000000 | 9, 0x80000000 | 2, QMetaType::LongLong,    8,   18,
    0x80000000 | 9, 0x80000000 | 2, QMetaType::LongLong, QMetaType::LongLong,    8,   18,   19,
    0x80000000 | 9, 0x80000000 | 2, QMetaType::VoidStar, QMetaType::LongLong,    8,   20,   19,
    0x80000000 | 9, 0x80000000 | 2, QMetaType::VoidStar,    8,   20,
    QMetaType::QUrl, 0x80000000 | 2, 0x80000000 | 9,    8,   12,
    0x80000000 | 9, 0x80000000 | 2, 0x80000000 | 23,    8,   24,
    0x80000000 | 26, 0x80000000 | 2, 0x80000000 | 9,    8,   12,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 9,    8,   12,
    0x80000000 | 29, 0x80000000 | 2, 0x80000000 | 9,    8,   30,
    0x80000000 | 9, 0x80000000 | 2, 0x80000000 | 32, 0x80000000 | 9,    8,   33,   34,
    0x80000000 | 7, 0x80000000 | 2, 0x80000000 | 23,    8,   24,
    0x80000000 | 9, 0x80000000 | 2, 0x80000000 | 9,    8,   30,
    0x80000000 | 38, 0x80000000 | 2, 0x80000000 | 9,    8,   39,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 9,    8,   30,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 9,    8,   30,

 // enums: name, flags, count, data
      42, 0x0,    2,  224,
      45, 0x0,    4,  228,

 // enum data: key, value
      43, uint(PythonQtWrapper_QAbstractXmlNodeModel::InheritNamespaces),
      44, uint(PythonQtWrapper_QAbstractXmlNodeModel::PreserveNamespaces),
      46, uint(PythonQtWrapper_QAbstractXmlNodeModel::Parent),
      47, uint(PythonQtWrapper_QAbstractXmlNodeModel::FirstChild),
      48, uint(PythonQtWrapper_QAbstractXmlNodeModel::PreviousSibling),
      49, uint(PythonQtWrapper_QAbstractXmlNodeModel::NextSibling),

       0        // eod
};

void PythonQtWrapper_QAbstractXmlNodeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QAbstractXmlNodeModel *_t = static_cast<PythonQtWrapper_QAbstractXmlNodeModel *>(_o);
        switch (_id) {
        case 0: { QAbstractXmlNodeModel* _r = _t->new_QAbstractXmlNodeModel();
            if (_a[0]) *reinterpret_cast< QAbstractXmlNodeModel**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QAbstractXmlNodeModel((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1]))); break;
        case 2: { QVector<QXmlNodeModelIndex> _r = _t->attributes((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlNodeModelIndex>*>(_a[0]) = _r; }  break;
        case 3: { QUrl _r = _t->baseUri((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 4: { QXmlNodeModelIndex::DocumentOrder _r = _t->compareOrder((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex::DocumentOrder*>(_a[0]) = _r; }  break;
        case 5: { QXmlNodeModelIndex _r = _t->createIndex((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 6: { QXmlNodeModelIndex _r = _t->createIndex((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 7: { QXmlNodeModelIndex _r = _t->createIndex((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 8: { QXmlNodeModelIndex _r = _t->createIndex((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 9: { QUrl _r = _t->documentUri((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 10: { QXmlNodeModelIndex _r = _t->elementById((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 11: { QXmlNodeModelIndex::NodeKind _r = _t->kind((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex::NodeKind*>(_a[0]) = _r; }  break;
        case 12: { QXmlName _r = _t->name((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlName*>(_a[0]) = _r; }  break;
        case 13: { QVector<QXmlName> _r = _t->namespaceBindings((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlName>*>(_a[0]) = _r; }  break;
        case 14: { QXmlNodeModelIndex _r = _t->nextFromSimpleAxis((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< QAbstractXmlNodeModel::SimpleAxis(*)>(_a[2])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 15: { QVector<QXmlNodeModelIndex> _r = _t->nodesByIdref((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlNodeModelIndex>*>(_a[0]) = _r; }  break;
        case 16: { QXmlNodeModelIndex _r = _t->root((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 17: { QSourceLocation _r = _t->sourceLocation((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSourceLocation*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->stringValue((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { QVariant _r = _t->typedValue((*reinterpret_cast< QAbstractXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QAbstractXmlNodeModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractXmlNodeModel.data,
      qt_meta_data_PythonQtWrapper_QAbstractXmlNodeModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QAbstractXmlNodeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractXmlNodeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractXmlNodeModel.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractXmlNodeModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractXmlNodeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QAbstractXmlReceiver_t {
    QByteArrayData data[25];
    char stringdata[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QAbstractXmlReceiver_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QAbstractXmlReceiver_t qt_meta_stringdata_PythonQtWrapper_QAbstractXmlReceiver = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_QAbstractXmlR..."
QT_MOC_LITERAL(1, 37, 24), // "new_QAbstractXmlReceiver"
QT_MOC_LITERAL(2, 62, 21), // "QAbstractXmlReceiver*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 27), // "delete_QAbstractXmlReceiver"
QT_MOC_LITERAL(5, 113, 3), // "obj"
QT_MOC_LITERAL(6, 117, 11), // "atomicValue"
QT_MOC_LITERAL(7, 129, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 146, 5), // "value"
QT_MOC_LITERAL(9, 152, 9), // "attribute"
QT_MOC_LITERAL(10, 162, 8), // "QXmlName"
QT_MOC_LITERAL(11, 171, 4), // "name"
QT_MOC_LITERAL(12, 176, 10), // "QStringRef"
QT_MOC_LITERAL(13, 187, 10), // "characters"
QT_MOC_LITERAL(14, 198, 7), // "comment"
QT_MOC_LITERAL(15, 206, 11), // "endDocument"
QT_MOC_LITERAL(16, 218, 10), // "endElement"
QT_MOC_LITERAL(17, 229, 13), // "endOfSequence"
QT_MOC_LITERAL(18, 243, 16), // "namespaceBinding"
QT_MOC_LITERAL(19, 260, 21), // "processingInstruction"
QT_MOC_LITERAL(20, 282, 6), // "target"
QT_MOC_LITERAL(21, 289, 13), // "startDocument"
QT_MOC_LITERAL(22, 303, 12), // "startElement"
QT_MOC_LITERAL(23, 316, 15), // "startOfSequence"
QT_MOC_LITERAL(24, 332, 14) // "whitespaceOnly"

    },
    "PythonQtWrapper_QAbstractXmlReceiver\0"
    "new_QAbstractXmlReceiver\0QAbstractXmlReceiver*\0"
    "\0delete_QAbstractXmlReceiver\0obj\0"
    "atomicValue\0theWrappedObject\0value\0"
    "attribute\0QXmlName\0name\0QStringRef\0"
    "characters\0comment\0endDocument\0"
    "endElement\0endOfSequence\0namespaceBinding\0"
    "processingInstruction\0target\0startDocument\0"
    "startElement\0startOfSequence\0"
    "whitespaceOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QAbstractXmlReceiver[] = {

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
       1,    0,   89,    3, 0x0a /* Public */,
       4,    1,   90,    3, 0x0a /* Public */,
       6,    2,   93,    3, 0x0a /* Public */,
       9,    3,   98,    3, 0x0a /* Public */,
      13,    2,  105,    3, 0x0a /* Public */,
      14,    2,  110,    3, 0x0a /* Public */,
      15,    1,  115,    3, 0x0a /* Public */,
      16,    1,  118,    3, 0x0a /* Public */,
      17,    1,  121,    3, 0x0a /* Public */,
      18,    2,  124,    3, 0x0a /* Public */,
      19,    3,  129,    3, 0x0a /* Public */,
      21,    1,  136,    3, 0x0a /* Public */,
      22,    2,  139,    3, 0x0a /* Public */,
      23,    1,  144,    3, 0x0a /* Public */,
      24,    2,  147,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant,    7,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10, 0x80000000 | 12,    7,   11,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,    7,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    7,    8,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    7,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10, QMetaType::QString,    7,   20,    8,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    7,   11,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,    7,    8,

       0        // eod
};

void PythonQtWrapper_QAbstractXmlReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QAbstractXmlReceiver *_t = static_cast<PythonQtWrapper_QAbstractXmlReceiver *>(_o);
        switch (_id) {
        case 0: { QAbstractXmlReceiver* _r = _t->new_QAbstractXmlReceiver();
            if (_a[0]) *reinterpret_cast< QAbstractXmlReceiver**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QAbstractXmlReceiver((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 2: _t->atomicValue((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->attribute((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QStringRef(*)>(_a[3]))); break;
        case 4: _t->characters((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QStringRef(*)>(_a[2]))); break;
        case 5: _t->comment((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->endDocument((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 7: _t->endElement((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 8: _t->endOfSequence((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 9: _t->namespaceBinding((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 10: _t->processingInstruction((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->startDocument((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 12: _t->startElement((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 13: _t->startOfSequence((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1]))); break;
        case 14: _t->whitespaceOnly((*reinterpret_cast< QAbstractXmlReceiver*(*)>(_a[1])),(*reinterpret_cast< const QStringRef(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QAbstractXmlReceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractXmlReceiver.data,
      qt_meta_data_PythonQtWrapper_QAbstractXmlReceiver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QAbstractXmlReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractXmlReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractXmlReceiver.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractXmlReceiver*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractXmlReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QPatternist_t {
    QByteArrayData data[1];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QPatternist_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QPatternist_t qt_meta_stringdata_PythonQtWrapper_QPatternist = {
    {
QT_MOC_LITERAL(0, 0, 27) // "PythonQtWrapper_QPatternist"

    },
    "PythonQtWrapper_QPatternist"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QPatternist[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PythonQtWrapper_QPatternist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PythonQtWrapper_QPatternist::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPatternist.data,
      qt_meta_data_PythonQtWrapper_QPatternist,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QPatternist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QPatternist::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPatternist.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPatternist*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPatternist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QPatternistSDK_t {
    QByteArrayData data[1];
    char stringdata[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QPatternistSDK_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QPatternistSDK_t qt_meta_stringdata_PythonQtWrapper_QPatternistSDK = {
    {
QT_MOC_LITERAL(0, 0, 30) // "PythonQtWrapper_QPatternistSDK"

    },
    "PythonQtWrapper_QPatternistSDK"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QPatternistSDK[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PythonQtWrapper_QPatternistSDK::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PythonQtWrapper_QPatternistSDK::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QPatternistSDK.data,
      qt_meta_data_PythonQtWrapper_QPatternistSDK,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QPatternistSDK::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QPatternistSDK::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QPatternistSDK.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QPatternistSDK*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QPatternistSDK::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSimpleXmlNodeModel_t {
    QByteArrayData data[23];
    char stringdata[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSimpleXmlNodeModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSimpleXmlNodeModel_t qt_meta_stringdata_PythonQtWrapper_QSimpleXmlNodeModel = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_QSimpleXmlNod..."
QT_MOC_LITERAL(1, 36, 23), // "new_QSimpleXmlNodeModel"
QT_MOC_LITERAL(2, 60, 20), // "QSimpleXmlNodeModel*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 12), // "QXmlNamePool"
QT_MOC_LITERAL(5, 95, 8), // "namePool"
QT_MOC_LITERAL(6, 104, 26), // "delete_QSimpleXmlNodeModel"
QT_MOC_LITERAL(7, 131, 3), // "obj"
QT_MOC_LITERAL(8, 135, 7), // "baseUri"
QT_MOC_LITERAL(9, 143, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 160, 18), // "QXmlNodeModelIndex"
QT_MOC_LITERAL(11, 179, 4), // "node"
QT_MOC_LITERAL(12, 184, 11), // "elementById"
QT_MOC_LITERAL(13, 196, 8), // "QXmlName"
QT_MOC_LITERAL(14, 205, 2), // "id"
QT_MOC_LITERAL(15, 208, 13), // "QXmlNamePool*"
QT_MOC_LITERAL(16, 222, 17), // "namespaceBindings"
QT_MOC_LITERAL(17, 240, 17), // "QVector<QXmlName>"
QT_MOC_LITERAL(18, 258, 6), // "arg__1"
QT_MOC_LITERAL(19, 265, 12), // "nodesByIdref"
QT_MOC_LITERAL(20, 278, 27), // "QVector<QXmlNodeModelIndex>"
QT_MOC_LITERAL(21, 306, 5), // "idref"
QT_MOC_LITERAL(22, 312, 11) // "stringValue"

    },
    "PythonQtWrapper_QSimpleXmlNodeModel\0"
    "new_QSimpleXmlNodeModel\0QSimpleXmlNodeModel*\0"
    "\0QXmlNamePool\0namePool\0"
    "delete_QSimpleXmlNodeModel\0obj\0baseUri\0"
    "theWrappedObject\0QXmlNodeModelIndex\0"
    "node\0elementById\0QXmlName\0id\0QXmlNamePool*\0"
    "namespaceBindings\0QVector<QXmlName>\0"
    "arg__1\0nodesByIdref\0QVector<QXmlNodeModelIndex>\0"
    "idref\0stringValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSimpleXmlNodeModel[] = {

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
       6,    1,   57,    3, 0x0a /* Public */,
       8,    2,   60,    3, 0x0a /* Public */,
      12,    2,   65,    3, 0x0a /* Public */,
       5,    1,   70,    3, 0x0a /* Public */,
      16,    2,   73,    3, 0x0a /* Public */,
      19,    2,   78,    3, 0x0a /* Public */,
      22,    2,   83,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QUrl, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    0x80000000 | 10, 0x80000000 | 2, 0x80000000 | 13,    9,   14,
    0x80000000 | 15, 0x80000000 | 2,    9,
    0x80000000 | 17, 0x80000000 | 2, 0x80000000 | 10,    9,   18,
    0x80000000 | 20, 0x80000000 | 2, 0x80000000 | 13,    9,   21,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 10,    9,   11,

       0        // eod
};

void PythonQtWrapper_QSimpleXmlNodeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSimpleXmlNodeModel *_t = static_cast<PythonQtWrapper_QSimpleXmlNodeModel *>(_o);
        switch (_id) {
        case 0: { QSimpleXmlNodeModel* _r = _t->new_QSimpleXmlNodeModel((*reinterpret_cast< const QXmlNamePool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSimpleXmlNodeModel**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSimpleXmlNodeModel((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1]))); break;
        case 2: { QUrl _r = _t->baseUri((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 3: { QXmlNodeModelIndex _r = _t->elementById((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 4: { QXmlNamePool* _r = _t->namePool((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool**>(_a[0]) = _r; }  break;
        case 5: { QVector<QXmlName> _r = _t->namespaceBindings((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlName>*>(_a[0]) = _r; }  break;
        case 6: { QVector<QXmlNodeModelIndex> _r = _t->nodesByIdref((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QXmlNodeModelIndex>*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->stringValue((*reinterpret_cast< QSimpleXmlNodeModel*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSimpleXmlNodeModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSimpleXmlNodeModel.data,
      qt_meta_data_PythonQtWrapper_QSimpleXmlNodeModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSimpleXmlNodeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSimpleXmlNodeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSimpleXmlNodeModel.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSimpleXmlNodeModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSimpleXmlNodeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSourceLocation_t {
    QByteArrayData data[23];
    char stringdata[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSourceLocation_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSourceLocation_t qt_meta_stringdata_PythonQtWrapper_QSourceLocation = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QSourceLocation"
QT_MOC_LITERAL(1, 32, 19), // "new_QSourceLocation"
QT_MOC_LITERAL(2, 52, 16), // "QSourceLocation*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 15), // "QSourceLocation"
QT_MOC_LITERAL(5, 86, 5), // "other"
QT_MOC_LITERAL(6, 92, 3), // "uri"
QT_MOC_LITERAL(7, 96, 4), // "line"
QT_MOC_LITERAL(8, 101, 6), // "column"
QT_MOC_LITERAL(9, 108, 22), // "delete_QSourceLocation"
QT_MOC_LITERAL(10, 131, 3), // "obj"
QT_MOC_LITERAL(11, 135, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 152, 6), // "isNull"
QT_MOC_LITERAL(13, 159, 6), // "__ne__"
QT_MOC_LITERAL(14, 166, 6), // "__eq__"
QT_MOC_LITERAL(15, 173, 9), // "setColumn"
QT_MOC_LITERAL(16, 183, 9), // "newColumn"
QT_MOC_LITERAL(17, 193, 7), // "setLine"
QT_MOC_LITERAL(18, 201, 7), // "newLine"
QT_MOC_LITERAL(19, 209, 6), // "setUri"
QT_MOC_LITERAL(20, 216, 6), // "newUri"
QT_MOC_LITERAL(21, 223, 11), // "py_toString"
QT_MOC_LITERAL(22, 235, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QSourceLocation\0"
    "new_QSourceLocation\0QSourceLocation*\0"
    "\0QSourceLocation\0other\0uri\0line\0column\0"
    "delete_QSourceLocation\0obj\0theWrappedObject\0"
    "isNull\0__ne__\0__eq__\0setColumn\0newColumn\0"
    "setLine\0newLine\0setUri\0newUri\0py_toString\0"
    "__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSourceLocation[] = {

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
       1,    0,   99,    3, 0x0a /* Public */,
       1,    1,  100,    3, 0x0a /* Public */,
       1,    3,  103,    3, 0x0a /* Public */,
       1,    2,  110,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  115,    3, 0x2a /* Public | MethodCloned */,
       9,    1,  118,    3, 0x0a /* Public */,
       8,    1,  121,    3, 0x0a /* Public */,
      12,    1,  124,    3, 0x0a /* Public */,
       7,    1,  127,    3, 0x0a /* Public */,
      13,    2,  130,    3, 0x0a /* Public */,
      14,    2,  135,    3, 0x0a /* Public */,
      15,    2,  140,    3, 0x0a /* Public */,
      17,    2,  145,    3, 0x0a /* Public */,
      19,    2,  150,    3, 0x0a /* Public */,
       6,    1,  155,    3, 0x0a /* Public */,
      21,    1,  158,    3, 0x0a /* Public */,
      22,    1,  161,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    0x80000000 | 2, QMetaType::QUrl, QMetaType::Int,    6,    7,
    0x80000000 | 2, QMetaType::QUrl,    6,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::LongLong, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2,   11,
    QMetaType::LongLong, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   11,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   11,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong,   11,   16,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong,   11,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,   11,   20,
    QMetaType::QUrl, 0x80000000 | 2,   11,
    QMetaType::QString, 0x80000000 | 2,    3,
    QMetaType::Bool, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QSourceLocation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSourceLocation *_t = static_cast<PythonQtWrapper_QSourceLocation *>(_o);
        switch (_id) {
        case 0: { QSourceLocation* _r = _t->new_QSourceLocation();
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 1: { QSourceLocation* _r = _t->new_QSourceLocation((*reinterpret_cast< const QSourceLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 2: { QSourceLocation* _r = _t->new_QSourceLocation((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 3: { QSourceLocation* _r = _t->new_QSourceLocation((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 4: { QSourceLocation* _r = _t->new_QSourceLocation((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSourceLocation**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QSourceLocation((*reinterpret_cast< QSourceLocation*(*)>(_a[1]))); break;
        case 6: { qint64 _r = _t->column((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isNull((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { qint64 _r = _t->line((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__ne__((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< const QSourceLocation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__eq__((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< const QSourceLocation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->setColumn((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 12: _t->setLine((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 13: _t->setUri((*reinterpret_cast< QSourceLocation*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 14: { QUrl _r = _t->uri((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->py_toString((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->__nonzero__((*reinterpret_cast< QSourceLocation*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSourceLocation >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSourceLocation >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSourceLocation >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSourceLocation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSourceLocation.data,
      qt_meta_data_PythonQtWrapper_QSourceLocation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSourceLocation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSourceLocation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSourceLocation.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSourceLocation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSourceLocation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlFormatter_t {
    QByteArrayData data[29];
    char stringdata[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlFormatter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlFormatter_t qt_meta_stringdata_PythonQtWrapper_QXmlFormatter = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QXmlFormatter"
QT_MOC_LITERAL(1, 30, 17), // "new_QXmlFormatter"
QT_MOC_LITERAL(2, 48, 14), // "QXmlFormatter*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 9), // "QXmlQuery"
QT_MOC_LITERAL(5, 74, 5), // "query"
QT_MOC_LITERAL(6, 80, 10), // "QIODevice*"
QT_MOC_LITERAL(7, 91, 12), // "outputDevice"
QT_MOC_LITERAL(8, 104, 20), // "delete_QXmlFormatter"
QT_MOC_LITERAL(9, 125, 3), // "obj"
QT_MOC_LITERAL(10, 129, 11), // "atomicValue"
QT_MOC_LITERAL(11, 141, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 158, 5), // "value"
QT_MOC_LITERAL(13, 164, 9), // "attribute"
QT_MOC_LITERAL(14, 174, 8), // "QXmlName"
QT_MOC_LITERAL(15, 183, 4), // "name"
QT_MOC_LITERAL(16, 188, 10), // "QStringRef"
QT_MOC_LITERAL(17, 199, 10), // "characters"
QT_MOC_LITERAL(18, 210, 7), // "comment"
QT_MOC_LITERAL(19, 218, 11), // "endDocument"
QT_MOC_LITERAL(20, 230, 10), // "endElement"
QT_MOC_LITERAL(21, 241, 13), // "endOfSequence"
QT_MOC_LITERAL(22, 255, 16), // "indentationDepth"
QT_MOC_LITERAL(23, 272, 21), // "processingInstruction"
QT_MOC_LITERAL(24, 294, 19), // "setIndentationDepth"
QT_MOC_LITERAL(25, 314, 5), // "depth"
QT_MOC_LITERAL(26, 320, 13), // "startDocument"
QT_MOC_LITERAL(27, 334, 12), // "startElement"
QT_MOC_LITERAL(28, 347, 15) // "startOfSequence"

    },
    "PythonQtWrapper_QXmlFormatter\0"
    "new_QXmlFormatter\0QXmlFormatter*\0\0"
    "QXmlQuery\0query\0QIODevice*\0outputDevice\0"
    "delete_QXmlFormatter\0obj\0atomicValue\0"
    "theWrappedObject\0value\0attribute\0"
    "QXmlName\0name\0QStringRef\0characters\0"
    "comment\0endDocument\0endElement\0"
    "endOfSequence\0indentationDepth\0"
    "processingInstruction\0setIndentationDepth\0"
    "depth\0startDocument\0startElement\0"
    "startOfSequence"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlFormatter[] = {

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
      13,    3,  102,    3, 0x0a /* Public */,
      17,    2,  109,    3, 0x0a /* Public */,
      18,    2,  114,    3, 0x0a /* Public */,
      19,    1,  119,    3, 0x0a /* Public */,
      20,    1,  122,    3, 0x0a /* Public */,
      21,    1,  125,    3, 0x0a /* Public */,
      22,    1,  128,    3, 0x0a /* Public */,
      23,    3,  131,    3, 0x0a /* Public */,
      24,    2,  138,    3, 0x0a /* Public */,
      26,    1,  143,    3, 0x0a /* Public */,
      27,    2,  146,    3, 0x0a /* Public */,
      28,    1,  151,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant,   11,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14, 0x80000000 | 16,   11,   15,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   11,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Int, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14, QMetaType::QString,   11,   15,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   11,   25,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   11,   15,
    QMetaType::Void, 0x80000000 | 2,   11,

       0        // eod
};

void PythonQtWrapper_QXmlFormatter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlFormatter *_t = static_cast<PythonQtWrapper_QXmlFormatter *>(_o);
        switch (_id) {
        case 0: { QXmlFormatter* _r = _t->new_QXmlFormatter((*reinterpret_cast< const QXmlQuery(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlFormatter**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlFormatter((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 2: _t->atomicValue((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->attribute((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QStringRef(*)>(_a[3]))); break;
        case 4: _t->characters((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QStringRef(*)>(_a[2]))); break;
        case 5: _t->comment((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->endDocument((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 7: _t->endElement((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 8: _t->endOfSequence((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 9: { int _r = _t->indentationDepth((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->processingInstruction((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->setIndentationDepth((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->startDocument((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        case 13: _t->startElement((*reinterpret_cast< QXmlFormatter*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 14: _t->startOfSequence((*reinterpret_cast< QXmlFormatter*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlFormatter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlFormatter.data,
      qt_meta_data_PythonQtWrapper_QXmlFormatter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlFormatter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlFormatter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlFormatter.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlFormatter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlFormatter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlItem_t {
    QByteArrayData data[18];
    char stringdata[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlItem_t qt_meta_stringdata_PythonQtWrapper_QXmlItem = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PythonQtWrapper_QXmlItem"
QT_MOC_LITERAL(1, 25, 12), // "new_QXmlItem"
QT_MOC_LITERAL(2, 38, 9), // "QXmlItem*"
QT_MOC_LITERAL(3, 48, 0), // ""
QT_MOC_LITERAL(4, 49, 11), // "atomicValue"
QT_MOC_LITERAL(5, 61, 8), // "QXmlItem"
QT_MOC_LITERAL(6, 70, 5), // "other"
QT_MOC_LITERAL(7, 76, 18), // "QXmlNodeModelIndex"
QT_MOC_LITERAL(8, 95, 4), // "node"
QT_MOC_LITERAL(9, 100, 15), // "delete_QXmlItem"
QT_MOC_LITERAL(10, 116, 3), // "obj"
QT_MOC_LITERAL(11, 120, 13), // "isAtomicValue"
QT_MOC_LITERAL(12, 134, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 151, 6), // "isNode"
QT_MOC_LITERAL(14, 158, 6), // "isNull"
QT_MOC_LITERAL(15, 165, 13), // "toAtomicValue"
QT_MOC_LITERAL(16, 179, 16), // "toNodeModelIndex"
QT_MOC_LITERAL(17, 196, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QXmlItem\0new_QXmlItem\0"
    "QXmlItem*\0\0atomicValue\0QXmlItem\0other\0"
    "QXmlNodeModelIndex\0node\0delete_QXmlItem\0"
    "obj\0isAtomicValue\0theWrappedObject\0"
    "isNode\0isNull\0toAtomicValue\0"
    "toNodeModelIndex\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlItem[] = {

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
       1,    1,   73,    3, 0x0a /* Public */,
       1,    1,   76,    3, 0x0a /* Public */,
       9,    1,   79,    3, 0x0a /* Public */,
      11,    1,   82,    3, 0x0a /* Public */,
      13,    1,   85,    3, 0x0a /* Public */,
      14,    1,   88,    3, 0x0a /* Public */,
      15,    1,   91,    3, 0x0a /* Public */,
      16,    1,   94,    3, 0x0a /* Public */,
      17,    1,   97,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QVariant,    4,
    0x80000000 | 2, 0x80000000 | 5,    6,
    0x80000000 | 2, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::QVariant, 0x80000000 | 2,   12,
    0x80000000 | 7, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QXmlItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlItem *_t = static_cast<PythonQtWrapper_QXmlItem *>(_o);
        switch (_id) {
        case 0: { QXmlItem* _r = _t->new_QXmlItem();
            if (_a[0]) *reinterpret_cast< QXmlItem**>(_a[0]) = _r; }  break;
        case 1: { QXmlItem* _r = _t->new_QXmlItem((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem**>(_a[0]) = _r; }  break;
        case 2: { QXmlItem* _r = _t->new_QXmlItem((*reinterpret_cast< const QXmlItem(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem**>(_a[0]) = _r; }  break;
        case 3: { QXmlItem* _r = _t->new_QXmlItem((*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QXmlItem((*reinterpret_cast< QXmlItem*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->isAtomicValue((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isNode((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isNull((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->toAtomicValue((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: { QXmlNodeModelIndex _r = _t->toNodeModelIndex((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__nonzero__((*reinterpret_cast< QXmlItem*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlItem >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlItem.data,
      qt_meta_data_PythonQtWrapper_QXmlItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlItem.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlName_t {
    QByteArrayData data[26];
    char stringdata[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlName_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlName_t qt_meta_stringdata_PythonQtWrapper_QXmlName = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PythonQtWrapper_QXmlName"
QT_MOC_LITERAL(1, 25, 12), // "new_QXmlName"
QT_MOC_LITERAL(2, 38, 9), // "QXmlName*"
QT_MOC_LITERAL(3, 48, 0), // ""
QT_MOC_LITERAL(4, 49, 13), // "QXmlNamePool&"
QT_MOC_LITERAL(5, 63, 8), // "namePool"
QT_MOC_LITERAL(6, 72, 9), // "localName"
QT_MOC_LITERAL(7, 82, 12), // "namespaceURI"
QT_MOC_LITERAL(8, 95, 6), // "prefix"
QT_MOC_LITERAL(9, 102, 8), // "QXmlName"
QT_MOC_LITERAL(10, 111, 5), // "other"
QT_MOC_LITERAL(11, 117, 15), // "delete_QXmlName"
QT_MOC_LITERAL(12, 133, 3), // "obj"
QT_MOC_LITERAL(13, 137, 29), // "static_QXmlName_fromClarkName"
QT_MOC_LITERAL(14, 167, 9), // "clarkName"
QT_MOC_LITERAL(15, 177, 12), // "QXmlNamePool"
QT_MOC_LITERAL(16, 190, 24), // "static_QXmlName_isNCName"
QT_MOC_LITERAL(17, 215, 9), // "candidate"
QT_MOC_LITERAL(18, 225, 6), // "isNull"
QT_MOC_LITERAL(19, 232, 16), // "theWrappedObject"
QT_MOC_LITERAL(20, 249, 5), // "query"
QT_MOC_LITERAL(21, 255, 12), // "namespaceUri"
QT_MOC_LITERAL(22, 268, 6), // "__ne__"
QT_MOC_LITERAL(23, 275, 6), // "__eq__"
QT_MOC_LITERAL(24, 282, 11), // "toClarkName"
QT_MOC_LITERAL(25, 294, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QXmlName\0new_QXmlName\0"
    "QXmlName*\0\0QXmlNamePool&\0namePool\0"
    "localName\0namespaceURI\0prefix\0QXmlName\0"
    "other\0delete_QXmlName\0obj\0"
    "static_QXmlName_fromClarkName\0clarkName\0"
    "QXmlNamePool\0static_QXmlName_isNCName\0"
    "candidate\0isNull\0theWrappedObject\0"
    "query\0namespaceUri\0__ne__\0__eq__\0"
    "toClarkName\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlName[] = {

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
       1,    4,   95,    3, 0x0a /* Public */,
       1,    3,  104,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  111,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  116,    3, 0x0a /* Public */,
      11,    1,  119,    3, 0x0a /* Public */,
      13,    2,  122,    3, 0x0a /* Public */,
      16,    1,  127,    3, 0x0a /* Public */,
      18,    1,  130,    3, 0x0a /* Public */,
       6,    2,  133,    3, 0x0a /* Public */,
      21,    2,  138,    3, 0x0a /* Public */,
      22,    2,  143,    3, 0x0a /* Public */,
      23,    2,  148,    3, 0x0a /* Public */,
       8,    2,  153,    3, 0x0a /* Public */,
      24,    2,  158,    3, 0x0a /* Public */,
      25,    1,  163,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString,    5,    6,
    0x80000000 | 2, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 2,   12,
    0x80000000 | 9, QMetaType::QString, 0x80000000 | 15,   14,    5,
    QMetaType::Bool, QMetaType::QString,   17,
    QMetaType::Bool, 0x80000000 | 2,   19,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 15,   19,   20,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 15,   19,   20,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 9,   19,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 9,   19,   10,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 15,   19,   20,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 15,   19,   20,
    QMetaType::Bool, 0x80000000 | 2,   12,

       0        // eod
};

void PythonQtWrapper_QXmlName::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlName *_t = static_cast<PythonQtWrapper_QXmlName *>(_o);
        switch (_id) {
        case 0: { QXmlName* _r = _t->new_QXmlName();
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 1: { QXmlName* _r = _t->new_QXmlName((*reinterpret_cast< QXmlNamePool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 2: { QXmlName* _r = _t->new_QXmlName((*reinterpret_cast< QXmlNamePool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 3: { QXmlName* _r = _t->new_QXmlName((*reinterpret_cast< QXmlNamePool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 4: { QXmlName* _r = _t->new_QXmlName((*reinterpret_cast< const QXmlName(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlName**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QXmlName((*reinterpret_cast< QXmlName*(*)>(_a[1]))); break;
        case 6: { QXmlName _r = _t->static_QXmlName_fromClarkName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlName*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->static_QXmlName_isNCName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isNull((*reinterpret_cast< QXmlName*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->localName((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->namespaceUri((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__eq__((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->prefix((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->toClarkName((*reinterpret_cast< QXmlName*(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->__nonzero__((*reinterpret_cast< QXmlName*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlName::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlName.data,
      qt_meta_data_PythonQtWrapper_QXmlName,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlName::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlName::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlName.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlName*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlName::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlNamePool_t {
    QByteArrayData data[8];
    char stringdata[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlNamePool_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlNamePool_t qt_meta_stringdata_PythonQtWrapper_QXmlNamePool = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QXmlNamePool"
QT_MOC_LITERAL(1, 29, 16), // "new_QXmlNamePool"
QT_MOC_LITERAL(2, 46, 13), // "QXmlNamePool*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 12), // "QXmlNamePool"
QT_MOC_LITERAL(5, 74, 5), // "other"
QT_MOC_LITERAL(6, 80, 19), // "delete_QXmlNamePool"
QT_MOC_LITERAL(7, 100, 3) // "obj"

    },
    "PythonQtWrapper_QXmlNamePool\0"
    "new_QXmlNamePool\0QXmlNamePool*\0\0"
    "QXmlNamePool\0other\0delete_QXmlNamePool\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlNamePool[] = {

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
       1,    0,   29,    3, 0x0a /* Public */,
       1,    1,   30,    3, 0x0a /* Public */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QXmlNamePool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlNamePool *_t = static_cast<PythonQtWrapper_QXmlNamePool *>(_o);
        switch (_id) {
        case 0: { QXmlNamePool* _r = _t->new_QXmlNamePool();
            if (_a[0]) *reinterpret_cast< QXmlNamePool**>(_a[0]) = _r; }  break;
        case 1: { QXmlNamePool* _r = _t->new_QXmlNamePool((*reinterpret_cast< const QXmlNamePool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlNamePool((*reinterpret_cast< QXmlNamePool*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlNamePool::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlNamePool.data,
      qt_meta_data_PythonQtWrapper_QXmlNamePool,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlNamePool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlNamePool::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlNamePool.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlNamePool*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlNamePool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlNodeModelIndex_t {
    QByteArrayData data[29];
    char stringdata[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlNodeModelIndex_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlNodeModelIndex_t qt_meta_stringdata_PythonQtWrapper_QXmlNodeModelIndex = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QXmlNodeModel..."
QT_MOC_LITERAL(1, 35, 22), // "new_QXmlNodeModelIndex"
QT_MOC_LITERAL(2, 58, 19), // "QXmlNodeModelIndex*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 18), // "QXmlNodeModelIndex"
QT_MOC_LITERAL(5, 98, 5), // "other"
QT_MOC_LITERAL(6, 104, 25), // "delete_QXmlNodeModelIndex"
QT_MOC_LITERAL(7, 130, 3), // "obj"
QT_MOC_LITERAL(8, 134, 14), // "additionalData"
QT_MOC_LITERAL(9, 149, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 166, 4), // "data"
QT_MOC_LITERAL(11, 171, 6), // "isNull"
QT_MOC_LITERAL(12, 178, 5), // "model"
QT_MOC_LITERAL(13, 184, 28), // "const QAbstractXmlNodeModel*"
QT_MOC_LITERAL(14, 213, 6), // "__ne__"
QT_MOC_LITERAL(15, 220, 6), // "__eq__"
QT_MOC_LITERAL(16, 227, 11), // "__nonzero__"
QT_MOC_LITERAL(17, 239, 13), // "DocumentOrder"
QT_MOC_LITERAL(18, 253, 8), // "Precedes"
QT_MOC_LITERAL(19, 262, 2), // "Is"
QT_MOC_LITERAL(20, 265, 7), // "Follows"
QT_MOC_LITERAL(21, 273, 8), // "NodeKind"
QT_MOC_LITERAL(22, 282, 9), // "Attribute"
QT_MOC_LITERAL(23, 292, 7), // "Comment"
QT_MOC_LITERAL(24, 300, 8), // "Document"
QT_MOC_LITERAL(25, 309, 7), // "Element"
QT_MOC_LITERAL(26, 317, 9), // "Namespace"
QT_MOC_LITERAL(27, 327, 21), // "ProcessingInstruction"
QT_MOC_LITERAL(28, 349, 4) // "Text"

    },
    "PythonQtWrapper_QXmlNodeModelIndex\0"
    "new_QXmlNodeModelIndex\0QXmlNodeModelIndex*\0"
    "\0QXmlNodeModelIndex\0other\0"
    "delete_QXmlNodeModelIndex\0obj\0"
    "additionalData\0theWrappedObject\0data\0"
    "isNull\0model\0const QAbstractXmlNodeModel*\0"
    "__ne__\0__eq__\0__nonzero__\0DocumentOrder\0"
    "Precedes\0Is\0Follows\0NodeKind\0Attribute\0"
    "Comment\0Document\0Element\0Namespace\0"
    "ProcessingInstruction\0Text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlNodeModelIndex[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       2,   96, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    3, 0x0a /* Public */,
       1,    1,   65,    3, 0x0a /* Public */,
       6,    1,   68,    3, 0x0a /* Public */,
       8,    1,   71,    3, 0x0a /* Public */,
      10,    1,   74,    3, 0x0a /* Public */,
      11,    1,   77,    3, 0x0a /* Public */,
      12,    1,   80,    3, 0x0a /* Public */,
      14,    2,   83,    3, 0x0a /* Public */,
      15,    2,   88,    3, 0x0a /* Public */,
      16,    1,   93,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::LongLong, 0x80000000 | 2,    9,
    QMetaType::LongLong, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    0x80000000 | 13, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2,    7,

 // enums: name, flags, count, data
      17, 0x0,    3,  104,
      21, 0x0,    7,  110,

 // enum data: key, value
      18, uint(PythonQtWrapper_QXmlNodeModelIndex::Precedes),
      19, uint(PythonQtWrapper_QXmlNodeModelIndex::Is),
      20, uint(PythonQtWrapper_QXmlNodeModelIndex::Follows),
      22, uint(PythonQtWrapper_QXmlNodeModelIndex::Attribute),
      23, uint(PythonQtWrapper_QXmlNodeModelIndex::Comment),
      24, uint(PythonQtWrapper_QXmlNodeModelIndex::Document),
      25, uint(PythonQtWrapper_QXmlNodeModelIndex::Element),
      26, uint(PythonQtWrapper_QXmlNodeModelIndex::Namespace),
      27, uint(PythonQtWrapper_QXmlNodeModelIndex::ProcessingInstruction),
      28, uint(PythonQtWrapper_QXmlNodeModelIndex::Text),

       0        // eod
};

void PythonQtWrapper_QXmlNodeModelIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlNodeModelIndex *_t = static_cast<PythonQtWrapper_QXmlNodeModelIndex *>(_o);
        switch (_id) {
        case 0: { QXmlNodeModelIndex* _r = _t->new_QXmlNodeModelIndex();
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex**>(_a[0]) = _r; }  break;
        case 1: { QXmlNodeModelIndex* _r = _t->new_QXmlNodeModelIndex((*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNodeModelIndex**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlNodeModelIndex((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1]))); break;
        case 3: { qint64 _r = _t->additionalData((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 4: { qint64 _r = _t->data((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isNull((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { const QAbstractXmlNodeModel* _r = _t->model((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractXmlNodeModel**>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->__ne__((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__eq__((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])),(*reinterpret_cast< const QXmlNodeModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__nonzero__((*reinterpret_cast< QXmlNodeModelIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlNodeModelIndex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlNodeModelIndex.data,
      qt_meta_data_PythonQtWrapper_QXmlNodeModelIndex,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlNodeModelIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlNodeModelIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlNodeModelIndex.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlNodeModelIndex*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlNodeModelIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlQuery_t {
    QByteArrayData data[59];
    char stringdata[761];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlQuery_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlQuery_t qt_meta_stringdata_PythonQtWrapper_QXmlQuery = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QXmlQuery"
QT_MOC_LITERAL(1, 26, 13), // "new_QXmlQuery"
QT_MOC_LITERAL(2, 40, 10), // "QXmlQuery*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 24), // "QXmlQuery::QueryLanguage"
QT_MOC_LITERAL(5, 77, 13), // "queryLanguage"
QT_MOC_LITERAL(6, 91, 12), // "QXmlNamePool"
QT_MOC_LITERAL(7, 104, 2), // "np"
QT_MOC_LITERAL(8, 107, 9), // "QXmlQuery"
QT_MOC_LITERAL(9, 117, 5), // "other"
QT_MOC_LITERAL(10, 123, 16), // "delete_QXmlQuery"
QT_MOC_LITERAL(11, 140, 3), // "obj"
QT_MOC_LITERAL(12, 144, 12), // "bindVariable"
QT_MOC_LITERAL(13, 157, 16), // "theWrappedObject"
QT_MOC_LITERAL(14, 174, 9), // "localName"
QT_MOC_LITERAL(15, 184, 10), // "QIODevice*"
QT_MOC_LITERAL(16, 195, 6), // "arg__2"
QT_MOC_LITERAL(17, 202, 8), // "QXmlItem"
QT_MOC_LITERAL(18, 211, 5), // "value"
QT_MOC_LITERAL(19, 217, 5), // "query"
QT_MOC_LITERAL(20, 223, 8), // "QXmlName"
QT_MOC_LITERAL(21, 232, 4), // "name"
QT_MOC_LITERAL(22, 237, 10), // "evaluateTo"
QT_MOC_LITERAL(23, 248, 6), // "target"
QT_MOC_LITERAL(24, 255, 8), // "QString*"
QT_MOC_LITERAL(25, 264, 6), // "output"
QT_MOC_LITERAL(26, 271, 16), // "QXmlResultItems*"
QT_MOC_LITERAL(27, 288, 6), // "result"
QT_MOC_LITERAL(28, 295, 19), // "initialTemplateName"
QT_MOC_LITERAL(29, 315, 7), // "isValid"
QT_MOC_LITERAL(30, 323, 14), // "messageHandler"
QT_MOC_LITERAL(31, 338, 24), // "QAbstractMessageHandler*"
QT_MOC_LITERAL(32, 363, 8), // "namePool"
QT_MOC_LITERAL(33, 372, 20), // "networkAccessManager"
QT_MOC_LITERAL(34, 393, 22), // "QNetworkAccessManager*"
QT_MOC_LITERAL(35, 416, 15), // "operator_assign"
QT_MOC_LITERAL(36, 432, 8), // "setFocus"
QT_MOC_LITERAL(37, 441, 8), // "document"
QT_MOC_LITERAL(38, 450, 5), // "focus"
QT_MOC_LITERAL(39, 456, 11), // "documentURI"
QT_MOC_LITERAL(40, 468, 4), // "item"
QT_MOC_LITERAL(41, 473, 22), // "setInitialTemplateName"
QT_MOC_LITERAL(42, 496, 17), // "setMessageHandler"
QT_MOC_LITERAL(43, 514, 23), // "setNetworkAccessManager"
QT_MOC_LITERAL(44, 538, 10), // "newManager"
QT_MOC_LITERAL(45, 549, 8), // "setQuery"
QT_MOC_LITERAL(46, 558, 10), // "sourceCode"
QT_MOC_LITERAL(47, 569, 8), // "queryURI"
QT_MOC_LITERAL(48, 578, 7), // "baseURI"
QT_MOC_LITERAL(49, 586, 14), // "setUriResolver"
QT_MOC_LITERAL(50, 601, 27), // "const QAbstractUriResolver*"
QT_MOC_LITERAL(51, 629, 8), // "resolver"
QT_MOC_LITERAL(52, 638, 11), // "uriResolver"
QT_MOC_LITERAL(53, 650, 13), // "QueryLanguage"
QT_MOC_LITERAL(54, 664, 8), // "XQuery10"
QT_MOC_LITERAL(55, 673, 6), // "XSLT20"
QT_MOC_LITERAL(56, 680, 37), // "XmlSchema11IdentityConstraint..."
QT_MOC_LITERAL(57, 718, 34), // "XmlSchema11IdentityConstraint..."
QT_MOC_LITERAL(58, 753, 7) // "XPath20"

    },
    "PythonQtWrapper_QXmlQuery\0new_QXmlQuery\0"
    "QXmlQuery*\0\0QXmlQuery::QueryLanguage\0"
    "queryLanguage\0QXmlNamePool\0np\0QXmlQuery\0"
    "other\0delete_QXmlQuery\0obj\0bindVariable\0"
    "theWrappedObject\0localName\0QIODevice*\0"
    "arg__2\0QXmlItem\0value\0query\0QXmlName\0"
    "name\0evaluateTo\0target\0QString*\0output\0"
    "QXmlResultItems*\0result\0initialTemplateName\0"
    "isValid\0messageHandler\0QAbstractMessageHandler*\0"
    "namePool\0networkAccessManager\0"
    "QNetworkAccessManager*\0operator_assign\0"
    "setFocus\0document\0focus\0documentURI\0"
    "item\0setInitialTemplateName\0"
    "setMessageHandler\0setNetworkAccessManager\0"
    "newManager\0setQuery\0sourceCode\0queryURI\0"
    "baseURI\0setUriResolver\0"
    "const QAbstractUriResolver*\0resolver\0"
    "uriResolver\0QueryLanguage\0XQuery10\0"
    "XSLT20\0XmlSchema11IdentityConstraintSelector\0"
    "XmlSchema11IdentityConstraintField\0"
    "XPath20"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       1,  386, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  204,    3, 0x0a /* Public */,
       1,    2,  205,    3, 0x0a /* Public */,
       1,    1,  210,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  213,    3, 0x0a /* Public */,
       1,    1,  216,    3, 0x0a /* Public */,
      10,    1,  219,    3, 0x0a /* Public */,
      12,    3,  222,    3, 0x0a /* Public */,
      12,    3,  229,    3, 0x0a /* Public */,
      12,    3,  236,    3, 0x0a /* Public */,
      12,    3,  243,    3, 0x0a /* Public */,
      12,    3,  250,    3, 0x0a /* Public */,
      12,    3,  257,    3, 0x0a /* Public */,
      22,    2,  264,    3, 0x0a /* Public */,
      22,    2,  269,    3, 0x0a /* Public */,
      22,    2,  274,    3, 0x0a /* Public */,
      28,    1,  279,    3, 0x0a /* Public */,
      29,    1,  282,    3, 0x0a /* Public */,
      30,    1,  285,    3, 0x0a /* Public */,
      32,    1,  288,    3, 0x0a /* Public */,
      33,    1,  291,    3, 0x0a /* Public */,
      35,    2,  294,    3, 0x0a /* Public */,
       5,    1,  299,    3, 0x0a /* Public */,
      36,    2,  302,    3, 0x0a /* Public */,
      36,    2,  307,    3, 0x0a /* Public */,
      36,    2,  312,    3, 0x0a /* Public */,
      36,    2,  317,    3, 0x0a /* Public */,
      41,    2,  322,    3, 0x0a /* Public */,
      41,    2,  327,    3, 0x0a /* Public */,
      42,    2,  332,    3, 0x0a /* Public */,
      43,    2,  337,    3, 0x0a /* Public */,
      45,    3,  342,    3, 0x0a /* Public */,
      45,    2,  349,    3, 0x2a /* Public | MethodCloned */,
      45,    3,  354,    3, 0x0a /* Public */,
      45,    2,  361,    3, 0x2a /* Public | MethodCloned */,
      45,    3,  366,    3, 0x0a /* Public */,
      45,    2,  373,    3, 0x2a /* Public | MethodCloned */,
      49,    2,  378,    3, 0x0a /* Public */,
      52,    1,  383,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 15,   13,   14,   16,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 17,   13,   14,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 8,   13,   14,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 20, 0x80000000 | 15,   13,   21,   16,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 20, 0x80000000 | 17,   13,   21,   18,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 20, 0x80000000 | 8,   13,   21,   19,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,   13,   23,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 24,   13,   25,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 26,   13,   27,
    0x80000000 | 20, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2,   13,
    0x80000000 | 31, 0x80000000 | 2,   13,
    0x80000000 | 6, 0x80000000 | 2,   13,
    0x80000000 | 34, 0x80000000 | 2,   13,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 8,   13,    9,
    0x80000000 | 4, 0x80000000 | 2,   13,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,   13,   37,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,   13,   38,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QUrl,   13,   39,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17,   13,   40,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   13,   21,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 20,   13,   21,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 31,   13,   30,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 34,   13,   44,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 15, QMetaType::QUrl,   13,   46,   39,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 15,   13,   46,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QUrl,   13,   46,   39,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   13,   46,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl, QMetaType::QUrl,   13,   47,   48,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,   13,   47,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 50,   13,   51,
    0x80000000 | 50, 0x80000000 | 2,   13,

 // enums: name, flags, count, data
      53, 0x0,    5,  390,

 // enum data: key, value
      54, uint(PythonQtWrapper_QXmlQuery::XQuery10),
      55, uint(PythonQtWrapper_QXmlQuery::XSLT20),
      56, uint(PythonQtWrapper_QXmlQuery::XmlSchema11IdentityConstraintSelector),
      57, uint(PythonQtWrapper_QXmlQuery::XmlSchema11IdentityConstraintField),
      58, uint(PythonQtWrapper_QXmlQuery::XPath20),

       0        // eod
};

void PythonQtWrapper_QXmlQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlQuery *_t = static_cast<PythonQtWrapper_QXmlQuery *>(_o);
        switch (_id) {
        case 0: { QXmlQuery* _r = _t->new_QXmlQuery();
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 1: { QXmlQuery* _r = _t->new_QXmlQuery((*reinterpret_cast< QXmlQuery::QueryLanguage(*)>(_a[1])),(*reinterpret_cast< const QXmlNamePool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 2: { QXmlQuery* _r = _t->new_QXmlQuery((*reinterpret_cast< QXmlQuery::QueryLanguage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 3: { QXmlQuery* _r = _t->new_QXmlQuery((*reinterpret_cast< const QXmlNamePool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 4: { QXmlQuery* _r = _t->new_QXmlQuery((*reinterpret_cast< const QXmlQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QXmlQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1]))); break;
        case 6: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3]))); break;
        case 7: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QXmlItem(*)>(_a[3]))); break;
        case 8: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QXmlQuery(*)>(_a[3]))); break;
        case 9: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3]))); break;
        case 10: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QXmlItem(*)>(_a[3]))); break;
        case 11: _t->bindVariable((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QXmlQuery(*)>(_a[3]))); break;
        case 12: { bool _r = _t->evaluateTo((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->evaluateTo((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QString*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->evaluateTo((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QXmlResultItems*(*)>(_a[2]))); break;
        case 15: { QXmlName _r = _t->initialTemplateName((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlName*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isValid((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QAbstractMessageHandler* _r = _t->messageHandler((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 18: { QXmlNamePool _r = _t->namePool((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool*>(_a[0]) = _r; }  break;
        case 19: { QNetworkAccessManager* _r = _t->networkAccessManager((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 20: { QXmlQuery* _r = _t->operator_assign((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlQuery**>(_a[0]) = _r; }  break;
        case 21: { QXmlQuery::QueryLanguage _r = _t->queryLanguage((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlQuery::QueryLanguage*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->setFocus((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->setFocus((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->setFocus((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: _t->setFocus((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlItem(*)>(_a[2]))); break;
        case 26: _t->setInitialTemplateName((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 27: _t->setInitialTemplateName((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 28: _t->setMessageHandler((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[2]))); break;
        case 29: _t->setNetworkAccessManager((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager*(*)>(_a[2]))); break;
        case 30: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 31: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 32: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 33: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 34: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3]))); break;
        case 35: _t->setQuery((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 36: _t->setUriResolver((*reinterpret_cast< QXmlQuery*(*)>(_a[1])),(*reinterpret_cast< const QAbstractUriResolver*(*)>(_a[2]))); break;
        case 37: { const QAbstractUriResolver* _r = _t->uriResolver((*reinterpret_cast< QXmlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractUriResolver**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlItem >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlItem >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlItem >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractMessageHandler* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlQuery.data,
      qt_meta_data_PythonQtWrapper_QXmlQuery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlQuery.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlResultItems_t {
    QByteArrayData data[11];
    char stringdata[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlResultItems_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlResultItems_t qt_meta_stringdata_PythonQtWrapper_QXmlResultItems = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QXmlResultItems"
QT_MOC_LITERAL(1, 32, 19), // "new_QXmlResultItems"
QT_MOC_LITERAL(2, 52, 16), // "QXmlResultItems*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 22), // "delete_QXmlResultItems"
QT_MOC_LITERAL(5, 93, 3), // "obj"
QT_MOC_LITERAL(6, 97, 7), // "current"
QT_MOC_LITERAL(7, 105, 8), // "QXmlItem"
QT_MOC_LITERAL(8, 114, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 131, 8), // "hasError"
QT_MOC_LITERAL(10, 140, 4) // "next"

    },
    "PythonQtWrapper_QXmlResultItems\0"
    "new_QXmlResultItems\0QXmlResultItems*\0"
    "\0delete_QXmlResultItems\0obj\0current\0"
    "QXmlItem\0theWrappedObject\0hasError\0"
    "next"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlResultItems[] = {

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
      10,    1,   49,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    0x80000000 | 7, 0x80000000 | 2,    8,

       0        // eod
};

void PythonQtWrapper_QXmlResultItems::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlResultItems *_t = static_cast<PythonQtWrapper_QXmlResultItems *>(_o);
        switch (_id) {
        case 0: { QXmlResultItems* _r = _t->new_QXmlResultItems();
            if (_a[0]) *reinterpret_cast< QXmlResultItems**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlResultItems((*reinterpret_cast< QXmlResultItems*(*)>(_a[1]))); break;
        case 2: { QXmlItem _r = _t->current((*reinterpret_cast< QXmlResultItems*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->hasError((*reinterpret_cast< QXmlResultItems*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QXmlItem _r = _t->next((*reinterpret_cast< QXmlResultItems*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlItem*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlResultItems::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlResultItems.data,
      qt_meta_data_PythonQtWrapper_QXmlResultItems,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlResultItems::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlResultItems::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlResultItems.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlResultItems*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlResultItems::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlSchema_t {
    QByteArrayData data[30];
    char stringdata[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlSchema_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlSchema_t qt_meta_stringdata_PythonQtWrapper_QXmlSchema = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QXmlSchema"
QT_MOC_LITERAL(1, 27, 14), // "new_QXmlSchema"
QT_MOC_LITERAL(2, 42, 11), // "QXmlSchema*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 10), // "QXmlSchema"
QT_MOC_LITERAL(5, 66, 5), // "other"
QT_MOC_LITERAL(6, 72, 17), // "delete_QXmlSchema"
QT_MOC_LITERAL(7, 90, 3), // "obj"
QT_MOC_LITERAL(8, 94, 11), // "documentUri"
QT_MOC_LITERAL(9, 106, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 123, 7), // "isValid"
QT_MOC_LITERAL(11, 131, 4), // "load"
QT_MOC_LITERAL(12, 136, 10), // "QIODevice*"
QT_MOC_LITERAL(13, 147, 6), // "source"
QT_MOC_LITERAL(14, 154, 4), // "data"
QT_MOC_LITERAL(15, 159, 14), // "messageHandler"
QT_MOC_LITERAL(16, 174, 24), // "QAbstractMessageHandler*"
QT_MOC_LITERAL(17, 199, 8), // "namePool"
QT_MOC_LITERAL(18, 208, 12), // "QXmlNamePool"
QT_MOC_LITERAL(19, 221, 20), // "networkAccessManager"
QT_MOC_LITERAL(20, 242, 22), // "QNetworkAccessManager*"
QT_MOC_LITERAL(21, 265, 15), // "operator_assign"
QT_MOC_LITERAL(22, 281, 17), // "setMessageHandler"
QT_MOC_LITERAL(23, 299, 7), // "handler"
QT_MOC_LITERAL(24, 307, 23), // "setNetworkAccessManager"
QT_MOC_LITERAL(25, 331, 14), // "networkmanager"
QT_MOC_LITERAL(26, 346, 14), // "setUriResolver"
QT_MOC_LITERAL(27, 361, 27), // "const QAbstractUriResolver*"
QT_MOC_LITERAL(28, 389, 8), // "resolver"
QT_MOC_LITERAL(29, 398, 11) // "uriResolver"

    },
    "PythonQtWrapper_QXmlSchema\0new_QXmlSchema\0"
    "QXmlSchema*\0\0QXmlSchema\0other\0"
    "delete_QXmlSchema\0obj\0documentUri\0"
    "theWrappedObject\0isValid\0load\0QIODevice*\0"
    "source\0data\0messageHandler\0"
    "QAbstractMessageHandler*\0namePool\0"
    "QXmlNamePool\0networkAccessManager\0"
    "QNetworkAccessManager*\0operator_assign\0"
    "setMessageHandler\0handler\0"
    "setNetworkAccessManager\0networkmanager\0"
    "setUriResolver\0const QAbstractUriResolver*\0"
    "resolver\0uriResolver"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlSchema[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    3, 0x0a /* Public */,
       1,    1,  105,    3, 0x0a /* Public */,
       6,    1,  108,    3, 0x0a /* Public */,
       8,    1,  111,    3, 0x0a /* Public */,
      10,    1,  114,    3, 0x0a /* Public */,
      11,    3,  117,    3, 0x0a /* Public */,
      11,    2,  124,    3, 0x2a /* Public | MethodCloned */,
      11,    3,  129,    3, 0x0a /* Public */,
      11,    2,  136,    3, 0x2a /* Public | MethodCloned */,
      11,    2,  141,    3, 0x0a /* Public */,
      15,    1,  146,    3, 0x0a /* Public */,
      17,    1,  149,    3, 0x0a /* Public */,
      19,    1,  152,    3, 0x0a /* Public */,
      21,    2,  155,    3, 0x0a /* Public */,
      22,    2,  160,    3, 0x0a /* Public */,
      24,    2,  165,    3, 0x0a /* Public */,
      26,    2,  170,    3, 0x0a /* Public */,
      29,    1,  175,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QUrl, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 12, QMetaType::QUrl,    9,   13,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 12,    9,   13,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::QUrl,    9,   14,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray,    9,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QUrl,    9,   13,
    0x80000000 | 16, 0x80000000 | 2,    9,
    0x80000000 | 18, 0x80000000 | 2,    9,
    0x80000000 | 20, 0x80000000 | 2,    9,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,    9,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 20,    9,   25,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 27,    9,   28,
    0x80000000 | 27, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QXmlSchema::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlSchema *_t = static_cast<PythonQtWrapper_QXmlSchema *>(_o);
        switch (_id) {
        case 0: { QXmlSchema* _r = _t->new_QXmlSchema();
            if (_a[0]) *reinterpret_cast< QXmlSchema**>(_a[0]) = _r; }  break;
        case 1: { QXmlSchema* _r = _t->new_QXmlSchema((*reinterpret_cast< const QXmlSchema(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlSchema**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlSchema((*reinterpret_cast< QXmlSchema*(*)>(_a[1]))); break;
        case 3: { QUrl _r = _t->documentUri((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->isValid((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->load((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QAbstractMessageHandler* _r = _t->messageHandler((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 11: { QXmlNamePool _r = _t->namePool((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool*>(_a[0]) = _r; }  break;
        case 12: { QNetworkAccessManager* _r = _t->networkAccessManager((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 13: { QXmlSchema* _r = _t->operator_assign((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< const QXmlSchema(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlSchema**>(_a[0]) = _r; }  break;
        case 14: _t->setMessageHandler((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[2]))); break;
        case 15: _t->setNetworkAccessManager((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager*(*)>(_a[2]))); break;
        case 16: _t->setUriResolver((*reinterpret_cast< QXmlSchema*(*)>(_a[1])),(*reinterpret_cast< const QAbstractUriResolver*(*)>(_a[2]))); break;
        case 17: { const QAbstractUriResolver* _r = _t->uriResolver((*reinterpret_cast< QXmlSchema*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractUriResolver**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractMessageHandler* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlSchema::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlSchema.data,
      qt_meta_data_PythonQtWrapper_QXmlSchema,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlSchema::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlSchema::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlSchema.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlSchema*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlSchema::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlSchemaValidator_t {
    QByteArrayData data[29];
    char stringdata[437];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlSchemaValidator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlSchemaValidator_t qt_meta_stringdata_PythonQtWrapper_QXmlSchemaValidator = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_QXmlSchemaVal..."
QT_MOC_LITERAL(1, 36, 23), // "new_QXmlSchemaValidator"
QT_MOC_LITERAL(2, 60, 20), // "QXmlSchemaValidator*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 10), // "QXmlSchema"
QT_MOC_LITERAL(5, 93, 6), // "schema"
QT_MOC_LITERAL(6, 100, 26), // "delete_QXmlSchemaValidator"
QT_MOC_LITERAL(7, 127, 3), // "obj"
QT_MOC_LITERAL(8, 131, 14), // "messageHandler"
QT_MOC_LITERAL(9, 146, 24), // "QAbstractMessageHandler*"
QT_MOC_LITERAL(10, 171, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 188, 8), // "namePool"
QT_MOC_LITERAL(12, 197, 12), // "QXmlNamePool"
QT_MOC_LITERAL(13, 210, 20), // "networkAccessManager"
QT_MOC_LITERAL(14, 231, 22), // "QNetworkAccessManager*"
QT_MOC_LITERAL(15, 254, 17), // "setMessageHandler"
QT_MOC_LITERAL(16, 272, 7), // "handler"
QT_MOC_LITERAL(17, 280, 23), // "setNetworkAccessManager"
QT_MOC_LITERAL(18, 304, 14), // "networkmanager"
QT_MOC_LITERAL(19, 319, 9), // "setSchema"
QT_MOC_LITERAL(20, 329, 14), // "setUriResolver"
QT_MOC_LITERAL(21, 344, 27), // "const QAbstractUriResolver*"
QT_MOC_LITERAL(22, 372, 8), // "resolver"
QT_MOC_LITERAL(23, 381, 11), // "uriResolver"
QT_MOC_LITERAL(24, 393, 8), // "validate"
QT_MOC_LITERAL(25, 402, 10), // "QIODevice*"
QT_MOC_LITERAL(26, 413, 6), // "source"
QT_MOC_LITERAL(27, 420, 11), // "documentUri"
QT_MOC_LITERAL(28, 432, 4) // "data"

    },
    "PythonQtWrapper_QXmlSchemaValidator\0"
    "new_QXmlSchemaValidator\0QXmlSchemaValidator*\0"
    "\0QXmlSchema\0schema\0delete_QXmlSchemaValidator\0"
    "obj\0messageHandler\0QAbstractMessageHandler*\0"
    "theWrappedObject\0namePool\0QXmlNamePool\0"
    "networkAccessManager\0QNetworkAccessManager*\0"
    "setMessageHandler\0handler\0"
    "setNetworkAccessManager\0networkmanager\0"
    "setSchema\0setUriResolver\0"
    "const QAbstractUriResolver*\0resolver\0"
    "uriResolver\0validate\0QIODevice*\0source\0"
    "documentUri\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlSchemaValidator[] = {

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
       1,    1,   95,    3, 0x0a /* Public */,
       6,    1,   98,    3, 0x0a /* Public */,
       8,    1,  101,    3, 0x0a /* Public */,
      11,    1,  104,    3, 0x0a /* Public */,
      13,    1,  107,    3, 0x0a /* Public */,
      15,    2,  110,    3, 0x0a /* Public */,
      17,    2,  115,    3, 0x0a /* Public */,
      19,    2,  120,    3, 0x0a /* Public */,
      20,    2,  125,    3, 0x0a /* Public */,
      23,    1,  130,    3, 0x0a /* Public */,
      24,    3,  133,    3, 0x0a /* Public */,
      24,    2,  140,    3, 0x2a /* Public | MethodCloned */,
      24,    3,  145,    3, 0x0a /* Public */,
      24,    2,  152,    3, 0x2a /* Public | MethodCloned */,
      24,    2,  157,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    0x80000000 | 12, 0x80000000 | 2,   10,
    0x80000000 | 14, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9,   10,   16,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   10,   18,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,   10,   22,
    0x80000000 | 21, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 25, QMetaType::QUrl,   10,   26,   27,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 25,   10,   26,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::QUrl,   10,   28,   27,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray,   10,   28,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QUrl,   10,   26,

       0        // eod
};

void PythonQtWrapper_QXmlSchemaValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlSchemaValidator *_t = static_cast<PythonQtWrapper_QXmlSchemaValidator *>(_o);
        switch (_id) {
        case 0: { QXmlSchemaValidator* _r = _t->new_QXmlSchemaValidator();
            if (_a[0]) *reinterpret_cast< QXmlSchemaValidator**>(_a[0]) = _r; }  break;
        case 1: { QXmlSchemaValidator* _r = _t->new_QXmlSchemaValidator((*reinterpret_cast< const QXmlSchema(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlSchemaValidator**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlSchemaValidator((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1]))); break;
        case 3: { QAbstractMessageHandler* _r = _t->messageHandler((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractMessageHandler**>(_a[0]) = _r; }  break;
        case 4: { QXmlNamePool _r = _t->namePool((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlNamePool*>(_a[0]) = _r; }  break;
        case 5: { QNetworkAccessManager* _r = _t->networkAccessManager((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 6: _t->setMessageHandler((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< QAbstractMessageHandler*(*)>(_a[2]))); break;
        case 7: _t->setNetworkAccessManager((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager*(*)>(_a[2]))); break;
        case 8: _t->setSchema((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QXmlSchema(*)>(_a[2]))); break;
        case 9: _t->setUriResolver((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QAbstractUriResolver*(*)>(_a[2]))); break;
        case 10: { const QAbstractUriResolver* _r = _t->uriResolver((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QAbstractUriResolver**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->validate((*reinterpret_cast< QXmlSchemaValidator*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractMessageHandler* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlSchemaValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlSchemaValidator.data,
      qt_meta_data_PythonQtWrapper_QXmlSchemaValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlSchemaValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlSchemaValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlSchemaValidator.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlSchemaValidator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlSchemaValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlSerializer_t {
    QByteArrayData data[31];
    char stringdata[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlSerializer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlSerializer_t qt_meta_stringdata_PythonQtWrapper_QXmlSerializer = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QXmlSerializer"
QT_MOC_LITERAL(1, 31, 18), // "new_QXmlSerializer"
QT_MOC_LITERAL(2, 50, 15), // "QXmlSerializer*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 9), // "QXmlQuery"
QT_MOC_LITERAL(5, 77, 5), // "query"
QT_MOC_LITERAL(6, 83, 10), // "QIODevice*"
QT_MOC_LITERAL(7, 94, 12), // "outputDevice"
QT_MOC_LITERAL(8, 107, 21), // "delete_QXmlSerializer"
QT_MOC_LITERAL(9, 129, 3), // "obj"
QT_MOC_LITERAL(10, 133, 11), // "atomicValue"
QT_MOC_LITERAL(11, 145, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 162, 5), // "value"
QT_MOC_LITERAL(13, 168, 9), // "attribute"
QT_MOC_LITERAL(14, 178, 8), // "QXmlName"
QT_MOC_LITERAL(15, 187, 4), // "name"
QT_MOC_LITERAL(16, 192, 10), // "QStringRef"
QT_MOC_LITERAL(17, 203, 10), // "characters"
QT_MOC_LITERAL(18, 214, 5), // "codec"
QT_MOC_LITERAL(19, 220, 17), // "const QTextCodec*"
QT_MOC_LITERAL(20, 238, 7), // "comment"
QT_MOC_LITERAL(21, 246, 11), // "endDocument"
QT_MOC_LITERAL(22, 258, 10), // "endElement"
QT_MOC_LITERAL(23, 269, 13), // "endOfSequence"
QT_MOC_LITERAL(24, 283, 16), // "namespaceBinding"
QT_MOC_LITERAL(25, 300, 2), // "nb"
QT_MOC_LITERAL(26, 303, 21), // "processingInstruction"
QT_MOC_LITERAL(27, 325, 8), // "setCodec"
QT_MOC_LITERAL(28, 334, 13), // "startDocument"
QT_MOC_LITERAL(29, 348, 12), // "startElement"
QT_MOC_LITERAL(30, 361, 15) // "startOfSequence"

    },
    "PythonQtWrapper_QXmlSerializer\0"
    "new_QXmlSerializer\0QXmlSerializer*\0\0"
    "QXmlQuery\0query\0QIODevice*\0outputDevice\0"
    "delete_QXmlSerializer\0obj\0atomicValue\0"
    "theWrappedObject\0value\0attribute\0"
    "QXmlName\0name\0QStringRef\0characters\0"
    "codec\0const QTextCodec*\0comment\0"
    "endDocument\0endElement\0endOfSequence\0"
    "namespaceBinding\0nb\0processingInstruction\0"
    "setCodec\0startDocument\0startElement\0"
    "startOfSequence"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlSerializer[] = {

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
       1,    2,   99,    3, 0x0a /* Public */,
       8,    1,  104,    3, 0x0a /* Public */,
      10,    2,  107,    3, 0x0a /* Public */,
      13,    3,  112,    3, 0x0a /* Public */,
      17,    2,  119,    3, 0x0a /* Public */,
      18,    1,  124,    3, 0x0a /* Public */,
      20,    2,  127,    3, 0x0a /* Public */,
      21,    1,  132,    3, 0x0a /* Public */,
      22,    1,  135,    3, 0x0a /* Public */,
      23,    1,  138,    3, 0x0a /* Public */,
      24,    2,  141,    3, 0x0a /* Public */,
       7,    1,  146,    3, 0x0a /* Public */,
      26,    3,  149,    3, 0x0a /* Public */,
      27,    2,  156,    3, 0x0a /* Public */,
      28,    1,  161,    3, 0x0a /* Public */,
      29,    2,  164,    3, 0x0a /* Public */,
      30,    1,  169,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant,   11,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14, 0x80000000 | 16,   11,   15,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   11,   12,
    0x80000000 | 19, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   11,   12,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   11,   25,
    0x80000000 | 6, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14, QMetaType::QString,   11,   15,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 19,   11,   18,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   11,   15,
    QMetaType::Void, 0x80000000 | 2,   11,

       0        // eod
};

void PythonQtWrapper_QXmlSerializer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlSerializer *_t = static_cast<PythonQtWrapper_QXmlSerializer *>(_o);
        switch (_id) {
        case 0: { QXmlSerializer* _r = _t->new_QXmlSerializer((*reinterpret_cast< const QXmlQuery(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlSerializer**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlSerializer((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 2: _t->atomicValue((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->attribute((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QStringRef(*)>(_a[3]))); break;
        case 4: _t->characters((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QStringRef(*)>(_a[2]))); break;
        case 5: { const QTextCodec* _r = _t->codec((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QTextCodec**>(_a[0]) = _r; }  break;
        case 6: _t->comment((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->endDocument((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 8: _t->endElement((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 9: _t->endOfSequence((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 10: _t->namespaceBinding((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 11: { QIODevice* _r = _t->outputDevice((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 12: _t->processingInstruction((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: _t->setCodec((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QTextCodec*(*)>(_a[2]))); break;
        case 14: _t->startDocument((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        case 15: _t->startElement((*reinterpret_cast< QXmlSerializer*(*)>(_a[1])),(*reinterpret_cast< const QXmlName(*)>(_a[2]))); break;
        case 16: _t->startOfSequence((*reinterpret_cast< QXmlSerializer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmlName >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlSerializer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlSerializer.data,
      qt_meta_data_PythonQtWrapper_QXmlSerializer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlSerializer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlSerializer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlSerializer.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlSerializer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlSerializer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
