/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_xml0.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generated_cpp_54/com_trolltech_qt_xml/com_trolltech_qt_xml0.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_xml0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PythonQtWrapper_QDomAttr_t {
    QByteArrayData data[17];
    char stringdata[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomAttr_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomAttr_t qt_meta_stringdata_PythonQtWrapper_QDomAttr = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PythonQtWrapper_QDomAttr"
QT_MOC_LITERAL(1, 25, 12), // "new_QDomAttr"
QT_MOC_LITERAL(2, 38, 9), // "QDomAttr*"
QT_MOC_LITERAL(3, 48, 0), // ""
QT_MOC_LITERAL(4, 49, 8), // "QDomAttr"
QT_MOC_LITERAL(5, 58, 1), // "x"
QT_MOC_LITERAL(6, 60, 15), // "delete_QDomAttr"
QT_MOC_LITERAL(7, 76, 3), // "obj"
QT_MOC_LITERAL(8, 80, 4), // "name"
QT_MOC_LITERAL(9, 85, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 102, 12), // "ownerElement"
QT_MOC_LITERAL(11, 115, 11), // "QDomElement"
QT_MOC_LITERAL(12, 127, 8), // "setValue"
QT_MOC_LITERAL(13, 136, 6), // "arg__1"
QT_MOC_LITERAL(14, 143, 9), // "specified"
QT_MOC_LITERAL(15, 153, 5), // "value"
QT_MOC_LITERAL(16, 159, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomAttr\0new_QDomAttr\0"
    "QDomAttr*\0\0QDomAttr\0x\0delete_QDomAttr\0"
    "obj\0name\0theWrappedObject\0ownerElement\0"
    "QDomElement\0setValue\0arg__1\0specified\0"
    "value\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomAttr[] = {

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
       1,    1,   60,    3, 0x0a /* Public */,
       6,    1,   63,    3, 0x0a /* Public */,
       8,    1,   66,    3, 0x0a /* Public */,
      10,    1,   69,    3, 0x0a /* Public */,
      12,    2,   72,    3, 0x0a /* Public */,
      14,    1,   77,    3, 0x0a /* Public */,
      15,    1,   80,    3, 0x0a /* Public */,
      16,    1,   83,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    9,
    0x80000000 | 11, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   13,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomAttr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomAttr *_t = static_cast<PythonQtWrapper_QDomAttr *>(_o);
        switch (_id) {
        case 0: { QDomAttr* _r = _t->new_QDomAttr();
            if (_a[0]) *reinterpret_cast< QDomAttr**>(_a[0]) = _r; }  break;
        case 1: { QDomAttr* _r = _t->new_QDomAttr((*reinterpret_cast< const QDomAttr(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomAttr**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomAttr((*reinterpret_cast< QDomAttr*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->name((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QDomElement _r = _t->ownerElement((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 5: _t->setValue((*reinterpret_cast< QDomAttr*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: { bool _r = _t->specified((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->value((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomAttr*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomAttr::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomAttr.data,
      qt_meta_data_PythonQtWrapper_QDomAttr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomAttr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomAttr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomAttr.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomAttr*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomAttr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomCDATASection_t {
    QByteArrayData data[9];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomCDATASection_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomCDATASection_t qt_meta_stringdata_PythonQtWrapper_QDomCDATASection = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QDomCDATASection"
QT_MOC_LITERAL(1, 33, 20), // "new_QDomCDATASection"
QT_MOC_LITERAL(2, 54, 17), // "QDomCDATASection*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 16), // "QDomCDATASection"
QT_MOC_LITERAL(5, 90, 1), // "x"
QT_MOC_LITERAL(6, 92, 23), // "delete_QDomCDATASection"
QT_MOC_LITERAL(7, 116, 3), // "obj"
QT_MOC_LITERAL(8, 120, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomCDATASection\0"
    "new_QDomCDATASection\0QDomCDATASection*\0"
    "\0QDomCDATASection\0x\0delete_QDomCDATASection\0"
    "obj\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomCDATASection[] = {

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
       6,    1,   38,    3, 0x0a /* Public */,
       8,    1,   41,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomCDATASection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomCDATASection *_t = static_cast<PythonQtWrapper_QDomCDATASection *>(_o);
        switch (_id) {
        case 0: { QDomCDATASection* _r = _t->new_QDomCDATASection();
            if (_a[0]) *reinterpret_cast< QDomCDATASection**>(_a[0]) = _r; }  break;
        case 1: { QDomCDATASection* _r = _t->new_QDomCDATASection((*reinterpret_cast< const QDomCDATASection(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomCDATASection**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomCDATASection((*reinterpret_cast< QDomCDATASection*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomCDATASection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomCDATASection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomCDATASection.data,
      qt_meta_data_PythonQtWrapper_QDomCDATASection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomCDATASection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomCDATASection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomCDATASection.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomCDATASection*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomCDATASection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomCharacterData_t {
    QByteArrayData data[22];
    char stringdata[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomCharacterData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomCharacterData_t qt_meta_stringdata_PythonQtWrapper_QDomCharacterData = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_QDomCharacter..."
QT_MOC_LITERAL(1, 34, 21), // "new_QDomCharacterData"
QT_MOC_LITERAL(2, 56, 18), // "QDomCharacterData*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 17), // "QDomCharacterData"
QT_MOC_LITERAL(5, 94, 1), // "x"
QT_MOC_LITERAL(6, 96, 24), // "delete_QDomCharacterData"
QT_MOC_LITERAL(7, 121, 3), // "obj"
QT_MOC_LITERAL(8, 125, 10), // "appendData"
QT_MOC_LITERAL(9, 136, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 153, 3), // "arg"
QT_MOC_LITERAL(11, 157, 4), // "data"
QT_MOC_LITERAL(12, 162, 10), // "deleteData"
QT_MOC_LITERAL(13, 173, 6), // "offset"
QT_MOC_LITERAL(14, 180, 5), // "count"
QT_MOC_LITERAL(15, 186, 10), // "insertData"
QT_MOC_LITERAL(16, 197, 6), // "length"
QT_MOC_LITERAL(17, 204, 11), // "replaceData"
QT_MOC_LITERAL(18, 216, 7), // "setData"
QT_MOC_LITERAL(19, 224, 6), // "arg__1"
QT_MOC_LITERAL(20, 231, 13), // "substringData"
QT_MOC_LITERAL(21, 245, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomCharacterData\0"
    "new_QDomCharacterData\0QDomCharacterData*\0"
    "\0QDomCharacterData\0x\0delete_QDomCharacterData\0"
    "obj\0appendData\0theWrappedObject\0arg\0"
    "data\0deleteData\0offset\0count\0insertData\0"
    "length\0replaceData\0setData\0arg__1\0"
    "substringData\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomCharacterData[] = {

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
       1,    0,   74,    3, 0x0a /* Public */,
       1,    1,   75,    3, 0x0a /* Public */,
       6,    1,   78,    3, 0x0a /* Public */,
       8,    2,   81,    3, 0x0a /* Public */,
      11,    1,   86,    3, 0x0a /* Public */,
      12,    3,   89,    3, 0x0a /* Public */,
      15,    3,   96,    3, 0x0a /* Public */,
      16,    1,  103,    3, 0x0a /* Public */,
      17,    4,  106,    3, 0x0a /* Public */,
      18,    2,  115,    3, 0x0a /* Public */,
      20,    3,  120,    3, 0x0a /* Public */,
      21,    1,  127,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::ULong, QMetaType::ULong,    9,   13,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::ULong, QMetaType::QString,    9,   13,   10,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::ULong, QMetaType::ULong, QMetaType::QString,    9,   13,   14,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   19,
    QMetaType::QString, 0x80000000 | 2, QMetaType::ULong, QMetaType::ULong,    9,   13,   14,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomCharacterData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomCharacterData *_t = static_cast<PythonQtWrapper_QDomCharacterData *>(_o);
        switch (_id) {
        case 0: { QDomCharacterData* _r = _t->new_QDomCharacterData();
            if (_a[0]) *reinterpret_cast< QDomCharacterData**>(_a[0]) = _r; }  break;
        case 1: { QDomCharacterData* _r = _t->new_QDomCharacterData((*reinterpret_cast< const QDomCharacterData(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomCharacterData**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomCharacterData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1]))); break;
        case 3: _t->appendData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: { QString _r = _t->data((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: _t->deleteData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3]))); break;
        case 6: _t->insertData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: { int _r = _t->length((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->replaceData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 9: _t->setData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: { QString _r = _t->substringData((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< ulong(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomCharacterData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomCharacterData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomCharacterData.data,
      qt_meta_data_PythonQtWrapper_QDomCharacterData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomCharacterData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomCharacterData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomCharacterData.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomCharacterData*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomCharacterData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomComment_t {
    QByteArrayData data[9];
    char stringdata[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomComment_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomComment_t qt_meta_stringdata_PythonQtWrapper_QDomComment = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QDomComment"
QT_MOC_LITERAL(1, 28, 15), // "new_QDomComment"
QT_MOC_LITERAL(2, 44, 12), // "QDomComment*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 11), // "QDomComment"
QT_MOC_LITERAL(5, 70, 1), // "x"
QT_MOC_LITERAL(6, 72, 18), // "delete_QDomComment"
QT_MOC_LITERAL(7, 91, 3), // "obj"
QT_MOC_LITERAL(8, 95, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomComment\0new_QDomComment\0"
    "QDomComment*\0\0QDomComment\0x\0"
    "delete_QDomComment\0obj\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomComment[] = {

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
       6,    1,   38,    3, 0x0a /* Public */,
       8,    1,   41,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomComment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomComment *_t = static_cast<PythonQtWrapper_QDomComment *>(_o);
        switch (_id) {
        case 0: { QDomComment* _r = _t->new_QDomComment();
            if (_a[0]) *reinterpret_cast< QDomComment**>(_a[0]) = _r; }  break;
        case 1: { QDomComment* _r = _t->new_QDomComment((*reinterpret_cast< const QDomComment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomComment**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomComment((*reinterpret_cast< QDomComment*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomComment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomComment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomComment.data,
      qt_meta_data_PythonQtWrapper_QDomComment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomComment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomComment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomComment.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomComment*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomComment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomDocument_t {
    QByteArrayData data[68];
    char stringdata[860];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomDocument_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomDocument_t qt_meta_stringdata_PythonQtWrapper_QDomDocument = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QDomDocument"
QT_MOC_LITERAL(1, 29, 16), // "new_QDomDocument"
QT_MOC_LITERAL(2, 46, 13), // "QDomDocument*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 12), // "QDomDocument"
QT_MOC_LITERAL(5, 74, 1), // "x"
QT_MOC_LITERAL(6, 76, 16), // "QDomDocumentType"
QT_MOC_LITERAL(7, 93, 7), // "doctype"
QT_MOC_LITERAL(8, 101, 4), // "name"
QT_MOC_LITERAL(9, 106, 19), // "delete_QDomDocument"
QT_MOC_LITERAL(10, 126, 3), // "obj"
QT_MOC_LITERAL(11, 130, 15), // "createAttribute"
QT_MOC_LITERAL(12, 146, 8), // "QDomAttr"
QT_MOC_LITERAL(13, 155, 16), // "theWrappedObject"
QT_MOC_LITERAL(14, 172, 17), // "createAttributeNS"
QT_MOC_LITERAL(15, 190, 5), // "nsURI"
QT_MOC_LITERAL(16, 196, 5), // "qName"
QT_MOC_LITERAL(17, 202, 18), // "createCDATASection"
QT_MOC_LITERAL(18, 221, 16), // "QDomCDATASection"
QT_MOC_LITERAL(19, 238, 4), // "data"
QT_MOC_LITERAL(20, 243, 13), // "createComment"
QT_MOC_LITERAL(21, 257, 11), // "QDomComment"
QT_MOC_LITERAL(22, 269, 22), // "createDocumentFragment"
QT_MOC_LITERAL(23, 292, 20), // "QDomDocumentFragment"
QT_MOC_LITERAL(24, 313, 13), // "createElement"
QT_MOC_LITERAL(25, 327, 11), // "QDomElement"
QT_MOC_LITERAL(26, 339, 7), // "tagName"
QT_MOC_LITERAL(27, 347, 15), // "createElementNS"
QT_MOC_LITERAL(28, 363, 21), // "createEntityReference"
QT_MOC_LITERAL(29, 385, 19), // "QDomEntityReference"
QT_MOC_LITERAL(30, 405, 27), // "createProcessingInstruction"
QT_MOC_LITERAL(31, 433, 25), // "QDomProcessingInstruction"
QT_MOC_LITERAL(32, 459, 6), // "target"
QT_MOC_LITERAL(33, 466, 14), // "createTextNode"
QT_MOC_LITERAL(34, 481, 8), // "QDomText"
QT_MOC_LITERAL(35, 490, 15), // "documentElement"
QT_MOC_LITERAL(36, 506, 11), // "elementById"
QT_MOC_LITERAL(37, 518, 9), // "elementId"
QT_MOC_LITERAL(38, 528, 17), // "elementsByTagName"
QT_MOC_LITERAL(39, 546, 12), // "QDomNodeList"
QT_MOC_LITERAL(40, 559, 7), // "tagname"
QT_MOC_LITERAL(41, 567, 19), // "elementsByTagNameNS"
QT_MOC_LITERAL(42, 587, 9), // "localName"
QT_MOC_LITERAL(43, 597, 14), // "implementation"
QT_MOC_LITERAL(44, 612, 18), // "QDomImplementation"
QT_MOC_LITERAL(45, 631, 10), // "importNode"
QT_MOC_LITERAL(46, 642, 8), // "QDomNode"
QT_MOC_LITERAL(47, 651, 12), // "importedNode"
QT_MOC_LITERAL(48, 664, 4), // "deep"
QT_MOC_LITERAL(49, 669, 10), // "setContent"
QT_MOC_LITERAL(50, 680, 10), // "QIODevice*"
QT_MOC_LITERAL(51, 691, 3), // "dev"
QT_MOC_LITERAL(52, 695, 8), // "QString*"
QT_MOC_LITERAL(53, 704, 8), // "errorMsg"
QT_MOC_LITERAL(54, 713, 4), // "int*"
QT_MOC_LITERAL(55, 718, 9), // "errorLine"
QT_MOC_LITERAL(56, 728, 11), // "errorColumn"
QT_MOC_LITERAL(57, 740, 19), // "namespaceProcessing"
QT_MOC_LITERAL(58, 760, 16), // "QXmlInputSource*"
QT_MOC_LITERAL(59, 777, 6), // "source"
QT_MOC_LITERAL(60, 784, 11), // "QXmlReader*"
QT_MOC_LITERAL(61, 796, 6), // "reader"
QT_MOC_LITERAL(62, 803, 4), // "text"
QT_MOC_LITERAL(63, 808, 11), // "toByteArray"
QT_MOC_LITERAL(64, 820, 6), // "arg__1"
QT_MOC_LITERAL(65, 827, 8), // "toString"
QT_MOC_LITERAL(66, 836, 11), // "py_toString"
QT_MOC_LITERAL(67, 848, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomDocument\0"
    "new_QDomDocument\0QDomDocument*\0\0"
    "QDomDocument\0x\0QDomDocumentType\0doctype\0"
    "name\0delete_QDomDocument\0obj\0"
    "createAttribute\0QDomAttr\0theWrappedObject\0"
    "createAttributeNS\0nsURI\0qName\0"
    "createCDATASection\0QDomCDATASection\0"
    "data\0createComment\0QDomComment\0"
    "createDocumentFragment\0QDomDocumentFragment\0"
    "createElement\0QDomElement\0tagName\0"
    "createElementNS\0createEntityReference\0"
    "QDomEntityReference\0createProcessingInstruction\0"
    "QDomProcessingInstruction\0target\0"
    "createTextNode\0QDomText\0documentElement\0"
    "elementById\0elementId\0elementsByTagName\0"
    "QDomNodeList\0tagname\0elementsByTagNameNS\0"
    "localName\0implementation\0QDomImplementation\0"
    "importNode\0QDomNode\0importedNode\0deep\0"
    "setContent\0QIODevice*\0dev\0QString*\0"
    "errorMsg\0int*\0errorLine\0errorColumn\0"
    "namespaceProcessing\0QXmlInputSource*\0"
    "source\0QXmlReader*\0reader\0text\0"
    "toByteArray\0arg__1\0toString\0py_toString\0"
    "__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomDocument[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      60,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  314,    3, 0x0a /* Public */,
       1,    1,  315,    3, 0x0a /* Public */,
       1,    1,  318,    3, 0x0a /* Public */,
       1,    1,  321,    3, 0x0a /* Public */,
       9,    1,  324,    3, 0x0a /* Public */,
      11,    2,  327,    3, 0x0a /* Public */,
      14,    3,  332,    3, 0x0a /* Public */,
      17,    2,  339,    3, 0x0a /* Public */,
      20,    2,  344,    3, 0x0a /* Public */,
      22,    1,  349,    3, 0x0a /* Public */,
      24,    2,  352,    3, 0x0a /* Public */,
      27,    3,  357,    3, 0x0a /* Public */,
      28,    2,  364,    3, 0x0a /* Public */,
      30,    3,  369,    3, 0x0a /* Public */,
      33,    2,  376,    3, 0x0a /* Public */,
       7,    1,  381,    3, 0x0a /* Public */,
      35,    1,  384,    3, 0x0a /* Public */,
      36,    2,  387,    3, 0x0a /* Public */,
      38,    2,  392,    3, 0x0a /* Public */,
      41,    3,  397,    3, 0x0a /* Public */,
      43,    1,  404,    3, 0x0a /* Public */,
      45,    3,  407,    3, 0x0a /* Public */,
      49,    5,  414,    3, 0x0a /* Public */,
      49,    4,  425,    3, 0x2a /* Public | MethodCloned */,
      49,    3,  434,    3, 0x2a /* Public | MethodCloned */,
      49,    2,  441,    3, 0x2a /* Public | MethodCloned */,
      49,    6,  446,    3, 0x0a /* Public */,
      49,    5,  459,    3, 0x2a /* Public | MethodCloned */,
      49,    4,  470,    3, 0x2a /* Public | MethodCloned */,
      49,    3,  479,    3, 0x2a /* Public | MethodCloned */,
      49,    6,  486,    3, 0x0a /* Public */,
      49,    5,  499,    3, 0x2a /* Public | MethodCloned */,
      49,    4,  510,    3, 0x2a /* Public | MethodCloned */,
      49,    3,  519,    3, 0x2a /* Public | MethodCloned */,
      49,    6,  526,    3, 0x0a /* Public */,
      49,    5,  539,    3, 0x2a /* Public | MethodCloned */,
      49,    4,  550,    3, 0x2a /* Public | MethodCloned */,
      49,    3,  559,    3, 0x2a /* Public | MethodCloned */,
      49,    5,  566,    3, 0x0a /* Public */,
      49,    4,  577,    3, 0x2a /* Public | MethodCloned */,
      49,    3,  586,    3, 0x2a /* Public | MethodCloned */,
      49,    2,  593,    3, 0x2a /* Public | MethodCloned */,
      49,    6,  598,    3, 0x0a /* Public */,
      49,    5,  611,    3, 0x2a /* Public | MethodCloned */,
      49,    4,  622,    3, 0x2a /* Public | MethodCloned */,
      49,    3,  631,    3, 0x2a /* Public | MethodCloned */,
      49,    5,  638,    3, 0x0a /* Public */,
      49,    4,  649,    3, 0x2a /* Public | MethodCloned */,
      49,    3,  658,    3, 0x2a /* Public | MethodCloned */,
      49,    2,  665,    3, 0x2a /* Public | MethodCloned */,
      49,    6,  670,    3, 0x0a /* Public */,
      49,    5,  683,    3, 0x2a /* Public | MethodCloned */,
      49,    4,  694,    3, 0x2a /* Public | MethodCloned */,
      49,    3,  703,    3, 0x2a /* Public | MethodCloned */,
      63,    2,  710,    3, 0x0a /* Public */,
      63,    1,  715,    3, 0x2a /* Public | MethodCloned */,
      65,    2,  718,    3, 0x0a /* Public */,
      65,    1,  723,    3, 0x2a /* Public | MethodCloned */,
      66,    1,  726,    3, 0x0a /* Public */,
      67,    1,  729,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    0x80000000 | 12, 0x80000000 | 2, QMetaType::QString,   13,    8,
    0x80000000 | 12, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,   13,   15,   16,
    0x80000000 | 18, 0x80000000 | 2, QMetaType::QString,   13,   19,
    0x80000000 | 21, 0x80000000 | 2, QMetaType::QString,   13,   19,
    0x80000000 | 23, 0x80000000 | 2,   13,
    0x80000000 | 25, 0x80000000 | 2, QMetaType::QString,   13,   26,
    0x80000000 | 25, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,   13,   15,   16,
    0x80000000 | 29, 0x80000000 | 2, QMetaType::QString,   13,    8,
    0x80000000 | 31, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,   13,   32,   19,
    0x80000000 | 34, 0x80000000 | 2, QMetaType::QString,   13,   19,
    0x80000000 | 6, 0x80000000 | 2,   13,
    0x80000000 | 25, 0x80000000 | 2,   13,
    0x80000000 | 25, 0x80000000 | 2, QMetaType::QString,   13,   37,
    0x80000000 | 39, 0x80000000 | 2, QMetaType::QString,   13,   40,
    0x80000000 | 39, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,   13,   15,   42,
    0x80000000 | 44, 0x80000000 | 2,   13,
    0x80000000 | 46, 0x80000000 | 2, 0x80000000 | 46, QMetaType::Bool,   13,   47,   48,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 50, 0x80000000 | 52, 0x80000000 | 54, 0x80000000 | 54,   13,   51,   53,   55,   56,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 50, 0x80000000 | 52, 0x80000000 | 54,   13,   51,   53,   55,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 50, 0x80000000 | 52,   13,   51,   53,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 50,   13,   51,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 50, QMetaType::Bool, 0x80000000 | 52, 0x80000000 | 54, 0x80000000 | 54,   13,   51,   57,   53,   55,   56,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 50, QMetaType::Bool, 0x80000000 | 52, 0x80000000 | 54,   13,   51,   57,   53,   55,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 50, QMetaType::Bool, 0x80000000 | 52,   13,   51,   57,   53,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 50, QMetaType::Bool,   13,   51,   57,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 58, 0x80000000 | 60, 0x80000000 | 52, 0x80000000 | 54, 0x80000000 | 54,   13,   59,   61,   53,   55,   56,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 58, 0x80000000 | 60, 0x80000000 | 52, 0x80000000 | 54,   13,   59,   61,   53,   55,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 58, 0x80000000 | 60, 0x80000000 | 52,   13,   59,   61,   53,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 58, 0x80000000 | 60,   13,   59,   61,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 58, QMetaType::Bool, 0x80000000 | 52, 0x80000000 | 54, 0x80000000 | 54,   13,   59,   57,   53,   55,   56,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 58, QMetaType::Bool, 0x80000000 | 52, 0x80000000 | 54,   13,   59,   57,   53,   55,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 58, QMetaType::Bool, 0x80000000 | 52,   13,   59,   57,   53,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 58, QMetaType::Bool,   13,   59,   57,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray, 0x80000000 | 52, 0x80000000 | 54, 0x80000000 | 54,   13,   62,   53,   55,   56,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray, 0x80000000 | 52, 0x80000000 | 54,   13,   62,   53,   55,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray, 0x80000000 | 52,   13,   62,   53,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray,   13,   62,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::Bool, 0x80000000 | 52, 0x80000000 | 54, 0x80000000 | 54,   13,   62,   57,   53,   55,   56,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::Bool, 0x80000000 | 52, 0x80000000 | 54,   13,   62,   57,   53,   55,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::Bool, 0x80000000 | 52,   13,   62,   57,   53,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::Bool,   13,   62,   57,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 52, 0x80000000 | 54, 0x80000000 | 54,   13,   62,   53,   55,   56,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 52, 0x80000000 | 54,   13,   62,   53,   55,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 52,   13,   62,   53,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,   13,   62,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::Bool, 0x80000000 | 52, 0x80000000 | 54, 0x80000000 | 54,   13,   62,   57,   53,   55,   56,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::Bool, 0x80000000 | 52, 0x80000000 | 54,   13,   62,   57,   53,   55,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::Bool, 0x80000000 | 52,   13,   62,   57,   53,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::Bool,   13,   62,   57,
    QMetaType::QByteArray, 0x80000000 | 2, QMetaType::Int,   13,   64,
    QMetaType::QByteArray, 0x80000000 | 2,   13,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,   13,   64,
    QMetaType::QString, 0x80000000 | 2,   13,
    QMetaType::QString, 0x80000000 | 2,    3,
    QMetaType::Bool, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QDomDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomDocument *_t = static_cast<PythonQtWrapper_QDomDocument *>(_o);
        switch (_id) {
        case 0: { QDomDocument* _r = _t->new_QDomDocument();
            if (_a[0]) *reinterpret_cast< QDomDocument**>(_a[0]) = _r; }  break;
        case 1: { QDomDocument* _r = _t->new_QDomDocument((*reinterpret_cast< const QDomDocument(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument**>(_a[0]) = _r; }  break;
        case 2: { QDomDocument* _r = _t->new_QDomDocument((*reinterpret_cast< const QDomDocumentType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument**>(_a[0]) = _r; }  break;
        case 3: { QDomDocument* _r = _t->new_QDomDocument((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QDomDocument((*reinterpret_cast< QDomDocument*(*)>(_a[1]))); break;
        case 5: { QDomAttr _r = _t->createAttribute((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 6: { QDomAttr _r = _t->createAttributeNS((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 7: { QDomCDATASection _r = _t->createCDATASection((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomCDATASection*>(_a[0]) = _r; }  break;
        case 8: { QDomComment _r = _t->createComment((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomComment*>(_a[0]) = _r; }  break;
        case 9: { QDomDocumentFragment _r = _t->createDocumentFragment((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentFragment*>(_a[0]) = _r; }  break;
        case 10: { QDomElement _r = _t->createElement((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 11: { QDomElement _r = _t->createElementNS((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 12: { QDomEntityReference _r = _t->createEntityReference((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomEntityReference*>(_a[0]) = _r; }  break;
        case 13: { QDomProcessingInstruction _r = _t->createProcessingInstruction((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomProcessingInstruction*>(_a[0]) = _r; }  break;
        case 14: { QDomText _r = _t->createTextNode((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomText*>(_a[0]) = _r; }  break;
        case 15: { QDomDocumentType _r = _t->doctype((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentType*>(_a[0]) = _r; }  break;
        case 16: { QDomElement _r = _t->documentElement((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 17: { QDomElement _r = _t->elementById((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 18: { QDomNodeList _r = _t->elementsByTagName((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 19: { QDomNodeList _r = _t->elementsByTagNameNS((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 20: { QDomImplementation _r = _t->implementation((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomImplementation*>(_a[0]) = _r; }  break;
        case 21: { QDomNode _r = _t->importNode((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< QXmlReader*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< QXmlReader*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< QXmlReader*(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< QXmlReader*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])),(*reinterpret_cast< int*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])),(*reinterpret_cast< int*(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])),(*reinterpret_cast< int*(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QString*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { bool _r = _t->setContent((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 54: { QByteArray _r = _t->toByteArray((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 55: { QByteArray _r = _t->toByteArray((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 56: { QString _r = _t->toString((*reinterpret_cast< QDomDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 57: { QString _r = _t->toString((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 58: { QString _r = _t->py_toString((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 24:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomDocument.data,
      qt_meta_data_PythonQtWrapper_QDomDocument,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomDocument.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 60)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 60;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QDomDocumentFragment_t {
    QByteArrayData data[9];
    char stringdata[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomDocumentFragment_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomDocumentFragment_t qt_meta_stringdata_PythonQtWrapper_QDomDocumentFragment = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_QDomDocumentF..."
QT_MOC_LITERAL(1, 37, 24), // "new_QDomDocumentFragment"
QT_MOC_LITERAL(2, 62, 21), // "QDomDocumentFragment*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 20), // "QDomDocumentFragment"
QT_MOC_LITERAL(5, 106, 1), // "x"
QT_MOC_LITERAL(6, 108, 27), // "delete_QDomDocumentFragment"
QT_MOC_LITERAL(7, 136, 3), // "obj"
QT_MOC_LITERAL(8, 140, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomDocumentFragment\0"
    "new_QDomDocumentFragment\0QDomDocumentFragment*\0"
    "\0QDomDocumentFragment\0x\0"
    "delete_QDomDocumentFragment\0obj\0"
    "__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomDocumentFragment[] = {

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
       6,    1,   38,    3, 0x0a /* Public */,
       8,    1,   41,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomDocumentFragment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomDocumentFragment *_t = static_cast<PythonQtWrapper_QDomDocumentFragment *>(_o);
        switch (_id) {
        case 0: { QDomDocumentFragment* _r = _t->new_QDomDocumentFragment();
            if (_a[0]) *reinterpret_cast< QDomDocumentFragment**>(_a[0]) = _r; }  break;
        case 1: { QDomDocumentFragment* _r = _t->new_QDomDocumentFragment((*reinterpret_cast< const QDomDocumentFragment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentFragment**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomDocumentFragment((*reinterpret_cast< QDomDocumentFragment*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomDocumentFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomDocumentFragment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomDocumentFragment.data,
      qt_meta_data_PythonQtWrapper_QDomDocumentFragment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomDocumentFragment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomDocumentFragment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomDocumentFragment.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomDocumentFragment*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomDocumentFragment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomDocumentType_t {
    QByteArrayData data[17];
    char stringdata[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomDocumentType_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomDocumentType_t qt_meta_stringdata_PythonQtWrapper_QDomDocumentType = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QDomDocumentType"
QT_MOC_LITERAL(1, 33, 20), // "new_QDomDocumentType"
QT_MOC_LITERAL(2, 54, 17), // "QDomDocumentType*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 16), // "QDomDocumentType"
QT_MOC_LITERAL(5, 90, 1), // "x"
QT_MOC_LITERAL(6, 92, 23), // "delete_QDomDocumentType"
QT_MOC_LITERAL(7, 116, 3), // "obj"
QT_MOC_LITERAL(8, 120, 8), // "entities"
QT_MOC_LITERAL(9, 129, 16), // "QDomNamedNodeMap"
QT_MOC_LITERAL(10, 146, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 163, 14), // "internalSubset"
QT_MOC_LITERAL(12, 178, 4), // "name"
QT_MOC_LITERAL(13, 183, 9), // "notations"
QT_MOC_LITERAL(14, 193, 8), // "publicId"
QT_MOC_LITERAL(15, 202, 8), // "systemId"
QT_MOC_LITERAL(16, 211, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomDocumentType\0"
    "new_QDomDocumentType\0QDomDocumentType*\0"
    "\0QDomDocumentType\0x\0delete_QDomDocumentType\0"
    "obj\0entities\0QDomNamedNodeMap\0"
    "theWrappedObject\0internalSubset\0name\0"
    "notations\0publicId\0systemId\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomDocumentType[] = {

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
       1,    1,   65,    3, 0x0a /* Public */,
       6,    1,   68,    3, 0x0a /* Public */,
       8,    1,   71,    3, 0x0a /* Public */,
      11,    1,   74,    3, 0x0a /* Public */,
      12,    1,   77,    3, 0x0a /* Public */,
      13,    1,   80,    3, 0x0a /* Public */,
      14,    1,   83,    3, 0x0a /* Public */,
      15,    1,   86,    3, 0x0a /* Public */,
      16,    1,   89,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    0x80000000 | 9, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomDocumentType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomDocumentType *_t = static_cast<PythonQtWrapper_QDomDocumentType *>(_o);
        switch (_id) {
        case 0: { QDomDocumentType* _r = _t->new_QDomDocumentType();
            if (_a[0]) *reinterpret_cast< QDomDocumentType**>(_a[0]) = _r; }  break;
        case 1: { QDomDocumentType* _r = _t->new_QDomDocumentType((*reinterpret_cast< const QDomDocumentType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentType**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomDocumentType((*reinterpret_cast< QDomDocumentType*(*)>(_a[1]))); break;
        case 3: { QDomNamedNodeMap _r = _t->entities((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->internalSubset((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->name((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QDomNamedNodeMap _r = _t->notations((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->publicId((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->systemId((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomDocumentType*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomDocumentType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomDocumentType.data,
      qt_meta_data_PythonQtWrapper_QDomDocumentType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomDocumentType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomDocumentType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomDocumentType.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomDocumentType*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomDocumentType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomElement_t {
    QByteArrayData data[41];
    char stringdata[500];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomElement_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomElement_t qt_meta_stringdata_PythonQtWrapper_QDomElement = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QDomElement"
QT_MOC_LITERAL(1, 28, 15), // "new_QDomElement"
QT_MOC_LITERAL(2, 44, 12), // "QDomElement*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 11), // "QDomElement"
QT_MOC_LITERAL(5, 70, 1), // "x"
QT_MOC_LITERAL(6, 72, 18), // "delete_QDomElement"
QT_MOC_LITERAL(7, 91, 3), // "obj"
QT_MOC_LITERAL(8, 95, 9), // "attribute"
QT_MOC_LITERAL(9, 105, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 122, 4), // "name"
QT_MOC_LITERAL(11, 127, 8), // "defValue"
QT_MOC_LITERAL(12, 136, 11), // "attributeNS"
QT_MOC_LITERAL(13, 148, 5), // "nsURI"
QT_MOC_LITERAL(14, 154, 9), // "localName"
QT_MOC_LITERAL(15, 164, 13), // "attributeNode"
QT_MOC_LITERAL(16, 178, 8), // "QDomAttr"
QT_MOC_LITERAL(17, 187, 15), // "attributeNodeNS"
QT_MOC_LITERAL(18, 203, 10), // "attributes"
QT_MOC_LITERAL(19, 214, 16), // "QDomNamedNodeMap"
QT_MOC_LITERAL(20, 231, 17), // "elementsByTagName"
QT_MOC_LITERAL(21, 249, 12), // "QDomNodeList"
QT_MOC_LITERAL(22, 262, 7), // "tagname"
QT_MOC_LITERAL(23, 270, 19), // "elementsByTagNameNS"
QT_MOC_LITERAL(24, 290, 12), // "hasAttribute"
QT_MOC_LITERAL(25, 303, 14), // "hasAttributeNS"
QT_MOC_LITERAL(26, 318, 15), // "removeAttribute"
QT_MOC_LITERAL(27, 334, 17), // "removeAttributeNS"
QT_MOC_LITERAL(28, 352, 19), // "removeAttributeNode"
QT_MOC_LITERAL(29, 372, 7), // "oldAttr"
QT_MOC_LITERAL(30, 380, 12), // "setAttribute"
QT_MOC_LITERAL(31, 393, 5), // "value"
QT_MOC_LITERAL(32, 399, 14), // "setAttributeNS"
QT_MOC_LITERAL(33, 414, 5), // "qName"
QT_MOC_LITERAL(34, 420, 16), // "setAttributeNode"
QT_MOC_LITERAL(35, 437, 7), // "newAttr"
QT_MOC_LITERAL(36, 445, 18), // "setAttributeNodeNS"
QT_MOC_LITERAL(37, 464, 10), // "setTagName"
QT_MOC_LITERAL(38, 475, 7), // "tagName"
QT_MOC_LITERAL(39, 483, 4), // "text"
QT_MOC_LITERAL(40, 488, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomElement\0new_QDomElement\0"
    "QDomElement*\0\0QDomElement\0x\0"
    "delete_QDomElement\0obj\0attribute\0"
    "theWrappedObject\0name\0defValue\0"
    "attributeNS\0nsURI\0localName\0attributeNode\0"
    "QDomAttr\0attributeNodeNS\0attributes\0"
    "QDomNamedNodeMap\0elementsByTagName\0"
    "QDomNodeList\0tagname\0elementsByTagNameNS\0"
    "hasAttribute\0hasAttributeNS\0removeAttribute\0"
    "removeAttributeNS\0removeAttributeNode\0"
    "oldAttr\0setAttribute\0value\0setAttributeNS\0"
    "qName\0setAttributeNode\0newAttr\0"
    "setAttributeNodeNS\0setTagName\0tagName\0"
    "text\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomElement[] = {

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
       6,    1,  178,    3, 0x0a /* Public */,
       8,    3,  181,    3, 0x0a /* Public */,
       8,    2,  188,    3, 0x2a /* Public | MethodCloned */,
      12,    4,  193,    3, 0x0a /* Public */,
      12,    3,  202,    3, 0x2a /* Public | MethodCloned */,
      15,    2,  209,    3, 0x0a /* Public */,
      17,    3,  214,    3, 0x0a /* Public */,
      18,    1,  221,    3, 0x0a /* Public */,
      20,    2,  224,    3, 0x0a /* Public */,
      23,    3,  229,    3, 0x0a /* Public */,
      24,    2,  236,    3, 0x0a /* Public */,
      25,    3,  241,    3, 0x0a /* Public */,
      26,    2,  248,    3, 0x0a /* Public */,
      27,    3,  253,    3, 0x0a /* Public */,
      28,    2,  260,    3, 0x0a /* Public */,
      30,    3,  265,    3, 0x0a /* Public */,
      30,    3,  272,    3, 0x0a /* Public */,
      30,    3,  279,    3, 0x0a /* Public */,
      30,    3,  286,    3, 0x0a /* Public */,
      30,    3,  293,    3, 0x0a /* Public */,
      32,    4,  300,    3, 0x0a /* Public */,
      32,    4,  309,    3, 0x0a /* Public */,
      32,    4,  318,    3, 0x0a /* Public */,
      32,    4,  327,    3, 0x0a /* Public */,
      34,    2,  336,    3, 0x0a /* Public */,
      36,    2,  341,    3, 0x0a /* Public */,
      37,    2,  346,    3, 0x0a /* Public */,
      38,    1,  351,    3, 0x0a /* Public */,
      39,    1,  354,    3, 0x0a /* Public */,
      40,    1,  357,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   10,   11,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   13,   14,   11,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   13,   14,
    0x80000000 | 16, 0x80000000 | 2, QMetaType::QString,    9,   10,
    0x80000000 | 16, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   13,   14,
    0x80000000 | 19, 0x80000000 | 2,    9,
    0x80000000 | 21, 0x80000000 | 2, QMetaType::QString,    9,   22,
    0x80000000 | 21, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   13,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   13,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   13,   14,
    0x80000000 | 16, 0x80000000 | 2, 0x80000000 | 16,    9,   29,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   10,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::Double,    9,   10,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::Float,    9,   10,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::Int,    9,   10,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::LongLong,    9,   10,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   13,   33,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::Double,    9,   13,   33,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::Int,    9,   13,   33,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::LongLong,    9,   13,   33,   31,
    0x80000000 | 16, 0x80000000 | 2, 0x80000000 | 16,    9,   35,
    0x80000000 | 16, 0x80000000 | 2, 0x80000000 | 16,    9,   35,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomElement *_t = static_cast<PythonQtWrapper_QDomElement *>(_o);
        switch (_id) {
        case 0: { QDomElement* _r = _t->new_QDomElement();
            if (_a[0]) *reinterpret_cast< QDomElement**>(_a[0]) = _r; }  break;
        case 1: { QDomElement* _r = _t->new_QDomElement((*reinterpret_cast< const QDomElement(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomElement((*reinterpret_cast< QDomElement*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->attribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->attribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->attributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->attributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QDomAttr _r = _t->attributeNode((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 8: { QDomAttr _r = _t->attributeNodeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 9: { QDomNamedNodeMap _r = _t->attributes((*reinterpret_cast< QDomElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap*>(_a[0]) = _r; }  break;
        case 10: { QDomNodeList _r = _t->elementsByTagName((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 11: { QDomNodeList _r = _t->elementsByTagNameNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->hasAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->removeAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->removeAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 16: { QDomAttr _r = _t->removeAttributeNode((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QDomAttr(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 17: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 18: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 19: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 20: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->setAttribute((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< qlonglong(*)>(_a[3]))); break;
        case 22: _t->setAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 23: _t->setAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 24: _t->setAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 25: _t->setAttributeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< qlonglong(*)>(_a[4]))); break;
        case 26: { QDomAttr _r = _t->setAttributeNode((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QDomAttr(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 27: { QDomAttr _r = _t->setAttributeNodeNS((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QDomAttr(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 28: _t->setTagName((*reinterpret_cast< QDomElement*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: { QString _r = _t->tagName((*reinterpret_cast< QDomElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 30: { QString _r = _t->text((*reinterpret_cast< QDomElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomElement*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomElement::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomElement.data,
      qt_meta_data_PythonQtWrapper_QDomElement,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomElement::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomElement.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomElement*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomEntity_t {
    QByteArrayData data[13];
    char stringdata[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomEntity_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomEntity_t qt_meta_stringdata_PythonQtWrapper_QDomEntity = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QDomEntity"
QT_MOC_LITERAL(1, 27, 14), // "new_QDomEntity"
QT_MOC_LITERAL(2, 42, 11), // "QDomEntity*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 10), // "QDomEntity"
QT_MOC_LITERAL(5, 66, 1), // "x"
QT_MOC_LITERAL(6, 68, 17), // "delete_QDomEntity"
QT_MOC_LITERAL(7, 86, 3), // "obj"
QT_MOC_LITERAL(8, 90, 12), // "notationName"
QT_MOC_LITERAL(9, 103, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 120, 8), // "publicId"
QT_MOC_LITERAL(11, 129, 8), // "systemId"
QT_MOC_LITERAL(12, 138, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomEntity\0new_QDomEntity\0"
    "QDomEntity*\0\0QDomEntity\0x\0delete_QDomEntity\0"
    "obj\0notationName\0theWrappedObject\0"
    "publicId\0systemId\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomEntity[] = {

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
       1,    0,   49,    3, 0x0a /* Public */,
       1,    1,   50,    3, 0x0a /* Public */,
       6,    1,   53,    3, 0x0a /* Public */,
       8,    1,   56,    3, 0x0a /* Public */,
      10,    1,   59,    3, 0x0a /* Public */,
      11,    1,   62,    3, 0x0a /* Public */,
      12,    1,   65,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomEntity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomEntity *_t = static_cast<PythonQtWrapper_QDomEntity *>(_o);
        switch (_id) {
        case 0: { QDomEntity* _r = _t->new_QDomEntity();
            if (_a[0]) *reinterpret_cast< QDomEntity**>(_a[0]) = _r; }  break;
        case 1: { QDomEntity* _r = _t->new_QDomEntity((*reinterpret_cast< const QDomEntity(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomEntity**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomEntity((*reinterpret_cast< QDomEntity*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->notationName((*reinterpret_cast< QDomEntity*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->publicId((*reinterpret_cast< QDomEntity*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->systemId((*reinterpret_cast< QDomEntity*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomEntity*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomEntity::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomEntity.data,
      qt_meta_data_PythonQtWrapper_QDomEntity,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomEntity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomEntity::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomEntity.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomEntity*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomEntity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomEntityReference_t {
    QByteArrayData data[9];
    char stringdata[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomEntityReference_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomEntityReference_t qt_meta_stringdata_PythonQtWrapper_QDomEntityReference = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_QDomEntityRef..."
QT_MOC_LITERAL(1, 36, 23), // "new_QDomEntityReference"
QT_MOC_LITERAL(2, 60, 20), // "QDomEntityReference*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 19), // "QDomEntityReference"
QT_MOC_LITERAL(5, 102, 1), // "x"
QT_MOC_LITERAL(6, 104, 26), // "delete_QDomEntityReference"
QT_MOC_LITERAL(7, 131, 3), // "obj"
QT_MOC_LITERAL(8, 135, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomEntityReference\0"
    "new_QDomEntityReference\0QDomEntityReference*\0"
    "\0QDomEntityReference\0x\0"
    "delete_QDomEntityReference\0obj\0"
    "__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomEntityReference[] = {

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
       6,    1,   38,    3, 0x0a /* Public */,
       8,    1,   41,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomEntityReference::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomEntityReference *_t = static_cast<PythonQtWrapper_QDomEntityReference *>(_o);
        switch (_id) {
        case 0: { QDomEntityReference* _r = _t->new_QDomEntityReference();
            if (_a[0]) *reinterpret_cast< QDomEntityReference**>(_a[0]) = _r; }  break;
        case 1: { QDomEntityReference* _r = _t->new_QDomEntityReference((*reinterpret_cast< const QDomEntityReference(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomEntityReference**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomEntityReference((*reinterpret_cast< QDomEntityReference*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomEntityReference*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomEntityReference::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomEntityReference.data,
      qt_meta_data_PythonQtWrapper_QDomEntityReference,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomEntityReference::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomEntityReference::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomEntityReference.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomEntityReference*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomEntityReference::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomImplementation_t {
    QByteArrayData data[33];
    char stringdata[519];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomImplementation_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomImplementation_t qt_meta_stringdata_PythonQtWrapper_QDomImplementation = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QDomImplement..."
QT_MOC_LITERAL(1, 35, 22), // "new_QDomImplementation"
QT_MOC_LITERAL(2, 58, 19), // "QDomImplementation*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 18), // "QDomImplementation"
QT_MOC_LITERAL(5, 98, 6), // "arg__1"
QT_MOC_LITERAL(6, 105, 25), // "delete_QDomImplementation"
QT_MOC_LITERAL(7, 131, 3), // "obj"
QT_MOC_LITERAL(8, 135, 14), // "createDocument"
QT_MOC_LITERAL(9, 150, 12), // "QDomDocument"
QT_MOC_LITERAL(10, 163, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 180, 5), // "nsURI"
QT_MOC_LITERAL(12, 186, 5), // "qName"
QT_MOC_LITERAL(13, 192, 16), // "QDomDocumentType"
QT_MOC_LITERAL(14, 209, 7), // "doctype"
QT_MOC_LITERAL(15, 217, 18), // "createDocumentType"
QT_MOC_LITERAL(16, 236, 8), // "publicId"
QT_MOC_LITERAL(17, 245, 8), // "systemId"
QT_MOC_LITERAL(18, 254, 10), // "hasFeature"
QT_MOC_LITERAL(19, 265, 7), // "feature"
QT_MOC_LITERAL(20, 273, 7), // "version"
QT_MOC_LITERAL(21, 281, 43), // "static_QDomImplementation_inv..."
QT_MOC_LITERAL(22, 325, 37), // "QDomImplementation::InvalidDa..."
QT_MOC_LITERAL(23, 363, 6), // "isNull"
QT_MOC_LITERAL(24, 370, 6), // "__ne__"
QT_MOC_LITERAL(25, 377, 6), // "__eq__"
QT_MOC_LITERAL(26, 384, 46), // "static_QDomImplementation_set..."
QT_MOC_LITERAL(27, 431, 6), // "policy"
QT_MOC_LITERAL(28, 438, 11), // "__nonzero__"
QT_MOC_LITERAL(29, 450, 17), // "InvalidDataPolicy"
QT_MOC_LITERAL(30, 468, 18), // "AcceptInvalidChars"
QT_MOC_LITERAL(31, 487, 16), // "DropInvalidChars"
QT_MOC_LITERAL(32, 504, 14) // "ReturnNullNode"

    },
    "PythonQtWrapper_QDomImplementation\0"
    "new_QDomImplementation\0QDomImplementation*\0"
    "\0QDomImplementation\0arg__1\0"
    "delete_QDomImplementation\0obj\0"
    "createDocument\0QDomDocument\0"
    "theWrappedObject\0nsURI\0qName\0"
    "QDomDocumentType\0doctype\0createDocumentType\0"
    "publicId\0systemId\0hasFeature\0feature\0"
    "version\0static_QDomImplementation_invalidDataPolicy\0"
    "QDomImplementation::InvalidDataPolicy\0"
    "isNull\0__ne__\0__eq__\0"
    "static_QDomImplementation_setInvalidDataPolicy\0"
    "policy\0__nonzero__\0InvalidDataPolicy\0"
    "AcceptInvalidChars\0DropInvalidChars\0"
    "ReturnNullNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomImplementation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       1,  126, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    3, 0x0a /* Public */,
       1,    1,   75,    3, 0x0a /* Public */,
       6,    1,   78,    3, 0x0a /* Public */,
       8,    4,   81,    3, 0x0a /* Public */,
      15,    4,   90,    3, 0x0a /* Public */,
      18,    3,   99,    3, 0x0a /* Public */,
      21,    0,  106,    3, 0x0a /* Public */,
      23,    1,  107,    3, 0x0a /* Public */,
      24,    2,  110,    3, 0x0a /* Public */,
      25,    2,  115,    3, 0x0a /* Public */,
      26,    1,  120,    3, 0x0a /* Public */,
      28,    1,  123,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,   10,   11,   12,   14,
    0x80000000 | 13, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   12,   16,   17,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,   10,   19,   20,
    0x80000000 | 22,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Void, 0x80000000 | 22,   27,
    QMetaType::Bool, 0x80000000 | 2,    7,

 // enums: name, flags, count, data
      29, 0x0,    3,  130,

 // enum data: key, value
      30, uint(PythonQtWrapper_QDomImplementation::AcceptInvalidChars),
      31, uint(PythonQtWrapper_QDomImplementation::DropInvalidChars),
      32, uint(PythonQtWrapper_QDomImplementation::ReturnNullNode),

       0        // eod
};

void PythonQtWrapper_QDomImplementation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomImplementation *_t = static_cast<PythonQtWrapper_QDomImplementation *>(_o);
        switch (_id) {
        case 0: { QDomImplementation* _r = _t->new_QDomImplementation();
            if (_a[0]) *reinterpret_cast< QDomImplementation**>(_a[0]) = _r; }  break;
        case 1: { QDomImplementation* _r = _t->new_QDomImplementation((*reinterpret_cast< const QDomImplementation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomImplementation**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomImplementation((*reinterpret_cast< QDomImplementation*(*)>(_a[1]))); break;
        case 3: { QDomDocument _r = _t->createDocument((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QDomDocumentType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDomDocument*>(_a[0]) = _r; }  break;
        case 4: { QDomDocumentType _r = _t->createDocumentType((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDomDocumentType*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->hasFeature((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QDomImplementation::InvalidDataPolicy _r = _t->static_QDomImplementation_invalidDataPolicy();
            if (_a[0]) *reinterpret_cast< QDomImplementation::InvalidDataPolicy*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isNull((*reinterpret_cast< QDomImplementation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QDomImplementation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__eq__((*reinterpret_cast< QDomImplementation*(*)>(_a[1])),(*reinterpret_cast< const QDomImplementation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->static_QDomImplementation_setInvalidDataPolicy((*reinterpret_cast< QDomImplementation::InvalidDataPolicy(*)>(_a[1]))); break;
        case 11: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomImplementation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomImplementation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomImplementation.data,
      qt_meta_data_PythonQtWrapper_QDomImplementation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomImplementation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomImplementation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomImplementation.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomImplementation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomImplementation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomNamedNodeMap_t {
    QByteArrayData data[29];
    char stringdata[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomNamedNodeMap_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomNamedNodeMap_t qt_meta_stringdata_PythonQtWrapper_QDomNamedNodeMap = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QDomNamedNodeMap"
QT_MOC_LITERAL(1, 33, 20), // "new_QDomNamedNodeMap"
QT_MOC_LITERAL(2, 54, 17), // "QDomNamedNodeMap*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 16), // "QDomNamedNodeMap"
QT_MOC_LITERAL(5, 90, 6), // "arg__1"
QT_MOC_LITERAL(6, 97, 23), // "delete_QDomNamedNodeMap"
QT_MOC_LITERAL(7, 121, 3), // "obj"
QT_MOC_LITERAL(8, 125, 8), // "contains"
QT_MOC_LITERAL(9, 134, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 151, 4), // "name"
QT_MOC_LITERAL(11, 156, 5), // "count"
QT_MOC_LITERAL(12, 162, 7), // "isEmpty"
QT_MOC_LITERAL(13, 170, 4), // "item"
QT_MOC_LITERAL(14, 175, 8), // "QDomNode"
QT_MOC_LITERAL(15, 184, 5), // "index"
QT_MOC_LITERAL(16, 190, 6), // "length"
QT_MOC_LITERAL(17, 197, 9), // "namedItem"
QT_MOC_LITERAL(18, 207, 11), // "namedItemNS"
QT_MOC_LITERAL(19, 219, 5), // "nsURI"
QT_MOC_LITERAL(20, 225, 9), // "localName"
QT_MOC_LITERAL(21, 235, 6), // "__ne__"
QT_MOC_LITERAL(22, 242, 6), // "__eq__"
QT_MOC_LITERAL(23, 249, 15), // "removeNamedItem"
QT_MOC_LITERAL(24, 265, 17), // "removeNamedItemNS"
QT_MOC_LITERAL(25, 283, 12), // "setNamedItem"
QT_MOC_LITERAL(26, 296, 7), // "newNode"
QT_MOC_LITERAL(27, 304, 14), // "setNamedItemNS"
QT_MOC_LITERAL(28, 319, 4) // "size"

    },
    "PythonQtWrapper_QDomNamedNodeMap\0"
    "new_QDomNamedNodeMap\0QDomNamedNodeMap*\0"
    "\0QDomNamedNodeMap\0arg__1\0"
    "delete_QDomNamedNodeMap\0obj\0contains\0"
    "theWrappedObject\0name\0count\0isEmpty\0"
    "item\0QDomNode\0index\0length\0namedItem\0"
    "namedItemNS\0nsURI\0localName\0__ne__\0"
    "__eq__\0removeNamedItem\0removeNamedItemNS\0"
    "setNamedItem\0newNode\0setNamedItemNS\0"
    "size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomNamedNodeMap[] = {

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
       6,    1,  103,    3, 0x0a /* Public */,
       8,    2,  106,    3, 0x0a /* Public */,
      11,    1,  111,    3, 0x0a /* Public */,
      12,    1,  114,    3, 0x0a /* Public */,
      13,    2,  117,    3, 0x0a /* Public */,
      16,    1,  122,    3, 0x0a /* Public */,
      17,    2,  125,    3, 0x0a /* Public */,
      18,    3,  130,    3, 0x0a /* Public */,
      21,    2,  137,    3, 0x0a /* Public */,
      22,    2,  142,    3, 0x0a /* Public */,
      23,    2,  147,    3, 0x0a /* Public */,
      24,    3,  152,    3, 0x0a /* Public */,
      25,    2,  159,    3, 0x0a /* Public */,
      27,    2,  164,    3, 0x0a /* Public */,
      28,    1,  169,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    0x80000000 | 14, 0x80000000 | 2, QMetaType::Int,    9,   15,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 14, 0x80000000 | 2, QMetaType::QString,    9,   10,
    0x80000000 | 14, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   19,   20,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    0x80000000 | 14, 0x80000000 | 2, QMetaType::QString,    9,   10,
    0x80000000 | 14, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   19,   20,
    0x80000000 | 14, 0x80000000 | 2, 0x80000000 | 14,    9,   26,
    0x80000000 | 14, 0x80000000 | 2, 0x80000000 | 14,    9,   26,
    QMetaType::Int, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QDomNamedNodeMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomNamedNodeMap *_t = static_cast<PythonQtWrapper_QDomNamedNodeMap *>(_o);
        switch (_id) {
        case 0: { QDomNamedNodeMap* _r = _t->new_QDomNamedNodeMap();
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap**>(_a[0]) = _r; }  break;
        case 1: { QDomNamedNodeMap* _r = _t->new_QDomNamedNodeMap((*reinterpret_cast< const QDomNamedNodeMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNamedNodeMap**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomNamedNodeMap((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->contains((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->count((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isEmpty((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QDomNode _r = _t->item((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->length((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QDomNode _r = _t->namedItem((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 9: { QDomNode _r = _t->namedItemNS((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__ne__((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QDomNamedNodeMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__eq__((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QDomNamedNodeMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QDomNode _r = _t->removeNamedItem((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 13: { QDomNode _r = _t->removeNamedItemNS((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 14: { QDomNode _r = _t->setNamedItem((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 15: { QDomNode _r = _t->setNamedItemNS((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->size((*reinterpret_cast< QDomNamedNodeMap*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomNamedNodeMap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomNamedNodeMap.data,
      qt_meta_data_PythonQtWrapper_QDomNamedNodeMap,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomNamedNodeMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomNamedNodeMap::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomNamedNodeMap.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomNamedNodeMap*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomNamedNodeMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QDomNode_t {
    QByteArrayData data[121];
    char stringdata[1531];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomNode_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomNode_t qt_meta_stringdata_PythonQtWrapper_QDomNode = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PythonQtWrapper_QDomNode"
QT_MOC_LITERAL(1, 25, 12), // "new_QDomNode"
QT_MOC_LITERAL(2, 38, 9), // "QDomNode*"
QT_MOC_LITERAL(3, 48, 0), // ""
QT_MOC_LITERAL(4, 49, 8), // "QDomNode"
QT_MOC_LITERAL(5, 58, 6), // "arg__1"
QT_MOC_LITERAL(6, 65, 15), // "delete_QDomNode"
QT_MOC_LITERAL(7, 81, 3), // "obj"
QT_MOC_LITERAL(8, 85, 11), // "appendChild"
QT_MOC_LITERAL(9, 97, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 114, 8), // "newChild"
QT_MOC_LITERAL(11, 123, 10), // "childNodes"
QT_MOC_LITERAL(12, 134, 12), // "QDomNodeList"
QT_MOC_LITERAL(13, 147, 5), // "clear"
QT_MOC_LITERAL(14, 153, 9), // "cloneNode"
QT_MOC_LITERAL(15, 163, 4), // "deep"
QT_MOC_LITERAL(16, 168, 12), // "columnNumber"
QT_MOC_LITERAL(17, 181, 10), // "firstChild"
QT_MOC_LITERAL(18, 192, 17), // "firstChildElement"
QT_MOC_LITERAL(19, 210, 11), // "QDomElement"
QT_MOC_LITERAL(20, 222, 7), // "tagName"
QT_MOC_LITERAL(21, 230, 13), // "hasAttributes"
QT_MOC_LITERAL(22, 244, 13), // "hasChildNodes"
QT_MOC_LITERAL(23, 258, 11), // "insertAfter"
QT_MOC_LITERAL(24, 270, 8), // "refChild"
QT_MOC_LITERAL(25, 279, 12), // "insertBefore"
QT_MOC_LITERAL(26, 292, 6), // "isAttr"
QT_MOC_LITERAL(27, 299, 14), // "isCDATASection"
QT_MOC_LITERAL(28, 314, 15), // "isCharacterData"
QT_MOC_LITERAL(29, 330, 9), // "isComment"
QT_MOC_LITERAL(30, 340, 10), // "isDocument"
QT_MOC_LITERAL(31, 351, 18), // "isDocumentFragment"
QT_MOC_LITERAL(32, 370, 14), // "isDocumentType"
QT_MOC_LITERAL(33, 385, 9), // "isElement"
QT_MOC_LITERAL(34, 395, 8), // "isEntity"
QT_MOC_LITERAL(35, 404, 17), // "isEntityReference"
QT_MOC_LITERAL(36, 422, 10), // "isNotation"
QT_MOC_LITERAL(37, 433, 6), // "isNull"
QT_MOC_LITERAL(38, 440, 23), // "isProcessingInstruction"
QT_MOC_LITERAL(39, 464, 11), // "isSupported"
QT_MOC_LITERAL(40, 476, 7), // "feature"
QT_MOC_LITERAL(41, 484, 7), // "version"
QT_MOC_LITERAL(42, 492, 6), // "isText"
QT_MOC_LITERAL(43, 499, 9), // "lastChild"
QT_MOC_LITERAL(44, 509, 16), // "lastChildElement"
QT_MOC_LITERAL(45, 526, 10), // "lineNumber"
QT_MOC_LITERAL(46, 537, 9), // "localName"
QT_MOC_LITERAL(47, 547, 9), // "namedItem"
QT_MOC_LITERAL(48, 557, 4), // "name"
QT_MOC_LITERAL(49, 562, 12), // "namespaceURI"
QT_MOC_LITERAL(50, 575, 11), // "nextSibling"
QT_MOC_LITERAL(51, 587, 18), // "nextSiblingElement"
QT_MOC_LITERAL(52, 606, 6), // "taName"
QT_MOC_LITERAL(53, 613, 8), // "nodeName"
QT_MOC_LITERAL(54, 622, 8), // "nodeType"
QT_MOC_LITERAL(55, 631, 18), // "QDomNode::NodeType"
QT_MOC_LITERAL(56, 650, 9), // "nodeValue"
QT_MOC_LITERAL(57, 660, 9), // "normalize"
QT_MOC_LITERAL(58, 670, 6), // "__ne__"
QT_MOC_LITERAL(59, 677, 7), // "writeTo"
QT_MOC_LITERAL(60, 685, 12), // "QTextStream&"
QT_MOC_LITERAL(61, 698, 6), // "__eq__"
QT_MOC_LITERAL(62, 705, 13), // "ownerDocument"
QT_MOC_LITERAL(63, 719, 12), // "QDomDocument"
QT_MOC_LITERAL(64, 732, 10), // "parentNode"
QT_MOC_LITERAL(65, 743, 6), // "prefix"
QT_MOC_LITERAL(66, 750, 15), // "previousSibling"
QT_MOC_LITERAL(67, 766, 22), // "previousSiblingElement"
QT_MOC_LITERAL(68, 789, 11), // "removeChild"
QT_MOC_LITERAL(69, 801, 8), // "oldChild"
QT_MOC_LITERAL(70, 810, 12), // "replaceChild"
QT_MOC_LITERAL(71, 823, 4), // "save"
QT_MOC_LITERAL(72, 828, 6), // "arg__2"
QT_MOC_LITERAL(73, 835, 24), // "QDomNode::EncodingPolicy"
QT_MOC_LITERAL(74, 860, 6), // "arg__3"
QT_MOC_LITERAL(75, 867, 12), // "setNodeValue"
QT_MOC_LITERAL(76, 880, 9), // "setPrefix"
QT_MOC_LITERAL(77, 890, 3), // "pre"
QT_MOC_LITERAL(78, 894, 6), // "toAttr"
QT_MOC_LITERAL(79, 901, 8), // "QDomAttr"
QT_MOC_LITERAL(80, 910, 14), // "toCDATASection"
QT_MOC_LITERAL(81, 925, 16), // "QDomCDATASection"
QT_MOC_LITERAL(82, 942, 15), // "toCharacterData"
QT_MOC_LITERAL(83, 958, 17), // "QDomCharacterData"
QT_MOC_LITERAL(84, 976, 9), // "toComment"
QT_MOC_LITERAL(85, 986, 11), // "QDomComment"
QT_MOC_LITERAL(86, 998, 10), // "toDocument"
QT_MOC_LITERAL(87, 1009, 18), // "toDocumentFragment"
QT_MOC_LITERAL(88, 1028, 20), // "QDomDocumentFragment"
QT_MOC_LITERAL(89, 1049, 14), // "toDocumentType"
QT_MOC_LITERAL(90, 1064, 16), // "QDomDocumentType"
QT_MOC_LITERAL(91, 1081, 9), // "toElement"
QT_MOC_LITERAL(92, 1091, 8), // "toEntity"
QT_MOC_LITERAL(93, 1100, 10), // "QDomEntity"
QT_MOC_LITERAL(94, 1111, 17), // "toEntityReference"
QT_MOC_LITERAL(95, 1129, 19), // "QDomEntityReference"
QT_MOC_LITERAL(96, 1149, 10), // "toNotation"
QT_MOC_LITERAL(97, 1160, 12), // "QDomNotation"
QT_MOC_LITERAL(98, 1173, 23), // "toProcessingInstruction"
QT_MOC_LITERAL(99, 1197, 25), // "QDomProcessingInstruction"
QT_MOC_LITERAL(100, 1223, 6), // "toText"
QT_MOC_LITERAL(101, 1230, 8), // "QDomText"
QT_MOC_LITERAL(102, 1239, 11), // "__nonzero__"
QT_MOC_LITERAL(103, 1251, 14), // "EncodingPolicy"
QT_MOC_LITERAL(104, 1266, 20), // "EncodingFromDocument"
QT_MOC_LITERAL(105, 1287, 22), // "EncodingFromTextStream"
QT_MOC_LITERAL(106, 1310, 8), // "NodeType"
QT_MOC_LITERAL(107, 1319, 11), // "ElementNode"
QT_MOC_LITERAL(108, 1331, 13), // "AttributeNode"
QT_MOC_LITERAL(109, 1345, 8), // "TextNode"
QT_MOC_LITERAL(110, 1354, 16), // "CDATASectionNode"
QT_MOC_LITERAL(111, 1371, 19), // "EntityReferenceNode"
QT_MOC_LITERAL(112, 1391, 10), // "EntityNode"
QT_MOC_LITERAL(113, 1402, 25), // "ProcessingInstructionNode"
QT_MOC_LITERAL(114, 1428, 11), // "CommentNode"
QT_MOC_LITERAL(115, 1440, 12), // "DocumentNode"
QT_MOC_LITERAL(116, 1453, 16), // "DocumentTypeNode"
QT_MOC_LITERAL(117, 1470, 20), // "DocumentFragmentNode"
QT_MOC_LITERAL(118, 1491, 12), // "NotationNode"
QT_MOC_LITERAL(119, 1504, 8), // "BaseNode"
QT_MOC_LITERAL(120, 1513, 17) // "CharacterDataNode"

    },
    "PythonQtWrapper_QDomNode\0new_QDomNode\0"
    "QDomNode*\0\0QDomNode\0arg__1\0delete_QDomNode\0"
    "obj\0appendChild\0theWrappedObject\0"
    "newChild\0childNodes\0QDomNodeList\0clear\0"
    "cloneNode\0deep\0columnNumber\0firstChild\0"
    "firstChildElement\0QDomElement\0tagName\0"
    "hasAttributes\0hasChildNodes\0insertAfter\0"
    "refChild\0insertBefore\0isAttr\0"
    "isCDATASection\0isCharacterData\0isComment\0"
    "isDocument\0isDocumentFragment\0"
    "isDocumentType\0isElement\0isEntity\0"
    "isEntityReference\0isNotation\0isNull\0"
    "isProcessingInstruction\0isSupported\0"
    "feature\0version\0isText\0lastChild\0"
    "lastChildElement\0lineNumber\0localName\0"
    "namedItem\0name\0namespaceURI\0nextSibling\0"
    "nextSiblingElement\0taName\0nodeName\0"
    "nodeType\0QDomNode::NodeType\0nodeValue\0"
    "normalize\0__ne__\0writeTo\0QTextStream&\0"
    "__eq__\0ownerDocument\0QDomDocument\0"
    "parentNode\0prefix\0previousSibling\0"
    "previousSiblingElement\0removeChild\0"
    "oldChild\0replaceChild\0save\0arg__2\0"
    "QDomNode::EncodingPolicy\0arg__3\0"
    "setNodeValue\0setPrefix\0pre\0toAttr\0"
    "QDomAttr\0toCDATASection\0QDomCDATASection\0"
    "toCharacterData\0QDomCharacterData\0"
    "toComment\0QDomComment\0toDocument\0"
    "toDocumentFragment\0QDomDocumentFragment\0"
    "toDocumentType\0QDomDocumentType\0"
    "toElement\0toEntity\0QDomEntity\0"
    "toEntityReference\0QDomEntityReference\0"
    "toNotation\0QDomNotation\0toProcessingInstruction\0"
    "QDomProcessingInstruction\0toText\0"
    "QDomText\0__nonzero__\0EncodingPolicy\0"
    "EncodingFromDocument\0EncodingFromTextStream\0"
    "NodeType\0ElementNode\0AttributeNode\0"
    "TextNode\0CDATASectionNode\0EntityReferenceNode\0"
    "EntityNode\0ProcessingInstructionNode\0"
    "CommentNode\0DocumentNode\0DocumentTypeNode\0"
    "DocumentFragmentNode\0NotationNode\0"
    "BaseNode\0CharacterDataNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
       0,    0, // properties
       2,  656, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  384,    3, 0x0a /* Public */,
       1,    1,  385,    3, 0x0a /* Public */,
       6,    1,  388,    3, 0x0a /* Public */,
       8,    2,  391,    3, 0x0a /* Public */,
      11,    1,  396,    3, 0x0a /* Public */,
      13,    1,  399,    3, 0x0a /* Public */,
      14,    2,  402,    3, 0x0a /* Public */,
      14,    1,  407,    3, 0x2a /* Public | MethodCloned */,
      16,    1,  410,    3, 0x0a /* Public */,
      17,    1,  413,    3, 0x0a /* Public */,
      18,    2,  416,    3, 0x0a /* Public */,
      18,    1,  421,    3, 0x2a /* Public | MethodCloned */,
      21,    1,  424,    3, 0x0a /* Public */,
      22,    1,  427,    3, 0x0a /* Public */,
      23,    3,  430,    3, 0x0a /* Public */,
      25,    3,  437,    3, 0x0a /* Public */,
      26,    1,  444,    3, 0x0a /* Public */,
      27,    1,  447,    3, 0x0a /* Public */,
      28,    1,  450,    3, 0x0a /* Public */,
      29,    1,  453,    3, 0x0a /* Public */,
      30,    1,  456,    3, 0x0a /* Public */,
      31,    1,  459,    3, 0x0a /* Public */,
      32,    1,  462,    3, 0x0a /* Public */,
      33,    1,  465,    3, 0x0a /* Public */,
      34,    1,  468,    3, 0x0a /* Public */,
      35,    1,  471,    3, 0x0a /* Public */,
      36,    1,  474,    3, 0x0a /* Public */,
      37,    1,  477,    3, 0x0a /* Public */,
      38,    1,  480,    3, 0x0a /* Public */,
      39,    3,  483,    3, 0x0a /* Public */,
      42,    1,  490,    3, 0x0a /* Public */,
      43,    1,  493,    3, 0x0a /* Public */,
      44,    2,  496,    3, 0x0a /* Public */,
      44,    1,  501,    3, 0x2a /* Public | MethodCloned */,
      45,    1,  504,    3, 0x0a /* Public */,
      46,    1,  507,    3, 0x0a /* Public */,
      47,    2,  510,    3, 0x0a /* Public */,
      49,    1,  515,    3, 0x0a /* Public */,
      50,    1,  518,    3, 0x0a /* Public */,
      51,    2,  521,    3, 0x0a /* Public */,
      51,    1,  526,    3, 0x2a /* Public | MethodCloned */,
      53,    1,  529,    3, 0x0a /* Public */,
      54,    1,  532,    3, 0x0a /* Public */,
      56,    1,  535,    3, 0x0a /* Public */,
      57,    1,  538,    3, 0x0a /* Public */,
      58,    2,  541,    3, 0x0a /* Public */,
      59,    2,  546,    3, 0x0a /* Public */,
      61,    2,  551,    3, 0x0a /* Public */,
      62,    1,  556,    3, 0x0a /* Public */,
      64,    1,  559,    3, 0x0a /* Public */,
      65,    1,  562,    3, 0x0a /* Public */,
      66,    1,  565,    3, 0x0a /* Public */,
      67,    2,  568,    3, 0x0a /* Public */,
      67,    1,  573,    3, 0x2a /* Public | MethodCloned */,
      68,    2,  576,    3, 0x0a /* Public */,
      70,    3,  581,    3, 0x0a /* Public */,
      71,    4,  588,    3, 0x0a /* Public */,
      71,    3,  597,    3, 0x2a /* Public | MethodCloned */,
      75,    2,  604,    3, 0x0a /* Public */,
      76,    2,  609,    3, 0x0a /* Public */,
      78,    1,  614,    3, 0x0a /* Public */,
      80,    1,  617,    3, 0x0a /* Public */,
      82,    1,  620,    3, 0x0a /* Public */,
      84,    1,  623,    3, 0x0a /* Public */,
      86,    1,  626,    3, 0x0a /* Public */,
      87,    1,  629,    3, 0x0a /* Public */,
      89,    1,  632,    3, 0x0a /* Public */,
      91,    1,  635,    3, 0x0a /* Public */,
      92,    1,  638,    3, 0x0a /* Public */,
      94,    1,  641,    3, 0x0a /* Public */,
      96,    1,  644,    3, 0x0a /* Public */,
      98,    1,  647,    3, 0x0a /* Public */,
     100,    1,  650,    3, 0x0a /* Public */,
     102,    1,  653,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 4, 0x80000000 | 2, 0x80000000 | 4,    9,   10,
    0x80000000 | 12, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2, QMetaType::Bool,    9,   15,
    0x80000000 | 4, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2,    9,
    0x80000000 | 19, 0x80000000 | 2, QMetaType::QString,    9,   20,
    0x80000000 | 19, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 4,    9,   10,   24,
    0x80000000 | 4, 0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 4,    9,   10,   24,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   40,   41,
    QMetaType::Bool, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2,    9,
    0x80000000 | 19, 0x80000000 | 2, QMetaType::QString,    9,   20,
    0x80000000 | 19, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2, QMetaType::QString,    9,   48,
    QMetaType::QString, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2,    9,
    0x80000000 | 19, 0x80000000 | 2, QMetaType::QString,    9,   52,
    0x80000000 | 19, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    0x80000000 | 55, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 60,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    0x80000000 | 63, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2,    9,
    0x80000000 | 19, 0x80000000 | 2, QMetaType::QString,    9,   20,
    0x80000000 | 19, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2, 0x80000000 | 4,    9,   69,
    0x80000000 | 4, 0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 4,    9,   10,   69,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 60, QMetaType::Int, 0x80000000 | 73,    9,    5,   72,   74,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 60, QMetaType::Int,    9,    5,   72,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   77,
    0x80000000 | 79, 0x80000000 | 2,    9,
    0x80000000 | 81, 0x80000000 | 2,    9,
    0x80000000 | 83, 0x80000000 | 2,    9,
    0x80000000 | 85, 0x80000000 | 2,    9,
    0x80000000 | 63, 0x80000000 | 2,    9,
    0x80000000 | 88, 0x80000000 | 2,    9,
    0x80000000 | 90, 0x80000000 | 2,    9,
    0x80000000 | 19, 0x80000000 | 2,    9,
    0x80000000 | 93, 0x80000000 | 2,    9,
    0x80000000 | 95, 0x80000000 | 2,    9,
    0x80000000 | 97, 0x80000000 | 2,    9,
    0x80000000 | 99, 0x80000000 | 2,    9,
    0x80000000 | 101, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    7,

 // enums: name, flags, count, data
     103, 0x0,    2,  664,
     106, 0x0,   14,  668,

 // enum data: key, value
     104, uint(PythonQtWrapper_QDomNode::EncodingFromDocument),
     105, uint(PythonQtWrapper_QDomNode::EncodingFromTextStream),
     107, uint(PythonQtWrapper_QDomNode::ElementNode),
     108, uint(PythonQtWrapper_QDomNode::AttributeNode),
     109, uint(PythonQtWrapper_QDomNode::TextNode),
     110, uint(PythonQtWrapper_QDomNode::CDATASectionNode),
     111, uint(PythonQtWrapper_QDomNode::EntityReferenceNode),
     112, uint(PythonQtWrapper_QDomNode::EntityNode),
     113, uint(PythonQtWrapper_QDomNode::ProcessingInstructionNode),
     114, uint(PythonQtWrapper_QDomNode::CommentNode),
     115, uint(PythonQtWrapper_QDomNode::DocumentNode),
     116, uint(PythonQtWrapper_QDomNode::DocumentTypeNode),
     117, uint(PythonQtWrapper_QDomNode::DocumentFragmentNode),
     118, uint(PythonQtWrapper_QDomNode::NotationNode),
     119, uint(PythonQtWrapper_QDomNode::BaseNode),
     120, uint(PythonQtWrapper_QDomNode::CharacterDataNode),

       0        // eod
};

void PythonQtWrapper_QDomNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomNode *_t = static_cast<PythonQtWrapper_QDomNode *>(_o);
        switch (_id) {
        case 0: { QDomNode* _r = _t->new_QDomNode();
            if (_a[0]) *reinterpret_cast< QDomNode**>(_a[0]) = _r; }  break;
        case 1: { QDomNode* _r = _t->new_QDomNode((*reinterpret_cast< const QDomNode(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomNode((*reinterpret_cast< QDomNode*(*)>(_a[1]))); break;
        case 3: { QDomNode _r = _t->appendChild((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 4: { QDomNodeList _r = _t->childNodes((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNodeList*>(_a[0]) = _r; }  break;
        case 5: _t->clear((*reinterpret_cast< QDomNode*(*)>(_a[1]))); break;
        case 6: { QDomNode _r = _t->cloneNode((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 7: { QDomNode _r = _t->cloneNode((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->columnNumber((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QDomNode _r = _t->firstChild((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 10: { QDomElement _r = _t->firstChildElement((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 11: { QDomElement _r = _t->firstChildElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->hasAttributes((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->hasChildNodes((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QDomNode _r = _t->insertAfter((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])),(*reinterpret_cast< const QDomNode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 15: { QDomNode _r = _t->insertBefore((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])),(*reinterpret_cast< const QDomNode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isAttr((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isCDATASection((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->isCharacterData((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->isComment((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isDocument((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isDocumentFragment((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isDocumentType((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isEntity((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isEntityReference((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isNotation((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->isNull((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isProcessingInstruction((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isSupported((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isText((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { QDomNode _r = _t->lastChild((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 32: { QDomElement _r = _t->lastChildElement((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 33: { QDomElement _r = _t->lastChildElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->lineNumber((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->localName((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { QDomNode _r = _t->namedItem((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->namespaceURI((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { QDomNode _r = _t->nextSibling((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 39: { QDomElement _r = _t->nextSiblingElement((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 40: { QDomElement _r = _t->nextSiblingElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->nodeName((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 42: { QDomNode::NodeType _r = _t->nodeType((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode::NodeType*>(_a[0]) = _r; }  break;
        case 43: { QString _r = _t->nodeValue((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 44: _t->normalize((*reinterpret_cast< QDomNode*(*)>(_a[1]))); break;
        case 45: { bool _r = _t->__ne__((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: _t->writeTo((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2]))); break;
        case 47: { bool _r = _t->__eq__((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { QDomDocument _r = _t->ownerDocument((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument*>(_a[0]) = _r; }  break;
        case 49: { QDomNode _r = _t->parentNode((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 50: { QString _r = _t->prefix((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 51: { QDomNode _r = _t->previousSibling((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 52: { QDomElement _r = _t->previousSiblingElement((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 53: { QDomElement _r = _t->previousSiblingElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 54: { QDomNode _r = _t->removeChild((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 55: { QDomNode _r = _t->replaceChild((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QDomNode(*)>(_a[2])),(*reinterpret_cast< const QDomNode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 56: _t->save((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QDomNode::EncodingPolicy(*)>(_a[4]))); break;
        case 57: _t->save((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< QTextStream(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 58: _t->setNodeValue((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 59: _t->setPrefix((*reinterpret_cast< QDomNode*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 60: { QDomAttr _r = _t->toAttr((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomAttr*>(_a[0]) = _r; }  break;
        case 61: { QDomCDATASection _r = _t->toCDATASection((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomCDATASection*>(_a[0]) = _r; }  break;
        case 62: { QDomCharacterData _r = _t->toCharacterData((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomCharacterData*>(_a[0]) = _r; }  break;
        case 63: { QDomComment _r = _t->toComment((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomComment*>(_a[0]) = _r; }  break;
        case 64: { QDomDocument _r = _t->toDocument((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocument*>(_a[0]) = _r; }  break;
        case 65: { QDomDocumentFragment _r = _t->toDocumentFragment((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentFragment*>(_a[0]) = _r; }  break;
        case 66: { QDomDocumentType _r = _t->toDocumentType((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomDocumentType*>(_a[0]) = _r; }  break;
        case 67: { QDomElement _r = _t->toElement((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomElement*>(_a[0]) = _r; }  break;
        case 68: { QDomEntity _r = _t->toEntity((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomEntity*>(_a[0]) = _r; }  break;
        case 69: { QDomEntityReference _r = _t->toEntityReference((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomEntityReference*>(_a[0]) = _r; }  break;
        case 70: { QDomNotation _r = _t->toNotation((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNotation*>(_a[0]) = _r; }  break;
        case 71: { QDomProcessingInstruction _r = _t->toProcessingInstruction((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomProcessingInstruction*>(_a[0]) = _r; }  break;
        case 72: { QDomText _r = _t->toText((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomText*>(_a[0]) = _r; }  break;
        case 73: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomNode*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomNode.data,
      qt_meta_data_PythonQtWrapper_QDomNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomNode.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomNode*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 74;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QDomNodeList_t {
    QByteArrayData data[19];
    char stringdata[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomNodeList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomNodeList_t qt_meta_stringdata_PythonQtWrapper_QDomNodeList = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QDomNodeList"
QT_MOC_LITERAL(1, 29, 16), // "new_QDomNodeList"
QT_MOC_LITERAL(2, 46, 13), // "QDomNodeList*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 12), // "QDomNodeList"
QT_MOC_LITERAL(5, 74, 6), // "arg__1"
QT_MOC_LITERAL(6, 81, 19), // "delete_QDomNodeList"
QT_MOC_LITERAL(7, 101, 3), // "obj"
QT_MOC_LITERAL(8, 105, 2), // "at"
QT_MOC_LITERAL(9, 108, 8), // "QDomNode"
QT_MOC_LITERAL(10, 117, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 134, 5), // "index"
QT_MOC_LITERAL(12, 140, 5), // "count"
QT_MOC_LITERAL(13, 146, 7), // "isEmpty"
QT_MOC_LITERAL(14, 154, 4), // "item"
QT_MOC_LITERAL(15, 159, 6), // "length"
QT_MOC_LITERAL(16, 166, 6), // "__ne__"
QT_MOC_LITERAL(17, 173, 6), // "__eq__"
QT_MOC_LITERAL(18, 180, 4) // "size"

    },
    "PythonQtWrapper_QDomNodeList\0"
    "new_QDomNodeList\0QDomNodeList*\0\0"
    "QDomNodeList\0arg__1\0delete_QDomNodeList\0"
    "obj\0at\0QDomNode\0theWrappedObject\0index\0"
    "count\0isEmpty\0item\0length\0__ne__\0"
    "__eq__\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomNodeList[] = {

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
       6,    1,   73,    3, 0x0a /* Public */,
       8,    2,   76,    3, 0x0a /* Public */,
      12,    1,   81,    3, 0x0a /* Public */,
      13,    1,   84,    3, 0x0a /* Public */,
      14,    2,   87,    3, 0x0a /* Public */,
      15,    1,   92,    3, 0x0a /* Public */,
      16,    2,   95,    3, 0x0a /* Public */,
      17,    2,  100,    3, 0x0a /* Public */,
      18,    1,  105,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2, QMetaType::Int,   10,   11,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    0x80000000 | 9, 0x80000000 | 2, QMetaType::Int,   10,   11,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Int, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QDomNodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomNodeList *_t = static_cast<PythonQtWrapper_QDomNodeList *>(_o);
        switch (_id) {
        case 0: { QDomNodeList* _r = _t->new_QDomNodeList();
            if (_a[0]) *reinterpret_cast< QDomNodeList**>(_a[0]) = _r; }  break;
        case 1: { QDomNodeList* _r = _t->new_QDomNodeList((*reinterpret_cast< const QDomNodeList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNodeList**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomNodeList((*reinterpret_cast< QDomNodeList*(*)>(_a[1]))); break;
        case 3: { QDomNode _r = _t->at((*reinterpret_cast< QDomNodeList*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->count((*reinterpret_cast< QDomNodeList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isEmpty((*reinterpret_cast< QDomNodeList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QDomNode _r = _t->item((*reinterpret_cast< QDomNodeList*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomNode*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->length((*reinterpret_cast< QDomNodeList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QDomNodeList*(*)>(_a[1])),(*reinterpret_cast< const QDomNodeList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__eq__((*reinterpret_cast< QDomNodeList*(*)>(_a[1])),(*reinterpret_cast< const QDomNodeList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->size((*reinterpret_cast< QDomNodeList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomNodeList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomNodeList.data,
      qt_meta_data_PythonQtWrapper_QDomNodeList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomNodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomNodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomNodeList.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomNodeList*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomNodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomNotation_t {
    QByteArrayData data[12];
    char stringdata[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomNotation_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomNotation_t qt_meta_stringdata_PythonQtWrapper_QDomNotation = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QDomNotation"
QT_MOC_LITERAL(1, 29, 16), // "new_QDomNotation"
QT_MOC_LITERAL(2, 46, 13), // "QDomNotation*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 12), // "QDomNotation"
QT_MOC_LITERAL(5, 74, 1), // "x"
QT_MOC_LITERAL(6, 76, 19), // "delete_QDomNotation"
QT_MOC_LITERAL(7, 96, 3), // "obj"
QT_MOC_LITERAL(8, 100, 8), // "publicId"
QT_MOC_LITERAL(9, 109, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 126, 8), // "systemId"
QT_MOC_LITERAL(11, 135, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomNotation\0"
    "new_QDomNotation\0QDomNotation*\0\0"
    "QDomNotation\0x\0delete_QDomNotation\0"
    "obj\0publicId\0theWrappedObject\0systemId\0"
    "__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomNotation[] = {

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
       1,    1,   45,    3, 0x0a /* Public */,
       6,    1,   48,    3, 0x0a /* Public */,
       8,    1,   51,    3, 0x0a /* Public */,
      10,    1,   54,    3, 0x0a /* Public */,
      11,    1,   57,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomNotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomNotation *_t = static_cast<PythonQtWrapper_QDomNotation *>(_o);
        switch (_id) {
        case 0: { QDomNotation* _r = _t->new_QDomNotation();
            if (_a[0]) *reinterpret_cast< QDomNotation**>(_a[0]) = _r; }  break;
        case 1: { QDomNotation* _r = _t->new_QDomNotation((*reinterpret_cast< const QDomNotation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomNotation**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomNotation((*reinterpret_cast< QDomNotation*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->publicId((*reinterpret_cast< QDomNotation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { QString _r = _t->systemId((*reinterpret_cast< QDomNotation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomNotation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomNotation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomNotation.data,
      qt_meta_data_PythonQtWrapper_QDomNotation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomNotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomNotation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomNotation.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomNotation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomNotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomProcessingInstruction_t {
    QByteArrayData data[14];
    char stringdata[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomProcessingInstruction_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomProcessingInstruction_t qt_meta_stringdata_PythonQtWrapper_QDomProcessingInstruction = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_QDomProcessin..."
QT_MOC_LITERAL(1, 42, 29), // "new_QDomProcessingInstruction"
QT_MOC_LITERAL(2, 72, 26), // "QDomProcessingInstruction*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 25), // "QDomProcessingInstruction"
QT_MOC_LITERAL(5, 126, 1), // "x"
QT_MOC_LITERAL(6, 128, 32), // "delete_QDomProcessingInstruction"
QT_MOC_LITERAL(7, 161, 3), // "obj"
QT_MOC_LITERAL(8, 165, 4), // "data"
QT_MOC_LITERAL(9, 170, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 187, 7), // "setData"
QT_MOC_LITERAL(11, 195, 1), // "d"
QT_MOC_LITERAL(12, 197, 6), // "target"
QT_MOC_LITERAL(13, 204, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomProcessingInstruction\0"
    "new_QDomProcessingInstruction\0"
    "QDomProcessingInstruction*\0\0"
    "QDomProcessingInstruction\0x\0"
    "delete_QDomProcessingInstruction\0obj\0"
    "data\0theWrappedObject\0setData\0d\0target\0"
    "__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomProcessingInstruction[] = {

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
       1,    0,   49,    3, 0x0a /* Public */,
       1,    1,   50,    3, 0x0a /* Public */,
       6,    1,   53,    3, 0x0a /* Public */,
       8,    1,   56,    3, 0x0a /* Public */,
      10,    2,   59,    3, 0x0a /* Public */,
      12,    1,   64,    3, 0x0a /* Public */,
      13,    1,   67,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   11,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomProcessingInstruction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomProcessingInstruction *_t = static_cast<PythonQtWrapper_QDomProcessingInstruction *>(_o);
        switch (_id) {
        case 0: { QDomProcessingInstruction* _r = _t->new_QDomProcessingInstruction();
            if (_a[0]) *reinterpret_cast< QDomProcessingInstruction**>(_a[0]) = _r; }  break;
        case 1: { QDomProcessingInstruction* _r = _t->new_QDomProcessingInstruction((*reinterpret_cast< const QDomProcessingInstruction(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomProcessingInstruction**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomProcessingInstruction((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->data((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->setData((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: { QString _r = _t->target((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomProcessingInstruction*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomProcessingInstruction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomProcessingInstruction.data,
      qt_meta_data_PythonQtWrapper_QDomProcessingInstruction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomProcessingInstruction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomProcessingInstruction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomProcessingInstruction.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomProcessingInstruction*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomProcessingInstruction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QDomText_t {
    QByteArrayData data[12];
    char stringdata[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QDomText_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QDomText_t qt_meta_stringdata_PythonQtWrapper_QDomText = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PythonQtWrapper_QDomText"
QT_MOC_LITERAL(1, 25, 12), // "new_QDomText"
QT_MOC_LITERAL(2, 38, 9), // "QDomText*"
QT_MOC_LITERAL(3, 48, 0), // ""
QT_MOC_LITERAL(4, 49, 8), // "QDomText"
QT_MOC_LITERAL(5, 58, 1), // "x"
QT_MOC_LITERAL(6, 60, 15), // "delete_QDomText"
QT_MOC_LITERAL(7, 76, 3), // "obj"
QT_MOC_LITERAL(8, 80, 9), // "splitText"
QT_MOC_LITERAL(9, 90, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 107, 6), // "offset"
QT_MOC_LITERAL(11, 114, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QDomText\0new_QDomText\0"
    "QDomText*\0\0QDomText\0x\0delete_QDomText\0"
    "obj\0splitText\0theWrappedObject\0offset\0"
    "__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QDomText[] = {

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
       1,    1,   40,    3, 0x0a /* Public */,
       6,    1,   43,    3, 0x0a /* Public */,
       8,    2,   46,    3, 0x0a /* Public */,
      11,    1,   51,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 4, 0x80000000 | 2, QMetaType::Int,    9,   10,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QDomText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QDomText *_t = static_cast<PythonQtWrapper_QDomText *>(_o);
        switch (_id) {
        case 0: { QDomText* _r = _t->new_QDomText();
            if (_a[0]) *reinterpret_cast< QDomText**>(_a[0]) = _r; }  break;
        case 1: { QDomText* _r = _t->new_QDomText((*reinterpret_cast< const QDomText(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDomText**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QDomText((*reinterpret_cast< QDomText*(*)>(_a[1]))); break;
        case 3: { QDomText _r = _t->splitText((*reinterpret_cast< QDomText*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDomText*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->__nonzero__((*reinterpret_cast< QDomText*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QDomText::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QDomText.data,
      qt_meta_data_PythonQtWrapper_QDomText,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QDomText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QDomText::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QDomText.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QDomText*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QDomText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlAttributes_t {
    QByteArrayData data[20];
    char stringdata[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlAttributes_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlAttributes_t qt_meta_stringdata_PythonQtWrapper_QXmlAttributes = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QXmlAttributes"
QT_MOC_LITERAL(1, 31, 18), // "new_QXmlAttributes"
QT_MOC_LITERAL(2, 50, 15), // "QXmlAttributes*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 14), // "QXmlAttributes"
QT_MOC_LITERAL(5, 82, 5), // "other"
QT_MOC_LITERAL(6, 88, 21), // "delete_QXmlAttributes"
QT_MOC_LITERAL(7, 110, 3), // "obj"
QT_MOC_LITERAL(8, 114, 6), // "append"
QT_MOC_LITERAL(9, 121, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 138, 5), // "qName"
QT_MOC_LITERAL(11, 144, 3), // "uri"
QT_MOC_LITERAL(12, 148, 9), // "localPart"
QT_MOC_LITERAL(13, 158, 5), // "value"
QT_MOC_LITERAL(14, 164, 5), // "clear"
QT_MOC_LITERAL(15, 170, 5), // "count"
QT_MOC_LITERAL(16, 176, 5), // "index"
QT_MOC_LITERAL(17, 182, 6), // "length"
QT_MOC_LITERAL(18, 189, 9), // "localName"
QT_MOC_LITERAL(19, 199, 4) // "type"

    },
    "PythonQtWrapper_QXmlAttributes\0"
    "new_QXmlAttributes\0QXmlAttributes*\0\0"
    "QXmlAttributes\0other\0delete_QXmlAttributes\0"
    "obj\0append\0theWrappedObject\0qName\0uri\0"
    "localPart\0value\0clear\0count\0index\0"
    "length\0localName\0type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlAttributes[] = {

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
       8,    5,  111,    3, 0x0a /* Public */,
      14,    1,  122,    3, 0x0a /* Public */,
      15,    1,  125,    3, 0x0a /* Public */,
      16,    2,  128,    3, 0x0a /* Public */,
      16,    3,  133,    3, 0x0a /* Public */,
      17,    1,  140,    3, 0x0a /* Public */,
      18,    2,  143,    3, 0x0a /* Public */,
      10,    2,  148,    3, 0x0a /* Public */,
      19,    2,  153,    3, 0x0a /* Public */,
      19,    3,  158,    3, 0x0a /* Public */,
      19,    2,  165,    3, 0x0a /* Public */,
      11,    2,  170,    3, 0x0a /* Public */,
      13,    2,  175,    3, 0x0a /* Public */,
      13,    3,  180,    3, 0x0a /* Public */,
      13,    2,  187,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   11,   12,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,    9,   16,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,    9,   16,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   11,   18,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,    9,   16,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,    9,   16,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString,    9,   10,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    9,   11,   18,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,    9,   16,

       0        // eod
};

void PythonQtWrapper_QXmlAttributes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlAttributes *_t = static_cast<PythonQtWrapper_QXmlAttributes *>(_o);
        switch (_id) {
        case 0: { QXmlAttributes* _r = _t->new_QXmlAttributes();
            if (_a[0]) *reinterpret_cast< QXmlAttributes**>(_a[0]) = _r; }  break;
        case 1: { QXmlAttributes* _r = _t->new_QXmlAttributes((*reinterpret_cast< const QXmlAttributes(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlAttributes**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlAttributes((*reinterpret_cast< QXmlAttributes*(*)>(_a[1]))); break;
        case 3: _t->append((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 4: _t->clear((*reinterpret_cast< QXmlAttributes*(*)>(_a[1]))); break;
        case 5: { int _r = _t->count((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->index((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->index((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->length((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->localName((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->qName((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->type((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->type((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->type((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->uri((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->value((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->value((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->value((*reinterpret_cast< QXmlAttributes*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlAttributes::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlAttributes.data,
      qt_meta_data_PythonQtWrapper_QXmlAttributes,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlAttributes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlAttributes::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlAttributes.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlAttributes*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlAttributes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QXmlContentHandler_t {
    QByteArrayData data[32];
    char stringdata[411];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlContentHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlContentHandler_t qt_meta_stringdata_PythonQtWrapper_QXmlContentHandler = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QXmlContentHa..."
QT_MOC_LITERAL(1, 35, 22), // "new_QXmlContentHandler"
QT_MOC_LITERAL(2, 58, 19), // "QXmlContentHandler*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 25), // "delete_QXmlContentHandler"
QT_MOC_LITERAL(5, 105, 3), // "obj"
QT_MOC_LITERAL(6, 109, 10), // "characters"
QT_MOC_LITERAL(7, 120, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 137, 2), // "ch"
QT_MOC_LITERAL(9, 140, 11), // "endDocument"
QT_MOC_LITERAL(10, 152, 10), // "endElement"
QT_MOC_LITERAL(11, 163, 12), // "namespaceURI"
QT_MOC_LITERAL(12, 176, 9), // "localName"
QT_MOC_LITERAL(13, 186, 5), // "qName"
QT_MOC_LITERAL(14, 192, 16), // "endPrefixMapping"
QT_MOC_LITERAL(15, 209, 6), // "prefix"
QT_MOC_LITERAL(16, 216, 11), // "errorString"
QT_MOC_LITERAL(17, 228, 19), // "ignorableWhitespace"
QT_MOC_LITERAL(18, 248, 21), // "processingInstruction"
QT_MOC_LITERAL(19, 270, 6), // "target"
QT_MOC_LITERAL(20, 277, 4), // "data"
QT_MOC_LITERAL(21, 282, 18), // "setDocumentLocator"
QT_MOC_LITERAL(22, 301, 12), // "QXmlLocator*"
QT_MOC_LITERAL(23, 314, 7), // "locator"
QT_MOC_LITERAL(24, 322, 13), // "skippedEntity"
QT_MOC_LITERAL(25, 336, 4), // "name"
QT_MOC_LITERAL(26, 341, 13), // "startDocument"
QT_MOC_LITERAL(27, 355, 12), // "startElement"
QT_MOC_LITERAL(28, 368, 14), // "QXmlAttributes"
QT_MOC_LITERAL(29, 383, 4), // "atts"
QT_MOC_LITERAL(30, 388, 18), // "startPrefixMapping"
QT_MOC_LITERAL(31, 407, 3) // "uri"

    },
    "PythonQtWrapper_QXmlContentHandler\0"
    "new_QXmlContentHandler\0QXmlContentHandler*\0"
    "\0delete_QXmlContentHandler\0obj\0"
    "characters\0theWrappedObject\0ch\0"
    "endDocument\0endElement\0namespaceURI\0"
    "localName\0qName\0endPrefixMapping\0"
    "prefix\0errorString\0ignorableWhitespace\0"
    "processingInstruction\0target\0data\0"
    "setDocumentLocator\0QXmlLocator*\0locator\0"
    "skippedEntity\0name\0startDocument\0"
    "startElement\0QXmlAttributes\0atts\0"
    "startPrefixMapping\0uri"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlContentHandler[] = {

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
       1,    0,   84,    3, 0x0a /* Public */,
       4,    1,   85,    3, 0x0a /* Public */,
       6,    2,   88,    3, 0x0a /* Public */,
       9,    1,   93,    3, 0x0a /* Public */,
      10,    4,   96,    3, 0x0a /* Public */,
      14,    2,  105,    3, 0x0a /* Public */,
      16,    1,  110,    3, 0x0a /* Public */,
      17,    2,  113,    3, 0x0a /* Public */,
      18,    3,  118,    3, 0x0a /* Public */,
      21,    2,  125,    3, 0x0a /* Public */,
      24,    2,  130,    3, 0x0a /* Public */,
      26,    1,  135,    3, 0x0a /* Public */,
      27,    5,  138,    3, 0x0a /* Public */,
      30,    3,  149,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,    8,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   11,   12,   13,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   15,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    7,   19,   20,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,    7,   23,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   25,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 28,    7,   11,   12,   13,   29,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    7,   15,   31,

       0        // eod
};

void PythonQtWrapper_QXmlContentHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlContentHandler *_t = static_cast<PythonQtWrapper_QXmlContentHandler *>(_o);
        switch (_id) {
        case 0: { QXmlContentHandler* _r = _t->new_QXmlContentHandler();
            if (_a[0]) *reinterpret_cast< QXmlContentHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlContentHandler((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->characters((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->endDocument((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->endElement((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->endPrefixMapping((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->errorString((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->ignorableWhitespace((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->processingInstruction((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setDocumentLocator((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< QXmlLocator*(*)>(_a[2]))); break;
        case 10: { bool _r = _t->skippedEntity((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->startDocument((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->startElement((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QXmlAttributes(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->startPrefixMapping((*reinterpret_cast< QXmlContentHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlContentHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlContentHandler.data,
      qt_meta_data_PythonQtWrapper_QXmlContentHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlContentHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlContentHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlContentHandler.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlContentHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlContentHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QXmlDTDHandler_t {
    QByteArrayData data[14];
    char stringdata[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlDTDHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlDTDHandler_t qt_meta_stringdata_PythonQtWrapper_QXmlDTDHandler = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QXmlDTDHandler"
QT_MOC_LITERAL(1, 31, 18), // "new_QXmlDTDHandler"
QT_MOC_LITERAL(2, 50, 15), // "QXmlDTDHandler*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 21), // "delete_QXmlDTDHandler"
QT_MOC_LITERAL(5, 89, 3), // "obj"
QT_MOC_LITERAL(6, 93, 11), // "errorString"
QT_MOC_LITERAL(7, 105, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 122, 12), // "notationDecl"
QT_MOC_LITERAL(9, 135, 4), // "name"
QT_MOC_LITERAL(10, 140, 8), // "publicId"
QT_MOC_LITERAL(11, 149, 8), // "systemId"
QT_MOC_LITERAL(12, 158, 18), // "unparsedEntityDecl"
QT_MOC_LITERAL(13, 177, 12) // "notationName"

    },
    "PythonQtWrapper_QXmlDTDHandler\0"
    "new_QXmlDTDHandler\0QXmlDTDHandler*\0\0"
    "delete_QXmlDTDHandler\0obj\0errorString\0"
    "theWrappedObject\0notationDecl\0name\0"
    "publicId\0systemId\0unparsedEntityDecl\0"
    "notationName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlDTDHandler[] = {

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
       8,    4,   46,    3, 0x0a /* Public */,
      12,    5,   55,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    9,   10,   11,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    9,   10,   11,   13,

       0        // eod
};

void PythonQtWrapper_QXmlDTDHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlDTDHandler *_t = static_cast<PythonQtWrapper_QXmlDTDHandler *>(_o);
        switch (_id) {
        case 0: { QXmlDTDHandler* _r = _t->new_QXmlDTDHandler();
            if (_a[0]) *reinterpret_cast< QXmlDTDHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlDTDHandler((*reinterpret_cast< QXmlDTDHandler*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->errorString((*reinterpret_cast< QXmlDTDHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->notationDecl((*reinterpret_cast< QXmlDTDHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->unparsedEntityDecl((*reinterpret_cast< QXmlDTDHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlDTDHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlDTDHandler.data,
      qt_meta_data_PythonQtWrapper_QXmlDTDHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlDTDHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlDTDHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlDTDHandler.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlDTDHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlDTDHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlDeclHandler_t {
    QByteArrayData data[19];
    char stringdata[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlDeclHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlDeclHandler_t qt_meta_stringdata_PythonQtWrapper_QXmlDeclHandler = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QXmlDeclHandler"
QT_MOC_LITERAL(1, 32, 19), // "new_QXmlDeclHandler"
QT_MOC_LITERAL(2, 52, 16), // "QXmlDeclHandler*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 22), // "delete_QXmlDeclHandler"
QT_MOC_LITERAL(5, 93, 3), // "obj"
QT_MOC_LITERAL(6, 97, 13), // "attributeDecl"
QT_MOC_LITERAL(7, 111, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 128, 5), // "eName"
QT_MOC_LITERAL(9, 134, 5), // "aName"
QT_MOC_LITERAL(10, 140, 4), // "type"
QT_MOC_LITERAL(11, 145, 12), // "valueDefault"
QT_MOC_LITERAL(12, 158, 5), // "value"
QT_MOC_LITERAL(13, 164, 11), // "errorString"
QT_MOC_LITERAL(14, 176, 18), // "externalEntityDecl"
QT_MOC_LITERAL(15, 195, 4), // "name"
QT_MOC_LITERAL(16, 200, 8), // "publicId"
QT_MOC_LITERAL(17, 209, 8), // "systemId"
QT_MOC_LITERAL(18, 218, 18) // "internalEntityDecl"

    },
    "PythonQtWrapper_QXmlDeclHandler\0"
    "new_QXmlDeclHandler\0QXmlDeclHandler*\0"
    "\0delete_QXmlDeclHandler\0obj\0attributeDecl\0"
    "theWrappedObject\0eName\0aName\0type\0"
    "valueDefault\0value\0errorString\0"
    "externalEntityDecl\0name\0publicId\0"
    "systemId\0internalEntityDecl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlDeclHandler[] = {

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
       6,    6,   48,    3, 0x0a /* Public */,
      13,    1,   61,    3, 0x0a /* Public */,
      14,    4,   64,    3, 0x0a /* Public */,
      18,    3,   73,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,   12,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   15,   16,   17,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    7,   15,   12,

       0        // eod
};

void PythonQtWrapper_QXmlDeclHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlDeclHandler *_t = static_cast<PythonQtWrapper_QXmlDeclHandler *>(_o);
        switch (_id) {
        case 0: { QXmlDeclHandler* _r = _t->new_QXmlDeclHandler();
            if (_a[0]) *reinterpret_cast< QXmlDeclHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlDeclHandler((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->attributeDecl((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->errorString((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->externalEntityDecl((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->internalEntityDecl((*reinterpret_cast< QXmlDeclHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlDeclHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlDeclHandler.data,
      qt_meta_data_PythonQtWrapper_QXmlDeclHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlDeclHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlDeclHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlDeclHandler.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlDeclHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlDeclHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlDefaultHandler_t {
    QByteArrayData data[60];
    char stringdata[718];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlDefaultHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlDefaultHandler_t qt_meta_stringdata_PythonQtWrapper_QXmlDefaultHandler = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QXmlDefaultHa..."
QT_MOC_LITERAL(1, 35, 22), // "new_QXmlDefaultHandler"
QT_MOC_LITERAL(2, 58, 19), // "QXmlDefaultHandler*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 25), // "delete_QXmlDefaultHandler"
QT_MOC_LITERAL(5, 105, 3), // "obj"
QT_MOC_LITERAL(6, 109, 13), // "attributeDecl"
QT_MOC_LITERAL(7, 123, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 140, 5), // "eName"
QT_MOC_LITERAL(9, 146, 5), // "aName"
QT_MOC_LITERAL(10, 152, 4), // "type"
QT_MOC_LITERAL(11, 157, 12), // "valueDefault"
QT_MOC_LITERAL(12, 170, 5), // "value"
QT_MOC_LITERAL(13, 176, 10), // "characters"
QT_MOC_LITERAL(14, 187, 2), // "ch"
QT_MOC_LITERAL(15, 190, 7), // "comment"
QT_MOC_LITERAL(16, 198, 8), // "endCDATA"
QT_MOC_LITERAL(17, 207, 6), // "endDTD"
QT_MOC_LITERAL(18, 214, 11), // "endDocument"
QT_MOC_LITERAL(19, 226, 10), // "endElement"
QT_MOC_LITERAL(20, 237, 12), // "namespaceURI"
QT_MOC_LITERAL(21, 250, 9), // "localName"
QT_MOC_LITERAL(22, 260, 5), // "qName"
QT_MOC_LITERAL(23, 266, 9), // "endEntity"
QT_MOC_LITERAL(24, 276, 4), // "name"
QT_MOC_LITERAL(25, 281, 16), // "endPrefixMapping"
QT_MOC_LITERAL(26, 298, 6), // "prefix"
QT_MOC_LITERAL(27, 305, 5), // "error"
QT_MOC_LITERAL(28, 311, 18), // "QXmlParseException"
QT_MOC_LITERAL(29, 330, 9), // "exception"
QT_MOC_LITERAL(30, 340, 11), // "errorString"
QT_MOC_LITERAL(31, 352, 18), // "externalEntityDecl"
QT_MOC_LITERAL(32, 371, 8), // "publicId"
QT_MOC_LITERAL(33, 380, 8), // "systemId"
QT_MOC_LITERAL(34, 389, 10), // "fatalError"
QT_MOC_LITERAL(35, 400, 19), // "ignorableWhitespace"
QT_MOC_LITERAL(36, 420, 18), // "internalEntityDecl"
QT_MOC_LITERAL(37, 439, 12), // "notationDecl"
QT_MOC_LITERAL(38, 452, 21), // "processingInstruction"
QT_MOC_LITERAL(39, 474, 6), // "target"
QT_MOC_LITERAL(40, 481, 4), // "data"
QT_MOC_LITERAL(41, 486, 13), // "resolveEntity"
QT_MOC_LITERAL(42, 500, 17), // "QXmlInputSource*&"
QT_MOC_LITERAL(43, 518, 3), // "ret"
QT_MOC_LITERAL(44, 522, 18), // "setDocumentLocator"
QT_MOC_LITERAL(45, 541, 12), // "QXmlLocator*"
QT_MOC_LITERAL(46, 554, 7), // "locator"
QT_MOC_LITERAL(47, 562, 13), // "skippedEntity"
QT_MOC_LITERAL(48, 576, 10), // "startCDATA"
QT_MOC_LITERAL(49, 587, 8), // "startDTD"
QT_MOC_LITERAL(50, 596, 13), // "startDocument"
QT_MOC_LITERAL(51, 610, 12), // "startElement"
QT_MOC_LITERAL(52, 623, 14), // "QXmlAttributes"
QT_MOC_LITERAL(53, 638, 4), // "atts"
QT_MOC_LITERAL(54, 643, 11), // "startEntity"
QT_MOC_LITERAL(55, 655, 18), // "startPrefixMapping"
QT_MOC_LITERAL(56, 674, 3), // "uri"
QT_MOC_LITERAL(57, 678, 18), // "unparsedEntityDecl"
QT_MOC_LITERAL(58, 697, 12), // "notationName"
QT_MOC_LITERAL(59, 710, 7) // "warning"

    },
    "PythonQtWrapper_QXmlDefaultHandler\0"
    "new_QXmlDefaultHandler\0QXmlDefaultHandler*\0"
    "\0delete_QXmlDefaultHandler\0obj\0"
    "attributeDecl\0theWrappedObject\0eName\0"
    "aName\0type\0valueDefault\0value\0characters\0"
    "ch\0comment\0endCDATA\0endDTD\0endDocument\0"
    "endElement\0namespaceURI\0localName\0"
    "qName\0endEntity\0name\0endPrefixMapping\0"
    "prefix\0error\0QXmlParseException\0"
    "exception\0errorString\0externalEntityDecl\0"
    "publicId\0systemId\0fatalError\0"
    "ignorableWhitespace\0internalEntityDecl\0"
    "notationDecl\0processingInstruction\0"
    "target\0data\0resolveEntity\0QXmlInputSource*&\0"
    "ret\0setDocumentLocator\0QXmlLocator*\0"
    "locator\0skippedEntity\0startCDATA\0"
    "startDTD\0startDocument\0startElement\0"
    "QXmlAttributes\0atts\0startEntity\0"
    "startPrefixMapping\0uri\0unparsedEntityDecl\0"
    "notationName\0warning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlDefaultHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  164,    3, 0x0a /* Public */,
       4,    1,  165,    3, 0x0a /* Public */,
       6,    6,  168,    3, 0x0a /* Public */,
      13,    2,  181,    3, 0x0a /* Public */,
      15,    2,  186,    3, 0x0a /* Public */,
      16,    1,  191,    3, 0x0a /* Public */,
      17,    1,  194,    3, 0x0a /* Public */,
      18,    1,  197,    3, 0x0a /* Public */,
      19,    4,  200,    3, 0x0a /* Public */,
      23,    2,  209,    3, 0x0a /* Public */,
      25,    2,  214,    3, 0x0a /* Public */,
      27,    2,  219,    3, 0x0a /* Public */,
      30,    1,  224,    3, 0x0a /* Public */,
      31,    4,  227,    3, 0x0a /* Public */,
      34,    2,  236,    3, 0x0a /* Public */,
      35,    2,  241,    3, 0x0a /* Public */,
      36,    3,  246,    3, 0x0a /* Public */,
      37,    4,  253,    3, 0x0a /* Public */,
      38,    3,  262,    3, 0x0a /* Public */,
      41,    4,  269,    3, 0x0a /* Public */,
      44,    2,  278,    3, 0x0a /* Public */,
      47,    2,  283,    3, 0x0a /* Public */,
      48,    1,  288,    3, 0x0a /* Public */,
      49,    4,  291,    3, 0x0a /* Public */,
      50,    1,  300,    3, 0x0a /* Public */,
      51,    5,  303,    3, 0x0a /* Public */,
      54,    2,  314,    3, 0x0a /* Public */,
      55,    3,  319,    3, 0x0a /* Public */,
      57,    5,  326,    3, 0x0a /* Public */,
      59,    2,  337,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,   12,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   14,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   20,   21,   22,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   24,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   26,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 28,    7,   29,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   24,   32,   33,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 28,    7,   29,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    7,   24,   12,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   24,   32,   33,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    7,   39,   40,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, 0x80000000 | 42,    7,   32,   33,   43,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 45,    7,   46,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   24,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   24,   32,   33,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 52,    7,   20,   21,   22,   53,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   24,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    7,   26,   56,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   24,   32,   33,   58,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 28,    7,   29,

       0        // eod
};

void PythonQtWrapper_QXmlDefaultHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlDefaultHandler *_t = static_cast<PythonQtWrapper_QXmlDefaultHandler *>(_o);
        switch (_id) {
        case 0: { QXmlDefaultHandler* _r = _t->new_QXmlDefaultHandler();
            if (_a[0]) *reinterpret_cast< QXmlDefaultHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlDefaultHandler((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->attributeDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->characters((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->comment((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->endCDATA((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->endDTD((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->endDocument((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->endElement((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->endEntity((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->endPrefixMapping((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->error((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->errorString((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->externalEntityDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->fatalError((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->ignorableWhitespace((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->internalEntityDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->notationDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->processingInstruction((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->resolveEntity((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: _t->setDocumentLocator((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< QXmlLocator*(*)>(_a[2]))); break;
        case 21: { bool _r = _t->skippedEntity((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->startCDATA((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->startDTD((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->startDocument((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->startElement((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QXmlAttributes(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->startEntity((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->startPrefixMapping((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->unparsedEntityDecl((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->warning((*reinterpret_cast< QXmlDefaultHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlDefaultHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlDefaultHandler.data,
      qt_meta_data_PythonQtWrapper_QXmlDefaultHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlDefaultHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlDefaultHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlDefaultHandler.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlDefaultHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlDefaultHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlEntityResolver_t {
    QByteArrayData data[13];
    char stringdata[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlEntityResolver_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlEntityResolver_t qt_meta_stringdata_PythonQtWrapper_QXmlEntityResolver = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QXmlEntityRes..."
QT_MOC_LITERAL(1, 35, 22), // "new_QXmlEntityResolver"
QT_MOC_LITERAL(2, 58, 19), // "QXmlEntityResolver*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 25), // "delete_QXmlEntityResolver"
QT_MOC_LITERAL(5, 105, 3), // "obj"
QT_MOC_LITERAL(6, 109, 11), // "errorString"
QT_MOC_LITERAL(7, 121, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 138, 13), // "resolveEntity"
QT_MOC_LITERAL(9, 152, 8), // "publicId"
QT_MOC_LITERAL(10, 161, 8), // "systemId"
QT_MOC_LITERAL(11, 170, 17), // "QXmlInputSource*&"
QT_MOC_LITERAL(12, 188, 3) // "ret"

    },
    "PythonQtWrapper_QXmlEntityResolver\0"
    "new_QXmlEntityResolver\0QXmlEntityResolver*\0"
    "\0delete_QXmlEntityResolver\0obj\0"
    "errorString\0theWrappedObject\0resolveEntity\0"
    "publicId\0systemId\0QXmlInputSource*&\0"
    "ret"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlEntityResolver[] = {

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
       4,    1,   35,    3, 0x0a /* Public */,
       6,    1,   38,    3, 0x0a /* Public */,
       8,    4,   41,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, 0x80000000 | 11,    7,    9,   10,   12,

       0        // eod
};

void PythonQtWrapper_QXmlEntityResolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlEntityResolver *_t = static_cast<PythonQtWrapper_QXmlEntityResolver *>(_o);
        switch (_id) {
        case 0: { QXmlEntityResolver* _r = _t->new_QXmlEntityResolver();
            if (_a[0]) *reinterpret_cast< QXmlEntityResolver**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlEntityResolver((*reinterpret_cast< QXmlEntityResolver*(*)>(_a[1]))); break;
        case 2: { QString _r = _t->errorString((*reinterpret_cast< QXmlEntityResolver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->resolveEntity((*reinterpret_cast< QXmlEntityResolver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QXmlInputSource*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlEntityResolver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlEntityResolver.data,
      qt_meta_data_PythonQtWrapper_QXmlEntityResolver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlEntityResolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlEntityResolver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlEntityResolver.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlEntityResolver*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlEntityResolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlErrorHandler_t {
    QByteArrayData data[13];
    char stringdata[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlErrorHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlErrorHandler_t qt_meta_stringdata_PythonQtWrapper_QXmlErrorHandler = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QXmlErrorHandler"
QT_MOC_LITERAL(1, 33, 20), // "new_QXmlErrorHandler"
QT_MOC_LITERAL(2, 54, 17), // "QXmlErrorHandler*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 23), // "delete_QXmlErrorHandler"
QT_MOC_LITERAL(5, 97, 3), // "obj"
QT_MOC_LITERAL(6, 101, 5), // "error"
QT_MOC_LITERAL(7, 107, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 124, 18), // "QXmlParseException"
QT_MOC_LITERAL(9, 143, 9), // "exception"
QT_MOC_LITERAL(10, 153, 11), // "errorString"
QT_MOC_LITERAL(11, 165, 10), // "fatalError"
QT_MOC_LITERAL(12, 176, 7) // "warning"

    },
    "PythonQtWrapper_QXmlErrorHandler\0"
    "new_QXmlErrorHandler\0QXmlErrorHandler*\0"
    "\0delete_QXmlErrorHandler\0obj\0error\0"
    "theWrappedObject\0QXmlParseException\0"
    "exception\0errorString\0fatalError\0"
    "warning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlErrorHandler[] = {

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
       6,    2,   48,    3, 0x0a /* Public */,
      10,    1,   53,    3, 0x0a /* Public */,
      11,    2,   56,    3, 0x0a /* Public */,
      12,    2,   61,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 8,    7,    9,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 8,    7,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 8,    7,    9,

       0        // eod
};

void PythonQtWrapper_QXmlErrorHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlErrorHandler *_t = static_cast<PythonQtWrapper_QXmlErrorHandler *>(_o);
        switch (_id) {
        case 0: { QXmlErrorHandler* _r = _t->new_QXmlErrorHandler();
            if (_a[0]) *reinterpret_cast< QXmlErrorHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlErrorHandler((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->error((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { QString _r = _t->errorString((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->fatalError((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->warning((*reinterpret_cast< QXmlErrorHandler*(*)>(_a[1])),(*reinterpret_cast< const QXmlParseException(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlErrorHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlErrorHandler.data,
      qt_meta_data_PythonQtWrapper_QXmlErrorHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlErrorHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlErrorHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlErrorHandler.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlErrorHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlErrorHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlInputSource_t {
    QByteArrayData data[17];
    char stringdata[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlInputSource_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlInputSource_t qt_meta_stringdata_PythonQtWrapper_QXmlInputSource = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QXmlInputSource"
QT_MOC_LITERAL(1, 32, 19), // "new_QXmlInputSource"
QT_MOC_LITERAL(2, 52, 16), // "QXmlInputSource*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 10), // "QIODevice*"
QT_MOC_LITERAL(5, 81, 3), // "dev"
QT_MOC_LITERAL(6, 85, 22), // "delete_QXmlInputSource"
QT_MOC_LITERAL(7, 108, 3), // "obj"
QT_MOC_LITERAL(8, 112, 4), // "data"
QT_MOC_LITERAL(9, 117, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 134, 9), // "fetchData"
QT_MOC_LITERAL(11, 144, 11), // "fromRawData"
QT_MOC_LITERAL(12, 156, 9), // "beginning"
QT_MOC_LITERAL(13, 166, 4), // "next"
QT_MOC_LITERAL(14, 171, 5), // "reset"
QT_MOC_LITERAL(15, 177, 7), // "setData"
QT_MOC_LITERAL(16, 185, 3) // "dat"

    },
    "PythonQtWrapper_QXmlInputSource\0"
    "new_QXmlInputSource\0QXmlInputSource*\0"
    "\0QIODevice*\0dev\0delete_QXmlInputSource\0"
    "obj\0data\0theWrappedObject\0fetchData\0"
    "fromRawData\0beginning\0next\0reset\0"
    "setData\0dat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlInputSource[] = {

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
       6,    1,   73,    3, 0x0a /* Public */,
       8,    1,   76,    3, 0x0a /* Public */,
      10,    1,   79,    3, 0x0a /* Public */,
      11,    3,   82,    3, 0x0a /* Public */,
      11,    2,   89,    3, 0x2a /* Public | MethodCloned */,
      13,    1,   94,    3, 0x0a /* Public */,
      14,    1,   97,    3, 0x0a /* Public */,
      15,    2,  100,    3, 0x0a /* Public */,
      15,    2,  105,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::Bool,    9,    8,   12,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QByteArray,    9,    8,
    QMetaType::QChar, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray,    9,   16,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   16,

       0        // eod
};

void PythonQtWrapper_QXmlInputSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlInputSource *_t = static_cast<PythonQtWrapper_QXmlInputSource *>(_o);
        switch (_id) {
        case 0: { QXmlInputSource* _r = _t->new_QXmlInputSource();
            if (_a[0]) *reinterpret_cast< QXmlInputSource**>(_a[0]) = _r; }  break;
        case 1: { QXmlInputSource* _r = _t->new_QXmlInputSource((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlInputSource**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QXmlInputSource((*reinterpret_cast< QXmlInputSource*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->data((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: _t->fetchData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1]))); break;
        case 5: { QString _r = _t->fromRawData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->fromRawData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QChar _r = _t->next((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 8: _t->reset((*reinterpret_cast< QXmlInputSource*(*)>(_a[1]))); break;
        case 9: _t->setData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 10: _t->setData((*reinterpret_cast< QXmlInputSource*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlInputSource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlInputSource.data,
      qt_meta_data_PythonQtWrapper_QXmlInputSource,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlInputSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlInputSource::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlInputSource.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlInputSource*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlInputSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlLexicalHandler_t {
    QByteArrayData data[19];
    char stringdata[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlLexicalHandler_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlLexicalHandler_t qt_meta_stringdata_PythonQtWrapper_QXmlLexicalHandler = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QXmlLexicalHa..."
QT_MOC_LITERAL(1, 35, 22), // "new_QXmlLexicalHandler"
QT_MOC_LITERAL(2, 58, 19), // "QXmlLexicalHandler*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 25), // "delete_QXmlLexicalHandler"
QT_MOC_LITERAL(5, 105, 3), // "obj"
QT_MOC_LITERAL(6, 109, 7), // "comment"
QT_MOC_LITERAL(7, 117, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 134, 2), // "ch"
QT_MOC_LITERAL(9, 137, 8), // "endCDATA"
QT_MOC_LITERAL(10, 146, 6), // "endDTD"
QT_MOC_LITERAL(11, 153, 9), // "endEntity"
QT_MOC_LITERAL(12, 163, 4), // "name"
QT_MOC_LITERAL(13, 168, 11), // "errorString"
QT_MOC_LITERAL(14, 180, 10), // "startCDATA"
QT_MOC_LITERAL(15, 191, 8), // "startDTD"
QT_MOC_LITERAL(16, 200, 8), // "publicId"
QT_MOC_LITERAL(17, 209, 8), // "systemId"
QT_MOC_LITERAL(18, 218, 11) // "startEntity"

    },
    "PythonQtWrapper_QXmlLexicalHandler\0"
    "new_QXmlLexicalHandler\0QXmlLexicalHandler*\0"
    "\0delete_QXmlLexicalHandler\0obj\0comment\0"
    "theWrappedObject\0ch\0endCDATA\0endDTD\0"
    "endEntity\0name\0errorString\0startCDATA\0"
    "startDTD\0publicId\0systemId\0startEntity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlLexicalHandler[] = {

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
       4,    1,   65,    3, 0x0a /* Public */,
       6,    2,   68,    3, 0x0a /* Public */,
       9,    1,   73,    3, 0x0a /* Public */,
      10,    1,   76,    3, 0x0a /* Public */,
      11,    2,   79,    3, 0x0a /* Public */,
      13,    1,   84,    3, 0x0a /* Public */,
      14,    1,   87,    3, 0x0a /* Public */,
      15,    4,   90,    3, 0x0a /* Public */,
      18,    2,   99,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,    8,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   12,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   12,   16,   17,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    7,   12,

       0        // eod
};

void PythonQtWrapper_QXmlLexicalHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlLexicalHandler *_t = static_cast<PythonQtWrapper_QXmlLexicalHandler *>(_o);
        switch (_id) {
        case 0: { QXmlLexicalHandler* _r = _t->new_QXmlLexicalHandler();
            if (_a[0]) *reinterpret_cast< QXmlLexicalHandler**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlLexicalHandler((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1]))); break;
        case 2: { bool _r = _t->comment((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->endCDATA((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->endDTD((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->endEntity((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->errorString((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->startCDATA((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->startDTD((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->startEntity((*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlLexicalHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlLexicalHandler.data,
      qt_meta_data_PythonQtWrapper_QXmlLexicalHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlLexicalHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlLexicalHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlLexicalHandler.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlLexicalHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlLexicalHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlLocator_t {
    QByteArrayData data[9];
    char stringdata[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlLocator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlLocator_t qt_meta_stringdata_PythonQtWrapper_QXmlLocator = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QXmlLocator"
QT_MOC_LITERAL(1, 28, 15), // "new_QXmlLocator"
QT_MOC_LITERAL(2, 44, 12), // "QXmlLocator*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 18), // "delete_QXmlLocator"
QT_MOC_LITERAL(5, 77, 3), // "obj"
QT_MOC_LITERAL(6, 81, 12), // "columnNumber"
QT_MOC_LITERAL(7, 94, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 111, 10) // "lineNumber"

    },
    "PythonQtWrapper_QXmlLocator\0new_QXmlLocator\0"
    "QXmlLocator*\0\0delete_QXmlLocator\0obj\0"
    "columnNumber\0theWrappedObject\0lineNumber"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlLocator[] = {

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
       4,    1,   35,    3, 0x0a /* Public */,
       6,    1,   38,    3, 0x0a /* Public */,
       8,    1,   41,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::Int, 0x80000000 | 2,    7,
    QMetaType::Int, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QXmlLocator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlLocator *_t = static_cast<PythonQtWrapper_QXmlLocator *>(_o);
        switch (_id) {
        case 0: { QXmlLocator* _r = _t->new_QXmlLocator();
            if (_a[0]) *reinterpret_cast< QXmlLocator**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlLocator((*reinterpret_cast< QXmlLocator*(*)>(_a[1]))); break;
        case 2: { int _r = _t->columnNumber((*reinterpret_cast< QXmlLocator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->lineNumber((*reinterpret_cast< QXmlLocator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlLocator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlLocator.data,
      qt_meta_data_PythonQtWrapper_QXmlLocator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlLocator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlLocator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlLocator.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlLocator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlLocator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QXmlParseException_t {
    QByteArrayData data[19];
    char stringdata[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlParseException_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlParseException_t qt_meta_stringdata_PythonQtWrapper_QXmlParseException = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QXmlParseExce..."
QT_MOC_LITERAL(1, 35, 22), // "new_QXmlParseException"
QT_MOC_LITERAL(2, 58, 19), // "QXmlParseException*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 4), // "name"
QT_MOC_LITERAL(5, 84, 1), // "c"
QT_MOC_LITERAL(6, 86, 1), // "l"
QT_MOC_LITERAL(7, 88, 1), // "p"
QT_MOC_LITERAL(8, 90, 1), // "s"
QT_MOC_LITERAL(9, 92, 18), // "QXmlParseException"
QT_MOC_LITERAL(10, 111, 5), // "other"
QT_MOC_LITERAL(11, 117, 25), // "delete_QXmlParseException"
QT_MOC_LITERAL(12, 143, 3), // "obj"
QT_MOC_LITERAL(13, 147, 12), // "columnNumber"
QT_MOC_LITERAL(14, 160, 16), // "theWrappedObject"
QT_MOC_LITERAL(15, 177, 10), // "lineNumber"
QT_MOC_LITERAL(16, 188, 7), // "message"
QT_MOC_LITERAL(17, 196, 8), // "publicId"
QT_MOC_LITERAL(18, 205, 8) // "systemId"

    },
    "PythonQtWrapper_QXmlParseException\0"
    "new_QXmlParseException\0QXmlParseException*\0"
    "\0name\0c\0l\0p\0s\0QXmlParseException\0other\0"
    "delete_QXmlParseException\0obj\0"
    "columnNumber\0theWrappedObject\0lineNumber\0"
    "message\0publicId\0systemId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlParseException[] = {

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
       1,    5,   79,    3, 0x0a /* Public */,
       1,    4,   90,    3, 0x2a /* Public | MethodCloned */,
       1,    3,   99,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  106,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  111,    3, 0x2a /* Public | MethodCloned */,
       1,    0,  114,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  115,    3, 0x0a /* Public */,
      11,    1,  118,    3, 0x0a /* Public */,
      13,    1,  121,    3, 0x0a /* Public */,
      15,    1,  124,    3, 0x0a /* Public */,
      16,    1,  127,    3, 0x0a /* Public */,
      17,    1,  130,    3, 0x0a /* Public */,
      18,    1,  133,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,    4,    5,    6,    7,    8,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,    5,    6,    7,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int, QMetaType::Int,    4,    5,    6,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int,    4,    5,
    0x80000000 | 2, QMetaType::QString,    4,
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 2,   12,
    QMetaType::Int, 0x80000000 | 2,   14,
    QMetaType::Int, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,

       0        // eod
};

void PythonQtWrapper_QXmlParseException::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlParseException *_t = static_cast<PythonQtWrapper_QXmlParseException *>(_o);
        switch (_id) {
        case 0: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 1: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 2: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 3: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 4: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 5: { QXmlParseException* _r = _t->new_QXmlParseException();
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 6: { QXmlParseException* _r = _t->new_QXmlParseException((*reinterpret_cast< const QXmlParseException(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlParseException**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QXmlParseException((*reinterpret_cast< QXmlParseException*(*)>(_a[1]))); break;
        case 8: { int _r = _t->columnNumber((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->lineNumber((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->message((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->publicId((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->systemId((*reinterpret_cast< QXmlParseException*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlParseException::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlParseException.data,
      qt_meta_data_PythonQtWrapper_QXmlParseException,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlParseException::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlParseException::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlParseException.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlParseException*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlParseException::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QXmlReader_t {
    QByteArrayData data[40];
    char stringdata[527];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlReader_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlReader_t qt_meta_stringdata_PythonQtWrapper_QXmlReader = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QXmlReader"
QT_MOC_LITERAL(1, 27, 14), // "new_QXmlReader"
QT_MOC_LITERAL(2, 42, 11), // "QXmlReader*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 17), // "delete_QXmlReader"
QT_MOC_LITERAL(5, 73, 3), // "obj"
QT_MOC_LITERAL(6, 77, 10), // "DTDHandler"
QT_MOC_LITERAL(7, 88, 15), // "QXmlDTDHandler*"
QT_MOC_LITERAL(8, 104, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 121, 14), // "contentHandler"
QT_MOC_LITERAL(10, 136, 19), // "QXmlContentHandler*"
QT_MOC_LITERAL(11, 156, 11), // "declHandler"
QT_MOC_LITERAL(12, 168, 16), // "QXmlDeclHandler*"
QT_MOC_LITERAL(13, 185, 14), // "entityResolver"
QT_MOC_LITERAL(14, 200, 19), // "QXmlEntityResolver*"
QT_MOC_LITERAL(15, 220, 12), // "errorHandler"
QT_MOC_LITERAL(16, 233, 17), // "QXmlErrorHandler*"
QT_MOC_LITERAL(17, 251, 7), // "feature"
QT_MOC_LITERAL(18, 259, 4), // "name"
QT_MOC_LITERAL(19, 264, 5), // "bool*"
QT_MOC_LITERAL(20, 270, 2), // "ok"
QT_MOC_LITERAL(21, 273, 10), // "hasFeature"
QT_MOC_LITERAL(22, 284, 11), // "hasProperty"
QT_MOC_LITERAL(23, 296, 14), // "lexicalHandler"
QT_MOC_LITERAL(24, 311, 19), // "QXmlLexicalHandler*"
QT_MOC_LITERAL(25, 331, 5), // "parse"
QT_MOC_LITERAL(26, 337, 15), // "QXmlInputSource"
QT_MOC_LITERAL(27, 353, 5), // "input"
QT_MOC_LITERAL(28, 359, 22), // "const QXmlInputSource*"
QT_MOC_LITERAL(29, 382, 8), // "property"
QT_MOC_LITERAL(30, 391, 17), // "setContentHandler"
QT_MOC_LITERAL(31, 409, 7), // "handler"
QT_MOC_LITERAL(32, 417, 13), // "setDTDHandler"
QT_MOC_LITERAL(33, 431, 14), // "setDeclHandler"
QT_MOC_LITERAL(34, 446, 17), // "setEntityResolver"
QT_MOC_LITERAL(35, 464, 15), // "setErrorHandler"
QT_MOC_LITERAL(36, 480, 10), // "setFeature"
QT_MOC_LITERAL(37, 491, 5), // "value"
QT_MOC_LITERAL(38, 497, 17), // "setLexicalHandler"
QT_MOC_LITERAL(39, 515, 11) // "setProperty"

    },
    "PythonQtWrapper_QXmlReader\0new_QXmlReader\0"
    "QXmlReader*\0\0delete_QXmlReader\0obj\0"
    "DTDHandler\0QXmlDTDHandler*\0theWrappedObject\0"
    "contentHandler\0QXmlContentHandler*\0"
    "declHandler\0QXmlDeclHandler*\0"
    "entityResolver\0QXmlEntityResolver*\0"
    "errorHandler\0QXmlErrorHandler*\0feature\0"
    "name\0bool*\0ok\0hasFeature\0hasProperty\0"
    "lexicalHandler\0QXmlLexicalHandler*\0"
    "parse\0QXmlInputSource\0input\0"
    "const QXmlInputSource*\0property\0"
    "setContentHandler\0handler\0setDTDHandler\0"
    "setDeclHandler\0setEntityResolver\0"
    "setErrorHandler\0setFeature\0value\0"
    "setLexicalHandler\0setProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlReader[] = {

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
       9,    1,  141,    3, 0x0a /* Public */,
      11,    1,  144,    3, 0x0a /* Public */,
      13,    1,  147,    3, 0x0a /* Public */,
      15,    1,  150,    3, 0x0a /* Public */,
      17,    3,  153,    3, 0x0a /* Public */,
      17,    2,  160,    3, 0x2a /* Public | MethodCloned */,
      21,    2,  165,    3, 0x0a /* Public */,
      22,    2,  170,    3, 0x0a /* Public */,
      23,    1,  175,    3, 0x0a /* Public */,
      25,    2,  178,    3, 0x0a /* Public */,
      25,    2,  183,    3, 0x0a /* Public */,
      29,    3,  188,    3, 0x0a /* Public */,
      29,    2,  195,    3, 0x2a /* Public | MethodCloned */,
      30,    2,  200,    3, 0x0a /* Public */,
      32,    2,  205,    3, 0x0a /* Public */,
      33,    2,  210,    3, 0x0a /* Public */,
      34,    2,  215,    3, 0x0a /* Public */,
      35,    2,  220,    3, 0x0a /* Public */,
      36,    3,  225,    3, 0x0a /* Public */,
      38,    2,  232,    3, 0x0a /* Public */,
      39,    3,  237,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2,    8,
    0x80000000 | 10, 0x80000000 | 2,    8,
    0x80000000 | 12, 0x80000000 | 2,    8,
    0x80000000 | 14, 0x80000000 | 2,    8,
    0x80000000 | 16, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 19,    8,   18,   20,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   18,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   18,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   18,
    0x80000000 | 24, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 26,    8,   27,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 28,    8,   27,
    QMetaType::VoidStar, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 19,    8,   18,   20,
    QMetaType::VoidStar, 0x80000000 | 2, QMetaType::QString,    8,   18,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    8,   31,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 7,    8,   31,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,    8,   31,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,    8,   31,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,    8,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::Bool,    8,   18,   37,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,    8,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::VoidStar,    8,   18,   37,

       0        // eod
};

void PythonQtWrapper_QXmlReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlReader *_t = static_cast<PythonQtWrapper_QXmlReader *>(_o);
        switch (_id) {
        case 0: { QXmlReader* _r = _t->new_QXmlReader();
            if (_a[0]) *reinterpret_cast< QXmlReader**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlReader((*reinterpret_cast< QXmlReader*(*)>(_a[1]))); break;
        case 2: { QXmlDTDHandler* _r = _t->DTDHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlDTDHandler**>(_a[0]) = _r; }  break;
        case 3: { QXmlContentHandler* _r = _t->contentHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlContentHandler**>(_a[0]) = _r; }  break;
        case 4: { QXmlDeclHandler* _r = _t->declHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlDeclHandler**>(_a[0]) = _r; }  break;
        case 5: { QXmlEntityResolver* _r = _t->entityResolver((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlEntityResolver**>(_a[0]) = _r; }  break;
        case 6: { QXmlErrorHandler* _r = _t->errorHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlErrorHandler**>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->feature((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->feature((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasFeature((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasProperty((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QXmlLexicalHandler* _r = _t->lexicalHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlLexicalHandler**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->parse((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->parse((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { void* _r = _t->property((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 15: { void* _r = _t->property((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 16: _t->setContentHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlContentHandler*(*)>(_a[2]))); break;
        case 17: _t->setDTDHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlDTDHandler*(*)>(_a[2]))); break;
        case 18: _t->setDeclHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlDeclHandler*(*)>(_a[2]))); break;
        case 19: _t->setEntityResolver((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlEntityResolver*(*)>(_a[2]))); break;
        case 20: _t->setErrorHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlErrorHandler*(*)>(_a[2]))); break;
        case 21: _t->setFeature((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 22: _t->setLexicalHandler((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[2]))); break;
        case 23: _t->setProperty((*reinterpret_cast< QXmlReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlReader.data,
      qt_meta_data_PythonQtWrapper_QXmlReader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlReader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlReader.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlReader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QXmlSimpleReader_t {
    QByteArrayData data[42];
    char stringdata[577];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QXmlSimpleReader_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QXmlSimpleReader_t qt_meta_stringdata_PythonQtWrapper_QXmlSimpleReader = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QXmlSimpleReader"
QT_MOC_LITERAL(1, 33, 20), // "new_QXmlSimpleReader"
QT_MOC_LITERAL(2, 54, 17), // "QXmlSimpleReader*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 23), // "delete_QXmlSimpleReader"
QT_MOC_LITERAL(5, 97, 3), // "obj"
QT_MOC_LITERAL(6, 101, 10), // "DTDHandler"
QT_MOC_LITERAL(7, 112, 15), // "QXmlDTDHandler*"
QT_MOC_LITERAL(8, 128, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 145, 14), // "contentHandler"
QT_MOC_LITERAL(10, 160, 19), // "QXmlContentHandler*"
QT_MOC_LITERAL(11, 180, 11), // "declHandler"
QT_MOC_LITERAL(12, 192, 16), // "QXmlDeclHandler*"
QT_MOC_LITERAL(13, 209, 14), // "entityResolver"
QT_MOC_LITERAL(14, 224, 19), // "QXmlEntityResolver*"
QT_MOC_LITERAL(15, 244, 12), // "errorHandler"
QT_MOC_LITERAL(16, 257, 17), // "QXmlErrorHandler*"
QT_MOC_LITERAL(17, 275, 7), // "feature"
QT_MOC_LITERAL(18, 283, 4), // "name"
QT_MOC_LITERAL(19, 288, 5), // "bool*"
QT_MOC_LITERAL(20, 294, 2), // "ok"
QT_MOC_LITERAL(21, 297, 10), // "hasFeature"
QT_MOC_LITERAL(22, 308, 11), // "hasProperty"
QT_MOC_LITERAL(23, 320, 14), // "lexicalHandler"
QT_MOC_LITERAL(24, 335, 19), // "QXmlLexicalHandler*"
QT_MOC_LITERAL(25, 355, 5), // "parse"
QT_MOC_LITERAL(26, 361, 15), // "QXmlInputSource"
QT_MOC_LITERAL(27, 377, 5), // "input"
QT_MOC_LITERAL(28, 383, 22), // "const QXmlInputSource*"
QT_MOC_LITERAL(29, 406, 11), // "incremental"
QT_MOC_LITERAL(30, 418, 13), // "parseContinue"
QT_MOC_LITERAL(31, 432, 8), // "property"
QT_MOC_LITERAL(32, 441, 17), // "setContentHandler"
QT_MOC_LITERAL(33, 459, 7), // "handler"
QT_MOC_LITERAL(34, 467, 13), // "setDTDHandler"
QT_MOC_LITERAL(35, 481, 14), // "setDeclHandler"
QT_MOC_LITERAL(36, 496, 17), // "setEntityResolver"
QT_MOC_LITERAL(37, 514, 15), // "setErrorHandler"
QT_MOC_LITERAL(38, 530, 10), // "setFeature"
QT_MOC_LITERAL(39, 541, 5), // "value"
QT_MOC_LITERAL(40, 547, 17), // "setLexicalHandler"
QT_MOC_LITERAL(41, 565, 11) // "setProperty"

    },
    "PythonQtWrapper_QXmlSimpleReader\0"
    "new_QXmlSimpleReader\0QXmlSimpleReader*\0"
    "\0delete_QXmlSimpleReader\0obj\0DTDHandler\0"
    "QXmlDTDHandler*\0theWrappedObject\0"
    "contentHandler\0QXmlContentHandler*\0"
    "declHandler\0QXmlDeclHandler*\0"
    "entityResolver\0QXmlEntityResolver*\0"
    "errorHandler\0QXmlErrorHandler*\0feature\0"
    "name\0bool*\0ok\0hasFeature\0hasProperty\0"
    "lexicalHandler\0QXmlLexicalHandler*\0"
    "parse\0QXmlInputSource\0input\0"
    "const QXmlInputSource*\0incremental\0"
    "parseContinue\0property\0setContentHandler\0"
    "handler\0setDTDHandler\0setDeclHandler\0"
    "setEntityResolver\0setErrorHandler\0"
    "setFeature\0value\0setLexicalHandler\0"
    "setProperty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QXmlSimpleReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  144,    3, 0x0a /* Public */,
       4,    1,  145,    3, 0x0a /* Public */,
       6,    1,  148,    3, 0x0a /* Public */,
       9,    1,  151,    3, 0x0a /* Public */,
      11,    1,  154,    3, 0x0a /* Public */,
      13,    1,  157,    3, 0x0a /* Public */,
      15,    1,  160,    3, 0x0a /* Public */,
      17,    3,  163,    3, 0x0a /* Public */,
      17,    2,  170,    3, 0x2a /* Public | MethodCloned */,
      21,    2,  175,    3, 0x0a /* Public */,
      22,    2,  180,    3, 0x0a /* Public */,
      23,    1,  185,    3, 0x0a /* Public */,
      25,    2,  188,    3, 0x0a /* Public */,
      25,    2,  193,    3, 0x0a /* Public */,
      25,    3,  198,    3, 0x0a /* Public */,
      30,    1,  205,    3, 0x0a /* Public */,
      31,    3,  208,    3, 0x0a /* Public */,
      31,    2,  215,    3, 0x2a /* Public | MethodCloned */,
      32,    2,  220,    3, 0x0a /* Public */,
      34,    2,  225,    3, 0x0a /* Public */,
      35,    2,  230,    3, 0x0a /* Public */,
      36,    2,  235,    3, 0x0a /* Public */,
      37,    2,  240,    3, 0x0a /* Public */,
      38,    3,  245,    3, 0x0a /* Public */,
      40,    2,  252,    3, 0x0a /* Public */,
      41,    3,  257,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2,    8,
    0x80000000 | 10, 0x80000000 | 2,    8,
    0x80000000 | 12, 0x80000000 | 2,    8,
    0x80000000 | 14, 0x80000000 | 2,    8,
    0x80000000 | 16, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 19,    8,   18,   20,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   18,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   18,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   18,
    0x80000000 | 24, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 26,    8,   27,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 28,    8,   27,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 28, QMetaType::Bool,    8,   27,   29,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::VoidStar, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 19,    8,   18,   20,
    QMetaType::VoidStar, 0x80000000 | 2, QMetaType::QString,    8,   18,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    8,   33,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 7,    8,   33,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,    8,   33,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,    8,   33,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,    8,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::Bool,    8,   18,   39,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,    8,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::VoidStar,    8,   18,   39,

       0        // eod
};

void PythonQtWrapper_QXmlSimpleReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QXmlSimpleReader *_t = static_cast<PythonQtWrapper_QXmlSimpleReader *>(_o);
        switch (_id) {
        case 0: { QXmlSimpleReader* _r = _t->new_QXmlSimpleReader();
            if (_a[0]) *reinterpret_cast< QXmlSimpleReader**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QXmlSimpleReader((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1]))); break;
        case 2: { QXmlDTDHandler* _r = _t->DTDHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlDTDHandler**>(_a[0]) = _r; }  break;
        case 3: { QXmlContentHandler* _r = _t->contentHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlContentHandler**>(_a[0]) = _r; }  break;
        case 4: { QXmlDeclHandler* _r = _t->declHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlDeclHandler**>(_a[0]) = _r; }  break;
        case 5: { QXmlEntityResolver* _r = _t->entityResolver((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlEntityResolver**>(_a[0]) = _r; }  break;
        case 6: { QXmlErrorHandler* _r = _t->errorHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlErrorHandler**>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->feature((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->feature((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->hasFeature((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasProperty((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QXmlLexicalHandler* _r = _t->lexicalHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmlLexicalHandler**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->parse((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->parse((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->parse((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QXmlInputSource*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->parseContinue((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { void* _r = _t->property((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 17: { void* _r = _t->property((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 18: _t->setContentHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlContentHandler*(*)>(_a[2]))); break;
        case 19: _t->setDTDHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlDTDHandler*(*)>(_a[2]))); break;
        case 20: _t->setDeclHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlDeclHandler*(*)>(_a[2]))); break;
        case 21: _t->setEntityResolver((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlEntityResolver*(*)>(_a[2]))); break;
        case 22: _t->setErrorHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlErrorHandler*(*)>(_a[2]))); break;
        case 23: _t->setFeature((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->setLexicalHandler((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< QXmlLexicalHandler*(*)>(_a[2]))); break;
        case 25: _t->setProperty((*reinterpret_cast< QXmlSimpleReader*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QXmlSimpleReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QXmlSimpleReader.data,
      qt_meta_data_PythonQtWrapper_QXmlSimpleReader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QXmlSimpleReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QXmlSimpleReader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QXmlSimpleReader.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QXmlSimpleReader*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QXmlSimpleReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
