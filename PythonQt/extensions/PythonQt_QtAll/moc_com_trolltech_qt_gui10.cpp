/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_gui10.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generated_cpp_54/com_trolltech_qt_gui/com_trolltech_qt_gui10.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_gui10.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PythonQtWrapper_QTextBlockGroup_t {
    QByteArrayData data[14];
    char stringdata[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextBlockGroup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextBlockGroup_t qt_meta_stringdata_PythonQtWrapper_QTextBlockGroup = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QTextBlockGroup"
QT_MOC_LITERAL(1, 32, 19), // "new_QTextBlockGroup"
QT_MOC_LITERAL(2, 52, 16), // "QTextBlockGroup*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 14), // "QTextDocument*"
QT_MOC_LITERAL(5, 85, 3), // "doc"
QT_MOC_LITERAL(6, 89, 18), // "blockFormatChanged"
QT_MOC_LITERAL(7, 108, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 125, 10), // "QTextBlock"
QT_MOC_LITERAL(9, 136, 5), // "block"
QT_MOC_LITERAL(10, 142, 13), // "blockInserted"
QT_MOC_LITERAL(11, 156, 9), // "blockList"
QT_MOC_LITERAL(12, 166, 17), // "QList<QTextBlock>"
QT_MOC_LITERAL(13, 184, 12) // "blockRemoved"

    },
    "PythonQtWrapper_QTextBlockGroup\0"
    "new_QTextBlockGroup\0QTextBlockGroup*\0"
    "\0QTextDocument*\0doc\0blockFormatChanged\0"
    "theWrappedObject\0QTextBlock\0block\0"
    "blockInserted\0blockList\0QList<QTextBlock>\0"
    "blockRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextBlockGroup[] = {

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
       1,    1,   39,    3, 0x0a /* Public */,
       6,    2,   42,    3, 0x0a /* Public */,
      10,    2,   47,    3, 0x0a /* Public */,
      11,    1,   52,    3, 0x0a /* Public */,
      13,    2,   55,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 8,    7,    9,
    0x80000000 | 12, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 8,    7,    9,

       0        // eod
};

void PythonQtWrapper_QTextBlockGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextBlockGroup *_t = static_cast<PythonQtWrapper_QTextBlockGroup *>(_o);
        switch (_id) {
        case 0: { QTextBlockGroup* _r = _t->new_QTextBlockGroup((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlockGroup**>(_a[0]) = _r; }  break;
        case 1: _t->blockFormatChanged((*reinterpret_cast< QTextBlockGroup*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        case 2: _t->blockInserted((*reinterpret_cast< QTextBlockGroup*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        case 3: { QList<QTextBlock> _r = _t->blockList((*reinterpret_cast< QTextBlockGroup*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextBlock>*>(_a[0]) = _r; }  break;
        case 4: _t->blockRemoved((*reinterpret_cast< QTextBlockGroup*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBlockGroup* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBlockGroup* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBlockGroup* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBlockGroup* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextBlockGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextBlockGroup.data,
      qt_meta_data_PythonQtWrapper_QTextBlockGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextBlockGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextBlockGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextBlockGroup.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextBlockGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextBlockGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QTextBlockUserData_t {
    QByteArrayData data[6];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextBlockUserData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextBlockUserData_t qt_meta_stringdata_PythonQtWrapper_QTextBlockUserData = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QTextBlockUse..."
QT_MOC_LITERAL(1, 35, 22), // "new_QTextBlockUserData"
QT_MOC_LITERAL(2, 58, 19), // "QTextBlockUserData*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 25), // "delete_QTextBlockUserData"
QT_MOC_LITERAL(5, 105, 3) // "obj"

    },
    "PythonQtWrapper_QTextBlockUserData\0"
    "new_QTextBlockUserData\0QTextBlockUserData*\0"
    "\0delete_QTextBlockUserData\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextBlockUserData[] = {

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

void PythonQtWrapper_QTextBlockUserData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextBlockUserData *_t = static_cast<PythonQtWrapper_QTextBlockUserData *>(_o);
        switch (_id) {
        case 0: { QTextBlockUserData* _r = _t->new_QTextBlockUserData();
            if (_a[0]) *reinterpret_cast< QTextBlockUserData**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTextBlockUserData((*reinterpret_cast< QTextBlockUserData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextBlockUserData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextBlockUserData.data,
      qt_meta_data_PythonQtWrapper_QTextBlockUserData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextBlockUserData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextBlockUserData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextBlockUserData.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextBlockUserData*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextBlockUserData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextBrowser_t {
    QByteArrayData data[50];
    char stringdata[592];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextBrowser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextBrowser_t qt_meta_stringdata_PythonQtWrapper_QTextBrowser = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QTextBrowser"
QT_MOC_LITERAL(1, 29, 16), // "new_QTextBrowser"
QT_MOC_LITERAL(2, 46, 13), // "QTextBrowser*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 8), // "QWidget*"
QT_MOC_LITERAL(5, 70, 6), // "parent"
QT_MOC_LITERAL(6, 77, 19), // "delete_QTextBrowser"
QT_MOC_LITERAL(7, 97, 3), // "obj"
QT_MOC_LITERAL(8, 101, 8), // "backward"
QT_MOC_LITERAL(9, 110, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 127, 20), // "backwardHistoryCount"
QT_MOC_LITERAL(11, 148, 12), // "clearHistory"
QT_MOC_LITERAL(12, 161, 5), // "event"
QT_MOC_LITERAL(13, 167, 7), // "QEvent*"
QT_MOC_LITERAL(14, 175, 1), // "e"
QT_MOC_LITERAL(15, 177, 18), // "focusNextPrevChild"
QT_MOC_LITERAL(16, 196, 4), // "next"
QT_MOC_LITERAL(17, 201, 13), // "focusOutEvent"
QT_MOC_LITERAL(18, 215, 12), // "QFocusEvent*"
QT_MOC_LITERAL(19, 228, 2), // "ev"
QT_MOC_LITERAL(20, 231, 7), // "forward"
QT_MOC_LITERAL(21, 239, 19), // "forwardHistoryCount"
QT_MOC_LITERAL(22, 259, 12), // "historyTitle"
QT_MOC_LITERAL(23, 272, 6), // "arg__1"
QT_MOC_LITERAL(24, 279, 10), // "historyUrl"
QT_MOC_LITERAL(25, 290, 4), // "home"
QT_MOC_LITERAL(26, 295, 19), // "isBackwardAvailable"
QT_MOC_LITERAL(27, 315, 18), // "isForwardAvailable"
QT_MOC_LITERAL(28, 334, 13), // "keyPressEvent"
QT_MOC_LITERAL(29, 348, 10), // "QKeyEvent*"
QT_MOC_LITERAL(30, 359, 12), // "loadResource"
QT_MOC_LITERAL(31, 372, 4), // "type"
QT_MOC_LITERAL(32, 377, 4), // "name"
QT_MOC_LITERAL(33, 382, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(34, 397, 12), // "QMouseEvent*"
QT_MOC_LITERAL(35, 410, 15), // "mousePressEvent"
QT_MOC_LITERAL(36, 426, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(37, 444, 17), // "openExternalLinks"
QT_MOC_LITERAL(38, 462, 9), // "openLinks"
QT_MOC_LITERAL(39, 472, 10), // "paintEvent"
QT_MOC_LITERAL(40, 483, 12), // "QPaintEvent*"
QT_MOC_LITERAL(41, 496, 6), // "reload"
QT_MOC_LITERAL(42, 503, 11), // "searchPaths"
QT_MOC_LITERAL(43, 515, 20), // "setOpenExternalLinks"
QT_MOC_LITERAL(44, 536, 4), // "open"
QT_MOC_LITERAL(45, 541, 12), // "setOpenLinks"
QT_MOC_LITERAL(46, 554, 14), // "setSearchPaths"
QT_MOC_LITERAL(47, 569, 5), // "paths"
QT_MOC_LITERAL(48, 575, 9), // "setSource"
QT_MOC_LITERAL(49, 585, 6) // "source"

    },
    "PythonQtWrapper_QTextBrowser\0"
    "new_QTextBrowser\0QTextBrowser*\0\0"
    "QWidget*\0parent\0delete_QTextBrowser\0"
    "obj\0backward\0theWrappedObject\0"
    "backwardHistoryCount\0clearHistory\0"
    "event\0QEvent*\0e\0focusNextPrevChild\0"
    "next\0focusOutEvent\0QFocusEvent*\0ev\0"
    "forward\0forwardHistoryCount\0historyTitle\0"
    "arg__1\0historyUrl\0home\0isBackwardAvailable\0"
    "isForwardAvailable\0keyPressEvent\0"
    "QKeyEvent*\0loadResource\0type\0name\0"
    "mouseMoveEvent\0QMouseEvent*\0mousePressEvent\0"
    "mouseReleaseEvent\0openExternalLinks\0"
    "openLinks\0paintEvent\0QPaintEvent*\0"
    "reload\0searchPaths\0setOpenExternalLinks\0"
    "open\0setOpenLinks\0setSearchPaths\0paths\0"
    "setSource\0source"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  169,    3, 0x0a /* Public */,
       1,    0,  172,    3, 0x2a /* Public | MethodCloned */,
       6,    1,  173,    3, 0x0a /* Public */,
       8,    1,  176,    3, 0x0a /* Public */,
      10,    1,  179,    3, 0x0a /* Public */,
      11,    1,  182,    3, 0x0a /* Public */,
      12,    2,  185,    3, 0x0a /* Public */,
      15,    2,  190,    3, 0x0a /* Public */,
      17,    2,  195,    3, 0x0a /* Public */,
      20,    1,  200,    3, 0x0a /* Public */,
      21,    1,  203,    3, 0x0a /* Public */,
      22,    2,  206,    3, 0x0a /* Public */,
      24,    2,  211,    3, 0x0a /* Public */,
      25,    1,  216,    3, 0x0a /* Public */,
      26,    1,  219,    3, 0x0a /* Public */,
      27,    1,  222,    3, 0x0a /* Public */,
      28,    2,  225,    3, 0x0a /* Public */,
      30,    3,  230,    3, 0x0a /* Public */,
      33,    2,  237,    3, 0x0a /* Public */,
      35,    2,  242,    3, 0x0a /* Public */,
      36,    2,  247,    3, 0x0a /* Public */,
      37,    1,  252,    3, 0x0a /* Public */,
      38,    1,  255,    3, 0x0a /* Public */,
      39,    2,  258,    3, 0x0a /* Public */,
      41,    1,  263,    3, 0x0a /* Public */,
      42,    1,  266,    3, 0x0a /* Public */,
      43,    2,  269,    3, 0x0a /* Public */,
      45,    2,  274,    3, 0x0a /* Public */,
      46,    2,  279,    3, 0x0a /* Public */,
      48,    2,  284,    3, 0x0a /* Public */,
      49,    1,  289,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13,    9,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Bool,    9,   16,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,    9,   19,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,    9,   23,
    QMetaType::QUrl, 0x80000000 | 2, QMetaType::Int,    9,   23,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 29,    9,   19,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, QMetaType::QUrl,    9,   31,   32,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 34,    9,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 34,    9,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 34,    9,   19,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 40,    9,   14,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::QStringList, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,   44,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,   44,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QStringList,    9,   47,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,    9,   32,
    QMetaType::QUrl, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextBrowser *_t = static_cast<PythonQtWrapper_QTextBrowser *>(_o);
        switch (_id) {
        case 0: { QTextBrowser* _r = _t->new_QTextBrowser((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBrowser**>(_a[0]) = _r; }  break;
        case 1: { QTextBrowser* _r = _t->new_QTextBrowser();
            if (_a[0]) *reinterpret_cast< QTextBrowser**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextBrowser((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 3: _t->backward((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 4: { int _r = _t->backwardHistoryCount((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->clearHistory((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->event((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->focusOutEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 9: _t->forward((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 10: { int _r = _t->forwardHistoryCount((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->historyTitle((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { QUrl _r = _t->historyUrl((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 13: _t->home((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 14: { bool _r = _t->isBackwardAvailable((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isForwardAvailable((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->keyPressEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 17: { QVariant _r = _t->loadResource((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 18: _t->mouseMoveEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 19: _t->mousePressEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 20: _t->mouseReleaseEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 21: { bool _r = _t->openExternalLinks((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->openLinks((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: _t->paintEvent((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 24: _t->reload((*reinterpret_cast< QTextBrowser*(*)>(_a[1]))); break;
        case 25: { QStringList _r = _t->searchPaths((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 26: _t->setOpenExternalLinks((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 27: _t->setOpenLinks((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->setSearchPaths((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 29: _t->setSource((*reinterpret_cast< QTextBrowser*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 30: { QUrl _r = _t->source((*reinterpret_cast< QTextBrowser*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextBrowser* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextBrowser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextBrowser.data,
      qt_meta_data_PythonQtWrapper_QTextBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextBrowser.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextBrowser*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QTextCharFormat_t {
    QByteArrayData data[120];
    char stringdata[1774];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextCharFormat_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextCharFormat_t qt_meta_stringdata_PythonQtWrapper_QTextCharFormat = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QTextCharFormat"
QT_MOC_LITERAL(1, 32, 19), // "new_QTextCharFormat"
QT_MOC_LITERAL(2, 52, 16), // "QTextCharFormat*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 3), // "fmt"
QT_MOC_LITERAL(5, 74, 15), // "QTextCharFormat"
QT_MOC_LITERAL(6, 90, 5), // "other"
QT_MOC_LITERAL(7, 96, 22), // "delete_QTextCharFormat"
QT_MOC_LITERAL(8, 119, 3), // "obj"
QT_MOC_LITERAL(9, 123, 10), // "anchorHref"
QT_MOC_LITERAL(10, 134, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 151, 11), // "anchorNames"
QT_MOC_LITERAL(12, 163, 4), // "font"
QT_MOC_LITERAL(13, 168, 18), // "fontCapitalization"
QT_MOC_LITERAL(14, 187, 21), // "QFont::Capitalization"
QT_MOC_LITERAL(15, 209, 10), // "fontFamily"
QT_MOC_LITERAL(16, 220, 14), // "fontFixedPitch"
QT_MOC_LITERAL(17, 235, 21), // "fontHintingPreference"
QT_MOC_LITERAL(18, 257, 24), // "QFont::HintingPreference"
QT_MOC_LITERAL(19, 282, 10), // "fontItalic"
QT_MOC_LITERAL(20, 293, 11), // "fontKerning"
QT_MOC_LITERAL(21, 305, 17), // "fontLetterSpacing"
QT_MOC_LITERAL(22, 323, 21), // "fontLetterSpacingType"
QT_MOC_LITERAL(23, 345, 18), // "QFont::SpacingType"
QT_MOC_LITERAL(24, 364, 12), // "fontOverline"
QT_MOC_LITERAL(25, 377, 13), // "fontPointSize"
QT_MOC_LITERAL(26, 391, 11), // "fontStretch"
QT_MOC_LITERAL(27, 403, 13), // "fontStrikeOut"
QT_MOC_LITERAL(28, 417, 13), // "fontStyleHint"
QT_MOC_LITERAL(29, 431, 16), // "QFont::StyleHint"
QT_MOC_LITERAL(30, 448, 17), // "fontStyleStrategy"
QT_MOC_LITERAL(31, 466, 20), // "QFont::StyleStrategy"
QT_MOC_LITERAL(32, 487, 13), // "fontUnderline"
QT_MOC_LITERAL(33, 501, 10), // "fontWeight"
QT_MOC_LITERAL(34, 512, 15), // "fontWordSpacing"
QT_MOC_LITERAL(35, 528, 8), // "isAnchor"
QT_MOC_LITERAL(36, 537, 7), // "isValid"
QT_MOC_LITERAL(37, 545, 9), // "setAnchor"
QT_MOC_LITERAL(38, 555, 6), // "anchor"
QT_MOC_LITERAL(39, 562, 13), // "setAnchorHref"
QT_MOC_LITERAL(40, 576, 5), // "value"
QT_MOC_LITERAL(41, 582, 14), // "setAnchorNames"
QT_MOC_LITERAL(42, 597, 5), // "names"
QT_MOC_LITERAL(43, 603, 7), // "setFont"
QT_MOC_LITERAL(44, 611, 50), // "QTextCharFormat::FontProperti..."
QT_MOC_LITERAL(45, 662, 8), // "behavior"
QT_MOC_LITERAL(46, 671, 21), // "setFontCapitalization"
QT_MOC_LITERAL(47, 693, 14), // "capitalization"
QT_MOC_LITERAL(48, 708, 13), // "setFontFamily"
QT_MOC_LITERAL(49, 722, 6), // "family"
QT_MOC_LITERAL(50, 729, 17), // "setFontFixedPitch"
QT_MOC_LITERAL(51, 747, 10), // "fixedPitch"
QT_MOC_LITERAL(52, 758, 24), // "setFontHintingPreference"
QT_MOC_LITERAL(53, 783, 17), // "hintingPreference"
QT_MOC_LITERAL(54, 801, 13), // "setFontItalic"
QT_MOC_LITERAL(55, 815, 6), // "italic"
QT_MOC_LITERAL(56, 822, 14), // "setFontKerning"
QT_MOC_LITERAL(57, 837, 6), // "enable"
QT_MOC_LITERAL(58, 844, 20), // "setFontLetterSpacing"
QT_MOC_LITERAL(59, 865, 7), // "spacing"
QT_MOC_LITERAL(60, 873, 24), // "setFontLetterSpacingType"
QT_MOC_LITERAL(61, 898, 17), // "letterSpacingType"
QT_MOC_LITERAL(62, 916, 15), // "setFontOverline"
QT_MOC_LITERAL(63, 932, 8), // "overline"
QT_MOC_LITERAL(64, 941, 16), // "setFontPointSize"
QT_MOC_LITERAL(65, 958, 4), // "size"
QT_MOC_LITERAL(66, 963, 14), // "setFontStretch"
QT_MOC_LITERAL(67, 978, 6), // "factor"
QT_MOC_LITERAL(68, 985, 16), // "setFontStrikeOut"
QT_MOC_LITERAL(69, 1002, 9), // "strikeOut"
QT_MOC_LITERAL(70, 1012, 16), // "setFontStyleHint"
QT_MOC_LITERAL(71, 1029, 4), // "hint"
QT_MOC_LITERAL(72, 1034, 8), // "strategy"
QT_MOC_LITERAL(73, 1043, 20), // "setFontStyleStrategy"
QT_MOC_LITERAL(74, 1064, 16), // "setFontUnderline"
QT_MOC_LITERAL(75, 1081, 9), // "underline"
QT_MOC_LITERAL(76, 1091, 13), // "setFontWeight"
QT_MOC_LITERAL(77, 1105, 6), // "weight"
QT_MOC_LITERAL(78, 1112, 18), // "setFontWordSpacing"
QT_MOC_LITERAL(79, 1131, 22), // "setTableCellColumnSpan"
QT_MOC_LITERAL(80, 1154, 19), // "tableCellColumnSpan"
QT_MOC_LITERAL(81, 1174, 19), // "setTableCellRowSpan"
QT_MOC_LITERAL(82, 1194, 16), // "tableCellRowSpan"
QT_MOC_LITERAL(83, 1211, 14), // "setTextOutline"
QT_MOC_LITERAL(84, 1226, 3), // "pen"
QT_MOC_LITERAL(85, 1230, 10), // "setToolTip"
QT_MOC_LITERAL(86, 1241, 3), // "tip"
QT_MOC_LITERAL(87, 1245, 17), // "setUnderlineColor"
QT_MOC_LITERAL(88, 1263, 5), // "color"
QT_MOC_LITERAL(89, 1269, 17), // "setUnderlineStyle"
QT_MOC_LITERAL(90, 1287, 31), // "QTextCharFormat::UnderlineStyle"
QT_MOC_LITERAL(91, 1319, 5), // "style"
QT_MOC_LITERAL(92, 1325, 20), // "setVerticalAlignment"
QT_MOC_LITERAL(93, 1346, 34), // "QTextCharFormat::VerticalAlig..."
QT_MOC_LITERAL(94, 1381, 9), // "alignment"
QT_MOC_LITERAL(95, 1391, 11), // "textOutline"
QT_MOC_LITERAL(96, 1403, 7), // "toolTip"
QT_MOC_LITERAL(97, 1411, 14), // "underlineColor"
QT_MOC_LITERAL(98, 1426, 14), // "underlineStyle"
QT_MOC_LITERAL(99, 1441, 17), // "verticalAlignment"
QT_MOC_LITERAL(100, 1459, 33), // "FontPropertiesInheritanceBeha..."
QT_MOC_LITERAL(101, 1493, 27), // "FontPropertiesSpecifiedOnly"
QT_MOC_LITERAL(102, 1521, 17), // "FontPropertiesAll"
QT_MOC_LITERAL(103, 1539, 14), // "UnderlineStyle"
QT_MOC_LITERAL(104, 1554, 11), // "NoUnderline"
QT_MOC_LITERAL(105, 1566, 15), // "SingleUnderline"
QT_MOC_LITERAL(106, 1582, 13), // "DashUnderline"
QT_MOC_LITERAL(107, 1596, 7), // "DotLine"
QT_MOC_LITERAL(108, 1604, 11), // "DashDotLine"
QT_MOC_LITERAL(109, 1616, 14), // "DashDotDotLine"
QT_MOC_LITERAL(110, 1631, 13), // "WaveUnderline"
QT_MOC_LITERAL(111, 1645, 19), // "SpellCheckUnderline"
QT_MOC_LITERAL(112, 1665, 17), // "VerticalAlignment"
QT_MOC_LITERAL(113, 1683, 11), // "AlignNormal"
QT_MOC_LITERAL(114, 1695, 16), // "AlignSuperScript"
QT_MOC_LITERAL(115, 1712, 14), // "AlignSubScript"
QT_MOC_LITERAL(116, 1727, 11), // "AlignMiddle"
QT_MOC_LITERAL(117, 1739, 8), // "AlignTop"
QT_MOC_LITERAL(118, 1748, 11), // "AlignBottom"
QT_MOC_LITERAL(119, 1760, 13) // "AlignBaseline"

    },
    "PythonQtWrapper_QTextCharFormat\0"
    "new_QTextCharFormat\0QTextCharFormat*\0"
    "\0fmt\0QTextCharFormat\0other\0"
    "delete_QTextCharFormat\0obj\0anchorHref\0"
    "theWrappedObject\0anchorNames\0font\0"
    "fontCapitalization\0QFont::Capitalization\0"
    "fontFamily\0fontFixedPitch\0"
    "fontHintingPreference\0QFont::HintingPreference\0"
    "fontItalic\0fontKerning\0fontLetterSpacing\0"
    "fontLetterSpacingType\0QFont::SpacingType\0"
    "fontOverline\0fontPointSize\0fontStretch\0"
    "fontStrikeOut\0fontStyleHint\0"
    "QFont::StyleHint\0fontStyleStrategy\0"
    "QFont::StyleStrategy\0fontUnderline\0"
    "fontWeight\0fontWordSpacing\0isAnchor\0"
    "isValid\0setAnchor\0anchor\0setAnchorHref\0"
    "value\0setAnchorNames\0names\0setFont\0"
    "QTextCharFormat::FontPropertiesInheritanceBehavior\0"
    "behavior\0setFontCapitalization\0"
    "capitalization\0setFontFamily\0family\0"
    "setFontFixedPitch\0fixedPitch\0"
    "setFontHintingPreference\0hintingPreference\0"
    "setFontItalic\0italic\0setFontKerning\0"
    "enable\0setFontLetterSpacing\0spacing\0"
    "setFontLetterSpacingType\0letterSpacingType\0"
    "setFontOverline\0overline\0setFontPointSize\0"
    "size\0setFontStretch\0factor\0setFontStrikeOut\0"
    "strikeOut\0setFontStyleHint\0hint\0"
    "strategy\0setFontStyleStrategy\0"
    "setFontUnderline\0underline\0setFontWeight\0"
    "weight\0setFontWordSpacing\0"
    "setTableCellColumnSpan\0tableCellColumnSpan\0"
    "setTableCellRowSpan\0tableCellRowSpan\0"
    "setTextOutline\0pen\0setToolTip\0tip\0"
    "setUnderlineColor\0color\0setUnderlineStyle\0"
    "QTextCharFormat::UnderlineStyle\0style\0"
    "setVerticalAlignment\0"
    "QTextCharFormat::VerticalAlignment\0"
    "alignment\0textOutline\0toolTip\0"
    "underlineColor\0underlineStyle\0"
    "verticalAlignment\0FontPropertiesInheritanceBehavior\0"
    "FontPropertiesSpecifiedOnly\0"
    "FontPropertiesAll\0UnderlineStyle\0"
    "NoUnderline\0SingleUnderline\0DashUnderline\0"
    "DotLine\0DashDotLine\0DashDotDotLine\0"
    "WaveUnderline\0SpellCheckUnderline\0"
    "VerticalAlignment\0AlignNormal\0"
    "AlignSuperScript\0AlignSubScript\0"
    "AlignMiddle\0AlignTop\0AlignBottom\0"
    "AlignBaseline"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextCharFormat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
       0,    0, // properties
       3,  580, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  329,    3, 0x0a /* Public */,
       1,    1,  330,    3, 0x0a /* Public */,
       1,    1,  333,    3, 0x0a /* Public */,
       7,    1,  336,    3, 0x0a /* Public */,
       9,    1,  339,    3, 0x0a /* Public */,
      11,    1,  342,    3, 0x0a /* Public */,
      12,    1,  345,    3, 0x0a /* Public */,
      13,    1,  348,    3, 0x0a /* Public */,
      15,    1,  351,    3, 0x0a /* Public */,
      16,    1,  354,    3, 0x0a /* Public */,
      17,    1,  357,    3, 0x0a /* Public */,
      19,    1,  360,    3, 0x0a /* Public */,
      20,    1,  363,    3, 0x0a /* Public */,
      21,    1,  366,    3, 0x0a /* Public */,
      22,    1,  369,    3, 0x0a /* Public */,
      24,    1,  372,    3, 0x0a /* Public */,
      25,    1,  375,    3, 0x0a /* Public */,
      26,    1,  378,    3, 0x0a /* Public */,
      27,    1,  381,    3, 0x0a /* Public */,
      28,    1,  384,    3, 0x0a /* Public */,
      30,    1,  387,    3, 0x0a /* Public */,
      32,    1,  390,    3, 0x0a /* Public */,
      33,    1,  393,    3, 0x0a /* Public */,
      34,    1,  396,    3, 0x0a /* Public */,
      35,    1,  399,    3, 0x0a /* Public */,
      36,    1,  402,    3, 0x0a /* Public */,
      37,    2,  405,    3, 0x0a /* Public */,
      39,    2,  410,    3, 0x0a /* Public */,
      41,    2,  415,    3, 0x0a /* Public */,
      43,    2,  420,    3, 0x0a /* Public */,
      43,    3,  425,    3, 0x0a /* Public */,
      46,    2,  432,    3, 0x0a /* Public */,
      48,    2,  437,    3, 0x0a /* Public */,
      50,    2,  442,    3, 0x0a /* Public */,
      52,    2,  447,    3, 0x0a /* Public */,
      54,    2,  452,    3, 0x0a /* Public */,
      56,    2,  457,    3, 0x0a /* Public */,
      58,    2,  462,    3, 0x0a /* Public */,
      60,    2,  467,    3, 0x0a /* Public */,
      62,    2,  472,    3, 0x0a /* Public */,
      64,    2,  477,    3, 0x0a /* Public */,
      66,    2,  482,    3, 0x0a /* Public */,
      68,    2,  487,    3, 0x0a /* Public */,
      70,    3,  492,    3, 0x0a /* Public */,
      70,    2,  499,    3, 0x2a /* Public | MethodCloned */,
      73,    2,  504,    3, 0x0a /* Public */,
      74,    2,  509,    3, 0x0a /* Public */,
      76,    2,  514,    3, 0x0a /* Public */,
      78,    2,  519,    3, 0x0a /* Public */,
      79,    2,  524,    3, 0x0a /* Public */,
      81,    2,  529,    3, 0x0a /* Public */,
      83,    2,  534,    3, 0x0a /* Public */,
      85,    2,  539,    3, 0x0a /* Public */,
      87,    2,  544,    3, 0x0a /* Public */,
      89,    2,  549,    3, 0x0a /* Public */,
      92,    2,  554,    3, 0x0a /* Public */,
      80,    1,  559,    3, 0x0a /* Public */,
      82,    1,  562,    3, 0x0a /* Public */,
      95,    1,  565,    3, 0x0a /* Public */,
      96,    1,  568,    3, 0x0a /* Public */,
      97,    1,  571,    3, 0x0a /* Public */,
      98,    1,  574,    3, 0x0a /* Public */,
      99,    1,  577,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QTextFormat,    4,
    0x80000000 | 2, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::QStringList, 0x80000000 | 2,   10,
    QMetaType::QFont, 0x80000000 | 2,   10,
    0x80000000 | 14, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    0x80000000 | 18, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    0x80000000 | 23, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    0x80000000 | 29, 0x80000000 | 2,   10,
    0x80000000 | 31, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   38,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   40,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QStringList,   10,   42,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QFont,   10,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QFont, 0x80000000 | 44,   10,   12,   45,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   10,   47,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   49,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   51,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   10,   53,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   55,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   57,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   59,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,   10,   61,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   63,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   65,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,   67,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   69,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 29, 0x80000000 | 31,   10,   71,   72,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 29,   10,   71,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 31,   10,   72,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   75,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,   77,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   59,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,   80,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,   82,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QPen,   10,   84,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   86,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QColor,   10,   88,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 90,   10,   91,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 93,   10,   94,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::QPen, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::QColor, 0x80000000 | 2,   10,
    0x80000000 | 90, 0x80000000 | 2,   10,
    0x80000000 | 93, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
     100, 0x0,    2,  592,
     103, 0x0,    8,  596,
     112, 0x0,    7,  612,

 // enum data: key, value
     101, uint(PythonQtWrapper_QTextCharFormat::FontPropertiesSpecifiedOnly),
     102, uint(PythonQtWrapper_QTextCharFormat::FontPropertiesAll),
     104, uint(PythonQtWrapper_QTextCharFormat::NoUnderline),
     105, uint(PythonQtWrapper_QTextCharFormat::SingleUnderline),
     106, uint(PythonQtWrapper_QTextCharFormat::DashUnderline),
     107, uint(PythonQtWrapper_QTextCharFormat::DotLine),
     108, uint(PythonQtWrapper_QTextCharFormat::DashDotLine),
     109, uint(PythonQtWrapper_QTextCharFormat::DashDotDotLine),
     110, uint(PythonQtWrapper_QTextCharFormat::WaveUnderline),
     111, uint(PythonQtWrapper_QTextCharFormat::SpellCheckUnderline),
     113, uint(PythonQtWrapper_QTextCharFormat::AlignNormal),
     114, uint(PythonQtWrapper_QTextCharFormat::AlignSuperScript),
     115, uint(PythonQtWrapper_QTextCharFormat::AlignSubScript),
     116, uint(PythonQtWrapper_QTextCharFormat::AlignMiddle),
     117, uint(PythonQtWrapper_QTextCharFormat::AlignTop),
     118, uint(PythonQtWrapper_QTextCharFormat::AlignBottom),
     119, uint(PythonQtWrapper_QTextCharFormat::AlignBaseline),

       0        // eod
};

void PythonQtWrapper_QTextCharFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextCharFormat *_t = static_cast<PythonQtWrapper_QTextCharFormat *>(_o);
        switch (_id) {
        case 0: { QTextCharFormat* _r = _t->new_QTextCharFormat();
            if (_a[0]) *reinterpret_cast< QTextCharFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextCharFormat* _r = _t->new_QTextCharFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextCharFormat* _r = _t->new_QTextCharFormat((*reinterpret_cast< const QTextCharFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextCharFormat((*reinterpret_cast< QTextCharFormat*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->anchorHref((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QStringList _r = _t->anchorNames((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: { QFont _r = _t->font((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 7: { QFont::Capitalization _r = _t->fontCapitalization((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::Capitalization*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->fontFamily((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->fontFixedPitch((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QFont::HintingPreference _r = _t->fontHintingPreference((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::HintingPreference*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->fontItalic((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->fontKerning((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->fontLetterSpacing((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { QFont::SpacingType _r = _t->fontLetterSpacingType((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::SpacingType*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->fontOverline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { qreal _r = _t->fontPointSize((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->fontStretch((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->fontStrikeOut((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QFont::StyleHint _r = _t->fontStyleHint((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::StyleHint*>(_a[0]) = _r; }  break;
        case 20: { QFont::StyleStrategy _r = _t->fontStyleStrategy((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont::StyleStrategy*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->fontUnderline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { int _r = _t->fontWeight((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 23: { qreal _r = _t->fontWordSpacing((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isAnchor((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isValid((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: _t->setAnchor((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 27: _t->setAnchorHref((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 28: _t->setAnchorNames((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 29: _t->setFont((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 30: _t->setFont((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< QTextCharFormat::FontPropertiesInheritanceBehavior(*)>(_a[3]))); break;
        case 31: _t->setFontCapitalization((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::Capitalization(*)>(_a[2]))); break;
        case 32: _t->setFontFamily((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 33: _t->setFontFixedPitch((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 34: _t->setFontHintingPreference((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::HintingPreference(*)>(_a[2]))); break;
        case 35: _t->setFontItalic((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->setFontKerning((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->setFontLetterSpacing((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 38: _t->setFontLetterSpacingType((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::SpacingType(*)>(_a[2]))); break;
        case 39: _t->setFontOverline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->setFontPointSize((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 41: _t->setFontStretch((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->setFontStrikeOut((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 43: _t->setFontStyleHint((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::StyleHint(*)>(_a[2])),(*reinterpret_cast< QFont::StyleStrategy(*)>(_a[3]))); break;
        case 44: _t->setFontStyleHint((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::StyleHint(*)>(_a[2]))); break;
        case 45: _t->setFontStyleStrategy((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QFont::StyleStrategy(*)>(_a[2]))); break;
        case 46: _t->setFontUnderline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->setFontWeight((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: _t->setFontWordSpacing((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 49: _t->setTableCellColumnSpan((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 50: _t->setTableCellRowSpan((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 51: _t->setTextOutline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QPen(*)>(_a[2]))); break;
        case 52: _t->setToolTip((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 53: _t->setUnderlineColor((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 54: _t->setUnderlineStyle((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QTextCharFormat::UnderlineStyle(*)>(_a[2]))); break;
        case 55: _t->setVerticalAlignment((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])),(*reinterpret_cast< QTextCharFormat::VerticalAlignment(*)>(_a[2]))); break;
        case 56: { int _r = _t->tableCellColumnSpan((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 57: { int _r = _t->tableCellRowSpan((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 58: { QPen _r = _t->textOutline((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPen*>(_a[0]) = _r; }  break;
        case 59: { QString _r = _t->toolTip((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 60: { QColor _r = _t->underlineColor((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 61: { QTextCharFormat::UnderlineStyle _r = _t->underlineStyle((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat::UnderlineStyle*>(_a[0]) = _r; }  break;
        case 62: { QTextCharFormat::VerticalAlignment _r = _t->verticalAlignment((*reinterpret_cast< QTextCharFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat::VerticalAlignment*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextCharFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextCharFormat.data,
      qt_meta_data_PythonQtWrapper_QTextCharFormat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextCharFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextCharFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextCharFormat.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextCharFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextCharFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 63;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QTextCursor_t {
    QByteArrayData data[146];
    char stringdata[1734];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextCursor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextCursor_t qt_meta_stringdata_PythonQtWrapper_QTextCursor = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QTextCursor"
QT_MOC_LITERAL(1, 28, 15), // "new_QTextCursor"
QT_MOC_LITERAL(2, 44, 12), // "QTextCursor*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 14), // "QTextDocument*"
QT_MOC_LITERAL(5, 73, 8), // "document"
QT_MOC_LITERAL(6, 82, 11), // "QTextFrame*"
QT_MOC_LITERAL(7, 94, 5), // "frame"
QT_MOC_LITERAL(8, 100, 10), // "QTextBlock"
QT_MOC_LITERAL(9, 111, 5), // "block"
QT_MOC_LITERAL(10, 117, 11), // "QTextCursor"
QT_MOC_LITERAL(11, 129, 6), // "cursor"
QT_MOC_LITERAL(12, 136, 18), // "delete_QTextCursor"
QT_MOC_LITERAL(13, 155, 3), // "obj"
QT_MOC_LITERAL(14, 159, 6), // "anchor"
QT_MOC_LITERAL(15, 166, 16), // "theWrappedObject"
QT_MOC_LITERAL(16, 183, 10), // "atBlockEnd"
QT_MOC_LITERAL(17, 194, 12), // "atBlockStart"
QT_MOC_LITERAL(18, 207, 5), // "atEnd"
QT_MOC_LITERAL(19, 213, 7), // "atStart"
QT_MOC_LITERAL(20, 221, 14), // "beginEditBlock"
QT_MOC_LITERAL(21, 236, 15), // "blockCharFormat"
QT_MOC_LITERAL(22, 252, 15), // "QTextCharFormat"
QT_MOC_LITERAL(23, 268, 11), // "blockFormat"
QT_MOC_LITERAL(24, 280, 16), // "QTextBlockFormat"
QT_MOC_LITERAL(25, 297, 11), // "blockNumber"
QT_MOC_LITERAL(26, 309, 10), // "charFormat"
QT_MOC_LITERAL(27, 320, 14), // "clearSelection"
QT_MOC_LITERAL(28, 335, 12), // "columnNumber"
QT_MOC_LITERAL(29, 348, 10), // "createList"
QT_MOC_LITERAL(30, 359, 10), // "QTextList*"
QT_MOC_LITERAL(31, 370, 22), // "QTextListFormat::Style"
QT_MOC_LITERAL(32, 393, 5), // "style"
QT_MOC_LITERAL(33, 399, 15), // "QTextListFormat"
QT_MOC_LITERAL(34, 415, 6), // "format"
QT_MOC_LITERAL(35, 422, 12), // "currentFrame"
QT_MOC_LITERAL(36, 435, 11), // "currentList"
QT_MOC_LITERAL(37, 447, 12), // "currentTable"
QT_MOC_LITERAL(38, 460, 11), // "QTextTable*"
QT_MOC_LITERAL(39, 472, 10), // "deleteChar"
QT_MOC_LITERAL(40, 483, 18), // "deletePreviousChar"
QT_MOC_LITERAL(41, 502, 12), // "endEditBlock"
QT_MOC_LITERAL(42, 515, 19), // "hasComplexSelection"
QT_MOC_LITERAL(43, 535, 12), // "hasSelection"
QT_MOC_LITERAL(44, 548, 11), // "insertBlock"
QT_MOC_LITERAL(45, 560, 14), // "insertFragment"
QT_MOC_LITERAL(46, 575, 21), // "QTextDocumentFragment"
QT_MOC_LITERAL(47, 597, 8), // "fragment"
QT_MOC_LITERAL(48, 606, 11), // "insertFrame"
QT_MOC_LITERAL(49, 618, 16), // "QTextFrameFormat"
QT_MOC_LITERAL(50, 635, 10), // "insertHtml"
QT_MOC_LITERAL(51, 646, 4), // "html"
QT_MOC_LITERAL(52, 651, 11), // "insertImage"
QT_MOC_LITERAL(53, 663, 5), // "image"
QT_MOC_LITERAL(54, 669, 4), // "name"
QT_MOC_LITERAL(55, 674, 16), // "QTextImageFormat"
QT_MOC_LITERAL(56, 691, 26), // "QTextFrameFormat::Position"
QT_MOC_LITERAL(57, 718, 9), // "alignment"
QT_MOC_LITERAL(58, 728, 10), // "insertList"
QT_MOC_LITERAL(59, 739, 11), // "insertTable"
QT_MOC_LITERAL(60, 751, 4), // "rows"
QT_MOC_LITERAL(61, 756, 4), // "cols"
QT_MOC_LITERAL(62, 761, 16), // "QTextTableFormat"
QT_MOC_LITERAL(63, 778, 10), // "insertText"
QT_MOC_LITERAL(64, 789, 4), // "text"
QT_MOC_LITERAL(65, 794, 8), // "isCopyOf"
QT_MOC_LITERAL(66, 803, 5), // "other"
QT_MOC_LITERAL(67, 809, 6), // "isNull"
QT_MOC_LITERAL(68, 816, 21), // "joinPreviousEditBlock"
QT_MOC_LITERAL(69, 838, 20), // "keepPositionOnInsert"
QT_MOC_LITERAL(70, 859, 20), // "mergeBlockCharFormat"
QT_MOC_LITERAL(71, 880, 8), // "modifier"
QT_MOC_LITERAL(72, 889, 16), // "mergeBlockFormat"
QT_MOC_LITERAL(73, 906, 15), // "mergeCharFormat"
QT_MOC_LITERAL(74, 922, 12), // "movePosition"
QT_MOC_LITERAL(75, 935, 26), // "QTextCursor::MoveOperation"
QT_MOC_LITERAL(76, 962, 2), // "op"
QT_MOC_LITERAL(77, 965, 21), // "QTextCursor::MoveMode"
QT_MOC_LITERAL(78, 987, 6), // "arg__2"
QT_MOC_LITERAL(79, 994, 1), // "n"
QT_MOC_LITERAL(80, 996, 6), // "__ne__"
QT_MOC_LITERAL(81, 1003, 3), // "rhs"
QT_MOC_LITERAL(82, 1007, 6), // "__lt__"
QT_MOC_LITERAL(83, 1014, 6), // "__le__"
QT_MOC_LITERAL(84, 1021, 6), // "__eq__"
QT_MOC_LITERAL(85, 1028, 6), // "__gt__"
QT_MOC_LITERAL(86, 1035, 6), // "__ge__"
QT_MOC_LITERAL(87, 1042, 8), // "position"
QT_MOC_LITERAL(88, 1051, 15), // "positionInBlock"
QT_MOC_LITERAL(89, 1067, 18), // "removeSelectedText"
QT_MOC_LITERAL(90, 1086, 6), // "select"
QT_MOC_LITERAL(91, 1093, 26), // "QTextCursor::SelectionType"
QT_MOC_LITERAL(92, 1120, 9), // "selection"
QT_MOC_LITERAL(93, 1130, 12), // "selectedText"
QT_MOC_LITERAL(94, 1143, 12), // "selectionEnd"
QT_MOC_LITERAL(95, 1156, 14), // "selectionStart"
QT_MOC_LITERAL(96, 1171, 18), // "setBlockCharFormat"
QT_MOC_LITERAL(97, 1190, 14), // "setBlockFormat"
QT_MOC_LITERAL(98, 1205, 13), // "setCharFormat"
QT_MOC_LITERAL(99, 1219, 23), // "setKeepPositionOnInsert"
QT_MOC_LITERAL(100, 1243, 1), // "b"
QT_MOC_LITERAL(101, 1245, 11), // "setPosition"
QT_MOC_LITERAL(102, 1257, 3), // "pos"
QT_MOC_LITERAL(103, 1261, 4), // "mode"
QT_MOC_LITERAL(104, 1266, 20), // "setVerticalMovementX"
QT_MOC_LITERAL(105, 1287, 1), // "x"
QT_MOC_LITERAL(106, 1289, 19), // "setVisualNavigation"
QT_MOC_LITERAL(107, 1309, 4), // "swap"
QT_MOC_LITERAL(108, 1314, 12), // "QTextCursor&"
QT_MOC_LITERAL(109, 1327, 17), // "verticalMovementX"
QT_MOC_LITERAL(110, 1345, 16), // "visualNavigation"
QT_MOC_LITERAL(111, 1362, 11), // "__nonzero__"
QT_MOC_LITERAL(112, 1374, 8), // "MoveMode"
QT_MOC_LITERAL(113, 1383, 10), // "MoveAnchor"
QT_MOC_LITERAL(114, 1394, 10), // "KeepAnchor"
QT_MOC_LITERAL(115, 1405, 13), // "MoveOperation"
QT_MOC_LITERAL(116, 1419, 6), // "NoMove"
QT_MOC_LITERAL(117, 1426, 5), // "Start"
QT_MOC_LITERAL(118, 1432, 2), // "Up"
QT_MOC_LITERAL(119, 1435, 11), // "StartOfLine"
QT_MOC_LITERAL(120, 1447, 12), // "StartOfBlock"
QT_MOC_LITERAL(121, 1460, 11), // "StartOfWord"
QT_MOC_LITERAL(122, 1472, 13), // "PreviousBlock"
QT_MOC_LITERAL(123, 1486, 17), // "PreviousCharacter"
QT_MOC_LITERAL(124, 1504, 12), // "PreviousWord"
QT_MOC_LITERAL(125, 1517, 4), // "Left"
QT_MOC_LITERAL(126, 1522, 8), // "WordLeft"
QT_MOC_LITERAL(127, 1531, 3), // "End"
QT_MOC_LITERAL(128, 1535, 4), // "Down"
QT_MOC_LITERAL(129, 1540, 9), // "EndOfLine"
QT_MOC_LITERAL(130, 1550, 9), // "EndOfWord"
QT_MOC_LITERAL(131, 1560, 10), // "EndOfBlock"
QT_MOC_LITERAL(132, 1571, 9), // "NextBlock"
QT_MOC_LITERAL(133, 1581, 13), // "NextCharacter"
QT_MOC_LITERAL(134, 1595, 8), // "NextWord"
QT_MOC_LITERAL(135, 1604, 5), // "Right"
QT_MOC_LITERAL(136, 1610, 9), // "WordRight"
QT_MOC_LITERAL(137, 1620, 8), // "NextCell"
QT_MOC_LITERAL(138, 1629, 12), // "PreviousCell"
QT_MOC_LITERAL(139, 1642, 7), // "NextRow"
QT_MOC_LITERAL(140, 1650, 11), // "PreviousRow"
QT_MOC_LITERAL(141, 1662, 13), // "SelectionType"
QT_MOC_LITERAL(142, 1676, 15), // "WordUnderCursor"
QT_MOC_LITERAL(143, 1692, 15), // "LineUnderCursor"
QT_MOC_LITERAL(144, 1708, 16), // "BlockUnderCursor"
QT_MOC_LITERAL(145, 1725, 8) // "Document"

    },
    "PythonQtWrapper_QTextCursor\0new_QTextCursor\0"
    "QTextCursor*\0\0QTextDocument*\0document\0"
    "QTextFrame*\0frame\0QTextBlock\0block\0"
    "QTextCursor\0cursor\0delete_QTextCursor\0"
    "obj\0anchor\0theWrappedObject\0atBlockEnd\0"
    "atBlockStart\0atEnd\0atStart\0beginEditBlock\0"
    "blockCharFormat\0QTextCharFormat\0"
    "blockFormat\0QTextBlockFormat\0blockNumber\0"
    "charFormat\0clearSelection\0columnNumber\0"
    "createList\0QTextList*\0QTextListFormat::Style\0"
    "style\0QTextListFormat\0format\0currentFrame\0"
    "currentList\0currentTable\0QTextTable*\0"
    "deleteChar\0deletePreviousChar\0"
    "endEditBlock\0hasComplexSelection\0"
    "hasSelection\0insertBlock\0insertFragment\0"
    "QTextDocumentFragment\0fragment\0"
    "insertFrame\0QTextFrameFormat\0insertHtml\0"
    "html\0insertImage\0image\0name\0"
    "QTextImageFormat\0QTextFrameFormat::Position\0"
    "alignment\0insertList\0insertTable\0rows\0"
    "cols\0QTextTableFormat\0insertText\0text\0"
    "isCopyOf\0other\0isNull\0joinPreviousEditBlock\0"
    "keepPositionOnInsert\0mergeBlockCharFormat\0"
    "modifier\0mergeBlockFormat\0mergeCharFormat\0"
    "movePosition\0QTextCursor::MoveOperation\0"
    "op\0QTextCursor::MoveMode\0arg__2\0n\0"
    "__ne__\0rhs\0__lt__\0__le__\0__eq__\0__gt__\0"
    "__ge__\0position\0positionInBlock\0"
    "removeSelectedText\0select\0"
    "QTextCursor::SelectionType\0selection\0"
    "selectedText\0selectionEnd\0selectionStart\0"
    "setBlockCharFormat\0setBlockFormat\0"
    "setCharFormat\0setKeepPositionOnInsert\0"
    "b\0setPosition\0pos\0mode\0setVerticalMovementX\0"
    "x\0setVisualNavigation\0swap\0QTextCursor&\0"
    "verticalMovementX\0visualNavigation\0"
    "__nonzero__\0MoveMode\0MoveAnchor\0"
    "KeepAnchor\0MoveOperation\0NoMove\0Start\0"
    "Up\0StartOfLine\0StartOfBlock\0StartOfWord\0"
    "PreviousBlock\0PreviousCharacter\0"
    "PreviousWord\0Left\0WordLeft\0End\0Down\0"
    "EndOfLine\0EndOfWord\0EndOfBlock\0NextBlock\0"
    "NextCharacter\0NextWord\0Right\0WordRight\0"
    "NextCell\0PreviousCell\0NextRow\0PreviousRow\0"
    "SelectionType\0WordUnderCursor\0"
    "LineUnderCursor\0BlockUnderCursor\0"
    "Document"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextCursor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      83,   14, // methods
       0,    0, // properties
       3,  780, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  429,    3, 0x0a /* Public */,
       1,    1,  430,    3, 0x0a /* Public */,
       1,    1,  433,    3, 0x0a /* Public */,
       1,    1,  436,    3, 0x0a /* Public */,
       1,    1,  439,    3, 0x0a /* Public */,
      12,    1,  442,    3, 0x0a /* Public */,
      14,    1,  445,    3, 0x0a /* Public */,
      16,    1,  448,    3, 0x0a /* Public */,
      17,    1,  451,    3, 0x0a /* Public */,
      18,    1,  454,    3, 0x0a /* Public */,
      19,    1,  457,    3, 0x0a /* Public */,
      20,    1,  460,    3, 0x0a /* Public */,
       9,    1,  463,    3, 0x0a /* Public */,
      21,    1,  466,    3, 0x0a /* Public */,
      23,    1,  469,    3, 0x0a /* Public */,
      25,    1,  472,    3, 0x0a /* Public */,
      26,    1,  475,    3, 0x0a /* Public */,
      27,    1,  478,    3, 0x0a /* Public */,
      28,    1,  481,    3, 0x0a /* Public */,
      29,    2,  484,    3, 0x0a /* Public */,
      29,    2,  489,    3, 0x0a /* Public */,
      35,    1,  494,    3, 0x0a /* Public */,
      36,    1,  497,    3, 0x0a /* Public */,
      37,    1,  500,    3, 0x0a /* Public */,
      39,    1,  503,    3, 0x0a /* Public */,
      40,    1,  506,    3, 0x0a /* Public */,
       5,    1,  509,    3, 0x0a /* Public */,
      41,    1,  512,    3, 0x0a /* Public */,
      42,    1,  515,    3, 0x0a /* Public */,
      43,    1,  518,    3, 0x0a /* Public */,
      44,    1,  521,    3, 0x0a /* Public */,
      44,    2,  524,    3, 0x0a /* Public */,
      44,    3,  529,    3, 0x0a /* Public */,
      45,    2,  536,    3, 0x0a /* Public */,
      48,    2,  541,    3, 0x0a /* Public */,
      50,    2,  546,    3, 0x0a /* Public */,
      52,    3,  551,    3, 0x0a /* Public */,
      52,    2,  558,    3, 0x2a /* Public | MethodCloned */,
      52,    2,  563,    3, 0x0a /* Public */,
      52,    2,  568,    3, 0x0a /* Public */,
      52,    3,  573,    3, 0x0a /* Public */,
      58,    2,  580,    3, 0x0a /* Public */,
      58,    2,  585,    3, 0x0a /* Public */,
      59,    3,  590,    3, 0x0a /* Public */,
      59,    4,  597,    3, 0x0a /* Public */,
      63,    2,  606,    3, 0x0a /* Public */,
      63,    3,  611,    3, 0x0a /* Public */,
      65,    2,  618,    3, 0x0a /* Public */,
      67,    1,  623,    3, 0x0a /* Public */,
      68,    1,  626,    3, 0x0a /* Public */,
      69,    1,  629,    3, 0x0a /* Public */,
      70,    2,  632,    3, 0x0a /* Public */,
      72,    2,  637,    3, 0x0a /* Public */,
      73,    2,  642,    3, 0x0a /* Public */,
      74,    4,  647,    3, 0x0a /* Public */,
      74,    3,  656,    3, 0x2a /* Public | MethodCloned */,
      74,    2,  663,    3, 0x2a /* Public | MethodCloned */,
      80,    2,  668,    3, 0x0a /* Public */,
      82,    2,  673,    3, 0x0a /* Public */,
      83,    2,  678,    3, 0x0a /* Public */,
      84,    2,  683,    3, 0x0a /* Public */,
      85,    2,  688,    3, 0x0a /* Public */,
      86,    2,  693,    3, 0x0a /* Public */,
      87,    1,  698,    3, 0x0a /* Public */,
      88,    1,  701,    3, 0x0a /* Public */,
      89,    1,  704,    3, 0x0a /* Public */,
      90,    2,  707,    3, 0x0a /* Public */,
      93,    1,  712,    3, 0x0a /* Public */,
      92,    1,  715,    3, 0x0a /* Public */,
      94,    1,  718,    3, 0x0a /* Public */,
      95,    1,  721,    3, 0x0a /* Public */,
      96,    2,  724,    3, 0x0a /* Public */,
      97,    2,  729,    3, 0x0a /* Public */,
      98,    2,  734,    3, 0x0a /* Public */,
      99,    2,  739,    3, 0x0a /* Public */,
     101,    3,  744,    3, 0x0a /* Public */,
     101,    2,  751,    3, 0x2a /* Public | MethodCloned */,
     104,    2,  756,    3, 0x0a /* Public */,
     106,    2,  761,    3, 0x0a /* Public */,
     107,    2,  766,    3, 0x0a /* Public */,
     109,    1,  771,    3, 0x0a /* Public */,
     110,    1,  774,    3, 0x0a /* Public */,
     111,    1,  777,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, 0x80000000 | 8,    9,
    0x80000000 | 2, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 2,   13,
    QMetaType::Int, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2,   15,
    0x80000000 | 8, 0x80000000 | 2,   15,
    0x80000000 | 22, 0x80000000 | 2,   15,
    0x80000000 | 24, 0x80000000 | 2,   15,
    QMetaType::Int, 0x80000000 | 2,   15,
    0x80000000 | 22, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::Int, 0x80000000 | 2,   15,
    0x80000000 | 30, 0x80000000 | 2, 0x80000000 | 31,   15,   32,
    0x80000000 | 30, 0x80000000 | 2, 0x80000000 | 33,   15,   34,
    0x80000000 | 6, 0x80000000 | 2,   15,
    0x80000000 | 30, 0x80000000 | 2,   15,
    0x80000000 | 38, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2,   15,
    0x80000000 | 4, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,   15,   34,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24, 0x80000000 | 22,   15,   34,   26,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 46,   15,   47,
    0x80000000 | 6, 0x80000000 | 2, 0x80000000 | 49,   15,   34,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   15,   51,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QImage, QMetaType::QString,   15,   53,   54,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QImage,   15,   53,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   15,   54,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 55,   15,   34,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 55, 0x80000000 | 56,   15,   34,   57,
    0x80000000 | 30, 0x80000000 | 2, 0x80000000 | 31,   15,   32,
    0x80000000 | 30, 0x80000000 | 2, 0x80000000 | 33,   15,   34,
    0x80000000 | 38, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   15,   60,   61,
    0x80000000 | 38, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, 0x80000000 | 62,   15,   60,   61,   34,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   15,   64,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 22,   15,   64,   34,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,   15,   66,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,   15,   71,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,   15,   71,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,   15,   71,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 75, 0x80000000 | 77, QMetaType::Int,   15,   76,   78,   79,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 75, 0x80000000 | 77,   15,   76,   78,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 75,   15,   76,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,   15,   81,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,   15,   81,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,   15,   81,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,   15,   81,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,   15,   81,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,   15,   81,
    QMetaType::Int, 0x80000000 | 2,   15,
    QMetaType::Int, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 91,   15,   92,
    QMetaType::QString, 0x80000000 | 2,   15,
    0x80000000 | 46, 0x80000000 | 2,   15,
    QMetaType::Int, 0x80000000 | 2,   15,
    QMetaType::Int, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,   15,   34,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 24,   15,   34,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,   15,   34,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   15,  100,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 77,   15,  102,  103,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   15,  102,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   15,  105,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   15,  100,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 108,   15,   66,
    QMetaType::Int, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   13,

 // enums: name, flags, count, data
     112, 0x0,    2,  792,
     115, 0x0,   25,  796,
     141, 0x0,    4,  846,

 // enum data: key, value
     113, uint(PythonQtWrapper_QTextCursor::MoveAnchor),
     114, uint(PythonQtWrapper_QTextCursor::KeepAnchor),
     116, uint(PythonQtWrapper_QTextCursor::NoMove),
     117, uint(PythonQtWrapper_QTextCursor::Start),
     118, uint(PythonQtWrapper_QTextCursor::Up),
     119, uint(PythonQtWrapper_QTextCursor::StartOfLine),
     120, uint(PythonQtWrapper_QTextCursor::StartOfBlock),
     121, uint(PythonQtWrapper_QTextCursor::StartOfWord),
     122, uint(PythonQtWrapper_QTextCursor::PreviousBlock),
     123, uint(PythonQtWrapper_QTextCursor::PreviousCharacter),
     124, uint(PythonQtWrapper_QTextCursor::PreviousWord),
     125, uint(PythonQtWrapper_QTextCursor::Left),
     126, uint(PythonQtWrapper_QTextCursor::WordLeft),
     127, uint(PythonQtWrapper_QTextCursor::End),
     128, uint(PythonQtWrapper_QTextCursor::Down),
     129, uint(PythonQtWrapper_QTextCursor::EndOfLine),
     130, uint(PythonQtWrapper_QTextCursor::EndOfWord),
     131, uint(PythonQtWrapper_QTextCursor::EndOfBlock),
     132, uint(PythonQtWrapper_QTextCursor::NextBlock),
     133, uint(PythonQtWrapper_QTextCursor::NextCharacter),
     134, uint(PythonQtWrapper_QTextCursor::NextWord),
     135, uint(PythonQtWrapper_QTextCursor::Right),
     136, uint(PythonQtWrapper_QTextCursor::WordRight),
     137, uint(PythonQtWrapper_QTextCursor::NextCell),
     138, uint(PythonQtWrapper_QTextCursor::PreviousCell),
     139, uint(PythonQtWrapper_QTextCursor::NextRow),
     140, uint(PythonQtWrapper_QTextCursor::PreviousRow),
     142, uint(PythonQtWrapper_QTextCursor::WordUnderCursor),
     143, uint(PythonQtWrapper_QTextCursor::LineUnderCursor),
     144, uint(PythonQtWrapper_QTextCursor::BlockUnderCursor),
     145, uint(PythonQtWrapper_QTextCursor::Document),

       0        // eod
};

void PythonQtWrapper_QTextCursor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextCursor *_t = static_cast<PythonQtWrapper_QTextCursor *>(_o);
        switch (_id) {
        case 0: { QTextCursor* _r = _t->new_QTextCursor();
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 1: { QTextCursor* _r = _t->new_QTextCursor((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 2: { QTextCursor* _r = _t->new_QTextCursor((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 3: { QTextCursor* _r = _t->new_QTextCursor((*reinterpret_cast< const QTextBlock(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 4: { QTextCursor* _r = _t->new_QTextCursor((*reinterpret_cast< const QTextCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QTextCursor((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 6: { int _r = _t->anchor((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->atBlockEnd((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->atBlockStart((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->atEnd((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->atStart((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->beginEditBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 12: { QTextBlock _r = _t->block((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 13: { QTextCharFormat _r = _t->blockCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 14: { QTextBlockFormat _r = _t->blockFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlockFormat*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->blockNumber((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { QTextCharFormat _r = _t->charFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 17: _t->clearSelection((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 18: { int _r = _t->columnNumber((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: { QTextList* _r = _t->createList((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextListFormat::Style(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 20: { QTextList* _r = _t->createList((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextListFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 21: { QTextFrame* _r = _t->currentFrame((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 22: { QTextList* _r = _t->currentList((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 23: { QTextTable* _r = _t->currentTable((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTable**>(_a[0]) = _r; }  break;
        case 24: _t->deleteChar((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 25: _t->deletePreviousChar((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 26: { QTextDocument* _r = _t->document((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 27: _t->endEditBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 28: { bool _r = _t->hasComplexSelection((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->hasSelection((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: _t->insertBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 31: _t->insertBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextBlockFormat(*)>(_a[2]))); break;
        case 32: _t->insertBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextBlockFormat(*)>(_a[2])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[3]))); break;
        case 33: _t->insertFragment((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextDocumentFragment(*)>(_a[2]))); break;
        case 34: { QTextFrame* _r = _t->insertFrame((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextFrameFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 35: _t->insertHtml((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 37: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 38: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 39: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextImageFormat(*)>(_a[2]))); break;
        case 40: _t->insertImage((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextImageFormat(*)>(_a[2])),(*reinterpret_cast< QTextFrameFormat::Position(*)>(_a[3]))); break;
        case 41: { QTextList* _r = _t->insertList((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextListFormat::Style(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 42: { QTextList* _r = _t->insertList((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextListFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 43: { QTextTable* _r = _t->insertTable((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextTable**>(_a[0]) = _r; }  break;
        case 44: { QTextTable* _r = _t->insertTable((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QTextTableFormat(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextTable**>(_a[0]) = _r; }  break;
        case 45: _t->insertText((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->insertText((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[3]))); break;
        case 47: { bool _r = _t->isCopyOf((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->isNull((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: _t->joinPreviousEditBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 50: { bool _r = _t->keepPositionOnInsert((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: _t->mergeBlockCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 52: _t->mergeBlockFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextBlockFormat(*)>(_a[2]))); break;
        case 53: _t->mergeCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 54: { bool _r = _t->movePosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2])),(*reinterpret_cast< QTextCursor::MoveMode(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: { bool _r = _t->movePosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2])),(*reinterpret_cast< QTextCursor::MoveMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { bool _r = _t->movePosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: { bool _r = _t->__ne__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: { bool _r = _t->__lt__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->__le__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: { bool _r = _t->__eq__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 61: { bool _r = _t->__gt__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 62: { bool _r = _t->__ge__((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 63: { int _r = _t->position((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 64: { int _r = _t->positionInBlock((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 65: _t->removeSelectedText((*reinterpret_cast< QTextCursor*(*)>(_a[1]))); break;
        case 66: _t->select((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::SelectionType(*)>(_a[2]))); break;
        case 67: { QString _r = _t->selectedText((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 68: { QTextDocumentFragment _r = _t->selection((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment*>(_a[0]) = _r; }  break;
        case 69: { int _r = _t->selectionEnd((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 70: { int _r = _t->selectionStart((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 71: _t->setBlockCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 72: _t->setBlockFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextBlockFormat(*)>(_a[2]))); break;
        case 73: _t->setCharFormat((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 74: _t->setKeepPositionOnInsert((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 75: _t->setPosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTextCursor::MoveMode(*)>(_a[3]))); break;
        case 76: _t->setPosition((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 77: _t->setVerticalMovementX((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 78: _t->setVisualNavigation((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 79: _t->swap((*reinterpret_cast< QTextCursor*(*)>(_a[1])),(*reinterpret_cast< QTextCursor(*)>(_a[2]))); break;
        case 80: { int _r = _t->verticalMovementX((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 81: { bool _r = _t->visualNavigation((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 82: { bool _r = _t->__nonzero__((*reinterpret_cast< QTextCursor*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextCursor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextCursor.data,
      qt_meta_data_PythonQtWrapper_QTextCursor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextCursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextCursor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextCursor.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextCursor*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextCursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 83)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 83;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QTextDocument_t {
    QByteArrayData data[144];
    char stringdata[1755];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextDocument_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextDocument_t qt_meta_stringdata_PythonQtWrapper_QTextDocument = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QTextDocument"
QT_MOC_LITERAL(1, 30, 17), // "new_QTextDocument"
QT_MOC_LITERAL(2, 48, 14), // "QTextDocument*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 6), // "parent"
QT_MOC_LITERAL(5, 71, 4), // "text"
QT_MOC_LITERAL(6, 76, 20), // "delete_QTextDocument"
QT_MOC_LITERAL(7, 97, 3), // "obj"
QT_MOC_LITERAL(8, 101, 11), // "addResource"
QT_MOC_LITERAL(9, 113, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 130, 4), // "type"
QT_MOC_LITERAL(11, 135, 4), // "name"
QT_MOC_LITERAL(12, 140, 8), // "resource"
QT_MOC_LITERAL(13, 149, 10), // "adjustSize"
QT_MOC_LITERAL(14, 160, 10), // "allFormats"
QT_MOC_LITERAL(15, 171, 20), // "QVector<QTextFormat>"
QT_MOC_LITERAL(16, 192, 18), // "availableRedoSteps"
QT_MOC_LITERAL(17, 211, 18), // "availableUndoSteps"
QT_MOC_LITERAL(18, 230, 7), // "baseUrl"
QT_MOC_LITERAL(19, 238, 5), // "begin"
QT_MOC_LITERAL(20, 244, 10), // "QTextBlock"
QT_MOC_LITERAL(21, 255, 10), // "blockCount"
QT_MOC_LITERAL(22, 266, 11), // "characterAt"
QT_MOC_LITERAL(23, 278, 3), // "pos"
QT_MOC_LITERAL(24, 282, 14), // "characterCount"
QT_MOC_LITERAL(25, 297, 5), // "clear"
QT_MOC_LITERAL(26, 303, 19), // "clearUndoRedoStacks"
QT_MOC_LITERAL(27, 323, 21), // "QTextDocument::Stacks"
QT_MOC_LITERAL(28, 345, 14), // "historyToClear"
QT_MOC_LITERAL(29, 360, 5), // "clone"
QT_MOC_LITERAL(30, 366, 12), // "createObject"
QT_MOC_LITERAL(31, 379, 12), // "QTextObject*"
QT_MOC_LITERAL(32, 392, 1), // "f"
QT_MOC_LITERAL(33, 394, 22), // "defaultCursorMoveStyle"
QT_MOC_LITERAL(34, 417, 19), // "Qt::CursorMoveStyle"
QT_MOC_LITERAL(35, 437, 11), // "defaultFont"
QT_MOC_LITERAL(36, 449, 17), // "defaultStyleSheet"
QT_MOC_LITERAL(37, 467, 17), // "defaultTextOption"
QT_MOC_LITERAL(38, 485, 11), // "QTextOption"
QT_MOC_LITERAL(39, 497, 14), // "documentLayout"
QT_MOC_LITERAL(40, 512, 28), // "QAbstractTextDocumentLayout*"
QT_MOC_LITERAL(41, 541, 14), // "documentMargin"
QT_MOC_LITERAL(42, 556, 12), // "drawContents"
QT_MOC_LITERAL(43, 569, 9), // "QPainter*"
QT_MOC_LITERAL(44, 579, 7), // "painter"
QT_MOC_LITERAL(45, 587, 4), // "rect"
QT_MOC_LITERAL(46, 592, 3), // "end"
QT_MOC_LITERAL(47, 596, 4), // "find"
QT_MOC_LITERAL(48, 601, 11), // "QTextCursor"
QT_MOC_LITERAL(49, 613, 4), // "expr"
QT_MOC_LITERAL(50, 618, 4), // "from"
QT_MOC_LITERAL(51, 623, 24), // "QTextDocument::FindFlags"
QT_MOC_LITERAL(52, 648, 7), // "options"
QT_MOC_LITERAL(53, 656, 9), // "subString"
QT_MOC_LITERAL(54, 666, 9), // "findBlock"
QT_MOC_LITERAL(55, 676, 21), // "findBlockByLineNumber"
QT_MOC_LITERAL(56, 698, 11), // "blockNumber"
QT_MOC_LITERAL(57, 710, 17), // "findBlockByNumber"
QT_MOC_LITERAL(58, 728, 10), // "firstBlock"
QT_MOC_LITERAL(59, 739, 7), // "frameAt"
QT_MOC_LITERAL(60, 747, 11), // "QTextFrame*"
QT_MOC_LITERAL(61, 759, 10), // "idealWidth"
QT_MOC_LITERAL(62, 770, 11), // "indentWidth"
QT_MOC_LITERAL(63, 782, 7), // "isEmpty"
QT_MOC_LITERAL(64, 790, 10), // "isModified"
QT_MOC_LITERAL(65, 801, 15), // "isRedoAvailable"
QT_MOC_LITERAL(66, 817, 15), // "isUndoAvailable"
QT_MOC_LITERAL(67, 833, 17), // "isUndoRedoEnabled"
QT_MOC_LITERAL(68, 851, 9), // "lastBlock"
QT_MOC_LITERAL(69, 861, 9), // "lineCount"
QT_MOC_LITERAL(70, 871, 12), // "loadResource"
QT_MOC_LITERAL(71, 884, 17), // "markContentsDirty"
QT_MOC_LITERAL(72, 902, 6), // "length"
QT_MOC_LITERAL(73, 909, 17), // "maximumBlockCount"
QT_MOC_LITERAL(74, 927, 15), // "metaInformation"
QT_MOC_LITERAL(75, 943, 30), // "QTextDocument::MetaInformation"
QT_MOC_LITERAL(76, 974, 4), // "info"
QT_MOC_LITERAL(77, 979, 6), // "object"
QT_MOC_LITERAL(78, 986, 11), // "objectIndex"
QT_MOC_LITERAL(79, 998, 15), // "objectForFormat"
QT_MOC_LITERAL(80, 1014, 6), // "arg__1"
QT_MOC_LITERAL(81, 1021, 9), // "pageCount"
QT_MOC_LITERAL(82, 1031, 8), // "pageSize"
QT_MOC_LITERAL(83, 1040, 5), // "print"
QT_MOC_LITERAL(84, 1046, 18), // "QPagedPaintDevice*"
QT_MOC_LITERAL(85, 1065, 7), // "printer"
QT_MOC_LITERAL(86, 1073, 4), // "redo"
QT_MOC_LITERAL(87, 1078, 12), // "QTextCursor*"
QT_MOC_LITERAL(88, 1091, 6), // "cursor"
QT_MOC_LITERAL(89, 1098, 8), // "revision"
QT_MOC_LITERAL(90, 1107, 9), // "rootFrame"
QT_MOC_LITERAL(91, 1117, 10), // "setBaseUrl"
QT_MOC_LITERAL(92, 1128, 3), // "url"
QT_MOC_LITERAL(93, 1132, 25), // "setDefaultCursorMoveStyle"
QT_MOC_LITERAL(94, 1158, 5), // "style"
QT_MOC_LITERAL(95, 1164, 14), // "setDefaultFont"
QT_MOC_LITERAL(96, 1179, 4), // "font"
QT_MOC_LITERAL(97, 1184, 20), // "setDefaultStyleSheet"
QT_MOC_LITERAL(98, 1205, 5), // "sheet"
QT_MOC_LITERAL(99, 1211, 20), // "setDefaultTextOption"
QT_MOC_LITERAL(100, 1232, 6), // "option"
QT_MOC_LITERAL(101, 1239, 17), // "setDocumentLayout"
QT_MOC_LITERAL(102, 1257, 6), // "layout"
QT_MOC_LITERAL(103, 1264, 17), // "setDocumentMargin"
QT_MOC_LITERAL(104, 1282, 6), // "margin"
QT_MOC_LITERAL(105, 1289, 7), // "setHtml"
QT_MOC_LITERAL(106, 1297, 4), // "html"
QT_MOC_LITERAL(107, 1302, 14), // "setIndentWidth"
QT_MOC_LITERAL(108, 1317, 5), // "width"
QT_MOC_LITERAL(109, 1323, 20), // "setMaximumBlockCount"
QT_MOC_LITERAL(110, 1344, 7), // "maximum"
QT_MOC_LITERAL(111, 1352, 18), // "setMetaInformation"
QT_MOC_LITERAL(112, 1371, 6), // "arg__2"
QT_MOC_LITERAL(113, 1378, 11), // "setPageSize"
QT_MOC_LITERAL(114, 1390, 4), // "size"
QT_MOC_LITERAL(115, 1395, 12), // "setPlainText"
QT_MOC_LITERAL(116, 1408, 12), // "setTextWidth"
QT_MOC_LITERAL(117, 1421, 18), // "setUndoRedoEnabled"
QT_MOC_LITERAL(118, 1440, 6), // "enable"
QT_MOC_LITERAL(119, 1447, 19), // "setUseDesignMetrics"
QT_MOC_LITERAL(120, 1467, 1), // "b"
QT_MOC_LITERAL(121, 1469, 9), // "textWidth"
QT_MOC_LITERAL(122, 1479, 6), // "toHtml"
QT_MOC_LITERAL(123, 1486, 8), // "encoding"
QT_MOC_LITERAL(124, 1495, 11), // "toPlainText"
QT_MOC_LITERAL(125, 1507, 4), // "undo"
QT_MOC_LITERAL(126, 1512, 16), // "useDesignMetrics"
QT_MOC_LITERAL(127, 1529, 8), // "FindFlag"
QT_MOC_LITERAL(128, 1538, 12), // "FindBackward"
QT_MOC_LITERAL(129, 1551, 19), // "FindCaseSensitively"
QT_MOC_LITERAL(130, 1571, 14), // "FindWholeWords"
QT_MOC_LITERAL(131, 1586, 9), // "FindFlags"
QT_MOC_LITERAL(132, 1596, 15), // "MetaInformation"
QT_MOC_LITERAL(133, 1612, 13), // "DocumentTitle"
QT_MOC_LITERAL(134, 1626, 11), // "DocumentUrl"
QT_MOC_LITERAL(135, 1638, 12), // "ResourceType"
QT_MOC_LITERAL(136, 1651, 12), // "HtmlResource"
QT_MOC_LITERAL(137, 1664, 13), // "ImageResource"
QT_MOC_LITERAL(138, 1678, 18), // "StyleSheetResource"
QT_MOC_LITERAL(139, 1697, 12), // "UserResource"
QT_MOC_LITERAL(140, 1710, 6), // "Stacks"
QT_MOC_LITERAL(141, 1717, 9), // "UndoStack"
QT_MOC_LITERAL(142, 1727, 9), // "RedoStack"
QT_MOC_LITERAL(143, 1737, 17) // "UndoAndRedoStacks"

    },
    "PythonQtWrapper_QTextDocument\0"
    "new_QTextDocument\0QTextDocument*\0\0"
    "parent\0text\0delete_QTextDocument\0obj\0"
    "addResource\0theWrappedObject\0type\0"
    "name\0resource\0adjustSize\0allFormats\0"
    "QVector<QTextFormat>\0availableRedoSteps\0"
    "availableUndoSteps\0baseUrl\0begin\0"
    "QTextBlock\0blockCount\0characterAt\0pos\0"
    "characterCount\0clear\0clearUndoRedoStacks\0"
    "QTextDocument::Stacks\0historyToClear\0"
    "clone\0createObject\0QTextObject*\0f\0"
    "defaultCursorMoveStyle\0Qt::CursorMoveStyle\0"
    "defaultFont\0defaultStyleSheet\0"
    "defaultTextOption\0QTextOption\0"
    "documentLayout\0QAbstractTextDocumentLayout*\0"
    "documentMargin\0drawContents\0QPainter*\0"
    "painter\0rect\0end\0find\0QTextCursor\0"
    "expr\0from\0QTextDocument::FindFlags\0"
    "options\0subString\0findBlock\0"
    "findBlockByLineNumber\0blockNumber\0"
    "findBlockByNumber\0firstBlock\0frameAt\0"
    "QTextFrame*\0idealWidth\0indentWidth\0"
    "isEmpty\0isModified\0isRedoAvailable\0"
    "isUndoAvailable\0isUndoRedoEnabled\0"
    "lastBlock\0lineCount\0loadResource\0"
    "markContentsDirty\0length\0maximumBlockCount\0"
    "metaInformation\0QTextDocument::MetaInformation\0"
    "info\0object\0objectIndex\0objectForFormat\0"
    "arg__1\0pageCount\0pageSize\0print\0"
    "QPagedPaintDevice*\0printer\0redo\0"
    "QTextCursor*\0cursor\0revision\0rootFrame\0"
    "setBaseUrl\0url\0setDefaultCursorMoveStyle\0"
    "style\0setDefaultFont\0font\0"
    "setDefaultStyleSheet\0sheet\0"
    "setDefaultTextOption\0option\0"
    "setDocumentLayout\0layout\0setDocumentMargin\0"
    "margin\0setHtml\0html\0setIndentWidth\0"
    "width\0setMaximumBlockCount\0maximum\0"
    "setMetaInformation\0arg__2\0setPageSize\0"
    "size\0setPlainText\0setTextWidth\0"
    "setUndoRedoEnabled\0enable\0setUseDesignMetrics\0"
    "b\0textWidth\0toHtml\0encoding\0toPlainText\0"
    "undo\0useDesignMetrics\0FindFlag\0"
    "FindBackward\0FindCaseSensitively\0"
    "FindWholeWords\0FindFlags\0MetaInformation\0"
    "DocumentTitle\0DocumentUrl\0ResourceType\0"
    "HtmlResource\0ImageResource\0"
    "StyleSheetResource\0UserResource\0Stacks\0"
    "UndoStack\0RedoStack\0UndoAndRedoStacks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextDocument[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      90,   14, // methods
       0,    0, // properties
       5,  866, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  464,    3, 0x0a /* Public */,
       1,    0,  467,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  468,    3, 0x0a /* Public */,
       1,    1,  473,    3, 0x2a /* Public | MethodCloned */,
       6,    1,  476,    3, 0x0a /* Public */,
       8,    4,  479,    3, 0x0a /* Public */,
      13,    1,  488,    3, 0x0a /* Public */,
      14,    1,  491,    3, 0x0a /* Public */,
      16,    1,  494,    3, 0x0a /* Public */,
      17,    1,  497,    3, 0x0a /* Public */,
      18,    1,  500,    3, 0x0a /* Public */,
      19,    1,  503,    3, 0x0a /* Public */,
      21,    1,  506,    3, 0x0a /* Public */,
      22,    2,  509,    3, 0x0a /* Public */,
      24,    1,  514,    3, 0x0a /* Public */,
      25,    1,  517,    3, 0x0a /* Public */,
      26,    2,  520,    3, 0x0a /* Public */,
      26,    1,  525,    3, 0x2a /* Public | MethodCloned */,
      29,    2,  528,    3, 0x0a /* Public */,
      29,    1,  533,    3, 0x2a /* Public | MethodCloned */,
      30,    2,  536,    3, 0x0a /* Public */,
      33,    1,  541,    3, 0x0a /* Public */,
      35,    1,  544,    3, 0x0a /* Public */,
      36,    1,  547,    3, 0x0a /* Public */,
      37,    1,  550,    3, 0x0a /* Public */,
      39,    1,  553,    3, 0x0a /* Public */,
      41,    1,  556,    3, 0x0a /* Public */,
      42,    3,  559,    3, 0x0a /* Public */,
      42,    2,  566,    3, 0x2a /* Public | MethodCloned */,
      46,    1,  571,    3, 0x0a /* Public */,
      47,    4,  574,    3, 0x0a /* Public */,
      47,    3,  583,    3, 0x2a /* Public | MethodCloned */,
      47,    4,  590,    3, 0x0a /* Public */,
      47,    3,  599,    3, 0x2a /* Public | MethodCloned */,
      47,    2,  606,    3, 0x2a /* Public | MethodCloned */,
      47,    4,  611,    3, 0x0a /* Public */,
      47,    3,  620,    3, 0x2a /* Public | MethodCloned */,
      47,    4,  627,    3, 0x0a /* Public */,
      47,    3,  636,    3, 0x2a /* Public | MethodCloned */,
      47,    2,  643,    3, 0x2a /* Public | MethodCloned */,
      54,    2,  648,    3, 0x0a /* Public */,
      55,    2,  653,    3, 0x0a /* Public */,
      57,    2,  658,    3, 0x0a /* Public */,
      58,    1,  663,    3, 0x0a /* Public */,
      59,    2,  666,    3, 0x0a /* Public */,
      61,    1,  671,    3, 0x0a /* Public */,
      62,    1,  674,    3, 0x0a /* Public */,
      63,    1,  677,    3, 0x0a /* Public */,
      64,    1,  680,    3, 0x0a /* Public */,
      65,    1,  683,    3, 0x0a /* Public */,
      66,    1,  686,    3, 0x0a /* Public */,
      67,    1,  689,    3, 0x0a /* Public */,
      68,    1,  692,    3, 0x0a /* Public */,
      69,    1,  695,    3, 0x0a /* Public */,
      70,    3,  698,    3, 0x0a /* Public */,
      71,    3,  705,    3, 0x0a /* Public */,
      73,    1,  712,    3, 0x0a /* Public */,
      74,    2,  715,    3, 0x0a /* Public */,
      77,    2,  720,    3, 0x0a /* Public */,
      79,    2,  725,    3, 0x0a /* Public */,
      81,    1,  730,    3, 0x0a /* Public */,
      82,    1,  733,    3, 0x0a /* Public */,
      83,    2,  736,    3, 0x0a /* Public */,
      86,    2,  741,    3, 0x0a /* Public */,
      12,    3,  746,    3, 0x0a /* Public */,
      89,    1,  753,    3, 0x0a /* Public */,
      90,    1,  756,    3, 0x0a /* Public */,
      91,    2,  759,    3, 0x0a /* Public */,
      93,    2,  764,    3, 0x0a /* Public */,
      95,    2,  769,    3, 0x0a /* Public */,
      97,    2,  774,    3, 0x0a /* Public */,
      99,    2,  779,    3, 0x0a /* Public */,
     101,    2,  784,    3, 0x0a /* Public */,
     103,    2,  789,    3, 0x0a /* Public */,
     105,    2,  794,    3, 0x0a /* Public */,
     107,    2,  799,    3, 0x0a /* Public */,
     109,    2,  804,    3, 0x0a /* Public */,
     111,    3,  809,    3, 0x0a /* Public */,
     113,    2,  816,    3, 0x0a /* Public */,
     115,    2,  821,    3, 0x0a /* Public */,
     116,    2,  826,    3, 0x0a /* Public */,
     117,    2,  831,    3, 0x0a /* Public */,
     119,    2,  836,    3, 0x0a /* Public */,
     114,    1,  841,    3, 0x0a /* Public */,
     121,    1,  844,    3, 0x0a /* Public */,
     122,    2,  847,    3, 0x0a /* Public */,
     122,    1,  852,    3, 0x2a /* Public | MethodCloned */,
     124,    1,  855,    3, 0x0a /* Public */,
     125,    2,  858,    3, 0x0a /* Public */,
     126,    1,  863,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QString, QMetaType::QObjectStar,    5,    4,
    0x80000000 | 2, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::QUrl, QMetaType::QVariant,    9,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 2,    9,
    0x80000000 | 15, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QUrl, 0x80000000 | 2,    9,
    0x80000000 | 20, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QChar, 0x80000000 | 2, QMetaType::Int,    9,   23,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 27,    9,   28,
    QMetaType::Void, 0x80000000 | 2,    9,
    0x80000000 | 2, 0x80000000 | 2, QMetaType::QObjectStar,    9,    4,
    0x80000000 | 2, 0x80000000 | 2,    9,
    0x80000000 | 31, 0x80000000 | 2, QMetaType::QTextFormat,    9,   32,
    0x80000000 | 34, 0x80000000 | 2,    9,
    QMetaType::QFont, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    0x80000000 | 38, 0x80000000 | 2,    9,
    0x80000000 | 40, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 43, QMetaType::QRectF,    9,   44,   45,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 43,    9,   44,
    0x80000000 | 20, 0x80000000 | 2,    9,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QRegExp, 0x80000000 | 48, 0x80000000 | 51,    9,   49,   50,   52,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QRegExp, 0x80000000 | 48,    9,   49,   50,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QRegExp, QMetaType::Int, 0x80000000 | 51,    9,   49,   50,   52,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QRegExp, QMetaType::Int,    9,   49,   50,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QRegExp,    9,   49,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 48, 0x80000000 | 51,    9,   53,   50,   52,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 48,    9,   53,   50,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QString, QMetaType::Int, 0x80000000 | 51,    9,   53,   50,   52,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QString, QMetaType::Int,    9,   53,   50,
    0x80000000 | 48, 0x80000000 | 2, QMetaType::QString,    9,   53,
    0x80000000 | 20, 0x80000000 | 2, QMetaType::Int,    9,   23,
    0x80000000 | 20, 0x80000000 | 2, QMetaType::Int,    9,   56,
    0x80000000 | 20, 0x80000000 | 2, QMetaType::Int,    9,   56,
    0x80000000 | 20, 0x80000000 | 2,    9,
    0x80000000 | 60, 0x80000000 | 2, QMetaType::Int,    9,   23,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    0x80000000 | 20, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, QMetaType::QUrl,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   50,   72,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 75,    9,   76,
    0x80000000 | 31, 0x80000000 | 2, QMetaType::Int,    9,   78,
    0x80000000 | 31, 0x80000000 | 2, QMetaType::QTextFormat,    9,   80,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QSizeF, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 84,    9,   85,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 87,    9,   88,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, QMetaType::QUrl,    9,   10,   11,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 60, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,    9,   92,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 34,    9,   94,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QFont,    9,   96,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   98,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 38,    9,  100,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 40,    9,  102,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,    9,  104,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,  106,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,    9,  108,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,  110,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 75, QMetaType::QString,    9,   76,  112,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QSizeF,    9,  114,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,    9,  108,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,  118,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,  120,
    QMetaType::QSizeF, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QByteArray,    9,  123,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 87,    9,   88,
    QMetaType::Bool, 0x80000000 | 2,    9,

 // enums: name, flags, count, data
     127, 0x0,    3,  886,
     131, 0x1,    3,  892,
     132, 0x0,    2,  898,
     135, 0x0,    4,  902,
     140, 0x0,    3,  910,

 // enum data: key, value
     128, uint(PythonQtWrapper_QTextDocument::FindBackward),
     129, uint(PythonQtWrapper_QTextDocument::FindCaseSensitively),
     130, uint(PythonQtWrapper_QTextDocument::FindWholeWords),
     128, uint(PythonQtWrapper_QTextDocument::FindBackward),
     129, uint(PythonQtWrapper_QTextDocument::FindCaseSensitively),
     130, uint(PythonQtWrapper_QTextDocument::FindWholeWords),
     133, uint(PythonQtWrapper_QTextDocument::DocumentTitle),
     134, uint(PythonQtWrapper_QTextDocument::DocumentUrl),
     136, uint(PythonQtWrapper_QTextDocument::HtmlResource),
     137, uint(PythonQtWrapper_QTextDocument::ImageResource),
     138, uint(PythonQtWrapper_QTextDocument::StyleSheetResource),
     139, uint(PythonQtWrapper_QTextDocument::UserResource),
     141, uint(PythonQtWrapper_QTextDocument::UndoStack),
     142, uint(PythonQtWrapper_QTextDocument::RedoStack),
     143, uint(PythonQtWrapper_QTextDocument::UndoAndRedoStacks),

       0        // eod
};

void PythonQtWrapper_QTextDocument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextDocument *_t = static_cast<PythonQtWrapper_QTextDocument *>(_o);
        switch (_id) {
        case 0: { QTextDocument* _r = _t->new_QTextDocument((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 1: { QTextDocument* _r = _t->new_QTextDocument();
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 2: { QTextDocument* _r = _t->new_QTextDocument((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 3: { QTextDocument* _r = _t->new_QTextDocument((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextDocument((*reinterpret_cast< QTextDocument*(*)>(_a[1]))); break;
        case 5: _t->addResource((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 6: _t->adjustSize((*reinterpret_cast< QTextDocument*(*)>(_a[1]))); break;
        case 7: { QVector<QTextFormat> _r = _t->allFormats((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QTextFormat>*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->availableRedoSteps((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->availableUndoSteps((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QUrl _r = _t->baseUrl((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 11: { QTextBlock _r = _t->begin((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->blockCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { QChar _r = _t->characterAt((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->characterCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: _t->clear((*reinterpret_cast< QTextDocument*(*)>(_a[1]))); break;
        case 16: _t->clearUndoRedoStacks((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextDocument::Stacks(*)>(_a[2]))); break;
        case 17: _t->clearUndoRedoStacks((*reinterpret_cast< QTextDocument*(*)>(_a[1]))); break;
        case 18: { QTextDocument* _r = _t->clone((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 19: { QTextDocument* _r = _t->clone((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 20: { QTextObject* _r = _t->createObject((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QTextFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextObject**>(_a[0]) = _r; }  break;
        case 21: { Qt::CursorMoveStyle _r = _t->defaultCursorMoveStyle((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CursorMoveStyle*>(_a[0]) = _r; }  break;
        case 22: { QFont _r = _t->defaultFont((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->defaultStyleSheet((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { QTextOption _r = _t->defaultTextOption((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption*>(_a[0]) = _r; }  break;
        case 25: { QAbstractTextDocumentLayout* _r = _t->documentLayout((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractTextDocumentLayout**>(_a[0]) = _r; }  break;
        case 26: { qreal _r = _t->documentMargin((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 27: _t->drawContents((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3]))); break;
        case 28: _t->drawContents((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2]))); break;
        case 29: { QTextBlock _r = _t->end((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 30: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< const QTextCursor(*)>(_a[3])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 31: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< const QTextCursor(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 32: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 33: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 34: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 35: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QTextCursor(*)>(_a[3])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 36: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QTextCursor(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 37: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 38: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 39: { QTextCursor _r = _t->find((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 40: { QTextBlock _r = _t->findBlock((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 41: { QTextBlock _r = _t->findBlockByLineNumber((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 42: { QTextBlock _r = _t->findBlockByNumber((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 43: { QTextBlock _r = _t->firstBlock((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 44: { QTextFrame* _r = _t->frameAt((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 45: { qreal _r = _t->idealWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 46: { qreal _r = _t->indentWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 47: { bool _r = _t->isEmpty((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 48: { bool _r = _t->isModified((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->isRedoAvailable((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->isUndoAvailable((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->isUndoRedoEnabled((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { QTextBlock _r = _t->lastBlock((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 53: { int _r = _t->lineCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 54: { QVariant _r = _t->loadResource((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 55: _t->markContentsDirty((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 56: { int _r = _t->maximumBlockCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 57: { QString _r = _t->metaInformation((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextDocument::MetaInformation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 58: { QTextObject* _r = _t->object((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextObject**>(_a[0]) = _r; }  break;
        case 59: { QTextObject* _r = _t->objectForFormat((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QTextFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextObject**>(_a[0]) = _r; }  break;
        case 60: { int _r = _t->pageCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 61: { QSizeF _r = _t->pageSize((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 62: _t->print((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QPagedPaintDevice*(*)>(_a[2]))); break;
        case 63: _t->redo((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextCursor*(*)>(_a[2]))); break;
        case 64: { QVariant _r = _t->resource((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 65: { int _r = _t->revision((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 66: { QTextFrame* _r = _t->rootFrame((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 67: _t->setBaseUrl((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 68: _t->setDefaultCursorMoveStyle((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< Qt::CursorMoveStyle(*)>(_a[2]))); break;
        case 69: _t->setDefaultFont((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 70: _t->setDefaultStyleSheet((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 71: _t->setDefaultTextOption((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QTextOption(*)>(_a[2]))); break;
        case 72: _t->setDocumentLayout((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QAbstractTextDocumentLayout*(*)>(_a[2]))); break;
        case 73: _t->setDocumentMargin((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 74: _t->setHtml((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 75: _t->setIndentWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 76: _t->setMaximumBlockCount((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 77: _t->setMetaInformation((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextDocument::MetaInformation(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 78: _t->setPageSize((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QSizeF(*)>(_a[2]))); break;
        case 79: _t->setPlainText((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 80: _t->setTextWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 81: _t->setUndoRedoEnabled((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 82: _t->setUseDesignMetrics((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 83: { QSizeF _r = _t->size((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        case 84: { qreal _r = _t->textWidth((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 85: { QString _r = _t->toHtml((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 86: { QString _r = _t->toHtml((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 87: { QString _r = _t->toPlainText((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 88: _t->undo((*reinterpret_cast< QTextDocument*(*)>(_a[1])),(*reinterpret_cast< QTextCursor*(*)>(_a[2]))); break;
        case 89: { bool _r = _t->useDesignMetrics((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractTextDocumentLayout* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 79:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 83:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 84:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 87:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 88:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 89:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextDocument::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextDocument.data,
      qt_meta_data_PythonQtWrapper_QTextDocument,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextDocument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextDocument::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextDocument.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextDocument*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextDocument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 90)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 90;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 90)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 90;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QTextDocumentFragment_t {
    QByteArrayData data[22];
    char stringdata[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextDocumentFragment_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextDocumentFragment_t qt_meta_stringdata_PythonQtWrapper_QTextDocumentFragment = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_QTextDocument..."
QT_MOC_LITERAL(1, 38, 25), // "new_QTextDocumentFragment"
QT_MOC_LITERAL(2, 64, 22), // "QTextDocumentFragment*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 11), // "QTextCursor"
QT_MOC_LITERAL(5, 100, 5), // "range"
QT_MOC_LITERAL(6, 106, 20), // "const QTextDocument*"
QT_MOC_LITERAL(7, 127, 8), // "document"
QT_MOC_LITERAL(8, 136, 21), // "QTextDocumentFragment"
QT_MOC_LITERAL(9, 158, 3), // "rhs"
QT_MOC_LITERAL(10, 162, 28), // "delete_QTextDocumentFragment"
QT_MOC_LITERAL(11, 191, 3), // "obj"
QT_MOC_LITERAL(12, 195, 37), // "static_QTextDocumentFragment_..."
QT_MOC_LITERAL(13, 233, 4), // "html"
QT_MOC_LITERAL(14, 238, 16), // "resourceProvider"
QT_MOC_LITERAL(15, 255, 42), // "static_QTextDocumentFragment_..."
QT_MOC_LITERAL(16, 298, 9), // "plainText"
QT_MOC_LITERAL(17, 308, 7), // "isEmpty"
QT_MOC_LITERAL(18, 316, 16), // "theWrappedObject"
QT_MOC_LITERAL(19, 333, 6), // "toHtml"
QT_MOC_LITERAL(20, 340, 8), // "encoding"
QT_MOC_LITERAL(21, 349, 11) // "toPlainText"

    },
    "PythonQtWrapper_QTextDocumentFragment\0"
    "new_QTextDocumentFragment\0"
    "QTextDocumentFragment*\0\0QTextCursor\0"
    "range\0const QTextDocument*\0document\0"
    "QTextDocumentFragment\0rhs\0"
    "delete_QTextDocumentFragment\0obj\0"
    "static_QTextDocumentFragment_fromHtml\0"
    "html\0resourceProvider\0"
    "static_QTextDocumentFragment_fromPlainText\0"
    "plainText\0isEmpty\0theWrappedObject\0"
    "toHtml\0encoding\0toPlainText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextDocumentFragment[] = {

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
       1,    1,   78,    3, 0x0a /* Public */,
       1,    1,   81,    3, 0x0a /* Public */,
      10,    1,   84,    3, 0x0a /* Public */,
      12,    1,   87,    3, 0x0a /* Public */,
      12,    2,   90,    3, 0x0a /* Public */,
      15,    1,   95,    3, 0x0a /* Public */,
      17,    1,   98,    3, 0x0a /* Public */,
      19,    2,  101,    3, 0x0a /* Public */,
      19,    1,  106,    3, 0x2a /* Public | MethodCloned */,
      21,    1,  109,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 2,   11,
    0x80000000 | 8, QMetaType::QString,   13,
    0x80000000 | 8, QMetaType::QString, 0x80000000 | 6,   13,   14,
    0x80000000 | 8, QMetaType::QString,   16,
    QMetaType::Bool, 0x80000000 | 2,   18,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QByteArray,   18,   20,
    QMetaType::QString, 0x80000000 | 2,   18,
    QMetaType::QString, 0x80000000 | 2,   18,

       0        // eod
};

void PythonQtWrapper_QTextDocumentFragment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextDocumentFragment *_t = static_cast<PythonQtWrapper_QTextDocumentFragment *>(_o);
        switch (_id) {
        case 0: { QTextDocumentFragment* _r = _t->new_QTextDocumentFragment();
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment**>(_a[0]) = _r; }  break;
        case 1: { QTextDocumentFragment* _r = _t->new_QTextDocumentFragment((*reinterpret_cast< const QTextCursor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment**>(_a[0]) = _r; }  break;
        case 2: { QTextDocumentFragment* _r = _t->new_QTextDocumentFragment((*reinterpret_cast< const QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment**>(_a[0]) = _r; }  break;
        case 3: { QTextDocumentFragment* _r = _t->new_QTextDocumentFragment((*reinterpret_cast< const QTextDocumentFragment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextDocumentFragment((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1]))); break;
        case 5: { QTextDocumentFragment _r = _t->static_QTextDocumentFragment_fromHtml((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment*>(_a[0]) = _r; }  break;
        case 6: { QTextDocumentFragment _r = _t->static_QTextDocumentFragment_fromHtml((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QTextDocument*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment*>(_a[0]) = _r; }  break;
        case 7: { QTextDocumentFragment _r = _t->static_QTextDocumentFragment_fromPlainText((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentFragment*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isEmpty((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->toHtml((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->toHtml((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->toPlainText((*reinterpret_cast< QTextDocumentFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextDocumentFragment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextDocumentFragment.data,
      qt_meta_data_PythonQtWrapper_QTextDocumentFragment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextDocumentFragment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextDocumentFragment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextDocumentFragment.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextDocumentFragment*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextDocumentFragment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextDocumentWriter_t {
    QByteArrayData data[23];
    char stringdata[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextDocumentWriter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextDocumentWriter_t qt_meta_stringdata_PythonQtWrapper_QTextDocumentWriter = {
    {
QT_MOC_LITERAL(0, 0, 35), // "PythonQtWrapper_QTextDocument..."
QT_MOC_LITERAL(1, 36, 23), // "new_QTextDocumentWriter"
QT_MOC_LITERAL(2, 60, 20), // "QTextDocumentWriter*"
QT_MOC_LITERAL(3, 81, 0), // ""
QT_MOC_LITERAL(4, 82, 10), // "QIODevice*"
QT_MOC_LITERAL(5, 93, 6), // "device"
QT_MOC_LITERAL(6, 100, 6), // "format"
QT_MOC_LITERAL(7, 107, 8), // "fileName"
QT_MOC_LITERAL(8, 116, 26), // "delete_QTextDocumentWriter"
QT_MOC_LITERAL(9, 143, 3), // "obj"
QT_MOC_LITERAL(10, 147, 5), // "codec"
QT_MOC_LITERAL(11, 153, 11), // "QTextCodec*"
QT_MOC_LITERAL(12, 165, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 182, 8), // "setCodec"
QT_MOC_LITERAL(14, 191, 9), // "setDevice"
QT_MOC_LITERAL(15, 201, 11), // "setFileName"
QT_MOC_LITERAL(16, 213, 9), // "setFormat"
QT_MOC_LITERAL(17, 223, 51), // "static_QTextDocumentWriter_su..."
QT_MOC_LITERAL(18, 275, 5), // "write"
QT_MOC_LITERAL(19, 281, 20), // "const QTextDocument*"
QT_MOC_LITERAL(20, 302, 8), // "document"
QT_MOC_LITERAL(21, 311, 21), // "QTextDocumentFragment"
QT_MOC_LITERAL(22, 333, 8) // "fragment"

    },
    "PythonQtWrapper_QTextDocumentWriter\0"
    "new_QTextDocumentWriter\0QTextDocumentWriter*\0"
    "\0QIODevice*\0device\0format\0fileName\0"
    "delete_QTextDocumentWriter\0obj\0codec\0"
    "QTextCodec*\0theWrappedObject\0setCodec\0"
    "setDevice\0setFileName\0setFormat\0"
    "static_QTextDocumentWriter_supportedDocumentFormats\0"
    "write\0const QTextDocument*\0document\0"
    "QTextDocumentFragment\0fragment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextDocumentWriter[] = {

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
       1,    2,   95,    3, 0x0a /* Public */,
       1,    2,  100,    3, 0x0a /* Public */,
       1,    1,  105,    3, 0x2a /* Public | MethodCloned */,
       8,    1,  108,    3, 0x0a /* Public */,
      10,    1,  111,    3, 0x0a /* Public */,
       5,    1,  114,    3, 0x0a /* Public */,
       7,    1,  117,    3, 0x0a /* Public */,
       6,    1,  120,    3, 0x0a /* Public */,
      13,    2,  123,    3, 0x0a /* Public */,
      14,    2,  128,    3, 0x0a /* Public */,
      15,    2,  133,    3, 0x0a /* Public */,
      16,    2,  138,    3, 0x0a /* Public */,
      17,    0,  143,    3, 0x0a /* Public */,
      18,    2,  144,    3, 0x0a /* Public */,
      18,    2,  149,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QByteArray,    5,    6,
    0x80000000 | 2, QMetaType::QString, QMetaType::QByteArray,    7,    6,
    0x80000000 | 2, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    0x80000000 | 11, 0x80000000 | 2,   12,
    0x80000000 | 4, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::QByteArray, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,   12,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   12,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   12,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray,   12,    6,
    QMetaType::QByteArrayList,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 19,   12,   20,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 21,   12,   22,

       0        // eod
};

void PythonQtWrapper_QTextDocumentWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextDocumentWriter *_t = static_cast<PythonQtWrapper_QTextDocumentWriter *>(_o);
        switch (_id) {
        case 0: { QTextDocumentWriter* _r = _t->new_QTextDocumentWriter();
            if (_a[0]) *reinterpret_cast< QTextDocumentWriter**>(_a[0]) = _r; }  break;
        case 1: { QTextDocumentWriter* _r = _t->new_QTextDocumentWriter((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocumentWriter**>(_a[0]) = _r; }  break;
        case 2: { QTextDocumentWriter* _r = _t->new_QTextDocumentWriter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextDocumentWriter**>(_a[0]) = _r; }  break;
        case 3: { QTextDocumentWriter* _r = _t->new_QTextDocumentWriter((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocumentWriter**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextDocumentWriter((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1]))); break;
        case 5: { QTextCodec* _r = _t->codec((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCodec**>(_a[0]) = _r; }  break;
        case 6: { QIODevice* _r = _t->device((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->fileName((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QByteArray _r = _t->format((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 9: _t->setCodec((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< QTextCodec*(*)>(_a[2]))); break;
        case 10: _t->setDevice((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 11: _t->setFileName((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->setFormat((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 13: { QList<QByteArray> _r = _t->static_QTextDocumentWriter_supportedDocumentFormats();
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->write((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< const QTextDocument*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->write((*reinterpret_cast< QTextDocumentWriter*(*)>(_a[1])),(*reinterpret_cast< const QTextDocumentFragment(*)>(_a[2])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextDocumentWriter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextDocumentWriter.data,
      qt_meta_data_PythonQtWrapper_QTextDocumentWriter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextDocumentWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextDocumentWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextDocumentWriter.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextDocumentWriter*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextDocumentWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextEdit_t {
    QByteArrayData data[168];
    char stringdata[2239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextEdit_t qt_meta_stringdata_PythonQtWrapper_QTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QTextEdit"
QT_MOC_LITERAL(1, 26, 13), // "new_QTextEdit"
QT_MOC_LITERAL(2, 40, 10), // "QTextEdit*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 8), // "QWidget*"
QT_MOC_LITERAL(5, 61, 6), // "parent"
QT_MOC_LITERAL(6, 68, 4), // "text"
QT_MOC_LITERAL(7, 73, 16), // "delete_QTextEdit"
QT_MOC_LITERAL(8, 90, 3), // "obj"
QT_MOC_LITERAL(9, 94, 14), // "acceptRichText"
QT_MOC_LITERAL(10, 109, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 126, 9), // "alignment"
QT_MOC_LITERAL(12, 136, 13), // "Qt::Alignment"
QT_MOC_LITERAL(13, 150, 8), // "anchorAt"
QT_MOC_LITERAL(14, 159, 3), // "pos"
QT_MOC_LITERAL(15, 163, 14), // "autoFormatting"
QT_MOC_LITERAL(16, 178, 25), // "QTextEdit::AutoFormatting"
QT_MOC_LITERAL(17, 204, 21), // "canInsertFromMimeData"
QT_MOC_LITERAL(18, 226, 16), // "const QMimeData*"
QT_MOC_LITERAL(19, 243, 6), // "source"
QT_MOC_LITERAL(20, 250, 8), // "canPaste"
QT_MOC_LITERAL(21, 259, 11), // "changeEvent"
QT_MOC_LITERAL(22, 271, 7), // "QEvent*"
QT_MOC_LITERAL(23, 279, 1), // "e"
QT_MOC_LITERAL(24, 281, 16), // "contextMenuEvent"
QT_MOC_LITERAL(25, 298, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(26, 317, 27), // "createMimeDataFromSelection"
QT_MOC_LITERAL(27, 345, 10), // "QMimeData*"
QT_MOC_LITERAL(28, 356, 25), // "createStandardContextMenu"
QT_MOC_LITERAL(29, 382, 6), // "QMenu*"
QT_MOC_LITERAL(30, 389, 8), // "position"
QT_MOC_LITERAL(31, 398, 17), // "currentCharFormat"
QT_MOC_LITERAL(32, 416, 15), // "QTextCharFormat"
QT_MOC_LITERAL(33, 432, 11), // "currentFont"
QT_MOC_LITERAL(34, 444, 17), // "cursorForPosition"
QT_MOC_LITERAL(35, 462, 11), // "QTextCursor"
QT_MOC_LITERAL(36, 474, 10), // "cursorRect"
QT_MOC_LITERAL(37, 485, 6), // "cursor"
QT_MOC_LITERAL(38, 492, 11), // "cursorWidth"
QT_MOC_LITERAL(39, 504, 15), // "doSetTextCursor"
QT_MOC_LITERAL(40, 520, 8), // "document"
QT_MOC_LITERAL(41, 529, 14), // "QTextDocument*"
QT_MOC_LITERAL(42, 544, 13), // "documentTitle"
QT_MOC_LITERAL(43, 558, 14), // "dragEnterEvent"
QT_MOC_LITERAL(44, 573, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(45, 590, 14), // "dragLeaveEvent"
QT_MOC_LITERAL(46, 605, 16), // "QDragLeaveEvent*"
QT_MOC_LITERAL(47, 622, 13), // "dragMoveEvent"
QT_MOC_LITERAL(48, 636, 15), // "QDragMoveEvent*"
QT_MOC_LITERAL(49, 652, 9), // "dropEvent"
QT_MOC_LITERAL(50, 662, 11), // "QDropEvent*"
QT_MOC_LITERAL(51, 674, 19), // "ensureCursorVisible"
QT_MOC_LITERAL(52, 694, 5), // "event"
QT_MOC_LITERAL(53, 700, 15), // "extraSelections"
QT_MOC_LITERAL(54, 716, 32), // "QList<QTextEdit::ExtraSelection>"
QT_MOC_LITERAL(55, 749, 4), // "find"
QT_MOC_LITERAL(56, 754, 3), // "exp"
QT_MOC_LITERAL(57, 758, 24), // "QTextDocument::FindFlags"
QT_MOC_LITERAL(58, 783, 7), // "options"
QT_MOC_LITERAL(59, 791, 12), // "focusInEvent"
QT_MOC_LITERAL(60, 804, 12), // "QFocusEvent*"
QT_MOC_LITERAL(61, 817, 18), // "focusNextPrevChild"
QT_MOC_LITERAL(62, 836, 4), // "next"
QT_MOC_LITERAL(63, 841, 13), // "focusOutEvent"
QT_MOC_LITERAL(64, 855, 10), // "fontFamily"
QT_MOC_LITERAL(65, 866, 10), // "fontItalic"
QT_MOC_LITERAL(66, 877, 13), // "fontPointSize"
QT_MOC_LITERAL(67, 891, 13), // "fontUnderline"
QT_MOC_LITERAL(68, 905, 10), // "fontWeight"
QT_MOC_LITERAL(69, 916, 16), // "inputMethodEvent"
QT_MOC_LITERAL(70, 933, 18), // "QInputMethodEvent*"
QT_MOC_LITERAL(71, 952, 6), // "arg__1"
QT_MOC_LITERAL(72, 959, 16), // "inputMethodQuery"
QT_MOC_LITERAL(73, 976, 20), // "Qt::InputMethodQuery"
QT_MOC_LITERAL(74, 997, 8), // "property"
QT_MOC_LITERAL(75, 1006, 5), // "query"
QT_MOC_LITERAL(76, 1012, 8), // "argument"
QT_MOC_LITERAL(77, 1021, 18), // "insertFromMimeData"
QT_MOC_LITERAL(78, 1040, 10), // "isReadOnly"
QT_MOC_LITERAL(79, 1051, 17), // "isUndoRedoEnabled"
QT_MOC_LITERAL(80, 1069, 13), // "keyPressEvent"
QT_MOC_LITERAL(81, 1083, 10), // "QKeyEvent*"
QT_MOC_LITERAL(82, 1094, 15), // "keyReleaseEvent"
QT_MOC_LITERAL(83, 1110, 21), // "lineWrapColumnOrWidth"
QT_MOC_LITERAL(84, 1132, 12), // "lineWrapMode"
QT_MOC_LITERAL(85, 1145, 23), // "QTextEdit::LineWrapMode"
QT_MOC_LITERAL(86, 1169, 12), // "loadResource"
QT_MOC_LITERAL(87, 1182, 4), // "type"
QT_MOC_LITERAL(88, 1187, 4), // "name"
QT_MOC_LITERAL(89, 1192, 22), // "mergeCurrentCharFormat"
QT_MOC_LITERAL(90, 1215, 8), // "modifier"
QT_MOC_LITERAL(91, 1224, 21), // "mouseDoubleClickEvent"
QT_MOC_LITERAL(92, 1246, 12), // "QMouseEvent*"
QT_MOC_LITERAL(93, 1259, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(94, 1274, 15), // "mousePressEvent"
QT_MOC_LITERAL(95, 1290, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(96, 1308, 10), // "moveCursor"
QT_MOC_LITERAL(97, 1319, 26), // "QTextCursor::MoveOperation"
QT_MOC_LITERAL(98, 1346, 9), // "operation"
QT_MOC_LITERAL(99, 1356, 21), // "QTextCursor::MoveMode"
QT_MOC_LITERAL(100, 1378, 4), // "mode"
QT_MOC_LITERAL(101, 1383, 13), // "overwriteMode"
QT_MOC_LITERAL(102, 1397, 10), // "paintEvent"
QT_MOC_LITERAL(103, 1408, 12), // "QPaintEvent*"
QT_MOC_LITERAL(104, 1421, 15), // "placeholderText"
QT_MOC_LITERAL(105, 1437, 5), // "print"
QT_MOC_LITERAL(106, 1443, 18), // "QPagedPaintDevice*"
QT_MOC_LITERAL(107, 1462, 7), // "printer"
QT_MOC_LITERAL(108, 1470, 11), // "resizeEvent"
QT_MOC_LITERAL(109, 1482, 13), // "QResizeEvent*"
QT_MOC_LITERAL(110, 1496, 16), // "scrollContentsBy"
QT_MOC_LITERAL(111, 1513, 2), // "dx"
QT_MOC_LITERAL(112, 1516, 2), // "dy"
QT_MOC_LITERAL(113, 1519, 17), // "setAcceptRichText"
QT_MOC_LITERAL(114, 1537, 6), // "accept"
QT_MOC_LITERAL(115, 1544, 17), // "setAutoFormatting"
QT_MOC_LITERAL(116, 1562, 8), // "features"
QT_MOC_LITERAL(117, 1571, 20), // "setCurrentCharFormat"
QT_MOC_LITERAL(118, 1592, 6), // "format"
QT_MOC_LITERAL(119, 1599, 14), // "setCursorWidth"
QT_MOC_LITERAL(120, 1614, 5), // "width"
QT_MOC_LITERAL(121, 1620, 11), // "setDocument"
QT_MOC_LITERAL(122, 1632, 16), // "setDocumentTitle"
QT_MOC_LITERAL(123, 1649, 5), // "title"
QT_MOC_LITERAL(124, 1655, 18), // "setExtraSelections"
QT_MOC_LITERAL(125, 1674, 10), // "selections"
QT_MOC_LITERAL(126, 1685, 24), // "setLineWrapColumnOrWidth"
QT_MOC_LITERAL(127, 1710, 1), // "w"
QT_MOC_LITERAL(128, 1712, 15), // "setLineWrapMode"
QT_MOC_LITERAL(129, 1728, 16), // "setOverwriteMode"
QT_MOC_LITERAL(130, 1745, 9), // "overwrite"
QT_MOC_LITERAL(131, 1755, 18), // "setPlaceholderText"
QT_MOC_LITERAL(132, 1774, 11), // "setReadOnly"
QT_MOC_LITERAL(133, 1786, 2), // "ro"
QT_MOC_LITERAL(134, 1789, 18), // "setTabChangesFocus"
QT_MOC_LITERAL(135, 1808, 1), // "b"
QT_MOC_LITERAL(136, 1810, 15), // "setTabStopWidth"
QT_MOC_LITERAL(137, 1826, 13), // "setTextCursor"
QT_MOC_LITERAL(138, 1840, 23), // "setTextInteractionFlags"
QT_MOC_LITERAL(139, 1864, 24), // "Qt::TextInteractionFlags"
QT_MOC_LITERAL(140, 1889, 5), // "flags"
QT_MOC_LITERAL(141, 1895, 18), // "setUndoRedoEnabled"
QT_MOC_LITERAL(142, 1914, 6), // "enable"
QT_MOC_LITERAL(143, 1921, 15), // "setWordWrapMode"
QT_MOC_LITERAL(144, 1937, 21), // "QTextOption::WrapMode"
QT_MOC_LITERAL(145, 1959, 6), // "policy"
QT_MOC_LITERAL(146, 1966, 9), // "showEvent"
QT_MOC_LITERAL(147, 1976, 11), // "QShowEvent*"
QT_MOC_LITERAL(148, 1988, 15), // "tabChangesFocus"
QT_MOC_LITERAL(149, 2004, 12), // "tabStopWidth"
QT_MOC_LITERAL(150, 2017, 19), // "textBackgroundColor"
QT_MOC_LITERAL(151, 2037, 9), // "textColor"
QT_MOC_LITERAL(152, 2047, 10), // "textCursor"
QT_MOC_LITERAL(153, 2058, 20), // "textInteractionFlags"
QT_MOC_LITERAL(154, 2079, 10), // "timerEvent"
QT_MOC_LITERAL(155, 2090, 12), // "QTimerEvent*"
QT_MOC_LITERAL(156, 2103, 6), // "toHtml"
QT_MOC_LITERAL(157, 2110, 11), // "toPlainText"
QT_MOC_LITERAL(158, 2122, 10), // "wheelEvent"
QT_MOC_LITERAL(159, 2133, 12), // "QWheelEvent*"
QT_MOC_LITERAL(160, 2146, 12), // "wordWrapMode"
QT_MOC_LITERAL(161, 2159, 7), // "zoomInF"
QT_MOC_LITERAL(162, 2167, 5), // "range"
QT_MOC_LITERAL(163, 2173, 18), // "AutoFormattingFlag"
QT_MOC_LITERAL(164, 2192, 8), // "AutoNone"
QT_MOC_LITERAL(165, 2201, 14), // "AutoBulletList"
QT_MOC_LITERAL(166, 2216, 7), // "AutoAll"
QT_MOC_LITERAL(167, 2224, 14) // "AutoFormatting"

    },
    "PythonQtWrapper_QTextEdit\0new_QTextEdit\0"
    "QTextEdit*\0\0QWidget*\0parent\0text\0"
    "delete_QTextEdit\0obj\0acceptRichText\0"
    "theWrappedObject\0alignment\0Qt::Alignment\0"
    "anchorAt\0pos\0autoFormatting\0"
    "QTextEdit::AutoFormatting\0"
    "canInsertFromMimeData\0const QMimeData*\0"
    "source\0canPaste\0changeEvent\0QEvent*\0"
    "e\0contextMenuEvent\0QContextMenuEvent*\0"
    "createMimeDataFromSelection\0QMimeData*\0"
    "createStandardContextMenu\0QMenu*\0"
    "position\0currentCharFormat\0QTextCharFormat\0"
    "currentFont\0cursorForPosition\0QTextCursor\0"
    "cursorRect\0cursor\0cursorWidth\0"
    "doSetTextCursor\0document\0QTextDocument*\0"
    "documentTitle\0dragEnterEvent\0"
    "QDragEnterEvent*\0dragLeaveEvent\0"
    "QDragLeaveEvent*\0dragMoveEvent\0"
    "QDragMoveEvent*\0dropEvent\0QDropEvent*\0"
    "ensureCursorVisible\0event\0extraSelections\0"
    "QList<QTextEdit::ExtraSelection>\0find\0"
    "exp\0QTextDocument::FindFlags\0options\0"
    "focusInEvent\0QFocusEvent*\0focusNextPrevChild\0"
    "next\0focusOutEvent\0fontFamily\0fontItalic\0"
    "fontPointSize\0fontUnderline\0fontWeight\0"
    "inputMethodEvent\0QInputMethodEvent*\0"
    "arg__1\0inputMethodQuery\0Qt::InputMethodQuery\0"
    "property\0query\0argument\0insertFromMimeData\0"
    "isReadOnly\0isUndoRedoEnabled\0keyPressEvent\0"
    "QKeyEvent*\0keyReleaseEvent\0"
    "lineWrapColumnOrWidth\0lineWrapMode\0"
    "QTextEdit::LineWrapMode\0loadResource\0"
    "type\0name\0mergeCurrentCharFormat\0"
    "modifier\0mouseDoubleClickEvent\0"
    "QMouseEvent*\0mouseMoveEvent\0mousePressEvent\0"
    "mouseReleaseEvent\0moveCursor\0"
    "QTextCursor::MoveOperation\0operation\0"
    "QTextCursor::MoveMode\0mode\0overwriteMode\0"
    "paintEvent\0QPaintEvent*\0placeholderText\0"
    "print\0QPagedPaintDevice*\0printer\0"
    "resizeEvent\0QResizeEvent*\0scrollContentsBy\0"
    "dx\0dy\0setAcceptRichText\0accept\0"
    "setAutoFormatting\0features\0"
    "setCurrentCharFormat\0format\0setCursorWidth\0"
    "width\0setDocument\0setDocumentTitle\0"
    "title\0setExtraSelections\0selections\0"
    "setLineWrapColumnOrWidth\0w\0setLineWrapMode\0"
    "setOverwriteMode\0overwrite\0"
    "setPlaceholderText\0setReadOnly\0ro\0"
    "setTabChangesFocus\0b\0setTabStopWidth\0"
    "setTextCursor\0setTextInteractionFlags\0"
    "Qt::TextInteractionFlags\0flags\0"
    "setUndoRedoEnabled\0enable\0setWordWrapMode\0"
    "QTextOption::WrapMode\0policy\0showEvent\0"
    "QShowEvent*\0tabChangesFocus\0tabStopWidth\0"
    "textBackgroundColor\0textColor\0textCursor\0"
    "textInteractionFlags\0timerEvent\0"
    "QTimerEvent*\0toHtml\0toPlainText\0"
    "wheelEvent\0QWheelEvent*\0wordWrapMode\0"
    "zoomInF\0range\0AutoFormattingFlag\0"
    "AutoNone\0AutoBulletList\0AutoAll\0"
    "AutoFormatting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      99,   14, // methods
       0,    0, // properties
       2,  938, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  509,    3, 0x0a /* Public */,
       1,    0,  512,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  513,    3, 0x0a /* Public */,
       1,    1,  518,    3, 0x2a /* Public | MethodCloned */,
       7,    1,  521,    3, 0x0a /* Public */,
       9,    1,  524,    3, 0x0a /* Public */,
      11,    1,  527,    3, 0x0a /* Public */,
      13,    2,  530,    3, 0x0a /* Public */,
      15,    1,  535,    3, 0x0a /* Public */,
      17,    2,  538,    3, 0x0a /* Public */,
      20,    1,  543,    3, 0x0a /* Public */,
      21,    2,  546,    3, 0x0a /* Public */,
      24,    2,  551,    3, 0x0a /* Public */,
      26,    1,  556,    3, 0x0a /* Public */,
      28,    1,  559,    3, 0x0a /* Public */,
      28,    2,  562,    3, 0x0a /* Public */,
      31,    1,  567,    3, 0x0a /* Public */,
      33,    1,  570,    3, 0x0a /* Public */,
      34,    2,  573,    3, 0x0a /* Public */,
      36,    1,  578,    3, 0x0a /* Public */,
      36,    2,  581,    3, 0x0a /* Public */,
      38,    1,  586,    3, 0x0a /* Public */,
      39,    2,  589,    3, 0x0a /* Public */,
      40,    1,  594,    3, 0x0a /* Public */,
      42,    1,  597,    3, 0x0a /* Public */,
      43,    2,  600,    3, 0x0a /* Public */,
      45,    2,  605,    3, 0x0a /* Public */,
      47,    2,  610,    3, 0x0a /* Public */,
      49,    2,  615,    3, 0x0a /* Public */,
      51,    1,  620,    3, 0x0a /* Public */,
      52,    2,  623,    3, 0x0a /* Public */,
      53,    1,  628,    3, 0x0a /* Public */,
      55,    3,  631,    3, 0x0a /* Public */,
      55,    2,  638,    3, 0x2a /* Public | MethodCloned */,
      55,    3,  643,    3, 0x0a /* Public */,
      55,    2,  650,    3, 0x2a /* Public | MethodCloned */,
      59,    2,  655,    3, 0x0a /* Public */,
      61,    2,  660,    3, 0x0a /* Public */,
      63,    2,  665,    3, 0x0a /* Public */,
      64,    1,  670,    3, 0x0a /* Public */,
      65,    1,  673,    3, 0x0a /* Public */,
      66,    1,  676,    3, 0x0a /* Public */,
      67,    1,  679,    3, 0x0a /* Public */,
      68,    1,  682,    3, 0x0a /* Public */,
      69,    2,  685,    3, 0x0a /* Public */,
      72,    2,  690,    3, 0x0a /* Public */,
      72,    3,  695,    3, 0x0a /* Public */,
      77,    2,  702,    3, 0x0a /* Public */,
      78,    1,  707,    3, 0x0a /* Public */,
      79,    1,  710,    3, 0x0a /* Public */,
      80,    2,  713,    3, 0x0a /* Public */,
      82,    2,  718,    3, 0x0a /* Public */,
      83,    1,  723,    3, 0x0a /* Public */,
      84,    1,  726,    3, 0x0a /* Public */,
      86,    3,  729,    3, 0x0a /* Public */,
      89,    2,  736,    3, 0x0a /* Public */,
      91,    2,  741,    3, 0x0a /* Public */,
      93,    2,  746,    3, 0x0a /* Public */,
      94,    2,  751,    3, 0x0a /* Public */,
      95,    2,  756,    3, 0x0a /* Public */,
      96,    3,  761,    3, 0x0a /* Public */,
      96,    2,  768,    3, 0x2a /* Public | MethodCloned */,
     101,    1,  773,    3, 0x0a /* Public */,
     102,    2,  776,    3, 0x0a /* Public */,
     104,    1,  781,    3, 0x0a /* Public */,
     105,    2,  784,    3, 0x0a /* Public */,
     108,    2,  789,    3, 0x0a /* Public */,
     110,    3,  794,    3, 0x0a /* Public */,
     113,    2,  801,    3, 0x0a /* Public */,
     115,    2,  806,    3, 0x0a /* Public */,
     117,    2,  811,    3, 0x0a /* Public */,
     119,    2,  816,    3, 0x0a /* Public */,
     121,    2,  821,    3, 0x0a /* Public */,
     122,    2,  826,    3, 0x0a /* Public */,
     124,    2,  831,    3, 0x0a /* Public */,
     126,    2,  836,    3, 0x0a /* Public */,
     128,    2,  841,    3, 0x0a /* Public */,
     129,    2,  846,    3, 0x0a /* Public */,
     131,    2,  851,    3, 0x0a /* Public */,
     132,    2,  856,    3, 0x0a /* Public */,
     134,    2,  861,    3, 0x0a /* Public */,
     136,    2,  866,    3, 0x0a /* Public */,
     137,    2,  871,    3, 0x0a /* Public */,
     138,    2,  876,    3, 0x0a /* Public */,
     141,    2,  881,    3, 0x0a /* Public */,
     143,    2,  886,    3, 0x0a /* Public */,
     146,    2,  891,    3, 0x0a /* Public */,
     148,    1,  896,    3, 0x0a /* Public */,
     149,    1,  899,    3, 0x0a /* Public */,
     150,    1,  902,    3, 0x0a /* Public */,
     151,    1,  905,    3, 0x0a /* Public */,
     152,    1,  908,    3, 0x0a /* Public */,
     153,    1,  911,    3, 0x0a /* Public */,
     154,    2,  914,    3, 0x0a /* Public */,
     156,    1,  919,    3, 0x0a /* Public */,
     157,    1,  922,    3, 0x0a /* Public */,
     158,    2,  925,    3, 0x0a /* Public */,
     160,    1,  930,    3, 0x0a /* Public */,
     161,    2,  933,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QString, 0x80000000 | 4,    6,    5,
    0x80000000 | 2, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,   10,
    0x80000000 | 12, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QPoint,   10,   14,
    0x80000000 | 16, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 18,   10,   19,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25,   10,   23,
    0x80000000 | 27, 0x80000000 | 2,   10,
    0x80000000 | 29, 0x80000000 | 2,   10,
    0x80000000 | 29, 0x80000000 | 2, QMetaType::QPoint,   10,   30,
    0x80000000 | 32, 0x80000000 | 2,   10,
    QMetaType::QFont, 0x80000000 | 2,   10,
    0x80000000 | 35, 0x80000000 | 2, QMetaType::QPoint,   10,   14,
    QMetaType::QRect, 0x80000000 | 2,   10,
    QMetaType::QRect, 0x80000000 | 2, 0x80000000 | 35,   10,   37,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 35,   10,   37,
    0x80000000 | 41, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 44,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 46,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 48,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 50,   10,   23,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 22,   10,   23,
    0x80000000 | 54, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QRegExp, 0x80000000 | 57,   10,   56,   58,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QRegExp,   10,   56,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 57,   10,   56,   58,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,   10,   56,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 60,   10,   23,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Bool,   10,   62,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 60,   10,   23,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 70,   10,   71,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 73,   10,   74,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 73, QMetaType::QVariant,   10,   75,   76,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   10,   19,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 81,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 81,   10,   23,
    QMetaType::Int, 0x80000000 | 2,   10,
    0x80000000 | 85, 0x80000000 | 2,   10,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, QMetaType::QUrl,   10,   87,   88,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 32,   10,   90,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 92,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 92,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 92,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 92,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 97, 0x80000000 | 99,   10,   98,  100,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 97,   10,   98,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 103,   10,   23,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 106,   10,  107,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 109,   10,   23,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,  111,  112,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,  114,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   10,  116,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 32,   10,  118,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,  120,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 41,   10,   40,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,  123,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 54,   10,  125,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,  127,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 85,   10,  100,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,  130,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,  104,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,  133,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,  135,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,  120,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 35,   10,   37,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 139,   10,  140,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,  142,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 144,   10,  145,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 147,   10,   71,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::QColor, 0x80000000 | 2,   10,
    QMetaType::QColor, 0x80000000 | 2,   10,
    0x80000000 | 35, 0x80000000 | 2,   10,
    0x80000000 | 139, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 155,   10,   23,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 159,   10,   23,
    0x80000000 | 144, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Float,   10,  162,

 // enums: name, flags, count, data
     163, 0x0,    3,  946,
     167, 0x1,    3,  952,

 // enum data: key, value
     164, uint(PythonQtWrapper_QTextEdit::AutoNone),
     165, uint(PythonQtWrapper_QTextEdit::AutoBulletList),
     166, uint(PythonQtWrapper_QTextEdit::AutoAll),
     164, uint(PythonQtWrapper_QTextEdit::AutoNone),
     165, uint(PythonQtWrapper_QTextEdit::AutoBulletList),
     166, uint(PythonQtWrapper_QTextEdit::AutoAll),

       0        // eod
};

void PythonQtWrapper_QTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextEdit *_t = static_cast<PythonQtWrapper_QTextEdit *>(_o);
        switch (_id) {
        case 0: { QTextEdit* _r = _t->new_QTextEdit((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEdit**>(_a[0]) = _r; }  break;
        case 1: { QTextEdit* _r = _t->new_QTextEdit();
            if (_a[0]) *reinterpret_cast< QTextEdit**>(_a[0]) = _r; }  break;
        case 2: { QTextEdit* _r = _t->new_QTextEdit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextEdit**>(_a[0]) = _r; }  break;
        case 3: { QTextEdit* _r = _t->new_QTextEdit((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEdit**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextEdit((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->acceptRichText((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->anchorAt((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QTextEdit::AutoFormatting _r = _t->autoFormatting((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEdit::AutoFormatting*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->canInsertFromMimeData((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->canPaste((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->changeEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2]))); break;
        case 12: _t->contextMenuEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QContextMenuEvent*(*)>(_a[2]))); break;
        case 13: { QMimeData* _r = _t->createMimeDataFromSelection((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMimeData**>(_a[0]) = _r; }  break;
        case 14: { QMenu* _r = _t->createStandardContextMenu((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = _r; }  break;
        case 15: { QMenu* _r = _t->createStandardContextMenu((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QMenu**>(_a[0]) = _r; }  break;
        case 16: { QTextCharFormat _r = _t->currentCharFormat((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 17: { QFont _r = _t->currentFont((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 18: { QTextCursor _r = _t->cursorForPosition((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 19: { QRect _r = _t->cursorRect((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 20: { QRect _r = _t->cursorRect((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 21: { int _r = _t->cursorWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 22: _t->doSetTextCursor((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2]))); break;
        case 23: { QTextDocument* _r = _t->document((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 24: { QString _r = _t->documentTitle((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 25: _t->dragEnterEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDragEnterEvent*(*)>(_a[2]))); break;
        case 26: _t->dragLeaveEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDragLeaveEvent*(*)>(_a[2]))); break;
        case 27: _t->dragMoveEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDragMoveEvent*(*)>(_a[2]))); break;
        case 28: _t->dropEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QDropEvent*(*)>(_a[2]))); break;
        case 29: _t->ensureCursorVisible((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 30: { bool _r = _t->event((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { QList<QTextEdit::ExtraSelection> _r = _t->extraSelections((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextEdit::ExtraSelection>*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->find((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->find((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QRegExp(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->find((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->find((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: _t->focusInEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 37: { bool _r = _t->focusNextPrevChild((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: _t->focusOutEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QFocusEvent*(*)>(_a[2]))); break;
        case 39: { QString _r = _t->fontFamily((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->fontItalic((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { qreal _r = _t->fontPointSize((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->fontUnderline((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: { int _r = _t->fontWeight((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 44: _t->inputMethodEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QInputMethodEvent*(*)>(_a[2]))); break;
        case 45: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 46: { QVariant _r = _t->inputMethodQuery((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::InputMethodQuery(*)>(_a[2])),(*reinterpret_cast< QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 47: _t->insertFromMimeData((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QMimeData*(*)>(_a[2]))); break;
        case 48: { bool _r = _t->isReadOnly((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->isUndoRedoEnabled((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: _t->keyPressEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 51: _t->keyReleaseEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QKeyEvent*(*)>(_a[2]))); break;
        case 52: { int _r = _t->lineWrapColumnOrWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 53: { QTextEdit::LineWrapMode _r = _t->lineWrapMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEdit::LineWrapMode*>(_a[0]) = _r; }  break;
        case 54: { QVariant _r = _t->loadResource((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 55: _t->mergeCurrentCharFormat((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 56: _t->mouseDoubleClickEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 57: _t->mouseMoveEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 58: _t->mousePressEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 59: _t->mouseReleaseEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QMouseEvent*(*)>(_a[2]))); break;
        case 60: _t->moveCursor((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2])),(*reinterpret_cast< QTextCursor::MoveMode(*)>(_a[3]))); break;
        case 61: _t->moveCursor((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextCursor::MoveOperation(*)>(_a[2]))); break;
        case 62: { bool _r = _t->overwriteMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 63: _t->paintEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QPaintEvent*(*)>(_a[2]))); break;
        case 64: { QString _r = _t->placeholderText((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 65: _t->print((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QPagedPaintDevice*(*)>(_a[2]))); break;
        case 66: _t->resizeEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QResizeEvent*(*)>(_a[2]))); break;
        case 67: _t->scrollContentsBy((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 68: _t->setAcceptRichText((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 69: _t->setAutoFormatting((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextEdit::AutoFormatting(*)>(_a[2]))); break;
        case 70: _t->setCurrentCharFormat((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 71: _t->setCursorWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 72: _t->setDocument((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextDocument*(*)>(_a[2]))); break;
        case 73: _t->setDocumentTitle((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 74: _t->setExtraSelections((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QList<QTextEdit::ExtraSelection>(*)>(_a[2]))); break;
        case 75: _t->setLineWrapColumnOrWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 76: _t->setLineWrapMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextEdit::LineWrapMode(*)>(_a[2]))); break;
        case 77: _t->setOverwriteMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 78: _t->setPlaceholderText((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 79: _t->setReadOnly((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 80: _t->setTabChangesFocus((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 81: _t->setTabStopWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 82: _t->setTextCursor((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2]))); break;
        case 83: _t->setTextInteractionFlags((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< Qt::TextInteractionFlags(*)>(_a[2]))); break;
        case 84: _t->setUndoRedoEnabled((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 85: _t->setWordWrapMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTextOption::WrapMode(*)>(_a[2]))); break;
        case 86: _t->showEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QShowEvent*(*)>(_a[2]))); break;
        case 87: { bool _r = _t->tabChangesFocus((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 88: { int _r = _t->tabStopWidth((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 89: { QColor _r = _t->textBackgroundColor((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 90: { QColor _r = _t->textColor((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = _r; }  break;
        case 91: { QTextCursor _r = _t->textCursor((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 92: { Qt::TextInteractionFlags _r = _t->textInteractionFlags((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TextInteractionFlags*>(_a[0]) = _r; }  break;
        case 93: _t->timerEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QTimerEvent*(*)>(_a[2]))); break;
        case 94: { QString _r = _t->toHtml((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 95: { QString _r = _t->toPlainText((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 96: _t->wheelEvent((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< QWheelEvent*(*)>(_a[2]))); break;
        case 97: { QTextOption::WrapMode _r = _t->wordWrapMode((*reinterpret_cast< QTextEdit*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::WrapMode*>(_a[0]) = _r; }  break;
        case 98: _t->zoomInF((*reinterpret_cast< QTextEdit*(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 67:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 72:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 79:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 83:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 84:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 86:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 87:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 88:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 89:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 90:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 91:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 92:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 93:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 94:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 95:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 96:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 97:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 98:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextEdit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextEdit.data,
      qt_meta_data_PythonQtWrapper_QTextEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextEdit.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextEdit*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 99)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 99;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 99)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 99;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QTextEdit__ExtraSelection_t {
    QByteArrayData data[17];
    char stringdata[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextEdit__ExtraSelection_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextEdit__ExtraSelection_t qt_meta_stringdata_PythonQtWrapper_QTextEdit__ExtraSelection = {
    {
QT_MOC_LITERAL(0, 0, 41), // "PythonQtWrapper_QTextEdit__Ex..."
QT_MOC_LITERAL(1, 42, 29), // "new_QTextEdit__ExtraSelection"
QT_MOC_LITERAL(2, 72, 26), // "QTextEdit::ExtraSelection*"
QT_MOC_LITERAL(3, 99, 0), // ""
QT_MOC_LITERAL(4, 100, 25), // "QTextEdit::ExtraSelection"
QT_MOC_LITERAL(5, 126, 5), // "other"
QT_MOC_LITERAL(6, 132, 32), // "delete_QTextEdit__ExtraSelection"
QT_MOC_LITERAL(7, 165, 3), // "obj"
QT_MOC_LITERAL(8, 169, 13), // "py_set_cursor"
QT_MOC_LITERAL(9, 183, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 200, 11), // "QTextCursor"
QT_MOC_LITERAL(11, 212, 6), // "cursor"
QT_MOC_LITERAL(12, 219, 13), // "py_get_cursor"
QT_MOC_LITERAL(13, 233, 13), // "py_set_format"
QT_MOC_LITERAL(14, 247, 15), // "QTextCharFormat"
QT_MOC_LITERAL(15, 263, 6), // "format"
QT_MOC_LITERAL(16, 270, 13) // "py_get_format"

    },
    "PythonQtWrapper_QTextEdit__ExtraSelection\0"
    "new_QTextEdit__ExtraSelection\0"
    "QTextEdit::ExtraSelection*\0\0"
    "QTextEdit::ExtraSelection\0other\0"
    "delete_QTextEdit__ExtraSelection\0obj\0"
    "py_set_cursor\0theWrappedObject\0"
    "QTextCursor\0cursor\0py_get_cursor\0"
    "py_set_format\0QTextCharFormat\0format\0"
    "py_get_format"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextEdit__ExtraSelection[] = {

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
       8,    2,   56,    3, 0x0a /* Public */,
      12,    1,   61,    3, 0x0a /* Public */,
      13,    2,   64,    3, 0x0a /* Public */,
      16,    1,   69,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    0x80000000 | 10, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,    9,   15,
    0x80000000 | 14, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QTextEdit__ExtraSelection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextEdit__ExtraSelection *_t = static_cast<PythonQtWrapper_QTextEdit__ExtraSelection *>(_o);
        switch (_id) {
        case 0: { QTextEdit::ExtraSelection* _r = _t->new_QTextEdit__ExtraSelection();
            if (_a[0]) *reinterpret_cast< QTextEdit::ExtraSelection**>(_a[0]) = _r; }  break;
        case 1: { QTextEdit::ExtraSelection* _r = _t->new_QTextEdit__ExtraSelection((*reinterpret_cast< const QTextEdit::ExtraSelection(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextEdit::ExtraSelection**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextEdit__ExtraSelection((*reinterpret_cast< QTextEdit::ExtraSelection*(*)>(_a[1]))); break;
        case 3: _t->py_set_cursor((*reinterpret_cast< QTextEdit::ExtraSelection*(*)>(_a[1])),(*reinterpret_cast< QTextCursor(*)>(_a[2]))); break;
        case 4: { QTextCursor _r = _t->py_get_cursor((*reinterpret_cast< QTextEdit::ExtraSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_format((*reinterpret_cast< QTextEdit::ExtraSelection*(*)>(_a[1])),(*reinterpret_cast< QTextCharFormat(*)>(_a[2]))); break;
        case 6: { QTextCharFormat _r = _t->py_get_format((*reinterpret_cast< QTextEdit::ExtraSelection*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextEdit__ExtraSelection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextEdit__ExtraSelection.data,
      qt_meta_data_PythonQtWrapper_QTextEdit__ExtraSelection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextEdit__ExtraSelection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextEdit__ExtraSelection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextEdit__ExtraSelection.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextEdit__ExtraSelection*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextEdit__ExtraSelection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextFragment_t {
    QByteArrayData data[23];
    char stringdata[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextFragment_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextFragment_t qt_meta_stringdata_PythonQtWrapper_QTextFragment = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QTextFragment"
QT_MOC_LITERAL(1, 30, 17), // "new_QTextFragment"
QT_MOC_LITERAL(2, 48, 14), // "QTextFragment*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 13), // "QTextFragment"
QT_MOC_LITERAL(5, 78, 1), // "o"
QT_MOC_LITERAL(6, 80, 20), // "delete_QTextFragment"
QT_MOC_LITERAL(7, 101, 3), // "obj"
QT_MOC_LITERAL(8, 105, 10), // "charFormat"
QT_MOC_LITERAL(9, 116, 15), // "QTextCharFormat"
QT_MOC_LITERAL(10, 132, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 149, 15), // "charFormatIndex"
QT_MOC_LITERAL(12, 165, 8), // "contains"
QT_MOC_LITERAL(13, 174, 8), // "position"
QT_MOC_LITERAL(14, 183, 9), // "glyphRuns"
QT_MOC_LITERAL(15, 193, 16), // "QList<QGlyphRun>"
QT_MOC_LITERAL(16, 210, 4), // "from"
QT_MOC_LITERAL(17, 215, 6), // "length"
QT_MOC_LITERAL(18, 222, 7), // "isValid"
QT_MOC_LITERAL(19, 230, 6), // "__ne__"
QT_MOC_LITERAL(20, 237, 6), // "__lt__"
QT_MOC_LITERAL(21, 244, 6), // "__eq__"
QT_MOC_LITERAL(22, 251, 4) // "text"

    },
    "PythonQtWrapper_QTextFragment\0"
    "new_QTextFragment\0QTextFragment*\0\0"
    "QTextFragment\0o\0delete_QTextFragment\0"
    "obj\0charFormat\0QTextCharFormat\0"
    "theWrappedObject\0charFormatIndex\0"
    "contains\0position\0glyphRuns\0"
    "QList<QGlyphRun>\0from\0length\0isValid\0"
    "__ne__\0__lt__\0__eq__\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextFragment[] = {

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
      12,    2,  107,    3, 0x0a /* Public */,
      14,    3,  112,    3, 0x0a /* Public */,
      14,    2,  119,    3, 0x2a /* Public | MethodCloned */,
      14,    1,  124,    3, 0x2a /* Public | MethodCloned */,
      18,    1,  127,    3, 0x0a /* Public */,
      17,    1,  130,    3, 0x0a /* Public */,
      19,    2,  133,    3, 0x0a /* Public */,
      20,    2,  138,    3, 0x0a /* Public */,
      21,    2,  143,    3, 0x0a /* Public */,
      13,    1,  148,    3, 0x0a /* Public */,
      22,    1,  151,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   10,   13,
    0x80000000 | 15, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   16,   17,
    0x80000000 | 15, 0x80000000 | 2, QMetaType::Int,   10,   16,
    0x80000000 | 15, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QTextFragment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextFragment *_t = static_cast<PythonQtWrapper_QTextFragment *>(_o);
        switch (_id) {
        case 0: { QTextFragment* _r = _t->new_QTextFragment();
            if (_a[0]) *reinterpret_cast< QTextFragment**>(_a[0]) = _r; }  break;
        case 1: { QTextFragment* _r = _t->new_QTextFragment((*reinterpret_cast< const QTextFragment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFragment**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextFragment((*reinterpret_cast< QTextFragment*(*)>(_a[1]))); break;
        case 3: { QTextCharFormat _r = _t->charFormat((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->charFormatIndex((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->contains((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QList<QGlyphRun> _r = _t->glyphRuns((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QGlyphRun>*>(_a[0]) = _r; }  break;
        case 7: { QList<QGlyphRun> _r = _t->glyphRuns((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QGlyphRun>*>(_a[0]) = _r; }  break;
        case 8: { QList<QGlyphRun> _r = _t->glyphRuns((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGlyphRun>*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isValid((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->length((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< const QTextFragment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__lt__((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< const QTextFragment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__eq__((*reinterpret_cast< QTextFragment*(*)>(_a[1])),(*reinterpret_cast< const QTextFragment(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->position((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->text((*reinterpret_cast< QTextFragment*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextFragment::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextFragment.data,
      qt_meta_data_PythonQtWrapper_QTextFragment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextFragment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextFragment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextFragment.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextFragment*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextFragment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextFrame_t {
    QByteArrayData data[24];
    char stringdata[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextFrame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextFrame_t qt_meta_stringdata_PythonQtWrapper_QTextFrame = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QTextFrame"
QT_MOC_LITERAL(1, 27, 14), // "new_QTextFrame"
QT_MOC_LITERAL(2, 42, 11), // "QTextFrame*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 14), // "QTextDocument*"
QT_MOC_LITERAL(5, 70, 3), // "doc"
QT_MOC_LITERAL(6, 74, 17), // "delete_QTextFrame"
QT_MOC_LITERAL(7, 92, 3), // "obj"
QT_MOC_LITERAL(8, 96, 5), // "begin"
QT_MOC_LITERAL(9, 102, 20), // "QTextFrame::iterator"
QT_MOC_LITERAL(10, 123, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 140, 11), // "childFrames"
QT_MOC_LITERAL(12, 152, 18), // "QList<QTextFrame*>"
QT_MOC_LITERAL(13, 171, 3), // "end"
QT_MOC_LITERAL(14, 175, 19), // "firstCursorPosition"
QT_MOC_LITERAL(15, 195, 11), // "QTextCursor"
QT_MOC_LITERAL(16, 207, 13), // "firstPosition"
QT_MOC_LITERAL(17, 221, 11), // "frameFormat"
QT_MOC_LITERAL(18, 233, 16), // "QTextFrameFormat"
QT_MOC_LITERAL(19, 250, 18), // "lastCursorPosition"
QT_MOC_LITERAL(20, 269, 12), // "lastPosition"
QT_MOC_LITERAL(21, 282, 11), // "parentFrame"
QT_MOC_LITERAL(22, 294, 14), // "setFrameFormat"
QT_MOC_LITERAL(23, 309, 6) // "format"

    },
    "PythonQtWrapper_QTextFrame\0new_QTextFrame\0"
    "QTextFrame*\0\0QTextDocument*\0doc\0"
    "delete_QTextFrame\0obj\0begin\0"
    "QTextFrame::iterator\0theWrappedObject\0"
    "childFrames\0QList<QTextFrame*>\0end\0"
    "firstCursorPosition\0QTextCursor\0"
    "firstPosition\0frameFormat\0QTextFrameFormat\0"
    "lastCursorPosition\0lastPosition\0"
    "parentFrame\0setFrameFormat\0format"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextFrame[] = {

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
       6,    1,   77,    3, 0x0a /* Public */,
       8,    1,   80,    3, 0x0a /* Public */,
      11,    1,   83,    3, 0x0a /* Public */,
      13,    1,   86,    3, 0x0a /* Public */,
      14,    1,   89,    3, 0x0a /* Public */,
      16,    1,   92,    3, 0x0a /* Public */,
      17,    1,   95,    3, 0x0a /* Public */,
      19,    1,   98,    3, 0x0a /* Public */,
      20,    1,  101,    3, 0x0a /* Public */,
      21,    1,  104,    3, 0x0a /* Public */,
      22,    2,  107,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    0x80000000 | 12, 0x80000000 | 2,   10,
    0x80000000 | 9, 0x80000000 | 2,   10,
    0x80000000 | 15, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    0x80000000 | 18, 0x80000000 | 2,   10,
    0x80000000 | 15, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    0x80000000 | 2, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   10,   23,

       0        // eod
};

void PythonQtWrapper_QTextFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextFrame *_t = static_cast<PythonQtWrapper_QTextFrame *>(_o);
        switch (_id) {
        case 0: { QTextFrame* _r = _t->new_QTextFrame((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTextFrame((*reinterpret_cast< QTextFrame*(*)>(_a[1]))); break;
        case 2: { QTextFrame::iterator _r = _t->begin((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame::iterator*>(_a[0]) = _r; }  break;
        case 3: { QList<QTextFrame*> _r = _t->childFrames((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextFrame*>*>(_a[0]) = _r; }  break;
        case 4: { QTextFrame::iterator _r = _t->end((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame::iterator*>(_a[0]) = _r; }  break;
        case 5: { QTextCursor _r = _t->firstCursorPosition((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->firstPosition((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QTextFrameFormat _r = _t->frameFormat((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat*>(_a[0]) = _r; }  break;
        case 8: { QTextCursor _r = _t->lastCursorPosition((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->lastPosition((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QTextFrame* _r = _t->parentFrame((*reinterpret_cast< QTextFrame*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame**>(_a[0]) = _r; }  break;
        case 11: _t->setFrameFormat((*reinterpret_cast< QTextFrame*(*)>(_a[1])),(*reinterpret_cast< const QTextFrameFormat(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextFrame* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextFrame::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextFrame.data,
      qt_meta_data_PythonQtWrapper_QTextFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextFrame.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextFrame*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextFrameFormat_t {
    QByteArrayData data[61];
    char stringdata[822];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextFrameFormat_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextFrameFormat_t qt_meta_stringdata_PythonQtWrapper_QTextFrameFormat = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QTextFrameFormat"
QT_MOC_LITERAL(1, 33, 20), // "new_QTextFrameFormat"
QT_MOC_LITERAL(2, 54, 17), // "QTextFrameFormat*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 3), // "fmt"
QT_MOC_LITERAL(5, 77, 16), // "QTextFrameFormat"
QT_MOC_LITERAL(6, 94, 5), // "other"
QT_MOC_LITERAL(7, 100, 23), // "delete_QTextFrameFormat"
QT_MOC_LITERAL(8, 124, 3), // "obj"
QT_MOC_LITERAL(9, 128, 6), // "border"
QT_MOC_LITERAL(10, 135, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 152, 11), // "borderBrush"
QT_MOC_LITERAL(12, 164, 11), // "borderStyle"
QT_MOC_LITERAL(13, 176, 29), // "QTextFrameFormat::BorderStyle"
QT_MOC_LITERAL(14, 206, 12), // "bottomMargin"
QT_MOC_LITERAL(15, 219, 6), // "height"
QT_MOC_LITERAL(16, 226, 7), // "isValid"
QT_MOC_LITERAL(17, 234, 10), // "leftMargin"
QT_MOC_LITERAL(18, 245, 6), // "margin"
QT_MOC_LITERAL(19, 252, 7), // "padding"
QT_MOC_LITERAL(20, 260, 15), // "pageBreakPolicy"
QT_MOC_LITERAL(21, 276, 27), // "QTextFormat::PageBreakFlags"
QT_MOC_LITERAL(22, 304, 8), // "position"
QT_MOC_LITERAL(23, 313, 26), // "QTextFrameFormat::Position"
QT_MOC_LITERAL(24, 340, 11), // "rightMargin"
QT_MOC_LITERAL(25, 352, 9), // "setBorder"
QT_MOC_LITERAL(26, 362, 14), // "setBorderBrush"
QT_MOC_LITERAL(27, 377, 5), // "brush"
QT_MOC_LITERAL(28, 383, 14), // "setBorderStyle"
QT_MOC_LITERAL(29, 398, 5), // "style"
QT_MOC_LITERAL(30, 404, 15), // "setBottomMargin"
QT_MOC_LITERAL(31, 420, 9), // "setHeight"
QT_MOC_LITERAL(32, 430, 13), // "setLeftMargin"
QT_MOC_LITERAL(33, 444, 9), // "setMargin"
QT_MOC_LITERAL(34, 454, 10), // "setPadding"
QT_MOC_LITERAL(35, 465, 18), // "setPageBreakPolicy"
QT_MOC_LITERAL(36, 484, 5), // "flags"
QT_MOC_LITERAL(37, 490, 11), // "setPosition"
QT_MOC_LITERAL(38, 502, 1), // "f"
QT_MOC_LITERAL(39, 504, 14), // "setRightMargin"
QT_MOC_LITERAL(40, 519, 12), // "setTopMargin"
QT_MOC_LITERAL(41, 532, 8), // "setWidth"
QT_MOC_LITERAL(42, 541, 6), // "length"
QT_MOC_LITERAL(43, 548, 5), // "width"
QT_MOC_LITERAL(44, 554, 9), // "topMargin"
QT_MOC_LITERAL(45, 564, 11), // "BorderStyle"
QT_MOC_LITERAL(46, 576, 16), // "BorderStyle_None"
QT_MOC_LITERAL(47, 593, 18), // "BorderStyle_Dotted"
QT_MOC_LITERAL(48, 612, 18), // "BorderStyle_Dashed"
QT_MOC_LITERAL(49, 631, 17), // "BorderStyle_Solid"
QT_MOC_LITERAL(50, 649, 18), // "BorderStyle_Double"
QT_MOC_LITERAL(51, 668, 19), // "BorderStyle_DotDash"
QT_MOC_LITERAL(52, 688, 22), // "BorderStyle_DotDotDash"
QT_MOC_LITERAL(53, 711, 18), // "BorderStyle_Groove"
QT_MOC_LITERAL(54, 730, 17), // "BorderStyle_Ridge"
QT_MOC_LITERAL(55, 748, 17), // "BorderStyle_Inset"
QT_MOC_LITERAL(56, 766, 18), // "BorderStyle_Outset"
QT_MOC_LITERAL(57, 785, 8), // "Position"
QT_MOC_LITERAL(58, 794, 6), // "InFlow"
QT_MOC_LITERAL(59, 801, 9), // "FloatLeft"
QT_MOC_LITERAL(60, 811, 10) // "FloatRight"

    },
    "PythonQtWrapper_QTextFrameFormat\0"
    "new_QTextFrameFormat\0QTextFrameFormat*\0"
    "\0fmt\0QTextFrameFormat\0other\0"
    "delete_QTextFrameFormat\0obj\0border\0"
    "theWrappedObject\0borderBrush\0borderStyle\0"
    "QTextFrameFormat::BorderStyle\0"
    "bottomMargin\0height\0isValid\0leftMargin\0"
    "margin\0padding\0pageBreakPolicy\0"
    "QTextFormat::PageBreakFlags\0position\0"
    "QTextFrameFormat::Position\0rightMargin\0"
    "setBorder\0setBorderBrush\0brush\0"
    "setBorderStyle\0style\0setBottomMargin\0"
    "setHeight\0setLeftMargin\0setMargin\0"
    "setPadding\0setPageBreakPolicy\0flags\0"
    "setPosition\0f\0setRightMargin\0setTopMargin\0"
    "setWidth\0length\0width\0topMargin\0"
    "BorderStyle\0BorderStyle_None\0"
    "BorderStyle_Dotted\0BorderStyle_Dashed\0"
    "BorderStyle_Solid\0BorderStyle_Double\0"
    "BorderStyle_DotDash\0BorderStyle_DotDotDash\0"
    "BorderStyle_Groove\0BorderStyle_Ridge\0"
    "BorderStyle_Inset\0BorderStyle_Outset\0"
    "Position\0InFlow\0FloatLeft\0FloatRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextFrameFormat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       2,  306, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  179,    3, 0x0a /* Public */,
       1,    1,  180,    3, 0x0a /* Public */,
       1,    1,  183,    3, 0x0a /* Public */,
       7,    1,  186,    3, 0x0a /* Public */,
       9,    1,  189,    3, 0x0a /* Public */,
      11,    1,  192,    3, 0x0a /* Public */,
      12,    1,  195,    3, 0x0a /* Public */,
      14,    1,  198,    3, 0x0a /* Public */,
      15,    1,  201,    3, 0x0a /* Public */,
      16,    1,  204,    3, 0x0a /* Public */,
      17,    1,  207,    3, 0x0a /* Public */,
      18,    1,  210,    3, 0x0a /* Public */,
      19,    1,  213,    3, 0x0a /* Public */,
      20,    1,  216,    3, 0x0a /* Public */,
      22,    1,  219,    3, 0x0a /* Public */,
      24,    1,  222,    3, 0x0a /* Public */,
      25,    2,  225,    3, 0x0a /* Public */,
      26,    2,  230,    3, 0x0a /* Public */,
      28,    2,  235,    3, 0x0a /* Public */,
      30,    2,  240,    3, 0x0a /* Public */,
      31,    2,  245,    3, 0x0a /* Public */,
      31,    2,  250,    3, 0x0a /* Public */,
      32,    2,  255,    3, 0x0a /* Public */,
      33,    2,  260,    3, 0x0a /* Public */,
      34,    2,  265,    3, 0x0a /* Public */,
      35,    2,  270,    3, 0x0a /* Public */,
      37,    2,  275,    3, 0x0a /* Public */,
      39,    2,  280,    3, 0x0a /* Public */,
      40,    2,  285,    3, 0x0a /* Public */,
      41,    2,  290,    3, 0x0a /* Public */,
      41,    2,  295,    3, 0x0a /* Public */,
      44,    1,  300,    3, 0x0a /* Public */,
      43,    1,  303,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QTextFormat,    4,
    0x80000000 | 2, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::QBrush, 0x80000000 | 2,   10,
    0x80000000 | 13, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::QTextLength, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    0x80000000 | 21, 0x80000000 | 2,   10,
    0x80000000 | 23, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QBrush,   10,   27,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13,   10,   29,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QTextLength,   10,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,   10,   36,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,   10,   38,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QTextLength,   10,   42,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   43,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::QTextLength, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
      45, 0x0,   11,  314,
      57, 0x0,    3,  336,

 // enum data: key, value
      46, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_None),
      47, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Dotted),
      48, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Dashed),
      49, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Solid),
      50, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Double),
      51, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_DotDash),
      52, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_DotDotDash),
      53, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Groove),
      54, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Ridge),
      55, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Inset),
      56, uint(PythonQtWrapper_QTextFrameFormat::BorderStyle_Outset),
      58, uint(PythonQtWrapper_QTextFrameFormat::InFlow),
      59, uint(PythonQtWrapper_QTextFrameFormat::FloatLeft),
      60, uint(PythonQtWrapper_QTextFrameFormat::FloatRight),

       0        // eod
};

void PythonQtWrapper_QTextFrameFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextFrameFormat *_t = static_cast<PythonQtWrapper_QTextFrameFormat *>(_o);
        switch (_id) {
        case 0: { QTextFrameFormat* _r = _t->new_QTextFrameFormat();
            if (_a[0]) *reinterpret_cast< QTextFrameFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextFrameFormat* _r = _t->new_QTextFrameFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextFrameFormat* _r = _t->new_QTextFrameFormat((*reinterpret_cast< const QTextFrameFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextFrameFormat((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1]))); break;
        case 4: { qreal _r = _t->border((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { QBrush _r = _t->borderBrush((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QBrush*>(_a[0]) = _r; }  break;
        case 6: { QTextFrameFormat::BorderStyle _r = _t->borderStyle((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat::BorderStyle*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->bottomMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: { QTextLength _r = _t->height((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLength*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isValid((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { qreal _r = _t->leftMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: { qreal _r = _t->margin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->padding((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { QTextFormat::PageBreakFlags _r = _t->pageBreakPolicy((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFormat::PageBreakFlags*>(_a[0]) = _r; }  break;
        case 14: { QTextFrameFormat::Position _r = _t->position((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrameFormat::Position*>(_a[0]) = _r; }  break;
        case 15: { qreal _r = _t->rightMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 16: _t->setBorder((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 17: _t->setBorderBrush((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< const QBrush(*)>(_a[2]))); break;
        case 18: _t->setBorderStyle((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< QTextFrameFormat::BorderStyle(*)>(_a[2]))); break;
        case 19: _t->setBottomMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 20: _t->setHeight((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< const QTextLength(*)>(_a[2]))); break;
        case 21: _t->setHeight((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 22: _t->setLeftMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 23: _t->setMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 24: _t->setPadding((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 25: _t->setPageBreakPolicy((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< QTextFormat::PageBreakFlags(*)>(_a[2]))); break;
        case 26: _t->setPosition((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< QTextFrameFormat::Position(*)>(_a[2]))); break;
        case 27: _t->setRightMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 28: _t->setTopMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 29: _t->setWidth((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< const QTextLength(*)>(_a[2]))); break;
        case 30: _t->setWidth((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 31: { qreal _r = _t->topMargin((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 32: { QTextLength _r = _t->width((*reinterpret_cast< QTextFrameFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLength*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextFrameFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextFrameFormat.data,
      qt_meta_data_PythonQtWrapper_QTextFrameFormat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextFrameFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextFrameFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextFrameFormat.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextFrameFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextFrameFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextImageFormat_t {
    QByteArrayData data[17];
    char stringdata[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextImageFormat_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextImageFormat_t qt_meta_stringdata_PythonQtWrapper_QTextImageFormat = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QTextImageFormat"
QT_MOC_LITERAL(1, 33, 20), // "new_QTextImageFormat"
QT_MOC_LITERAL(2, 54, 17), // "QTextImageFormat*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 6), // "format"
QT_MOC_LITERAL(5, 80, 16), // "QTextImageFormat"
QT_MOC_LITERAL(6, 97, 5), // "other"
QT_MOC_LITERAL(7, 103, 23), // "delete_QTextImageFormat"
QT_MOC_LITERAL(8, 127, 3), // "obj"
QT_MOC_LITERAL(9, 131, 6), // "height"
QT_MOC_LITERAL(10, 138, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 155, 7), // "isValid"
QT_MOC_LITERAL(12, 163, 4), // "name"
QT_MOC_LITERAL(13, 168, 9), // "setHeight"
QT_MOC_LITERAL(14, 178, 7), // "setName"
QT_MOC_LITERAL(15, 186, 8), // "setWidth"
QT_MOC_LITERAL(16, 195, 5) // "width"

    },
    "PythonQtWrapper_QTextImageFormat\0"
    "new_QTextImageFormat\0QTextImageFormat*\0"
    "\0format\0QTextImageFormat\0other\0"
    "delete_QTextImageFormat\0obj\0height\0"
    "theWrappedObject\0isValid\0name\0setHeight\0"
    "setName\0setWidth\0width"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextImageFormat[] = {

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
       7,    1,   76,    3, 0x0a /* Public */,
       9,    1,   79,    3, 0x0a /* Public */,
      11,    1,   82,    3, 0x0a /* Public */,
      12,    1,   85,    3, 0x0a /* Public */,
      13,    2,   88,    3, 0x0a /* Public */,
      14,    2,   93,    3, 0x0a /* Public */,
      15,    2,   98,    3, 0x0a /* Public */,
      16,    1,  103,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QTextFormat,    4,
    0x80000000 | 2, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   16,
    QMetaType::QReal, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QTextImageFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextImageFormat *_t = static_cast<PythonQtWrapper_QTextImageFormat *>(_o);
        switch (_id) {
        case 0: { QTextImageFormat* _r = _t->new_QTextImageFormat();
            if (_a[0]) *reinterpret_cast< QTextImageFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextImageFormat* _r = _t->new_QTextImageFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextImageFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextImageFormat* _r = _t->new_QTextImageFormat((*reinterpret_cast< const QTextImageFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextImageFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextImageFormat((*reinterpret_cast< QTextImageFormat*(*)>(_a[1]))); break;
        case 4: { qreal _r = _t->height((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isValid((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->name((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: _t->setHeight((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 8: _t->setName((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->setWidth((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 10: { qreal _r = _t->width((*reinterpret_cast< QTextImageFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextImageFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextImageFormat.data,
      qt_meta_data_PythonQtWrapper_QTextImageFormat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextImageFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextImageFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextImageFormat.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextImageFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextImageFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextInlineObject_t {
    QByteArrayData data[26];
    char stringdata[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextInlineObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextInlineObject_t qt_meta_stringdata_PythonQtWrapper_QTextInlineObject = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_QTextInlineOb..."
QT_MOC_LITERAL(1, 34, 21), // "new_QTextInlineObject"
QT_MOC_LITERAL(2, 56, 18), // "QTextInlineObject*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 17), // "QTextInlineObject"
QT_MOC_LITERAL(5, 94, 5), // "other"
QT_MOC_LITERAL(6, 100, 24), // "delete_QTextInlineObject"
QT_MOC_LITERAL(7, 125, 3), // "obj"
QT_MOC_LITERAL(8, 129, 6), // "ascent"
QT_MOC_LITERAL(9, 136, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 153, 7), // "descent"
QT_MOC_LITERAL(11, 161, 6), // "format"
QT_MOC_LITERAL(12, 168, 11), // "formatIndex"
QT_MOC_LITERAL(13, 180, 6), // "height"
QT_MOC_LITERAL(14, 187, 7), // "isValid"
QT_MOC_LITERAL(15, 195, 4), // "rect"
QT_MOC_LITERAL(16, 200, 9), // "setAscent"
QT_MOC_LITERAL(17, 210, 1), // "a"
QT_MOC_LITERAL(18, 212, 10), // "setDescent"
QT_MOC_LITERAL(19, 223, 1), // "d"
QT_MOC_LITERAL(20, 225, 8), // "setWidth"
QT_MOC_LITERAL(21, 234, 1), // "w"
QT_MOC_LITERAL(22, 236, 13), // "textDirection"
QT_MOC_LITERAL(23, 250, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(24, 270, 12), // "textPosition"
QT_MOC_LITERAL(25, 283, 5) // "width"

    },
    "PythonQtWrapper_QTextInlineObject\0"
    "new_QTextInlineObject\0QTextInlineObject*\0"
    "\0QTextInlineObject\0other\0"
    "delete_QTextInlineObject\0obj\0ascent\0"
    "theWrappedObject\0descent\0format\0"
    "formatIndex\0height\0isValid\0rect\0"
    "setAscent\0a\0setDescent\0d\0setWidth\0w\0"
    "textDirection\0Qt::LayoutDirection\0"
    "textPosition\0width"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextInlineObject[] = {

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
      10,    1,  104,    3, 0x0a /* Public */,
      11,    1,  107,    3, 0x0a /* Public */,
      12,    1,  110,    3, 0x0a /* Public */,
      13,    1,  113,    3, 0x0a /* Public */,
      14,    1,  116,    3, 0x0a /* Public */,
      15,    1,  119,    3, 0x0a /* Public */,
      16,    2,  122,    3, 0x0a /* Public */,
      18,    2,  127,    3, 0x0a /* Public */,
      20,    2,  132,    3, 0x0a /* Public */,
      22,    1,  137,    3, 0x0a /* Public */,
      24,    1,  140,    3, 0x0a /* Public */,
      25,    1,  143,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::QTextFormat, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::QRectF, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,    9,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,    9,   19,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,    9,   21,
    0x80000000 | 23, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QTextInlineObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextInlineObject *_t = static_cast<PythonQtWrapper_QTextInlineObject *>(_o);
        switch (_id) {
        case 0: { QTextInlineObject* _r = _t->new_QTextInlineObject();
            if (_a[0]) *reinterpret_cast< QTextInlineObject**>(_a[0]) = _r; }  break;
        case 1: { QTextInlineObject* _r = _t->new_QTextInlineObject((*reinterpret_cast< const QTextInlineObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextInlineObject**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextInlineObject((*reinterpret_cast< QTextInlineObject*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->ascent((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->descent((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { QTextFormat _r = _t->format((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFormat*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->formatIndex((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->height((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isValid((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QRectF _r = _t->rect((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 10: _t->setAscent((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 11: _t->setDescent((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 12: _t->setWidth((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 13: { Qt::LayoutDirection _r = _t->textDirection((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::LayoutDirection*>(_a[0]) = _r; }  break;
        case 14: { int _r = _t->textPosition((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 15: { qreal _r = _t->width((*reinterpret_cast< QTextInlineObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextInlineObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextInlineObject.data,
      qt_meta_data_PythonQtWrapper_QTextInlineObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextInlineObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextInlineObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextInlineObject.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextInlineObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextInlineObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextItem_t {
    QByteArrayData data[21];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextItem_t qt_meta_stringdata_PythonQtWrapper_QTextItem = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QTextItem"
QT_MOC_LITERAL(1, 26, 13), // "new_QTextItem"
QT_MOC_LITERAL(2, 40, 10), // "QTextItem*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 16), // "delete_QTextItem"
QT_MOC_LITERAL(5, 69, 3), // "obj"
QT_MOC_LITERAL(6, 73, 6), // "ascent"
QT_MOC_LITERAL(7, 80, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 97, 7), // "descent"
QT_MOC_LITERAL(9, 105, 4), // "font"
QT_MOC_LITERAL(10, 110, 11), // "renderFlags"
QT_MOC_LITERAL(11, 122, 22), // "QTextItem::RenderFlags"
QT_MOC_LITERAL(12, 145, 4), // "text"
QT_MOC_LITERAL(13, 150, 5), // "width"
QT_MOC_LITERAL(14, 156, 10), // "RenderFlag"
QT_MOC_LITERAL(15, 167, 11), // "RightToLeft"
QT_MOC_LITERAL(16, 179, 8), // "Overline"
QT_MOC_LITERAL(17, 188, 9), // "Underline"
QT_MOC_LITERAL(18, 198, 9), // "StrikeOut"
QT_MOC_LITERAL(19, 208, 5), // "Dummy"
QT_MOC_LITERAL(20, 214, 11) // "RenderFlags"

    },
    "PythonQtWrapper_QTextItem\0new_QTextItem\0"
    "QTextItem*\0\0delete_QTextItem\0obj\0"
    "ascent\0theWrappedObject\0descent\0font\0"
    "renderFlags\0QTextItem::RenderFlags\0"
    "text\0width\0RenderFlag\0RightToLeft\0"
    "Overline\0Underline\0StrikeOut\0Dummy\0"
    "RenderFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       2,   76, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    3, 0x0a /* Public */,
       4,    1,   55,    3, 0x0a /* Public */,
       6,    1,   58,    3, 0x0a /* Public */,
       8,    1,   61,    3, 0x0a /* Public */,
       9,    1,   64,    3, 0x0a /* Public */,
      10,    1,   67,    3, 0x0a /* Public */,
      12,    1,   70,    3, 0x0a /* Public */,
      13,    1,   73,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    QMetaType::QReal, 0x80000000 | 2,    7,
    QMetaType::QReal, 0x80000000 | 2,    7,
    QMetaType::QFont, 0x80000000 | 2,    7,
    0x80000000 | 11, 0x80000000 | 2,    7,
    QMetaType::QString, 0x80000000 | 2,    7,
    QMetaType::QReal, 0x80000000 | 2,    7,

 // enums: name, flags, count, data
      14, 0x0,    5,   84,
      20, 0x1,    5,   94,

 // enum data: key, value
      15, uint(PythonQtWrapper_QTextItem::RightToLeft),
      16, uint(PythonQtWrapper_QTextItem::Overline),
      17, uint(PythonQtWrapper_QTextItem::Underline),
      18, uint(PythonQtWrapper_QTextItem::StrikeOut),
      19, uint(PythonQtWrapper_QTextItem::Dummy),
      15, uint(PythonQtWrapper_QTextItem::RightToLeft),
      16, uint(PythonQtWrapper_QTextItem::Overline),
      17, uint(PythonQtWrapper_QTextItem::Underline),
      18, uint(PythonQtWrapper_QTextItem::StrikeOut),
      19, uint(PythonQtWrapper_QTextItem::Dummy),

       0        // eod
};

void PythonQtWrapper_QTextItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextItem *_t = static_cast<PythonQtWrapper_QTextItem *>(_o);
        switch (_id) {
        case 0: { QTextItem* _r = _t->new_QTextItem();
            if (_a[0]) *reinterpret_cast< QTextItem**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTextItem((*reinterpret_cast< QTextItem*(*)>(_a[1]))); break;
        case 2: { qreal _r = _t->ascent((*reinterpret_cast< QTextItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 3: { qreal _r = _t->descent((*reinterpret_cast< QTextItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { QFont _r = _t->font((*reinterpret_cast< QTextItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 5: { QTextItem::RenderFlags _r = _t->renderFlags((*reinterpret_cast< QTextItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextItem::RenderFlags*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->text((*reinterpret_cast< QTextItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->width((*reinterpret_cast< QTextItem*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextItem.data,
      qt_meta_data_PythonQtWrapper_QTextItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextItem.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextLayout_t {
    QByteArrayData data[81];
    char stringdata[1001];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextLayout_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextLayout_t qt_meta_stringdata_PythonQtWrapper_QTextLayout = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QTextLayout"
QT_MOC_LITERAL(1, 28, 15), // "new_QTextLayout"
QT_MOC_LITERAL(2, 44, 12), // "QTextLayout*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 4), // "text"
QT_MOC_LITERAL(5, 63, 4), // "font"
QT_MOC_LITERAL(6, 68, 13), // "QPaintDevice*"
QT_MOC_LITERAL(7, 82, 11), // "paintdevice"
QT_MOC_LITERAL(8, 94, 10), // "QTextBlock"
QT_MOC_LITERAL(9, 105, 1), // "b"
QT_MOC_LITERAL(10, 107, 18), // "delete_QTextLayout"
QT_MOC_LITERAL(11, 126, 3), // "obj"
QT_MOC_LITERAL(12, 130, 17), // "additionalFormats"
QT_MOC_LITERAL(13, 148, 31), // "QList<QTextLayout::FormatRange>"
QT_MOC_LITERAL(14, 180, 16), // "theWrappedObject"
QT_MOC_LITERAL(15, 197, 11), // "beginLayout"
QT_MOC_LITERAL(16, 209, 12), // "boundingRect"
QT_MOC_LITERAL(17, 222, 12), // "cacheEnabled"
QT_MOC_LITERAL(18, 235, 22), // "clearAdditionalFormats"
QT_MOC_LITERAL(19, 258, 11), // "clearLayout"
QT_MOC_LITERAL(20, 270, 10), // "createLine"
QT_MOC_LITERAL(21, 281, 9), // "QTextLine"
QT_MOC_LITERAL(22, 291, 15), // "cursorMoveStyle"
QT_MOC_LITERAL(23, 307, 19), // "Qt::CursorMoveStyle"
QT_MOC_LITERAL(24, 327, 4), // "draw"
QT_MOC_LITERAL(25, 332, 9), // "QPainter*"
QT_MOC_LITERAL(26, 342, 1), // "p"
QT_MOC_LITERAL(27, 344, 3), // "pos"
QT_MOC_LITERAL(28, 348, 33), // "QVector<QTextLayout::FormatRa..."
QT_MOC_LITERAL(29, 382, 10), // "selections"
QT_MOC_LITERAL(30, 393, 4), // "clip"
QT_MOC_LITERAL(31, 398, 10), // "drawCursor"
QT_MOC_LITERAL(32, 409, 14), // "cursorPosition"
QT_MOC_LITERAL(33, 424, 5), // "width"
QT_MOC_LITERAL(34, 430, 9), // "endLayout"
QT_MOC_LITERAL(35, 440, 9), // "glyphRuns"
QT_MOC_LITERAL(36, 450, 16), // "QList<QGlyphRun>"
QT_MOC_LITERAL(37, 467, 4), // "from"
QT_MOC_LITERAL(38, 472, 6), // "length"
QT_MOC_LITERAL(39, 479, 21), // "isValidCursorPosition"
QT_MOC_LITERAL(40, 501, 18), // "leftCursorPosition"
QT_MOC_LITERAL(41, 520, 6), // "oldPos"
QT_MOC_LITERAL(42, 527, 6), // "lineAt"
QT_MOC_LITERAL(43, 534, 1), // "i"
QT_MOC_LITERAL(44, 536, 9), // "lineCount"
QT_MOC_LITERAL(45, 546, 19), // "lineForTextPosition"
QT_MOC_LITERAL(46, 566, 12), // "maximumWidth"
QT_MOC_LITERAL(47, 579, 12), // "minimumWidth"
QT_MOC_LITERAL(48, 592, 18), // "nextCursorPosition"
QT_MOC_LITERAL(49, 611, 23), // "QTextLayout::CursorMode"
QT_MOC_LITERAL(50, 635, 4), // "mode"
QT_MOC_LITERAL(51, 640, 8), // "position"
QT_MOC_LITERAL(52, 649, 19), // "preeditAreaPosition"
QT_MOC_LITERAL(53, 669, 15), // "preeditAreaText"
QT_MOC_LITERAL(54, 685, 22), // "previousCursorPosition"
QT_MOC_LITERAL(55, 708, 19), // "rightCursorPosition"
QT_MOC_LITERAL(56, 728, 20), // "setAdditionalFormats"
QT_MOC_LITERAL(57, 749, 9), // "overrides"
QT_MOC_LITERAL(58, 759, 15), // "setCacheEnabled"
QT_MOC_LITERAL(59, 775, 6), // "enable"
QT_MOC_LITERAL(60, 782, 18), // "setCursorMoveStyle"
QT_MOC_LITERAL(61, 801, 5), // "style"
QT_MOC_LITERAL(62, 807, 8), // "setFlags"
QT_MOC_LITERAL(63, 816, 5), // "flags"
QT_MOC_LITERAL(64, 822, 7), // "setFont"
QT_MOC_LITERAL(65, 830, 1), // "f"
QT_MOC_LITERAL(66, 832, 11), // "setPosition"
QT_MOC_LITERAL(67, 844, 14), // "setPreeditArea"
QT_MOC_LITERAL(68, 859, 10), // "setRawFont"
QT_MOC_LITERAL(69, 870, 8), // "QRawFont"
QT_MOC_LITERAL(70, 879, 7), // "rawFont"
QT_MOC_LITERAL(71, 887, 7), // "setText"
QT_MOC_LITERAL(72, 895, 6), // "string"
QT_MOC_LITERAL(73, 902, 13), // "setTextOption"
QT_MOC_LITERAL(74, 916, 11), // "QTextOption"
QT_MOC_LITERAL(75, 928, 6), // "option"
QT_MOC_LITERAL(76, 935, 10), // "textOption"
QT_MOC_LITERAL(77, 946, 18), // "const QTextOption*"
QT_MOC_LITERAL(78, 965, 10), // "CursorMode"
QT_MOC_LITERAL(79, 976, 14), // "SkipCharacters"
QT_MOC_LITERAL(80, 991, 9) // "SkipWords"

    },
    "PythonQtWrapper_QTextLayout\0new_QTextLayout\0"
    "QTextLayout*\0\0text\0font\0QPaintDevice*\0"
    "paintdevice\0QTextBlock\0b\0delete_QTextLayout\0"
    "obj\0additionalFormats\0"
    "QList<QTextLayout::FormatRange>\0"
    "theWrappedObject\0beginLayout\0boundingRect\0"
    "cacheEnabled\0clearAdditionalFormats\0"
    "clearLayout\0createLine\0QTextLine\0"
    "cursorMoveStyle\0Qt::CursorMoveStyle\0"
    "draw\0QPainter*\0p\0pos\0"
    "QVector<QTextLayout::FormatRange>\0"
    "selections\0clip\0drawCursor\0cursorPosition\0"
    "width\0endLayout\0glyphRuns\0QList<QGlyphRun>\0"
    "from\0length\0isValidCursorPosition\0"
    "leftCursorPosition\0oldPos\0lineAt\0i\0"
    "lineCount\0lineForTextPosition\0"
    "maximumWidth\0minimumWidth\0nextCursorPosition\0"
    "QTextLayout::CursorMode\0mode\0position\0"
    "preeditAreaPosition\0preeditAreaText\0"
    "previousCursorPosition\0rightCursorPosition\0"
    "setAdditionalFormats\0overrides\0"
    "setCacheEnabled\0enable\0setCursorMoveStyle\0"
    "style\0setFlags\0flags\0setFont\0f\0"
    "setPosition\0setPreeditArea\0setRawFont\0"
    "QRawFont\0rawFont\0setText\0string\0"
    "setTextOption\0QTextOption\0option\0"
    "textOption\0const QTextOption*\0CursorMode\0"
    "SkipCharacters\0SkipWords"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       1,  508, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  269,    3, 0x0a /* Public */,
       1,    1,  270,    3, 0x0a /* Public */,
       1,    3,  273,    3, 0x0a /* Public */,
       1,    2,  280,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  285,    3, 0x0a /* Public */,
      10,    1,  288,    3, 0x0a /* Public */,
      12,    1,  291,    3, 0x0a /* Public */,
      15,    1,  294,    3, 0x0a /* Public */,
      16,    1,  297,    3, 0x0a /* Public */,
      17,    1,  300,    3, 0x0a /* Public */,
      18,    1,  303,    3, 0x0a /* Public */,
      19,    1,  306,    3, 0x0a /* Public */,
      20,    1,  309,    3, 0x0a /* Public */,
      22,    1,  312,    3, 0x0a /* Public */,
      24,    5,  315,    3, 0x0a /* Public */,
      24,    4,  326,    3, 0x2a /* Public | MethodCloned */,
      24,    3,  335,    3, 0x2a /* Public | MethodCloned */,
      31,    4,  342,    3, 0x0a /* Public */,
      31,    5,  351,    3, 0x0a /* Public */,
      34,    1,  362,    3, 0x0a /* Public */,
       5,    1,  365,    3, 0x0a /* Public */,
      35,    3,  368,    3, 0x0a /* Public */,
      35,    2,  375,    3, 0x2a /* Public | MethodCloned */,
      35,    1,  380,    3, 0x2a /* Public | MethodCloned */,
      39,    2,  383,    3, 0x0a /* Public */,
      40,    2,  388,    3, 0x0a /* Public */,
      42,    2,  393,    3, 0x0a /* Public */,
      44,    1,  398,    3, 0x0a /* Public */,
      45,    2,  401,    3, 0x0a /* Public */,
      46,    1,  406,    3, 0x0a /* Public */,
      47,    1,  409,    3, 0x0a /* Public */,
      48,    3,  412,    3, 0x0a /* Public */,
      48,    2,  419,    3, 0x2a /* Public | MethodCloned */,
      51,    1,  424,    3, 0x0a /* Public */,
      52,    1,  427,    3, 0x0a /* Public */,
      53,    1,  430,    3, 0x0a /* Public */,
      54,    3,  433,    3, 0x0a /* Public */,
      54,    2,  440,    3, 0x2a /* Public | MethodCloned */,
      55,    2,  445,    3, 0x0a /* Public */,
      56,    2,  450,    3, 0x0a /* Public */,
      58,    2,  455,    3, 0x0a /* Public */,
      60,    2,  460,    3, 0x0a /* Public */,
      62,    2,  465,    3, 0x0a /* Public */,
      64,    2,  470,    3, 0x0a /* Public */,
      66,    2,  475,    3, 0x0a /* Public */,
      67,    3,  480,    3, 0x0a /* Public */,
      68,    2,  487,    3, 0x0a /* Public */,
      71,    2,  492,    3, 0x0a /* Public */,
      73,    2,  497,    3, 0x0a /* Public */,
       4,    1,  502,    3, 0x0a /* Public */,
      76,    1,  505,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QString,    4,
    0x80000000 | 2, QMetaType::QString, QMetaType::QFont, 0x80000000 | 6,    4,    5,    7,
    0x80000000 | 2, QMetaType::QString, QMetaType::QFont,    4,    5,
    0x80000000 | 2, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 2,   11,
    0x80000000 | 13, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2,   14,
    QMetaType::QRectF, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2,   14,
    0x80000000 | 21, 0x80000000 | 2,   14,
    0x80000000 | 23, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25, QMetaType::QPointF, 0x80000000 | 28, QMetaType::QRectF,   14,   26,   27,   29,   30,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25, QMetaType::QPointF, 0x80000000 | 28,   14,   26,   27,   29,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25, QMetaType::QPointF,   14,   26,   27,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25, QMetaType::QPointF, QMetaType::Int,   14,   26,   27,   32,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25, QMetaType::QPointF, QMetaType::Int, QMetaType::Int,   14,   26,   27,   32,   33,
    QMetaType::Void, 0x80000000 | 2,   14,
    QMetaType::QFont, 0x80000000 | 2,   14,
    0x80000000 | 36, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   14,   37,   38,
    0x80000000 | 36, 0x80000000 | 2, QMetaType::Int,   14,   37,
    0x80000000 | 36, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   14,   27,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,   14,   41,
    0x80000000 | 21, 0x80000000 | 2, QMetaType::Int,   14,   43,
    QMetaType::Int, 0x80000000 | 2,   14,
    0x80000000 | 21, 0x80000000 | 2, QMetaType::Int,   14,   27,
    QMetaType::QReal, 0x80000000 | 2,   14,
    QMetaType::QReal, 0x80000000 | 2,   14,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 49,   14,   41,   50,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,   14,   41,
    QMetaType::QPointF, 0x80000000 | 2,   14,
    QMetaType::Int, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 49,   14,   41,   50,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,   14,   41,
    QMetaType::Int, 0x80000000 | 2, QMetaType::Int,   14,   41,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13,   14,   57,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   14,   59,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,   14,   61,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   14,   63,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QFont,   14,   65,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QPointF,   14,   26,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::QString,   14,   51,    4,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 69,   14,   70,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   14,   72,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 74,   14,   75,
    QMetaType::QString, 0x80000000 | 2,   14,
    0x80000000 | 77, 0x80000000 | 2,   14,

 // enums: name, flags, count, data
      78, 0x0,    2,  512,

 // enum data: key, value
      79, uint(PythonQtWrapper_QTextLayout::SkipCharacters),
      80, uint(PythonQtWrapper_QTextLayout::SkipWords),

       0        // eod
};

void PythonQtWrapper_QTextLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextLayout *_t = static_cast<PythonQtWrapper_QTextLayout *>(_o);
        switch (_id) {
        case 0: { QTextLayout* _r = _t->new_QTextLayout();
            if (_a[0]) *reinterpret_cast< QTextLayout**>(_a[0]) = _r; }  break;
        case 1: { QTextLayout* _r = _t->new_QTextLayout((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLayout**>(_a[0]) = _r; }  break;
        case 2: { QTextLayout* _r = _t->new_QTextLayout((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])),(*reinterpret_cast< QPaintDevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextLayout**>(_a[0]) = _r; }  break;
        case 3: { QTextLayout* _r = _t->new_QTextLayout((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextLayout**>(_a[0]) = _r; }  break;
        case 4: { QTextLayout* _r = _t->new_QTextLayout((*reinterpret_cast< const QTextBlock(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLayout**>(_a[0]) = _r; }  break;
        case 5: _t->delete_QTextLayout((*reinterpret_cast< QTextLayout*(*)>(_a[1]))); break;
        case 6: { QList<QTextLayout::FormatRange> _r = _t->additionalFormats((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextLayout::FormatRange>*>(_a[0]) = _r; }  break;
        case 7: _t->beginLayout((*reinterpret_cast< QTextLayout*(*)>(_a[1]))); break;
        case 8: { QRectF _r = _t->boundingRect((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->cacheEnabled((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->clearAdditionalFormats((*reinterpret_cast< QTextLayout*(*)>(_a[1]))); break;
        case 11: _t->clearLayout((*reinterpret_cast< QTextLayout*(*)>(_a[1]))); break;
        case 12: { QTextLine _r = _t->createLine((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLine*>(_a[0]) = _r; }  break;
        case 13: { Qt::CursorMoveStyle _r = _t->cursorMoveStyle((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::CursorMoveStyle*>(_a[0]) = _r; }  break;
        case 14: _t->draw((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QVector<QTextLayout::FormatRange>(*)>(_a[4])),(*reinterpret_cast< const QRectF(*)>(_a[5]))); break;
        case 15: _t->draw((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QVector<QTextLayout::FormatRange>(*)>(_a[4]))); break;
        case 16: _t->draw((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 17: _t->drawCursor((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 18: _t->drawCursor((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 19: _t->endLayout((*reinterpret_cast< QTextLayout*(*)>(_a[1]))); break;
        case 20: { QFont _r = _t->font((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        case 21: { QList<QGlyphRun> _r = _t->glyphRuns((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QGlyphRun>*>(_a[0]) = _r; }  break;
        case 22: { QList<QGlyphRun> _r = _t->glyphRuns((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QGlyphRun>*>(_a[0]) = _r; }  break;
        case 23: { QList<QGlyphRun> _r = _t->glyphRuns((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGlyphRun>*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isValidCursorPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { int _r = _t->leftCursorPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 26: { QTextLine _r = _t->lineAt((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextLine*>(_a[0]) = _r; }  break;
        case 27: { int _r = _t->lineCount((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { QTextLine _r = _t->lineForTextPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextLine*>(_a[0]) = _r; }  break;
        case 29: { qreal _r = _t->maximumWidth((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 30: { qreal _r = _t->minimumWidth((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->nextCursorPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTextLayout::CursorMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->nextCursorPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { QPointF _r = _t->position((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->preeditAreaPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->preeditAreaText((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->previousCursorPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTextLayout::CursorMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { int _r = _t->previousCursorPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->rightCursorPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: _t->setAdditionalFormats((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< const QList<QTextLayout::FormatRange>(*)>(_a[2]))); break;
        case 40: _t->setCacheEnabled((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->setCursorMoveStyle((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< Qt::CursorMoveStyle(*)>(_a[2]))); break;
        case 42: _t->setFlags((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->setFont((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< const QFont(*)>(_a[2]))); break;
        case 44: _t->setPosition((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 45: _t->setPreeditArea((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 46: _t->setRawFont((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< const QRawFont(*)>(_a[2]))); break;
        case 47: _t->setText((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 48: _t->setTextOption((*reinterpret_cast< QTextLayout*(*)>(_a[1])),(*reinterpret_cast< const QTextOption(*)>(_a[2]))); break;
        case 49: { QString _r = _t->text((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 50: { const QTextOption* _r = _t->textOption((*reinterpret_cast< QTextLayout*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QTextOption**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextLayout.data,
      qt_meta_data_PythonQtWrapper_QTextLayout,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextLayout.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 51;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QTextLayout__FormatRange_t {
    QByteArrayData data[19];
    char stringdata[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextLayout__FormatRange_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextLayout__FormatRange_t qt_meta_stringdata_PythonQtWrapper_QTextLayout__FormatRange = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_QTextLayout__..."
QT_MOC_LITERAL(1, 41, 28), // "new_QTextLayout__FormatRange"
QT_MOC_LITERAL(2, 70, 25), // "QTextLayout::FormatRange*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 24), // "QTextLayout::FormatRange"
QT_MOC_LITERAL(5, 122, 5), // "other"
QT_MOC_LITERAL(6, 128, 31), // "delete_QTextLayout__FormatRange"
QT_MOC_LITERAL(7, 160, 3), // "obj"
QT_MOC_LITERAL(8, 164, 13), // "py_set_format"
QT_MOC_LITERAL(9, 178, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 195, 15), // "QTextCharFormat"
QT_MOC_LITERAL(11, 211, 6), // "format"
QT_MOC_LITERAL(12, 218, 13), // "py_get_format"
QT_MOC_LITERAL(13, 232, 13), // "py_set_length"
QT_MOC_LITERAL(14, 246, 6), // "length"
QT_MOC_LITERAL(15, 253, 13), // "py_get_length"
QT_MOC_LITERAL(16, 267, 12), // "py_set_start"
QT_MOC_LITERAL(17, 280, 5), // "start"
QT_MOC_LITERAL(18, 286, 12) // "py_get_start"

    },
    "PythonQtWrapper_QTextLayout__FormatRange\0"
    "new_QTextLayout__FormatRange\0"
    "QTextLayout::FormatRange*\0\0"
    "QTextLayout::FormatRange\0other\0"
    "delete_QTextLayout__FormatRange\0obj\0"
    "py_set_format\0theWrappedObject\0"
    "QTextCharFormat\0format\0py_get_format\0"
    "py_set_length\0length\0py_get_length\0"
    "py_set_start\0start\0py_get_start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextLayout__FormatRange[] = {

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
       8,    2,   66,    3, 0x0a /* Public */,
      12,    1,   71,    3, 0x0a /* Public */,
      13,    2,   74,    3, 0x0a /* Public */,
      15,    1,   79,    3, 0x0a /* Public */,
      16,    2,   82,    3, 0x0a /* Public */,
      18,    1,   87,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    0x80000000 | 10, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   14,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   17,
    QMetaType::Int, 0x80000000 | 2,    9,

       0        // eod
};

void PythonQtWrapper_QTextLayout__FormatRange::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextLayout__FormatRange *_t = static_cast<PythonQtWrapper_QTextLayout__FormatRange *>(_o);
        switch (_id) {
        case 0: { QTextLayout::FormatRange* _r = _t->new_QTextLayout__FormatRange();
            if (_a[0]) *reinterpret_cast< QTextLayout::FormatRange**>(_a[0]) = _r; }  break;
        case 1: { QTextLayout::FormatRange* _r = _t->new_QTextLayout__FormatRange((*reinterpret_cast< const QTextLayout::FormatRange(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLayout::FormatRange**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextLayout__FormatRange((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1]))); break;
        case 3: _t->py_set_format((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])),(*reinterpret_cast< QTextCharFormat(*)>(_a[2]))); break;
        case 4: { QTextCharFormat _r = _t->py_get_format((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 5: _t->py_set_length((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: { int _r = _t->py_get_length((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_start((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: { int _r = _t->py_get_start((*reinterpret_cast< QTextLayout::FormatRange*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextLayout__FormatRange::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextLayout__FormatRange.data,
      qt_meta_data_PythonQtWrapper_QTextLayout__FormatRange,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextLayout__FormatRange::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextLayout__FormatRange::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextLayout__FormatRange.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextLayout__FormatRange*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextLayout__FormatRange::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextLine_t {
    QByteArrayData data[57];
    char stringdata[628];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextLine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextLine_t qt_meta_stringdata_PythonQtWrapper_QTextLine = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QTextLine"
QT_MOC_LITERAL(1, 26, 13), // "new_QTextLine"
QT_MOC_LITERAL(2, 40, 10), // "QTextLine*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 9), // "QTextLine"
QT_MOC_LITERAL(5, 62, 5), // "other"
QT_MOC_LITERAL(6, 68, 16), // "delete_QTextLine"
QT_MOC_LITERAL(7, 85, 3), // "obj"
QT_MOC_LITERAL(8, 89, 6), // "ascent"
QT_MOC_LITERAL(9, 96, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 113, 9), // "cursorToX"
QT_MOC_LITERAL(11, 123, 9), // "cursorPos"
QT_MOC_LITERAL(12, 133, 15), // "QTextLine::Edge"
QT_MOC_LITERAL(13, 149, 4), // "edge"
QT_MOC_LITERAL(14, 154, 7), // "descent"
QT_MOC_LITERAL(15, 162, 4), // "draw"
QT_MOC_LITERAL(16, 167, 9), // "QPainter*"
QT_MOC_LITERAL(17, 177, 1), // "p"
QT_MOC_LITERAL(18, 179, 5), // "point"
QT_MOC_LITERAL(19, 185, 31), // "const QTextLayout::FormatRange*"
QT_MOC_LITERAL(20, 217, 9), // "selection"
QT_MOC_LITERAL(21, 227, 9), // "glyphRuns"
QT_MOC_LITERAL(22, 237, 16), // "QList<QGlyphRun>"
QT_MOC_LITERAL(23, 254, 4), // "from"
QT_MOC_LITERAL(24, 259, 6), // "length"
QT_MOC_LITERAL(25, 266, 6), // "height"
QT_MOC_LITERAL(26, 273, 17), // "horizontalAdvance"
QT_MOC_LITERAL(27, 291, 7), // "isValid"
QT_MOC_LITERAL(28, 299, 7), // "leading"
QT_MOC_LITERAL(29, 307, 15), // "leadingIncluded"
QT_MOC_LITERAL(30, 323, 10), // "lineNumber"
QT_MOC_LITERAL(31, 334, 15), // "naturalTextRect"
QT_MOC_LITERAL(32, 350, 16), // "naturalTextWidth"
QT_MOC_LITERAL(33, 367, 8), // "position"
QT_MOC_LITERAL(34, 376, 4), // "rect"
QT_MOC_LITERAL(35, 381, 18), // "setLeadingIncluded"
QT_MOC_LITERAL(36, 400, 8), // "included"
QT_MOC_LITERAL(37, 409, 12), // "setLineWidth"
QT_MOC_LITERAL(38, 422, 5), // "width"
QT_MOC_LITERAL(39, 428, 13), // "setNumColumns"
QT_MOC_LITERAL(40, 442, 7), // "columns"
QT_MOC_LITERAL(41, 450, 14), // "alignmentWidth"
QT_MOC_LITERAL(42, 465, 11), // "setPosition"
QT_MOC_LITERAL(43, 477, 3), // "pos"
QT_MOC_LITERAL(44, 481, 10), // "textLength"
QT_MOC_LITERAL(45, 492, 9), // "textStart"
QT_MOC_LITERAL(46, 502, 1), // "x"
QT_MOC_LITERAL(47, 504, 9), // "xToCursor"
QT_MOC_LITERAL(48, 514, 25), // "QTextLine::CursorPosition"
QT_MOC_LITERAL(49, 540, 6), // "arg__2"
QT_MOC_LITERAL(50, 547, 1), // "y"
QT_MOC_LITERAL(51, 549, 14), // "CursorPosition"
QT_MOC_LITERAL(52, 564, 23), // "CursorBetweenCharacters"
QT_MOC_LITERAL(53, 588, 17), // "CursorOnCharacter"
QT_MOC_LITERAL(54, 606, 4), // "Edge"
QT_MOC_LITERAL(55, 611, 7), // "Leading"
QT_MOC_LITERAL(56, 619, 8) // "Trailing"

    },
    "PythonQtWrapper_QTextLine\0new_QTextLine\0"
    "QTextLine*\0\0QTextLine\0other\0"
    "delete_QTextLine\0obj\0ascent\0"
    "theWrappedObject\0cursorToX\0cursorPos\0"
    "QTextLine::Edge\0edge\0descent\0draw\0"
    "QPainter*\0p\0point\0const QTextLayout::FormatRange*\0"
    "selection\0glyphRuns\0QList<QGlyphRun>\0"
    "from\0length\0height\0horizontalAdvance\0"
    "isValid\0leading\0leadingIncluded\0"
    "lineNumber\0naturalTextRect\0naturalTextWidth\0"
    "position\0rect\0setLeadingIncluded\0"
    "included\0setLineWidth\0width\0setNumColumns\0"
    "columns\0alignmentWidth\0setPosition\0"
    "pos\0textLength\0textStart\0x\0xToCursor\0"
    "QTextLine::CursorPosition\0arg__2\0y\0"
    "CursorPosition\0CursorBetweenCharacters\0"
    "CursorOnCharacter\0Edge\0Leading\0Trailing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       2,  324, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  184,    3, 0x0a /* Public */,
       1,    1,  185,    3, 0x0a /* Public */,
       6,    1,  188,    3, 0x0a /* Public */,
       8,    1,  191,    3, 0x0a /* Public */,
      10,    3,  194,    3, 0x0a /* Public */,
      10,    2,  201,    3, 0x2a /* Public | MethodCloned */,
      14,    1,  206,    3, 0x0a /* Public */,
      15,    4,  209,    3, 0x0a /* Public */,
      15,    3,  218,    3, 0x2a /* Public | MethodCloned */,
      21,    3,  225,    3, 0x0a /* Public */,
      21,    2,  232,    3, 0x2a /* Public | MethodCloned */,
      21,    1,  237,    3, 0x2a /* Public | MethodCloned */,
      25,    1,  240,    3, 0x0a /* Public */,
      26,    1,  243,    3, 0x0a /* Public */,
      27,    1,  246,    3, 0x0a /* Public */,
      28,    1,  249,    3, 0x0a /* Public */,
      29,    1,  252,    3, 0x0a /* Public */,
      30,    1,  255,    3, 0x0a /* Public */,
      31,    1,  258,    3, 0x0a /* Public */,
      32,    1,  261,    3, 0x0a /* Public */,
      33,    1,  264,    3, 0x0a /* Public */,
      34,    1,  267,    3, 0x0a /* Public */,
      35,    2,  270,    3, 0x0a /* Public */,
      37,    2,  275,    3, 0x0a /* Public */,
      39,    2,  280,    3, 0x0a /* Public */,
      39,    3,  285,    3, 0x0a /* Public */,
      42,    2,  292,    3, 0x0a /* Public */,
      44,    1,  297,    3, 0x0a /* Public */,
      45,    1,  300,    3, 0x0a /* Public */,
      38,    1,  303,    3, 0x0a /* Public */,
      46,    1,  306,    3, 0x0a /* Public */,
      47,    3,  309,    3, 0x0a /* Public */,
      47,    2,  316,    3, 0x2a /* Public | MethodCloned */,
      50,    1,  321,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 12,    9,   11,   13,
    QMetaType::QReal, 0x80000000 | 2, QMetaType::Int,    9,   11,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16, QMetaType::QPointF, 0x80000000 | 19,    9,   17,   18,   20,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16, QMetaType::QPointF,    9,   17,   18,
    0x80000000 | 22, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   23,   24,
    0x80000000 | 22, 0x80000000 | 2, QMetaType::Int,    9,   23,
    0x80000000 | 22, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QRectF, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::QPointF, 0x80000000 | 2,    9,
    QMetaType::QRectF, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,   36,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,    9,   38,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   40,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::QReal,    9,   40,   41,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QPointF,    9,   43,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::QReal, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QReal, 0x80000000 | 48,    9,   46,   49,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QReal,    9,   46,
    QMetaType::QReal, 0x80000000 | 2,    9,

 // enums: name, flags, count, data
      51, 0x0,    2,  332,
      54, 0x0,    2,  336,

 // enum data: key, value
      52, uint(PythonQtWrapper_QTextLine::CursorBetweenCharacters),
      53, uint(PythonQtWrapper_QTextLine::CursorOnCharacter),
      55, uint(PythonQtWrapper_QTextLine::Leading),
      56, uint(PythonQtWrapper_QTextLine::Trailing),

       0        // eod
};

void PythonQtWrapper_QTextLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextLine *_t = static_cast<PythonQtWrapper_QTextLine *>(_o);
        switch (_id) {
        case 0: { QTextLine* _r = _t->new_QTextLine();
            if (_a[0]) *reinterpret_cast< QTextLine**>(_a[0]) = _r; }  break;
        case 1: { QTextLine* _r = _t->new_QTextLine((*reinterpret_cast< const QTextLine(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextLine**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextLine((*reinterpret_cast< QTextLine*(*)>(_a[1]))); break;
        case 3: { qreal _r = _t->ascent((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 4: { qreal _r = _t->cursorToX((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QTextLine::Edge(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { qreal _r = _t->cursorToX((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->descent((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: _t->draw((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3])),(*reinterpret_cast< const QTextLayout::FormatRange*(*)>(_a[4]))); break;
        case 8: _t->draw((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< QPainter*(*)>(_a[2])),(*reinterpret_cast< const QPointF(*)>(_a[3]))); break;
        case 9: { QList<QGlyphRun> _r = _t->glyphRuns((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QGlyphRun>*>(_a[0]) = _r; }  break;
        case 10: { QList<QGlyphRun> _r = _t->glyphRuns((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QGlyphRun>*>(_a[0]) = _r; }  break;
        case 11: { QList<QGlyphRun> _r = _t->glyphRuns((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QGlyphRun>*>(_a[0]) = _r; }  break;
        case 12: { qreal _r = _t->height((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 13: { qreal _r = _t->horizontalAdvance((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isValid((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { qreal _r = _t->leading((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->leadingIncluded((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->lineNumber((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { QRectF _r = _t->naturalTextRect((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 19: { qreal _r = _t->naturalTextWidth((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 20: { QPointF _r = _t->position((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = _r; }  break;
        case 21: { QRectF _r = _t->rect((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRectF*>(_a[0]) = _r; }  break;
        case 22: _t->setLeadingIncluded((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->setLineWidth((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 24: _t->setNumColumns((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->setNumColumns((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 26: _t->setPosition((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 27: { int _r = _t->textLength((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 28: { int _r = _t->textStart((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 29: { qreal _r = _t->width((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 30: { qreal _r = _t->x((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->xToCursor((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< QTextLine::CursorPosition(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->xToCursor((*reinterpret_cast< QTextLine*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { qreal _r = _t->y((*reinterpret_cast< QTextLine*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextLine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextLine.data,
      qt_meta_data_PythonQtWrapper_QTextLine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextLine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextLine.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextLine*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextList_t {
    QByteArrayData data[23];
    char stringdata[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextList_t qt_meta_stringdata_PythonQtWrapper_QTextList = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QTextList"
QT_MOC_LITERAL(1, 26, 13), // "new_QTextList"
QT_MOC_LITERAL(2, 40, 10), // "QTextList*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 14), // "QTextDocument*"
QT_MOC_LITERAL(5, 67, 3), // "doc"
QT_MOC_LITERAL(6, 71, 16), // "delete_QTextList"
QT_MOC_LITERAL(7, 88, 3), // "obj"
QT_MOC_LITERAL(8, 92, 3), // "add"
QT_MOC_LITERAL(9, 96, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 113, 10), // "QTextBlock"
QT_MOC_LITERAL(11, 124, 5), // "block"
QT_MOC_LITERAL(12, 130, 5), // "count"
QT_MOC_LITERAL(13, 136, 6), // "format"
QT_MOC_LITERAL(14, 143, 15), // "QTextListFormat"
QT_MOC_LITERAL(15, 159, 4), // "item"
QT_MOC_LITERAL(16, 164, 1), // "i"
QT_MOC_LITERAL(17, 166, 10), // "itemNumber"
QT_MOC_LITERAL(18, 177, 6), // "arg__1"
QT_MOC_LITERAL(19, 184, 8), // "itemText"
QT_MOC_LITERAL(20, 193, 6), // "remove"
QT_MOC_LITERAL(21, 200, 10), // "removeItem"
QT_MOC_LITERAL(22, 211, 9) // "setFormat"

    },
    "PythonQtWrapper_QTextList\0new_QTextList\0"
    "QTextList*\0\0QTextDocument*\0doc\0"
    "delete_QTextList\0obj\0add\0theWrappedObject\0"
    "QTextBlock\0block\0count\0format\0"
    "QTextListFormat\0item\0i\0itemNumber\0"
    "arg__1\0itemText\0remove\0removeItem\0"
    "setFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextList[] = {

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
       6,    1,   72,    3, 0x0a /* Public */,
       8,    2,   75,    3, 0x0a /* Public */,
      12,    1,   80,    3, 0x0a /* Public */,
      13,    1,   83,    3, 0x0a /* Public */,
      15,    2,   86,    3, 0x0a /* Public */,
      17,    2,   91,    3, 0x0a /* Public */,
      19,    2,   96,    3, 0x0a /* Public */,
      20,    2,  101,    3, 0x0a /* Public */,
      21,    2,  106,    3, 0x0a /* Public */,
      22,    2,  111,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 14, 0x80000000 | 2,    9,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::Int,    9,   16,
    QMetaType::Int, 0x80000000 | 2, 0x80000000 | 10,    9,   18,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 10,    9,   18,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    9,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   16,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,    9,   13,

       0        // eod
};

void PythonQtWrapper_QTextList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextList *_t = static_cast<PythonQtWrapper_QTextList *>(_o);
        switch (_id) {
        case 0: { QTextList* _r = _t->new_QTextList((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextList**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTextList((*reinterpret_cast< QTextList*(*)>(_a[1]))); break;
        case 2: _t->add((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        case 3: { int _r = _t->count((*reinterpret_cast< QTextList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { QTextListFormat _r = _t->format((*reinterpret_cast< QTextList*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextListFormat*>(_a[0]) = _r; }  break;
        case 5: { QTextBlock _r = _t->item((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextBlock*>(_a[0]) = _r; }  break;
        case 6: { int _r = _t->itemNumber((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->itemText((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: _t->remove((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextBlock(*)>(_a[2]))); break;
        case 9: _t->removeItem((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->setFormat((*reinterpret_cast< QTextList*(*)>(_a[1])),(*reinterpret_cast< const QTextListFormat(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextList* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextList.data,
      qt_meta_data_PythonQtWrapper_QTextList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextList.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextList*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextListFormat_t {
    QByteArrayData data[30];
    char stringdata[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextListFormat_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextListFormat_t qt_meta_stringdata_PythonQtWrapper_QTextListFormat = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QTextListFormat"
QT_MOC_LITERAL(1, 32, 19), // "new_QTextListFormat"
QT_MOC_LITERAL(2, 52, 16), // "QTextListFormat*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 3), // "fmt"
QT_MOC_LITERAL(5, 74, 15), // "QTextListFormat"
QT_MOC_LITERAL(6, 90, 5), // "other"
QT_MOC_LITERAL(7, 96, 22), // "delete_QTextListFormat"
QT_MOC_LITERAL(8, 119, 3), // "obj"
QT_MOC_LITERAL(9, 123, 6), // "indent"
QT_MOC_LITERAL(10, 130, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 147, 7), // "isValid"
QT_MOC_LITERAL(12, 155, 12), // "numberPrefix"
QT_MOC_LITERAL(13, 168, 12), // "numberSuffix"
QT_MOC_LITERAL(14, 181, 9), // "setIndent"
QT_MOC_LITERAL(15, 191, 15), // "setNumberPrefix"
QT_MOC_LITERAL(16, 207, 15), // "setNumberSuffix"
QT_MOC_LITERAL(17, 223, 8), // "setStyle"
QT_MOC_LITERAL(18, 232, 22), // "QTextListFormat::Style"
QT_MOC_LITERAL(19, 255, 5), // "style"
QT_MOC_LITERAL(20, 261, 5), // "Style"
QT_MOC_LITERAL(21, 267, 8), // "ListDisc"
QT_MOC_LITERAL(22, 276, 10), // "ListCircle"
QT_MOC_LITERAL(23, 287, 10), // "ListSquare"
QT_MOC_LITERAL(24, 298, 11), // "ListDecimal"
QT_MOC_LITERAL(25, 310, 14), // "ListLowerAlpha"
QT_MOC_LITERAL(26, 325, 14), // "ListUpperAlpha"
QT_MOC_LITERAL(27, 340, 14), // "ListLowerRoman"
QT_MOC_LITERAL(28, 355, 14), // "ListUpperRoman"
QT_MOC_LITERAL(29, 370, 18) // "ListStyleUndefined"

    },
    "PythonQtWrapper_QTextListFormat\0"
    "new_QTextListFormat\0QTextListFormat*\0"
    "\0fmt\0QTextListFormat\0other\0"
    "delete_QTextListFormat\0obj\0indent\0"
    "theWrappedObject\0isValid\0numberPrefix\0"
    "numberSuffix\0setIndent\0setNumberPrefix\0"
    "setNumberSuffix\0setStyle\0"
    "QTextListFormat::Style\0style\0Style\0"
    "ListDisc\0ListCircle\0ListSquare\0"
    "ListDecimal\0ListLowerAlpha\0ListUpperAlpha\0"
    "ListLowerRoman\0ListUpperRoman\0"
    "ListStyleUndefined"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextListFormat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       1,  124, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    3, 0x0a /* Public */,
       1,    1,   80,    3, 0x0a /* Public */,
       1,    1,   83,    3, 0x0a /* Public */,
       7,    1,   86,    3, 0x0a /* Public */,
       9,    1,   89,    3, 0x0a /* Public */,
      11,    1,   92,    3, 0x0a /* Public */,
      12,    1,   95,    3, 0x0a /* Public */,
      13,    1,   98,    3, 0x0a /* Public */,
      14,    2,  101,    3, 0x0a /* Public */,
      15,    2,  106,    3, 0x0a /* Public */,
      16,    2,  111,    3, 0x0a /* Public */,
      17,    2,  116,    3, 0x0a /* Public */,
      19,    1,  121,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QTextFormat,    4,
    0x80000000 | 2, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   10,   19,
    0x80000000 | 18, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
      20, 0x0,    9,  128,

 // enum data: key, value
      21, uint(PythonQtWrapper_QTextListFormat::ListDisc),
      22, uint(PythonQtWrapper_QTextListFormat::ListCircle),
      23, uint(PythonQtWrapper_QTextListFormat::ListSquare),
      24, uint(PythonQtWrapper_QTextListFormat::ListDecimal),
      25, uint(PythonQtWrapper_QTextListFormat::ListLowerAlpha),
      26, uint(PythonQtWrapper_QTextListFormat::ListUpperAlpha),
      27, uint(PythonQtWrapper_QTextListFormat::ListLowerRoman),
      28, uint(PythonQtWrapper_QTextListFormat::ListUpperRoman),
      29, uint(PythonQtWrapper_QTextListFormat::ListStyleUndefined),

       0        // eod
};

void PythonQtWrapper_QTextListFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextListFormat *_t = static_cast<PythonQtWrapper_QTextListFormat *>(_o);
        switch (_id) {
        case 0: { QTextListFormat* _r = _t->new_QTextListFormat();
            if (_a[0]) *reinterpret_cast< QTextListFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextListFormat* _r = _t->new_QTextListFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextListFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextListFormat* _r = _t->new_QTextListFormat((*reinterpret_cast< const QTextListFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextListFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextListFormat((*reinterpret_cast< QTextListFormat*(*)>(_a[1]))); break;
        case 4: { int _r = _t->indent((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isValid((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->numberPrefix((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->numberSuffix((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: _t->setIndent((*reinterpret_cast< QTextListFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->setNumberPrefix((*reinterpret_cast< QTextListFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->setNumberSuffix((*reinterpret_cast< QTextListFormat*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->setStyle((*reinterpret_cast< QTextListFormat*(*)>(_a[1])),(*reinterpret_cast< QTextListFormat::Style(*)>(_a[2]))); break;
        case 12: { QTextListFormat::Style _r = _t->style((*reinterpret_cast< QTextListFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextListFormat::Style*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextListFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextListFormat.data,
      qt_meta_data_PythonQtWrapper_QTextListFormat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextListFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextListFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextListFormat.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextListFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextListFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextObject_t {
    QByteArrayData data[12];
    char stringdata[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextObject_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextObject_t qt_meta_stringdata_PythonQtWrapper_QTextObject = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QTextObject"
QT_MOC_LITERAL(1, 28, 15), // "new_QTextObject"
QT_MOC_LITERAL(2, 44, 12), // "QTextObject*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 14), // "QTextDocument*"
QT_MOC_LITERAL(5, 73, 3), // "doc"
QT_MOC_LITERAL(6, 77, 8), // "document"
QT_MOC_LITERAL(7, 86, 16), // "theWrappedObject"
QT_MOC_LITERAL(8, 103, 6), // "format"
QT_MOC_LITERAL(9, 110, 11), // "formatIndex"
QT_MOC_LITERAL(10, 122, 11), // "objectIndex"
QT_MOC_LITERAL(11, 134, 9) // "setFormat"

    },
    "PythonQtWrapper_QTextObject\0new_QTextObject\0"
    "QTextObject*\0\0QTextDocument*\0doc\0"
    "document\0theWrappedObject\0format\0"
    "formatIndex\0objectIndex\0setFormat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextObject[] = {

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
       6,    1,   47,    3, 0x0a /* Public */,
       8,    1,   50,    3, 0x0a /* Public */,
       9,    1,   53,    3, 0x0a /* Public */,
      10,    1,   56,    3, 0x0a /* Public */,
      11,    2,   59,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 4, 0x80000000 | 2,    7,
    QMetaType::QTextFormat, 0x80000000 | 2,    7,
    QMetaType::Int, 0x80000000 | 2,    7,
    QMetaType::Int, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QTextFormat,    7,    8,

       0        // eod
};

void PythonQtWrapper_QTextObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextObject *_t = static_cast<PythonQtWrapper_QTextObject *>(_o);
        switch (_id) {
        case 0: { QTextObject* _r = _t->new_QTextObject((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextObject**>(_a[0]) = _r; }  break;
        case 1: { QTextDocument* _r = _t->document((*reinterpret_cast< QTextObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextDocument**>(_a[0]) = _r; }  break;
        case 2: { QTextFormat _r = _t->format((*reinterpret_cast< QTextObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFormat*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->formatIndex((*reinterpret_cast< QTextObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->objectIndex((*reinterpret_cast< QTextObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->setFormat((*reinterpret_cast< QTextObject*(*)>(_a[1])),(*reinterpret_cast< const QTextFormat(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextObject* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextObject* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextObject* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextObject* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextObject* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextObject.data,
      qt_meta_data_PythonQtWrapper_QTextObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextObject.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextObject*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextOption_t {
    QByteArrayData data[53];
    char stringdata[692];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextOption_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextOption_t qt_meta_stringdata_PythonQtWrapper_QTextOption = {
    {
QT_MOC_LITERAL(0, 0, 27), // "PythonQtWrapper_QTextOption"
QT_MOC_LITERAL(1, 28, 15), // "new_QTextOption"
QT_MOC_LITERAL(2, 44, 12), // "QTextOption*"
QT_MOC_LITERAL(3, 57, 0), // ""
QT_MOC_LITERAL(4, 58, 13), // "Qt::Alignment"
QT_MOC_LITERAL(5, 72, 9), // "alignment"
QT_MOC_LITERAL(6, 82, 11), // "QTextOption"
QT_MOC_LITERAL(7, 94, 1), // "o"
QT_MOC_LITERAL(8, 96, 18), // "delete_QTextOption"
QT_MOC_LITERAL(9, 115, 3), // "obj"
QT_MOC_LITERAL(10, 119, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 136, 5), // "flags"
QT_MOC_LITERAL(12, 142, 18), // "QTextOption::Flags"
QT_MOC_LITERAL(13, 161, 12), // "setAlignment"
QT_MOC_LITERAL(14, 174, 8), // "setFlags"
QT_MOC_LITERAL(15, 183, 11), // "setTabArray"
QT_MOC_LITERAL(16, 195, 12), // "QList<qreal>"
QT_MOC_LITERAL(17, 208, 8), // "tabStops"
QT_MOC_LITERAL(18, 217, 10), // "setTabStop"
QT_MOC_LITERAL(19, 228, 7), // "tabStop"
QT_MOC_LITERAL(20, 236, 7), // "setTabs"
QT_MOC_LITERAL(21, 244, 23), // "QList<QTextOption::Tab>"
QT_MOC_LITERAL(22, 268, 16), // "setTextDirection"
QT_MOC_LITERAL(23, 285, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(24, 305, 10), // "aDirection"
QT_MOC_LITERAL(25, 316, 19), // "setUseDesignMetrics"
QT_MOC_LITERAL(26, 336, 1), // "b"
QT_MOC_LITERAL(27, 338, 11), // "setWrapMode"
QT_MOC_LITERAL(28, 350, 21), // "QTextOption::WrapMode"
QT_MOC_LITERAL(29, 372, 4), // "wrap"
QT_MOC_LITERAL(30, 377, 8), // "tabArray"
QT_MOC_LITERAL(31, 386, 4), // "tabs"
QT_MOC_LITERAL(32, 391, 13), // "textDirection"
QT_MOC_LITERAL(33, 405, 16), // "useDesignMetrics"
QT_MOC_LITERAL(34, 422, 8), // "wrapMode"
QT_MOC_LITERAL(35, 431, 4), // "Flag"
QT_MOC_LITERAL(36, 436, 17), // "ShowTabsAndSpaces"
QT_MOC_LITERAL(37, 454, 30), // "ShowLineAndParagraphSeparators"
QT_MOC_LITERAL(38, 485, 37), // "AddSpaceForLineAndParagraphSe..."
QT_MOC_LITERAL(39, 523, 14), // "SuppressColors"
QT_MOC_LITERAL(40, 538, 21), // "IncludeTrailingSpaces"
QT_MOC_LITERAL(41, 560, 5), // "Flags"
QT_MOC_LITERAL(42, 566, 7), // "TabType"
QT_MOC_LITERAL(43, 574, 7), // "LeftTab"
QT_MOC_LITERAL(44, 582, 8), // "RightTab"
QT_MOC_LITERAL(45, 591, 9), // "CenterTab"
QT_MOC_LITERAL(46, 601, 12), // "DelimiterTab"
QT_MOC_LITERAL(47, 614, 8), // "WrapMode"
QT_MOC_LITERAL(48, 623, 6), // "NoWrap"
QT_MOC_LITERAL(49, 630, 8), // "WordWrap"
QT_MOC_LITERAL(50, 639, 10), // "ManualWrap"
QT_MOC_LITERAL(51, 650, 12), // "WrapAnywhere"
QT_MOC_LITERAL(52, 663, 28) // "WrapAtWordBoundaryOrAnywhere"

    },
    "PythonQtWrapper_QTextOption\0new_QTextOption\0"
    "QTextOption*\0\0Qt::Alignment\0alignment\0"
    "QTextOption\0o\0delete_QTextOption\0obj\0"
    "theWrappedObject\0flags\0QTextOption::Flags\0"
    "setAlignment\0setFlags\0setTabArray\0"
    "QList<qreal>\0tabStops\0setTabStop\0"
    "tabStop\0setTabs\0QList<QTextOption::Tab>\0"
    "setTextDirection\0Qt::LayoutDirection\0"
    "aDirection\0setUseDesignMetrics\0b\0"
    "setWrapMode\0QTextOption::WrapMode\0"
    "wrap\0tabArray\0tabs\0textDirection\0"
    "useDesignMetrics\0wrapMode\0Flag\0"
    "ShowTabsAndSpaces\0ShowLineAndParagraphSeparators\0"
    "AddSpaceForLineAndParagraphSeparators\0"
    "SuppressColors\0IncludeTrailingSpaces\0"
    "Flags\0TabType\0LeftTab\0RightTab\0CenterTab\0"
    "DelimiterTab\0WrapMode\0NoWrap\0WordWrap\0"
    "ManualWrap\0WrapAnywhere\0"
    "WrapAtWordBoundaryOrAnywhere"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextOption[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       4,  188, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    3, 0x0a /* Public */,
       1,    1,  115,    3, 0x0a /* Public */,
       1,    1,  118,    3, 0x0a /* Public */,
       8,    1,  121,    3, 0x0a /* Public */,
       5,    1,  124,    3, 0x0a /* Public */,
      11,    1,  127,    3, 0x0a /* Public */,
      13,    2,  130,    3, 0x0a /* Public */,
      14,    2,  135,    3, 0x0a /* Public */,
      15,    2,  140,    3, 0x0a /* Public */,
      18,    2,  145,    3, 0x0a /* Public */,
      20,    2,  150,    3, 0x0a /* Public */,
      22,    2,  155,    3, 0x0a /* Public */,
      25,    2,  160,    3, 0x0a /* Public */,
      27,    2,  165,    3, 0x0a /* Public */,
      30,    1,  170,    3, 0x0a /* Public */,
      19,    1,  173,    3, 0x0a /* Public */,
      31,    1,  176,    3, 0x0a /* Public */,
      32,    1,  179,    3, 0x0a /* Public */,
      33,    1,  182,    3, 0x0a /* Public */,
      34,    1,  185,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2,   10,
    0x80000000 | 12, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,   10,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   10,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,   10,   17,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,   10,   24,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   26,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 28,   10,   29,
    0x80000000 | 16, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    0x80000000 | 21, 0x80000000 | 2,   10,
    0x80000000 | 23, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    0x80000000 | 28, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
      35, 0x0,    5,  204,
      41, 0x1,    5,  214,
      42, 0x0,    4,  224,
      47, 0x0,    5,  232,

 // enum data: key, value
      36, uint(PythonQtWrapper_QTextOption::ShowTabsAndSpaces),
      37, uint(PythonQtWrapper_QTextOption::ShowLineAndParagraphSeparators),
      38, uint(PythonQtWrapper_QTextOption::AddSpaceForLineAndParagraphSeparators),
      39, uint(PythonQtWrapper_QTextOption::SuppressColors),
      40, uint(PythonQtWrapper_QTextOption::IncludeTrailingSpaces),
      36, uint(PythonQtWrapper_QTextOption::ShowTabsAndSpaces),
      37, uint(PythonQtWrapper_QTextOption::ShowLineAndParagraphSeparators),
      38, uint(PythonQtWrapper_QTextOption::AddSpaceForLineAndParagraphSeparators),
      39, uint(PythonQtWrapper_QTextOption::SuppressColors),
      40, uint(PythonQtWrapper_QTextOption::IncludeTrailingSpaces),
      43, uint(PythonQtWrapper_QTextOption::LeftTab),
      44, uint(PythonQtWrapper_QTextOption::RightTab),
      45, uint(PythonQtWrapper_QTextOption::CenterTab),
      46, uint(PythonQtWrapper_QTextOption::DelimiterTab),
      48, uint(PythonQtWrapper_QTextOption::NoWrap),
      49, uint(PythonQtWrapper_QTextOption::WordWrap),
      50, uint(PythonQtWrapper_QTextOption::ManualWrap),
      51, uint(PythonQtWrapper_QTextOption::WrapAnywhere),
      52, uint(PythonQtWrapper_QTextOption::WrapAtWordBoundaryOrAnywhere),

       0        // eod
};

void PythonQtWrapper_QTextOption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextOption *_t = static_cast<PythonQtWrapper_QTextOption *>(_o);
        switch (_id) {
        case 0: { QTextOption* _r = _t->new_QTextOption();
            if (_a[0]) *reinterpret_cast< QTextOption**>(_a[0]) = _r; }  break;
        case 1: { QTextOption* _r = _t->new_QTextOption((*reinterpret_cast< Qt::Alignment(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption**>(_a[0]) = _r; }  break;
        case 2: { QTextOption* _r = _t->new_QTextOption((*reinterpret_cast< const QTextOption(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextOption((*reinterpret_cast< QTextOption*(*)>(_a[1]))); break;
        case 4: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 5: { QTextOption::Flags _r = _t->flags((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::Flags*>(_a[0]) = _r; }  break;
        case 6: _t->setAlignment((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 7: _t->setFlags((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< QTextOption::Flags(*)>(_a[2]))); break;
        case 8: _t->setTabArray((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< const QList<qreal>(*)>(_a[2]))); break;
        case 9: _t->setTabStop((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 10: _t->setTabs((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< const QList<QTextOption::Tab>(*)>(_a[2]))); break;
        case 11: _t->setTextDirection((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< Qt::LayoutDirection(*)>(_a[2]))); break;
        case 12: _t->setUseDesignMetrics((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setWrapMode((*reinterpret_cast< QTextOption*(*)>(_a[1])),(*reinterpret_cast< QTextOption::WrapMode(*)>(_a[2]))); break;
        case 14: { QList<qreal> _r = _t->tabArray((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<qreal>*>(_a[0]) = _r; }  break;
        case 15: { qreal _r = _t->tabStop((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 16: { QList<QTextOption::Tab> _r = _t->tabs((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QTextOption::Tab>*>(_a[0]) = _r; }  break;
        case 17: { Qt::LayoutDirection _r = _t->textDirection((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::LayoutDirection*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->useDesignMetrics((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { QTextOption::WrapMode _r = _t->wrapMode((*reinterpret_cast< QTextOption*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::WrapMode*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qreal> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QTextOption::Tab> >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextOption::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextOption.data,
      qt_meta_data_PythonQtWrapper_QTextOption,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextOption::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextOption.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextOption*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextOption__Tab_t {
    QByteArrayData data[24];
    char stringdata[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextOption__Tab_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextOption__Tab_t qt_meta_stringdata_PythonQtWrapper_QTextOption__Tab = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QTextOption__Tab"
QT_MOC_LITERAL(1, 33, 20), // "new_QTextOption__Tab"
QT_MOC_LITERAL(2, 54, 17), // "QTextOption::Tab*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 3), // "pos"
QT_MOC_LITERAL(5, 77, 20), // "QTextOption::TabType"
QT_MOC_LITERAL(6, 98, 7), // "tabType"
QT_MOC_LITERAL(7, 106, 5), // "delim"
QT_MOC_LITERAL(8, 112, 16), // "QTextOption::Tab"
QT_MOC_LITERAL(9, 129, 5), // "other"
QT_MOC_LITERAL(10, 135, 23), // "delete_QTextOption__Tab"
QT_MOC_LITERAL(11, 159, 3), // "obj"
QT_MOC_LITERAL(12, 163, 6), // "__ne__"
QT_MOC_LITERAL(13, 170, 16), // "theWrappedObject"
QT_MOC_LITERAL(14, 187, 6), // "__eq__"
QT_MOC_LITERAL(15, 194, 16), // "py_set_delimiter"
QT_MOC_LITERAL(16, 211, 9), // "delimiter"
QT_MOC_LITERAL(17, 221, 16), // "py_get_delimiter"
QT_MOC_LITERAL(18, 238, 15), // "py_set_position"
QT_MOC_LITERAL(19, 254, 8), // "position"
QT_MOC_LITERAL(20, 263, 15), // "py_get_position"
QT_MOC_LITERAL(21, 279, 11), // "py_set_type"
QT_MOC_LITERAL(22, 291, 4), // "type"
QT_MOC_LITERAL(23, 296, 11) // "py_get_type"

    },
    "PythonQtWrapper_QTextOption__Tab\0"
    "new_QTextOption__Tab\0QTextOption::Tab*\0"
    "\0pos\0QTextOption::TabType\0tabType\0"
    "delim\0QTextOption::Tab\0other\0"
    "delete_QTextOption__Tab\0obj\0__ne__\0"
    "theWrappedObject\0__eq__\0py_set_delimiter\0"
    "delimiter\0py_get_delimiter\0py_set_position\0"
    "position\0py_get_position\0py_set_type\0"
    "type\0py_get_type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextOption__Tab[] = {

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
       1,    0,   79,    3, 0x0a /* Public */,
       1,    3,   80,    3, 0x0a /* Public */,
       1,    2,   87,    3, 0x2a /* Public | MethodCloned */,
       1,    1,   92,    3, 0x0a /* Public */,
      10,    1,   95,    3, 0x0a /* Public */,
      12,    2,   98,    3, 0x0a /* Public */,
      14,    2,  103,    3, 0x0a /* Public */,
      15,    2,  108,    3, 0x0a /* Public */,
      17,    1,  113,    3, 0x0a /* Public */,
      18,    2,  116,    3, 0x0a /* Public */,
      20,    1,  121,    3, 0x0a /* Public */,
      21,    2,  124,    3, 0x0a /* Public */,
      23,    1,  129,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QReal, 0x80000000 | 5, QMetaType::QChar,    4,    6,    7,
    0x80000000 | 2, QMetaType::QReal, 0x80000000 | 5,    4,    6,
    0x80000000 | 2, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 8,   13,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 8,   13,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QChar,   13,   16,
    QMetaType::QChar, 0x80000000 | 2,   13,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   13,   19,
    QMetaType::QReal, 0x80000000 | 2,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 5,   13,   22,
    0x80000000 | 5, 0x80000000 | 2,   13,

       0        // eod
};

void PythonQtWrapper_QTextOption__Tab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextOption__Tab *_t = static_cast<PythonQtWrapper_QTextOption__Tab *>(_o);
        switch (_id) {
        case 0: { QTextOption::Tab* _r = _t->new_QTextOption__Tab();
            if (_a[0]) *reinterpret_cast< QTextOption::Tab**>(_a[0]) = _r; }  break;
        case 1: { QTextOption::Tab* _r = _t->new_QTextOption__Tab((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< QTextOption::TabType(*)>(_a[2])),(*reinterpret_cast< QChar(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextOption::Tab**>(_a[0]) = _r; }  break;
        case 2: { QTextOption::Tab* _r = _t->new_QTextOption__Tab((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< QTextOption::TabType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextOption::Tab**>(_a[0]) = _r; }  break;
        case 3: { QTextOption::Tab* _r = _t->new_QTextOption__Tab((*reinterpret_cast< const QTextOption::Tab(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::Tab**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTextOption__Tab((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->__ne__((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< const QTextOption::Tab(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__eq__((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< const QTextOption::Tab(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->py_set_delimiter((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< QChar(*)>(_a[2]))); break;
        case 8: { QChar _r = _t->py_get_delimiter((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QChar*>(_a[0]) = _r; }  break;
        case 9: _t->py_set_position((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 10: { qreal _r = _t->py_get_position((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 11: _t->py_set_type((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])),(*reinterpret_cast< QTextOption::TabType(*)>(_a[2]))); break;
        case 12: { QTextOption::TabType _r = _t->py_get_type((*reinterpret_cast< QTextOption::Tab*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextOption::TabType*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextOption::Tab >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextOption::Tab >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextOption::Tab >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextOption__Tab::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextOption__Tab.data,
      qt_meta_data_PythonQtWrapper_QTextOption__Tab,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextOption__Tab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextOption__Tab::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextOption__Tab.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextOption__Tab*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextOption__Tab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextTable_t {
    QByteArrayData data[39];
    char stringdata[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextTable_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextTable_t qt_meta_stringdata_PythonQtWrapper_QTextTable = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QTextTable"
QT_MOC_LITERAL(1, 27, 14), // "new_QTextTable"
QT_MOC_LITERAL(2, 42, 11), // "QTextTable*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 14), // "QTextDocument*"
QT_MOC_LITERAL(5, 70, 3), // "doc"
QT_MOC_LITERAL(6, 74, 17), // "delete_QTextTable"
QT_MOC_LITERAL(7, 92, 3), // "obj"
QT_MOC_LITERAL(8, 96, 13), // "appendColumns"
QT_MOC_LITERAL(9, 110, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 127, 5), // "count"
QT_MOC_LITERAL(11, 133, 10), // "appendRows"
QT_MOC_LITERAL(12, 144, 6), // "cellAt"
QT_MOC_LITERAL(13, 151, 14), // "QTextTableCell"
QT_MOC_LITERAL(14, 166, 11), // "QTextCursor"
QT_MOC_LITERAL(15, 178, 1), // "c"
QT_MOC_LITERAL(16, 180, 8), // "position"
QT_MOC_LITERAL(17, 189, 3), // "row"
QT_MOC_LITERAL(18, 193, 3), // "col"
QT_MOC_LITERAL(19, 197, 7), // "columns"
QT_MOC_LITERAL(20, 205, 6), // "format"
QT_MOC_LITERAL(21, 212, 16), // "QTextTableFormat"
QT_MOC_LITERAL(22, 229, 13), // "insertColumns"
QT_MOC_LITERAL(23, 243, 3), // "pos"
QT_MOC_LITERAL(24, 247, 3), // "num"
QT_MOC_LITERAL(25, 251, 10), // "insertRows"
QT_MOC_LITERAL(26, 262, 10), // "mergeCells"
QT_MOC_LITERAL(27, 273, 6), // "cursor"
QT_MOC_LITERAL(28, 280, 7), // "numRows"
QT_MOC_LITERAL(29, 288, 7), // "numCols"
QT_MOC_LITERAL(30, 296, 13), // "removeColumns"
QT_MOC_LITERAL(31, 310, 10), // "removeRows"
QT_MOC_LITERAL(32, 321, 6), // "resize"
QT_MOC_LITERAL(33, 328, 4), // "rows"
QT_MOC_LITERAL(34, 333, 4), // "cols"
QT_MOC_LITERAL(35, 338, 6), // "rowEnd"
QT_MOC_LITERAL(36, 345, 8), // "rowStart"
QT_MOC_LITERAL(37, 354, 9), // "setFormat"
QT_MOC_LITERAL(38, 364, 9) // "splitCell"

    },
    "PythonQtWrapper_QTextTable\0new_QTextTable\0"
    "QTextTable*\0\0QTextDocument*\0doc\0"
    "delete_QTextTable\0obj\0appendColumns\0"
    "theWrappedObject\0count\0appendRows\0"
    "cellAt\0QTextTableCell\0QTextCursor\0c\0"
    "position\0row\0col\0columns\0format\0"
    "QTextTableFormat\0insertColumns\0pos\0"
    "num\0insertRows\0mergeCells\0cursor\0"
    "numRows\0numCols\0removeColumns\0removeRows\0"
    "resize\0rows\0cols\0rowEnd\0rowStart\0"
    "setFormat\0splitCell"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextTable[] = {

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
       6,    1,  122,    3, 0x0a /* Public */,
       8,    2,  125,    3, 0x0a /* Public */,
      11,    2,  130,    3, 0x0a /* Public */,
      12,    2,  135,    3, 0x0a /* Public */,
      12,    2,  140,    3, 0x0a /* Public */,
      12,    3,  145,    3, 0x0a /* Public */,
      19,    1,  152,    3, 0x0a /* Public */,
      20,    1,  155,    3, 0x0a /* Public */,
      22,    3,  158,    3, 0x0a /* Public */,
      25,    3,  165,    3, 0x0a /* Public */,
      26,    2,  172,    3, 0x0a /* Public */,
      26,    5,  177,    3, 0x0a /* Public */,
      30,    3,  188,    3, 0x0a /* Public */,
      31,    3,  195,    3, 0x0a /* Public */,
      32,    3,  202,    3, 0x0a /* Public */,
      35,    2,  209,    3, 0x0a /* Public */,
      36,    2,  214,    3, 0x0a /* Public */,
      33,    1,  219,    3, 0x0a /* Public */,
      37,    2,  222,    3, 0x0a /* Public */,
      38,    5,  227,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   10,
    0x80000000 | 13, 0x80000000 | 2, 0x80000000 | 14,    9,   15,
    0x80000000 | 13, 0x80000000 | 2, QMetaType::Int,    9,   16,
    0x80000000 | 13, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   17,   18,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 21, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   23,   24,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   23,   24,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,    9,   27,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   17,   18,   28,   29,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   23,   24,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   23,   24,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    9,   33,   34,
    0x80000000 | 14, 0x80000000 | 2, 0x80000000 | 14,    9,   15,
    0x80000000 | 14, 0x80000000 | 2, 0x80000000 | 14,    9,   15,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,    9,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    9,   17,   18,   28,   29,

       0        // eod
};

void PythonQtWrapper_QTextTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextTable *_t = static_cast<PythonQtWrapper_QTextTable *>(_o);
        switch (_id) {
        case 0: { QTextTable* _r = _t->new_QTextTable((*reinterpret_cast< QTextDocument*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTable**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QTextTable((*reinterpret_cast< QTextTable*(*)>(_a[1]))); break;
        case 2: _t->appendColumns((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->appendRows((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: { QTextTableCell _r = _t->cellAt((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextTableCell*>(_a[0]) = _r; }  break;
        case 5: { QTextTableCell _r = _t->cellAt((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextTableCell*>(_a[0]) = _r; }  break;
        case 6: { QTextTableCell _r = _t->cellAt((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QTextTableCell*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->columns((*reinterpret_cast< QTextTable*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QTextTableFormat _r = _t->format((*reinterpret_cast< QTextTable*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableFormat*>(_a[0]) = _r; }  break;
        case 9: _t->insertColumns((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->insertRows((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->mergeCells((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2]))); break;
        case 12: _t->mergeCells((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 13: _t->removeColumns((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->removeRows((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->resize((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: { QTextCursor _r = _t->rowEnd((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 17: { QTextCursor _r = _t->rowStart((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextCursor(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 18: { int _r = _t->rows((*reinterpret_cast< QTextTable*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 19: _t->setFormat((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< const QTextTableFormat(*)>(_a[2]))); break;
        case 20: _t->splitCell((*reinterpret_cast< QTextTable*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextDocument* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextTable* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextTable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextTable.data,
      qt_meta_data_PythonQtWrapper_QTextTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextTable.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextTable*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextTableCell_t {
    QByteArrayData data[29];
    char stringdata[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextTableCell_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextTableCell_t qt_meta_stringdata_PythonQtWrapper_QTextTableCell = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QTextTableCell"
QT_MOC_LITERAL(1, 31, 18), // "new_QTextTableCell"
QT_MOC_LITERAL(2, 50, 15), // "QTextTableCell*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 14), // "QTextTableCell"
QT_MOC_LITERAL(5, 82, 1), // "o"
QT_MOC_LITERAL(6, 84, 21), // "delete_QTextTableCell"
QT_MOC_LITERAL(7, 106, 3), // "obj"
QT_MOC_LITERAL(8, 110, 5), // "begin"
QT_MOC_LITERAL(9, 116, 20), // "QTextFrame::iterator"
QT_MOC_LITERAL(10, 137, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 154, 6), // "column"
QT_MOC_LITERAL(12, 161, 10), // "columnSpan"
QT_MOC_LITERAL(13, 172, 3), // "end"
QT_MOC_LITERAL(14, 176, 19), // "firstCursorPosition"
QT_MOC_LITERAL(15, 196, 11), // "QTextCursor"
QT_MOC_LITERAL(16, 208, 13), // "firstPosition"
QT_MOC_LITERAL(17, 222, 6), // "format"
QT_MOC_LITERAL(18, 229, 15), // "QTextCharFormat"
QT_MOC_LITERAL(19, 245, 7), // "isValid"
QT_MOC_LITERAL(20, 253, 18), // "lastCursorPosition"
QT_MOC_LITERAL(21, 272, 12), // "lastPosition"
QT_MOC_LITERAL(22, 285, 6), // "__ne__"
QT_MOC_LITERAL(23, 292, 5), // "other"
QT_MOC_LITERAL(24, 298, 6), // "__eq__"
QT_MOC_LITERAL(25, 305, 3), // "row"
QT_MOC_LITERAL(26, 309, 7), // "rowSpan"
QT_MOC_LITERAL(27, 317, 9), // "setFormat"
QT_MOC_LITERAL(28, 327, 20) // "tableCellFormatIndex"

    },
    "PythonQtWrapper_QTextTableCell\0"
    "new_QTextTableCell\0QTextTableCell*\0\0"
    "QTextTableCell\0o\0delete_QTextTableCell\0"
    "obj\0begin\0QTextFrame::iterator\0"
    "theWrappedObject\0column\0columnSpan\0"
    "end\0firstCursorPosition\0QTextCursor\0"
    "firstPosition\0format\0QTextCharFormat\0"
    "isValid\0lastCursorPosition\0lastPosition\0"
    "__ne__\0other\0__eq__\0row\0rowSpan\0"
    "setFormat\0tableCellFormatIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextTableCell[] = {

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
       6,    1,  113,    3, 0x0a /* Public */,
       8,    1,  116,    3, 0x0a /* Public */,
      11,    1,  119,    3, 0x0a /* Public */,
      12,    1,  122,    3, 0x0a /* Public */,
      13,    1,  125,    3, 0x0a /* Public */,
      14,    1,  128,    3, 0x0a /* Public */,
      16,    1,  131,    3, 0x0a /* Public */,
      17,    1,  134,    3, 0x0a /* Public */,
      19,    1,  137,    3, 0x0a /* Public */,
      20,    1,  140,    3, 0x0a /* Public */,
      21,    1,  143,    3, 0x0a /* Public */,
      22,    2,  146,    3, 0x0a /* Public */,
      24,    2,  151,    3, 0x0a /* Public */,
      25,    1,  156,    3, 0x0a /* Public */,
      26,    1,  159,    3, 0x0a /* Public */,
      27,    2,  162,    3, 0x0a /* Public */,
      28,    1,  167,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    0x80000000 | 9, 0x80000000 | 2,   10,
    0x80000000 | 15, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    0x80000000 | 18, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    0x80000000 | 15, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,   23,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,   23,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   10,   17,
    QMetaType::Int, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QTextTableCell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextTableCell *_t = static_cast<PythonQtWrapper_QTextTableCell *>(_o);
        switch (_id) {
        case 0: { QTextTableCell* _r = _t->new_QTextTableCell();
            if (_a[0]) *reinterpret_cast< QTextTableCell**>(_a[0]) = _r; }  break;
        case 1: { QTextTableCell* _r = _t->new_QTextTableCell((*reinterpret_cast< const QTextTableCell(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableCell**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QTextTableCell((*reinterpret_cast< QTextTableCell*(*)>(_a[1]))); break;
        case 3: { QTextFrame::iterator _r = _t->begin((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame::iterator*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->column((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->columnSpan((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { QTextFrame::iterator _r = _t->end((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextFrame::iterator*>(_a[0]) = _r; }  break;
        case 7: { QTextCursor _r = _t->firstCursorPosition((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->firstPosition((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QTextCharFormat _r = _t->format((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCharFormat*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isValid((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QTextCursor _r = _t->lastCursorPosition((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextCursor*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->lastPosition((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__ne__((*reinterpret_cast< QTextTableCell*(*)>(_a[1])),(*reinterpret_cast< const QTextTableCell(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__eq__((*reinterpret_cast< QTextTableCell*(*)>(_a[1])),(*reinterpret_cast< const QTextTableCell(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->row((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->rowSpan((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: _t->setFormat((*reinterpret_cast< QTextTableCell*(*)>(_a[1])),(*reinterpret_cast< const QTextCharFormat(*)>(_a[2]))); break;
        case 18: { int _r = _t->tableCellFormatIndex((*reinterpret_cast< QTextTableCell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextTableCell::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextTableCell.data,
      qt_meta_data_PythonQtWrapper_QTextTableCell,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextTableCell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextTableCell::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextTableCell.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextTableCell*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextTableCell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextTableCellFormat_t {
    QByteArrayData data[21];
    char stringdata[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextTableCellFormat_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextTableCellFormat_t qt_meta_stringdata_PythonQtWrapper_QTextTableCellFormat = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_QTextTableCel..."
QT_MOC_LITERAL(1, 37, 24), // "new_QTextTableCellFormat"
QT_MOC_LITERAL(2, 62, 21), // "QTextTableCellFormat*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 3), // "fmt"
QT_MOC_LITERAL(5, 89, 20), // "QTextTableCellFormat"
QT_MOC_LITERAL(6, 110, 5), // "other"
QT_MOC_LITERAL(7, 116, 27), // "delete_QTextTableCellFormat"
QT_MOC_LITERAL(8, 144, 3), // "obj"
QT_MOC_LITERAL(9, 148, 13), // "bottomPadding"
QT_MOC_LITERAL(10, 162, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 179, 7), // "isValid"
QT_MOC_LITERAL(12, 187, 11), // "leftPadding"
QT_MOC_LITERAL(13, 199, 12), // "rightPadding"
QT_MOC_LITERAL(14, 212, 16), // "setBottomPadding"
QT_MOC_LITERAL(15, 229, 7), // "padding"
QT_MOC_LITERAL(16, 237, 14), // "setLeftPadding"
QT_MOC_LITERAL(17, 252, 10), // "setPadding"
QT_MOC_LITERAL(18, 263, 15), // "setRightPadding"
QT_MOC_LITERAL(19, 279, 13), // "setTopPadding"
QT_MOC_LITERAL(20, 293, 10) // "topPadding"

    },
    "PythonQtWrapper_QTextTableCellFormat\0"
    "new_QTextTableCellFormat\0QTextTableCellFormat*\0"
    "\0fmt\0QTextTableCellFormat\0other\0"
    "delete_QTextTableCellFormat\0obj\0"
    "bottomPadding\0theWrappedObject\0isValid\0"
    "leftPadding\0rightPadding\0setBottomPadding\0"
    "padding\0setLeftPadding\0setPadding\0"
    "setRightPadding\0setTopPadding\0topPadding"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextTableCellFormat[] = {

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
       1,    1,   85,    3, 0x0a /* Public */,
       1,    1,   88,    3, 0x0a /* Public */,
       7,    1,   91,    3, 0x0a /* Public */,
       9,    1,   94,    3, 0x0a /* Public */,
      11,    1,   97,    3, 0x0a /* Public */,
      12,    1,  100,    3, 0x0a /* Public */,
      13,    1,  103,    3, 0x0a /* Public */,
      14,    2,  106,    3, 0x0a /* Public */,
      16,    2,  111,    3, 0x0a /* Public */,
      17,    2,  116,    3, 0x0a /* Public */,
      18,    2,  121,    3, 0x0a /* Public */,
      19,    2,  126,    3, 0x0a /* Public */,
      20,    1,  131,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QTextFormat,    4,
    0x80000000 | 2, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::QReal, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   10,   15,
    QMetaType::QReal, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QTextTableCellFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextTableCellFormat *_t = static_cast<PythonQtWrapper_QTextTableCellFormat *>(_o);
        switch (_id) {
        case 0: { QTextTableCellFormat* _r = _t->new_QTextTableCellFormat();
            if (_a[0]) *reinterpret_cast< QTextTableCellFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextTableCellFormat* _r = _t->new_QTextTableCellFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableCellFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextTableCellFormat* _r = _t->new_QTextTableCellFormat((*reinterpret_cast< const QTextTableCellFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableCellFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextTableCellFormat((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1]))); break;
        case 4: { qreal _r = _t->bottomPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isValid((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->leftPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: { qreal _r = _t->rightPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 8: _t->setBottomPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 9: _t->setLeftPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 10: _t->setPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 11: _t->setRightPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 12: _t->setTopPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 13: { qreal _r = _t->topPadding((*reinterpret_cast< QTextTableCellFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextTableCellFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextTableCellFormat.data,
      qt_meta_data_PythonQtWrapper_QTextTableCellFormat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextTableCellFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextTableCellFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextTableCellFormat.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextTableCellFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextTableCellFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTextTableFormat_t {
    QByteArrayData data[30];
    char stringdata[428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTextTableFormat_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTextTableFormat_t qt_meta_stringdata_PythonQtWrapper_QTextTableFormat = {
    {
QT_MOC_LITERAL(0, 0, 32), // "PythonQtWrapper_QTextTableFormat"
QT_MOC_LITERAL(1, 33, 20), // "new_QTextTableFormat"
QT_MOC_LITERAL(2, 54, 17), // "QTextTableFormat*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 3), // "fmt"
QT_MOC_LITERAL(5, 77, 16), // "QTextTableFormat"
QT_MOC_LITERAL(6, 94, 5), // "other"
QT_MOC_LITERAL(7, 100, 23), // "delete_QTextTableFormat"
QT_MOC_LITERAL(8, 124, 3), // "obj"
QT_MOC_LITERAL(9, 128, 9), // "alignment"
QT_MOC_LITERAL(10, 138, 13), // "Qt::Alignment"
QT_MOC_LITERAL(11, 152, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 169, 11), // "cellPadding"
QT_MOC_LITERAL(13, 181, 11), // "cellSpacing"
QT_MOC_LITERAL(14, 193, 27), // "clearColumnWidthConstraints"
QT_MOC_LITERAL(15, 221, 22), // "columnWidthConstraints"
QT_MOC_LITERAL(16, 244, 20), // "QVector<QTextLength>"
QT_MOC_LITERAL(17, 265, 7), // "columns"
QT_MOC_LITERAL(18, 273, 14), // "headerRowCount"
QT_MOC_LITERAL(19, 288, 7), // "isValid"
QT_MOC_LITERAL(20, 296, 12), // "setAlignment"
QT_MOC_LITERAL(21, 309, 14), // "setCellPadding"
QT_MOC_LITERAL(22, 324, 7), // "padding"
QT_MOC_LITERAL(23, 332, 14), // "setCellSpacing"
QT_MOC_LITERAL(24, 347, 7), // "spacing"
QT_MOC_LITERAL(25, 355, 25), // "setColumnWidthConstraints"
QT_MOC_LITERAL(26, 381, 11), // "constraints"
QT_MOC_LITERAL(27, 393, 10), // "setColumns"
QT_MOC_LITERAL(28, 404, 17), // "setHeaderRowCount"
QT_MOC_LITERAL(29, 422, 5) // "count"

    },
    "PythonQtWrapper_QTextTableFormat\0"
    "new_QTextTableFormat\0QTextTableFormat*\0"
    "\0fmt\0QTextTableFormat\0other\0"
    "delete_QTextTableFormat\0obj\0alignment\0"
    "Qt::Alignment\0theWrappedObject\0"
    "cellPadding\0cellSpacing\0"
    "clearColumnWidthConstraints\0"
    "columnWidthConstraints\0QVector<QTextLength>\0"
    "columns\0headerRowCount\0isValid\0"
    "setAlignment\0setCellPadding\0padding\0"
    "setCellSpacing\0spacing\0setColumnWidthConstraints\0"
    "constraints\0setColumns\0setHeaderRowCount\0"
    "count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTextTableFormat[] = {

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
       1,    1,  108,    3, 0x0a /* Public */,
       7,    1,  111,    3, 0x0a /* Public */,
       9,    1,  114,    3, 0x0a /* Public */,
      12,    1,  117,    3, 0x0a /* Public */,
      13,    1,  120,    3, 0x0a /* Public */,
      14,    1,  123,    3, 0x0a /* Public */,
      15,    1,  126,    3, 0x0a /* Public */,
      17,    1,  129,    3, 0x0a /* Public */,
      18,    1,  132,    3, 0x0a /* Public */,
      19,    1,  135,    3, 0x0a /* Public */,
      20,    2,  138,    3, 0x0a /* Public */,
      21,    2,  143,    3, 0x0a /* Public */,
      23,    2,  148,    3, 0x0a /* Public */,
      25,    2,  153,    3, 0x0a /* Public */,
      27,    2,  158,    3, 0x0a /* Public */,
      28,    2,  163,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QTextFormat,    4,
    0x80000000 | 2, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    0x80000000 | 10, 0x80000000 | 2,   11,
    QMetaType::QReal, 0x80000000 | 2,   11,
    QMetaType::QReal, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2,   11,
    0x80000000 | 16, 0x80000000 | 2,   11,
    QMetaType::Int, 0x80000000 | 2,   11,
    QMetaType::Int, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,   11,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   11,   22,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QReal,   11,   24,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   11,   26,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   11,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   11,   29,

       0        // eod
};

void PythonQtWrapper_QTextTableFormat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTextTableFormat *_t = static_cast<PythonQtWrapper_QTextTableFormat *>(_o);
        switch (_id) {
        case 0: { QTextTableFormat* _r = _t->new_QTextTableFormat();
            if (_a[0]) *reinterpret_cast< QTextTableFormat**>(_a[0]) = _r; }  break;
        case 1: { QTextTableFormat* _r = _t->new_QTextTableFormat((*reinterpret_cast< const QTextFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableFormat**>(_a[0]) = _r; }  break;
        case 2: { QTextTableFormat* _r = _t->new_QTextTableFormat((*reinterpret_cast< const QTextTableFormat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTextTableFormat**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTextTableFormat((*reinterpret_cast< QTextTableFormat*(*)>(_a[1]))); break;
        case 4: { Qt::Alignment _r = _t->alignment((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::Alignment*>(_a[0]) = _r; }  break;
        case 5: { qreal _r = _t->cellPadding((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 6: { qreal _r = _t->cellSpacing((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        case 7: _t->clearColumnWidthConstraints((*reinterpret_cast< QTextTableFormat*(*)>(_a[1]))); break;
        case 8: { QVector<QTextLength> _r = _t->columnWidthConstraints((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QTextLength>*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->columns((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->headerRowCount((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isValid((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->setAlignment((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 13: _t->setCellPadding((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 14: _t->setCellSpacing((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 15: _t->setColumnWidthConstraints((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< const QVector<QTextLength>(*)>(_a[2]))); break;
        case 16: _t->setColumns((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->setHeaderRowCount((*reinterpret_cast< QTextTableFormat*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QTextLength> >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTextTableFormat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTextTableFormat.data,
      qt_meta_data_PythonQtWrapper_QTextTableFormat,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTextTableFormat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTextTableFormat::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTextTableFormat.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTextTableFormat*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTextTableFormat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTileRules_t {
    QByteArrayData data[17];
    char stringdata[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTileRules_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTileRules_t qt_meta_stringdata_PythonQtWrapper_QTileRules = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QTileRules"
QT_MOC_LITERAL(1, 27, 14), // "new_QTileRules"
QT_MOC_LITERAL(2, 42, 11), // "QTileRules*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 12), // "Qt::TileRule"
QT_MOC_LITERAL(5, 68, 14), // "horizontalRule"
QT_MOC_LITERAL(6, 83, 12), // "verticalRule"
QT_MOC_LITERAL(7, 96, 4), // "rule"
QT_MOC_LITERAL(8, 101, 17), // "delete_QTileRules"
QT_MOC_LITERAL(9, 119, 3), // "obj"
QT_MOC_LITERAL(10, 123, 17), // "py_set_horizontal"
QT_MOC_LITERAL(11, 141, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 158, 10), // "horizontal"
QT_MOC_LITERAL(13, 169, 17), // "py_get_horizontal"
QT_MOC_LITERAL(14, 187, 15), // "py_set_vertical"
QT_MOC_LITERAL(15, 203, 8), // "vertical"
QT_MOC_LITERAL(16, 212, 15) // "py_get_vertical"

    },
    "PythonQtWrapper_QTileRules\0new_QTileRules\0"
    "QTileRules*\0\0Qt::TileRule\0horizontalRule\0"
    "verticalRule\0rule\0delete_QTileRules\0"
    "obj\0py_set_horizontal\0theWrappedObject\0"
    "horizontal\0py_get_horizontal\0"
    "py_set_vertical\0vertical\0py_get_vertical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTileRules[] = {

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
       1,    2,   54,    3, 0x0a /* Public */,
       1,    1,   59,    3, 0x0a /* Public */,
       1,    0,   62,    3, 0x2a /* Public | MethodCloned */,
       8,    1,   63,    3, 0x0a /* Public */,
      10,    2,   66,    3, 0x0a /* Public */,
      13,    1,   71,    3, 0x0a /* Public */,
      14,    2,   74,    3, 0x0a /* Public */,
      16,    1,   79,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    0x80000000 | 2, 0x80000000 | 4,    7,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   11,   12,
    0x80000000 | 4, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   11,   15,
    0x80000000 | 4, 0x80000000 | 2,   11,

       0        // eod
};

void PythonQtWrapper_QTileRules::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTileRules *_t = static_cast<PythonQtWrapper_QTileRules *>(_o);
        switch (_id) {
        case 0: { QTileRules* _r = _t->new_QTileRules((*reinterpret_cast< Qt::TileRule(*)>(_a[1])),(*reinterpret_cast< Qt::TileRule(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTileRules**>(_a[0]) = _r; }  break;
        case 1: { QTileRules* _r = _t->new_QTileRules((*reinterpret_cast< Qt::TileRule(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTileRules**>(_a[0]) = _r; }  break;
        case 2: { QTileRules* _r = _t->new_QTileRules();
            if (_a[0]) *reinterpret_cast< QTileRules**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QTileRules((*reinterpret_cast< QTileRules*(*)>(_a[1]))); break;
        case 4: _t->py_set_horizontal((*reinterpret_cast< QTileRules*(*)>(_a[1])),(*reinterpret_cast< Qt::TileRule(*)>(_a[2]))); break;
        case 5: { Qt::TileRule _r = _t->py_get_horizontal((*reinterpret_cast< QTileRules*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TileRule*>(_a[0]) = _r; }  break;
        case 6: _t->py_set_vertical((*reinterpret_cast< QTileRules*(*)>(_a[1])),(*reinterpret_cast< Qt::TileRule(*)>(_a[2]))); break;
        case 7: { Qt::TileRule _r = _t->py_get_vertical((*reinterpret_cast< QTileRules*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::TileRule*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QTileRules::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTileRules.data,
      qt_meta_data_PythonQtWrapper_QTileRules,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTileRules::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTileRules::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTileRules.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTileRules*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTileRules::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QTimeEdit_t {
    QByteArrayData data[9];
    char stringdata[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QTimeEdit_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QTimeEdit_t qt_meta_stringdata_PythonQtWrapper_QTimeEdit = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QTimeEdit"
QT_MOC_LITERAL(1, 26, 13), // "new_QTimeEdit"
QT_MOC_LITERAL(2, 40, 10), // "QTimeEdit*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 8), // "QWidget*"
QT_MOC_LITERAL(5, 61, 6), // "parent"
QT_MOC_LITERAL(6, 68, 4), // "time"
QT_MOC_LITERAL(7, 73, 16), // "delete_QTimeEdit"
QT_MOC_LITERAL(8, 90, 3) // "obj"

    },
    "PythonQtWrapper_QTimeEdit\0new_QTimeEdit\0"
    "QTimeEdit*\0\0QWidget*\0parent\0time\0"
    "delete_QTimeEdit\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QTimeEdit[] = {

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
       1,    1,   39,    3, 0x0a /* Public */,
       1,    0,   42,    3, 0x2a /* Public | MethodCloned */,
       1,    2,   43,    3, 0x0a /* Public */,
       1,    1,   48,    3, 0x2a /* Public | MethodCloned */,
       7,    1,   51,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QTime, 0x80000000 | 4,    6,    5,
    0x80000000 | 2, QMetaType::QTime,    6,
    QMetaType::Void, 0x80000000 | 2,    8,

       0        // eod
};

void PythonQtWrapper_QTimeEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QTimeEdit *_t = static_cast<PythonQtWrapper_QTimeEdit *>(_o);
        switch (_id) {
        case 0: { QTimeEdit* _r = _t->new_QTimeEdit((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimeEdit**>(_a[0]) = _r; }  break;
        case 1: { QTimeEdit* _r = _t->new_QTimeEdit();
            if (_a[0]) *reinterpret_cast< QTimeEdit**>(_a[0]) = _r; }  break;
        case 2: { QTimeEdit* _r = _t->new_QTimeEdit((*reinterpret_cast< const QTime(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QTimeEdit**>(_a[0]) = _r; }  break;
        case 3: { QTimeEdit* _r = _t->new_QTimeEdit((*reinterpret_cast< const QTime(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTimeEdit**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QTimeEdit((*reinterpret_cast< QTimeEdit*(*)>(_a[1]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTimeEdit* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QTimeEdit::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QTimeEdit.data,
      qt_meta_data_PythonQtWrapper_QTimeEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QTimeEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QTimeEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QTimeEdit.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QTimeEdit*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QTimeEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
