/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_sql0.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generated_cpp_54/com_trolltech_qt_sql/com_trolltech_qt_sql0.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_sql0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PythonQtWrapper_QSql_t {
    QByteArrayData data[20];
    char stringdata[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSql_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSql_t qt_meta_stringdata_PythonQtWrapper_QSql = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PythonQtWrapper_QSql"
QT_MOC_LITERAL(1, 21, 8), // "Location"
QT_MOC_LITERAL(2, 30, 14), // "BeforeFirstRow"
QT_MOC_LITERAL(3, 45, 12), // "AfterLastRow"
QT_MOC_LITERAL(4, 58, 24), // "NumericalPrecisionPolicy"
QT_MOC_LITERAL(5, 83, 17), // "LowPrecisionInt32"
QT_MOC_LITERAL(6, 101, 17), // "LowPrecisionInt64"
QT_MOC_LITERAL(7, 119, 18), // "LowPrecisionDouble"
QT_MOC_LITERAL(8, 138, 13), // "HighPrecision"
QT_MOC_LITERAL(9, 152, 13), // "ParamTypeFlag"
QT_MOC_LITERAL(10, 166, 2), // "In"
QT_MOC_LITERAL(11, 169, 3), // "Out"
QT_MOC_LITERAL(12, 173, 5), // "InOut"
QT_MOC_LITERAL(13, 179, 6), // "Binary"
QT_MOC_LITERAL(14, 186, 9), // "ParamType"
QT_MOC_LITERAL(15, 196, 9), // "TableType"
QT_MOC_LITERAL(16, 206, 6), // "Tables"
QT_MOC_LITERAL(17, 213, 12), // "SystemTables"
QT_MOC_LITERAL(18, 226, 5), // "Views"
QT_MOC_LITERAL(19, 232, 9) // "AllTables"

    },
    "PythonQtWrapper_QSql\0Location\0"
    "BeforeFirstRow\0AfterLastRow\0"
    "NumericalPrecisionPolicy\0LowPrecisionInt32\0"
    "LowPrecisionInt64\0LowPrecisionDouble\0"
    "HighPrecision\0ParamTypeFlag\0In\0Out\0"
    "InOut\0Binary\0ParamType\0TableType\0"
    "Tables\0SystemTables\0Views\0AllTables"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSql[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       5,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   34,
       4, 0x0,    4,   38,
       9, 0x0,    4,   46,
      14, 0x1,    4,   54,
      15, 0x0,    4,   62,

 // enum data: key, value
       2, uint(PythonQtWrapper_QSql::BeforeFirstRow),
       3, uint(PythonQtWrapper_QSql::AfterLastRow),
       5, uint(PythonQtWrapper_QSql::LowPrecisionInt32),
       6, uint(PythonQtWrapper_QSql::LowPrecisionInt64),
       7, uint(PythonQtWrapper_QSql::LowPrecisionDouble),
       8, uint(PythonQtWrapper_QSql::HighPrecision),
      10, uint(PythonQtWrapper_QSql::In),
      11, uint(PythonQtWrapper_QSql::Out),
      12, uint(PythonQtWrapper_QSql::InOut),
      13, uint(PythonQtWrapper_QSql::Binary),
      10, uint(PythonQtWrapper_QSql::In),
      11, uint(PythonQtWrapper_QSql::Out),
      12, uint(PythonQtWrapper_QSql::InOut),
      13, uint(PythonQtWrapper_QSql::Binary),
      16, uint(PythonQtWrapper_QSql::Tables),
      17, uint(PythonQtWrapper_QSql::SystemTables),
      18, uint(PythonQtWrapper_QSql::Views),
      19, uint(PythonQtWrapper_QSql::AllTables),

       0        // eod
};

void PythonQtWrapper_QSql::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PythonQtWrapper_QSql::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSql.data,
      qt_meta_data_PythonQtWrapper_QSql,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSql::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSql::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSql.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSql*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSql::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSqlDatabase_t {
    QByteArrayData data[67];
    char stringdata[957];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlDatabase_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlDatabase_t qt_meta_stringdata_PythonQtWrapper_QSqlDatabase = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QSqlDatabase"
QT_MOC_LITERAL(1, 29, 16), // "new_QSqlDatabase"
QT_MOC_LITERAL(2, 46, 13), // "QSqlDatabase*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 11), // "QSqlDriver*"
QT_MOC_LITERAL(5, 73, 6), // "driver"
QT_MOC_LITERAL(6, 80, 12), // "QSqlDatabase"
QT_MOC_LITERAL(7, 93, 5), // "other"
QT_MOC_LITERAL(8, 99, 4), // "type"
QT_MOC_LITERAL(9, 104, 19), // "delete_QSqlDatabase"
QT_MOC_LITERAL(10, 124, 3), // "obj"
QT_MOC_LITERAL(11, 128, 31), // "static_QSqlDatabase_addDatabase"
QT_MOC_LITERAL(12, 160, 14), // "connectionName"
QT_MOC_LITERAL(13, 175, 33), // "static_QSqlDatabase_cloneData..."
QT_MOC_LITERAL(14, 209, 5), // "close"
QT_MOC_LITERAL(15, 215, 16), // "theWrappedObject"
QT_MOC_LITERAL(16, 232, 6), // "commit"
QT_MOC_LITERAL(17, 239, 14), // "connectOptions"
QT_MOC_LITERAL(18, 254, 35), // "static_QSqlDatabase_connectio..."
QT_MOC_LITERAL(19, 290, 28), // "static_QSqlDatabase_contains"
QT_MOC_LITERAL(20, 319, 28), // "static_QSqlDatabase_database"
QT_MOC_LITERAL(21, 348, 4), // "open"
QT_MOC_LITERAL(22, 353, 12), // "databaseName"
QT_MOC_LITERAL(23, 366, 10), // "driverName"
QT_MOC_LITERAL(24, 377, 27), // "static_QSqlDatabase_drivers"
QT_MOC_LITERAL(25, 405, 4), // "exec"
QT_MOC_LITERAL(26, 410, 9), // "QSqlQuery"
QT_MOC_LITERAL(27, 420, 5), // "query"
QT_MOC_LITERAL(28, 426, 8), // "hostName"
QT_MOC_LITERAL(29, 435, 37), // "static_QSqlDatabase_isDriverA..."
QT_MOC_LITERAL(30, 473, 4), // "name"
QT_MOC_LITERAL(31, 478, 6), // "isOpen"
QT_MOC_LITERAL(32, 485, 11), // "isOpenError"
QT_MOC_LITERAL(33, 497, 7), // "isValid"
QT_MOC_LITERAL(34, 505, 9), // "lastError"
QT_MOC_LITERAL(35, 515, 9), // "QSqlError"
QT_MOC_LITERAL(36, 525, 24), // "numericalPrecisionPolicy"
QT_MOC_LITERAL(37, 550, 30), // "QSql::NumericalPrecisionPolicy"
QT_MOC_LITERAL(38, 581, 4), // "user"
QT_MOC_LITERAL(39, 586, 8), // "password"
QT_MOC_LITERAL(40, 595, 4), // "port"
QT_MOC_LITERAL(41, 600, 12), // "primaryIndex"
QT_MOC_LITERAL(42, 613, 9), // "QSqlIndex"
QT_MOC_LITERAL(43, 623, 9), // "tablename"
QT_MOC_LITERAL(44, 633, 6), // "record"
QT_MOC_LITERAL(45, 640, 10), // "QSqlRecord"
QT_MOC_LITERAL(46, 651, 37), // "static_QSqlDatabase_registerS..."
QT_MOC_LITERAL(47, 689, 22), // "QSqlDriverCreatorBase*"
QT_MOC_LITERAL(48, 712, 7), // "creator"
QT_MOC_LITERAL(49, 720, 34), // "static_QSqlDatabase_removeDat..."
QT_MOC_LITERAL(50, 755, 8), // "rollback"
QT_MOC_LITERAL(51, 764, 17), // "setConnectOptions"
QT_MOC_LITERAL(52, 782, 7), // "options"
QT_MOC_LITERAL(53, 790, 15), // "setDatabaseName"
QT_MOC_LITERAL(54, 806, 11), // "setHostName"
QT_MOC_LITERAL(55, 818, 4), // "host"
QT_MOC_LITERAL(56, 823, 27), // "setNumericalPrecisionPolicy"
QT_MOC_LITERAL(57, 851, 15), // "precisionPolicy"
QT_MOC_LITERAL(58, 867, 11), // "setPassword"
QT_MOC_LITERAL(59, 879, 7), // "setPort"
QT_MOC_LITERAL(60, 887, 1), // "p"
QT_MOC_LITERAL(61, 889, 11), // "setUserName"
QT_MOC_LITERAL(62, 901, 6), // "tables"
QT_MOC_LITERAL(63, 908, 15), // "QSql::TableType"
QT_MOC_LITERAL(64, 924, 11), // "transaction"
QT_MOC_LITERAL(65, 936, 8), // "userName"
QT_MOC_LITERAL(66, 945, 11) // "py_toString"

    },
    "PythonQtWrapper_QSqlDatabase\0"
    "new_QSqlDatabase\0QSqlDatabase*\0\0"
    "QSqlDriver*\0driver\0QSqlDatabase\0other\0"
    "type\0delete_QSqlDatabase\0obj\0"
    "static_QSqlDatabase_addDatabase\0"
    "connectionName\0static_QSqlDatabase_cloneDatabase\0"
    "close\0theWrappedObject\0commit\0"
    "connectOptions\0static_QSqlDatabase_connectionNames\0"
    "static_QSqlDatabase_contains\0"
    "static_QSqlDatabase_database\0open\0"
    "databaseName\0driverName\0"
    "static_QSqlDatabase_drivers\0exec\0"
    "QSqlQuery\0query\0hostName\0"
    "static_QSqlDatabase_isDriverAvailable\0"
    "name\0isOpen\0isOpenError\0isValid\0"
    "lastError\0QSqlError\0numericalPrecisionPolicy\0"
    "QSql::NumericalPrecisionPolicy\0user\0"
    "password\0port\0primaryIndex\0QSqlIndex\0"
    "tablename\0record\0QSqlRecord\0"
    "static_QSqlDatabase_registerSqlDriver\0"
    "QSqlDriverCreatorBase*\0creator\0"
    "static_QSqlDatabase_removeDatabase\0"
    "rollback\0setConnectOptions\0options\0"
    "setDatabaseName\0setHostName\0host\0"
    "setNumericalPrecisionPolicy\0precisionPolicy\0"
    "setPassword\0setPort\0p\0setUserName\0"
    "tables\0QSql::TableType\0transaction\0"
    "userName\0py_toString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlDatabase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  289,    3, 0x0a /* Public */,
       1,    1,  290,    3, 0x0a /* Public */,
       1,    1,  293,    3, 0x0a /* Public */,
       1,    1,  296,    3, 0x0a /* Public */,
       9,    1,  299,    3, 0x0a /* Public */,
      11,    2,  302,    3, 0x0a /* Public */,
      11,    1,  307,    3, 0x2a /* Public | MethodCloned */,
      11,    2,  310,    3, 0x0a /* Public */,
      11,    1,  315,    3, 0x2a /* Public | MethodCloned */,
      13,    2,  318,    3, 0x0a /* Public */,
      14,    1,  323,    3, 0x0a /* Public */,
      16,    1,  326,    3, 0x0a /* Public */,
      17,    1,  329,    3, 0x0a /* Public */,
      12,    1,  332,    3, 0x0a /* Public */,
      18,    0,  335,    3, 0x0a /* Public */,
      19,    1,  336,    3, 0x0a /* Public */,
      19,    0,  339,    3, 0x2a /* Public | MethodCloned */,
      20,    2,  340,    3, 0x0a /* Public */,
      20,    1,  345,    3, 0x2a /* Public | MethodCloned */,
      20,    0,  348,    3, 0x2a /* Public | MethodCloned */,
      22,    1,  349,    3, 0x0a /* Public */,
       5,    1,  352,    3, 0x0a /* Public */,
      23,    1,  355,    3, 0x0a /* Public */,
      24,    0,  358,    3, 0x0a /* Public */,
      25,    2,  359,    3, 0x0a /* Public */,
      25,    1,  364,    3, 0x2a /* Public | MethodCloned */,
      28,    1,  367,    3, 0x0a /* Public */,
      29,    1,  370,    3, 0x0a /* Public */,
      31,    1,  373,    3, 0x0a /* Public */,
      32,    1,  376,    3, 0x0a /* Public */,
      33,    1,  379,    3, 0x0a /* Public */,
      34,    1,  382,    3, 0x0a /* Public */,
      36,    1,  385,    3, 0x0a /* Public */,
      21,    1,  388,    3, 0x0a /* Public */,
      21,    3,  391,    3, 0x0a /* Public */,
      39,    1,  398,    3, 0x0a /* Public */,
      40,    1,  401,    3, 0x0a /* Public */,
      41,    2,  404,    3, 0x0a /* Public */,
      44,    2,  409,    3, 0x0a /* Public */,
      46,    2,  414,    3, 0x0a /* Public */,
      49,    1,  419,    3, 0x0a /* Public */,
      50,    1,  422,    3, 0x0a /* Public */,
      51,    2,  425,    3, 0x0a /* Public */,
      51,    1,  430,    3, 0x2a /* Public | MethodCloned */,
      53,    2,  433,    3, 0x0a /* Public */,
      54,    2,  438,    3, 0x0a /* Public */,
      56,    2,  443,    3, 0x0a /* Public */,
      58,    2,  448,    3, 0x0a /* Public */,
      59,    2,  453,    3, 0x0a /* Public */,
      61,    2,  458,    3, 0x0a /* Public */,
      62,    2,  463,    3, 0x0a /* Public */,
      62,    1,  468,    3, 0x2a /* Public | MethodCloned */,
      64,    1,  471,    3, 0x0a /* Public */,
      65,    1,  474,    3, 0x0a /* Public */,
      66,    1,  477,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    0x80000000 | 6, 0x80000000 | 4, QMetaType::QString,    5,   12,
    0x80000000 | 6, 0x80000000 | 4,    5,
    0x80000000 | 6, QMetaType::QString, QMetaType::QString,    8,   12,
    0x80000000 | 6, QMetaType::QString,    8,
    0x80000000 | 6, 0x80000000 | 6, QMetaType::QString,    7,   12,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::QString, 0x80000000 | 2,   15,
    QMetaType::QString, 0x80000000 | 2,   15,
    QMetaType::QStringList,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Bool,
    0x80000000 | 6, QMetaType::QString, QMetaType::Bool,   12,   21,
    0x80000000 | 6, QMetaType::QString,   12,
    0x80000000 | 6,
    QMetaType::QString, 0x80000000 | 2,   15,
    0x80000000 | 4, 0x80000000 | 2,   15,
    QMetaType::QString, 0x80000000 | 2,   15,
    QMetaType::QStringList,
    0x80000000 | 26, 0x80000000 | 2, QMetaType::QString,   15,   27,
    0x80000000 | 26, 0x80000000 | 2,   15,
    QMetaType::QString, 0x80000000 | 2,   15,
    QMetaType::Bool, QMetaType::QString,   30,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    0x80000000 | 35, 0x80000000 | 2,   15,
    0x80000000 | 37, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,   15,   38,   39,
    QMetaType::QString, 0x80000000 | 2,   15,
    QMetaType::Int, 0x80000000 | 2,   15,
    0x80000000 | 42, 0x80000000 | 2, QMetaType::QString,   15,   43,
    0x80000000 | 45, 0x80000000 | 2, QMetaType::QString,   15,   43,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   30,   48,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   15,   52,
    QMetaType::Void, 0x80000000 | 2,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   15,   30,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   15,   55,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 37,   15,   57,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   15,   39,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   15,   60,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   15,   30,
    QMetaType::QStringList, 0x80000000 | 2, 0x80000000 | 63,   15,    8,
    QMetaType::QStringList, 0x80000000 | 2,   15,
    QMetaType::Bool, 0x80000000 | 2,   15,
    QMetaType::QString, 0x80000000 | 2,   15,
    QMetaType::QString, 0x80000000 | 2,    3,

       0        // eod
};

void PythonQtWrapper_QSqlDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlDatabase *_t = static_cast<PythonQtWrapper_QSqlDatabase *>(_o);
        switch (_id) {
        case 0: { QSqlDatabase* _r = _t->new_QSqlDatabase();
            if (_a[0]) *reinterpret_cast< QSqlDatabase**>(_a[0]) = _r; }  break;
        case 1: { QSqlDatabase* _r = _t->new_QSqlDatabase((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase**>(_a[0]) = _r; }  break;
        case 2: { QSqlDatabase* _r = _t->new_QSqlDatabase((*reinterpret_cast< const QSqlDatabase(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase**>(_a[0]) = _r; }  break;
        case 3: { QSqlDatabase* _r = _t->new_QSqlDatabase((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSqlDatabase((*reinterpret_cast< QSqlDatabase*(*)>(_a[1]))); break;
        case 5: { QSqlDatabase _r = _t->static_QSqlDatabase_addDatabase((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 6: { QSqlDatabase _r = _t->static_QSqlDatabase_addDatabase((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 7: { QSqlDatabase _r = _t->static_QSqlDatabase_addDatabase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 8: { QSqlDatabase _r = _t->static_QSqlDatabase_addDatabase((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 9: { QSqlDatabase _r = _t->static_QSqlDatabase_cloneDatabase((*reinterpret_cast< const QSqlDatabase(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 10: _t->close((*reinterpret_cast< QSqlDatabase*(*)>(_a[1]))); break;
        case 11: { bool _r = _t->commit((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->connectOptions((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->connectionName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { QStringList _r = _t->static_QSqlDatabase_connectionNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->static_QSqlDatabase_contains((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->static_QSqlDatabase_contains();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QSqlDatabase _r = _t->static_QSqlDatabase_database((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 18: { QSqlDatabase _r = _t->static_QSqlDatabase_database((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 19: { QSqlDatabase _r = _t->static_QSqlDatabase_database();
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->databaseName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: { QSqlDriver* _r = _t->driver((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDriver**>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->driverName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QStringList _r = _t->static_QSqlDatabase_drivers();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 24: { QSqlQuery _r = _t->exec((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 25: { QSqlQuery _r = _t->exec((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 26: { QString _r = _t->hostName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->static_QSqlDatabase_isDriverAvailable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isOpen((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isOpenError((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isValid((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 32: { QSql::NumericalPrecisionPolicy _r = _t->numericalPrecisionPolicy((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSql::NumericalPrecisionPolicy*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->open((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->open((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->password((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { int _r = _t->port((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 37: { QSqlIndex _r = _t->primaryIndex((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlIndex*>(_a[0]) = _r; }  break;
        case 38: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 39: _t->static_QSqlDatabase_registerSqlDriver((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSqlDriverCreatorBase*(*)>(_a[2]))); break;
        case 40: _t->static_QSqlDatabase_removeDatabase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: { bool _r = _t->rollback((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: _t->setConnectOptions((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 43: _t->setConnectOptions((*reinterpret_cast< QSqlDatabase*(*)>(_a[1]))); break;
        case 44: _t->setDatabaseName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 45: _t->setHostName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 46: _t->setNumericalPrecisionPolicy((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< QSql::NumericalPrecisionPolicy(*)>(_a[2]))); break;
        case 47: _t->setPassword((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 48: _t->setPort((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 49: _t->setUserName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 50: { QStringList _r = _t->tables((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])),(*reinterpret_cast< QSql::TableType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 51: { QStringList _r = _t->tables((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->transaction((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { QString _r = _t->userName((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 54: { QString _r = _t->py_toString((*reinterpret_cast< QSqlDatabase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlDatabase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlDatabase.data,
      qt_meta_data_PythonQtWrapper_QSqlDatabase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlDatabase.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlDatabase*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSqlDriver_t {
    QByteArrayData data[94];
    char stringdata[1243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlDriver_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlDriver_t qt_meta_stringdata_PythonQtWrapper_QSqlDriver = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QSqlDriver"
QT_MOC_LITERAL(1, 27, 14), // "new_QSqlDriver"
QT_MOC_LITERAL(2, 42, 11), // "QSqlDriver*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 6), // "parent"
QT_MOC_LITERAL(5, 62, 17), // "delete_QSqlDriver"
QT_MOC_LITERAL(6, 80, 3), // "obj"
QT_MOC_LITERAL(7, 84, 16), // "beginTransaction"
QT_MOC_LITERAL(8, 101, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 118, 11), // "cancelQuery"
QT_MOC_LITERAL(10, 130, 5), // "close"
QT_MOC_LITERAL(11, 136, 17), // "commitTransaction"
QT_MOC_LITERAL(12, 154, 12), // "createResult"
QT_MOC_LITERAL(13, 167, 11), // "QSqlResult*"
QT_MOC_LITERAL(14, 179, 16), // "escapeIdentifier"
QT_MOC_LITERAL(15, 196, 10), // "identifier"
QT_MOC_LITERAL(16, 207, 26), // "QSqlDriver::IdentifierType"
QT_MOC_LITERAL(17, 234, 4), // "type"
QT_MOC_LITERAL(18, 239, 11), // "formatValue"
QT_MOC_LITERAL(19, 251, 9), // "QSqlField"
QT_MOC_LITERAL(20, 261, 5), // "field"
QT_MOC_LITERAL(21, 267, 11), // "trimStrings"
QT_MOC_LITERAL(22, 279, 6), // "handle"
QT_MOC_LITERAL(23, 286, 10), // "hasFeature"
QT_MOC_LITERAL(24, 297, 25), // "QSqlDriver::DriverFeature"
QT_MOC_LITERAL(25, 323, 1), // "f"
QT_MOC_LITERAL(26, 325, 19), // "isIdentifierEscaped"
QT_MOC_LITERAL(27, 345, 6), // "isOpen"
QT_MOC_LITERAL(28, 352, 11), // "isOpenError"
QT_MOC_LITERAL(29, 364, 9), // "lastError"
QT_MOC_LITERAL(30, 374, 9), // "QSqlError"
QT_MOC_LITERAL(31, 384, 24), // "numericalPrecisionPolicy"
QT_MOC_LITERAL(32, 409, 30), // "QSql::NumericalPrecisionPolicy"
QT_MOC_LITERAL(33, 440, 4), // "open"
QT_MOC_LITERAL(34, 445, 2), // "db"
QT_MOC_LITERAL(35, 448, 4), // "user"
QT_MOC_LITERAL(36, 453, 8), // "password"
QT_MOC_LITERAL(37, 462, 4), // "host"
QT_MOC_LITERAL(38, 467, 4), // "port"
QT_MOC_LITERAL(39, 472, 8), // "connOpts"
QT_MOC_LITERAL(40, 481, 12), // "primaryIndex"
QT_MOC_LITERAL(41, 494, 9), // "QSqlIndex"
QT_MOC_LITERAL(42, 504, 9), // "tableName"
QT_MOC_LITERAL(43, 514, 6), // "record"
QT_MOC_LITERAL(44, 521, 10), // "QSqlRecord"
QT_MOC_LITERAL(45, 532, 19), // "rollbackTransaction"
QT_MOC_LITERAL(46, 552, 12), // "setLastError"
QT_MOC_LITERAL(47, 565, 1), // "e"
QT_MOC_LITERAL(48, 567, 27), // "setNumericalPrecisionPolicy"
QT_MOC_LITERAL(49, 595, 15), // "precisionPolicy"
QT_MOC_LITERAL(50, 611, 7), // "setOpen"
QT_MOC_LITERAL(51, 619, 1), // "o"
QT_MOC_LITERAL(52, 621, 12), // "setOpenError"
QT_MOC_LITERAL(53, 634, 12), // "sqlStatement"
QT_MOC_LITERAL(54, 647, 25), // "QSqlDriver::StatementType"
QT_MOC_LITERAL(55, 673, 3), // "rec"
QT_MOC_LITERAL(56, 677, 17), // "preparedStatement"
QT_MOC_LITERAL(57, 695, 15), // "stripDelimiters"
QT_MOC_LITERAL(58, 711, 23), // "subscribeToNotification"
QT_MOC_LITERAL(59, 735, 4), // "name"
QT_MOC_LITERAL(60, 740, 25), // "subscribedToNotifications"
QT_MOC_LITERAL(61, 766, 6), // "tables"
QT_MOC_LITERAL(62, 773, 15), // "QSql::TableType"
QT_MOC_LITERAL(63, 789, 9), // "tableType"
QT_MOC_LITERAL(64, 799, 27), // "unsubscribeFromNotification"
QT_MOC_LITERAL(65, 827, 13), // "DriverFeature"
QT_MOC_LITERAL(66, 841, 12), // "Transactions"
QT_MOC_LITERAL(67, 854, 9), // "QuerySize"
QT_MOC_LITERAL(68, 864, 4), // "BLOB"
QT_MOC_LITERAL(69, 869, 7), // "Unicode"
QT_MOC_LITERAL(70, 877, 15), // "PreparedQueries"
QT_MOC_LITERAL(71, 893, 17), // "NamedPlaceholders"
QT_MOC_LITERAL(72, 911, 22), // "PositionalPlaceholders"
QT_MOC_LITERAL(73, 934, 12), // "LastInsertId"
QT_MOC_LITERAL(74, 947, 15), // "BatchOperations"
QT_MOC_LITERAL(75, 963, 13), // "SimpleLocking"
QT_MOC_LITERAL(76, 977, 19), // "LowPrecisionNumbers"
QT_MOC_LITERAL(77, 997, 18), // "EventNotifications"
QT_MOC_LITERAL(78, 1016, 11), // "FinishQuery"
QT_MOC_LITERAL(79, 1028, 18), // "MultipleResultSets"
QT_MOC_LITERAL(80, 1047, 11), // "CancelQuery"
QT_MOC_LITERAL(81, 1059, 14), // "IdentifierType"
QT_MOC_LITERAL(82, 1074, 9), // "FieldName"
QT_MOC_LITERAL(83, 1084, 9), // "TableName"
QT_MOC_LITERAL(84, 1094, 18), // "NotificationSource"
QT_MOC_LITERAL(85, 1113, 13), // "UnknownSource"
QT_MOC_LITERAL(86, 1127, 10), // "SelfSource"
QT_MOC_LITERAL(87, 1138, 11), // "OtherSource"
QT_MOC_LITERAL(88, 1150, 13), // "StatementType"
QT_MOC_LITERAL(89, 1164, 14), // "WhereStatement"
QT_MOC_LITERAL(90, 1179, 15), // "SelectStatement"
QT_MOC_LITERAL(91, 1195, 15), // "UpdateStatement"
QT_MOC_LITERAL(92, 1211, 15), // "InsertStatement"
QT_MOC_LITERAL(93, 1227, 15) // "DeleteStatement"

    },
    "PythonQtWrapper_QSqlDriver\0new_QSqlDriver\0"
    "QSqlDriver*\0\0parent\0delete_QSqlDriver\0"
    "obj\0beginTransaction\0theWrappedObject\0"
    "cancelQuery\0close\0commitTransaction\0"
    "createResult\0QSqlResult*\0escapeIdentifier\0"
    "identifier\0QSqlDriver::IdentifierType\0"
    "type\0formatValue\0QSqlField\0field\0"
    "trimStrings\0handle\0hasFeature\0"
    "QSqlDriver::DriverFeature\0f\0"
    "isIdentifierEscaped\0isOpen\0isOpenError\0"
    "lastError\0QSqlError\0numericalPrecisionPolicy\0"
    "QSql::NumericalPrecisionPolicy\0open\0"
    "db\0user\0password\0host\0port\0connOpts\0"
    "primaryIndex\0QSqlIndex\0tableName\0"
    "record\0QSqlRecord\0rollbackTransaction\0"
    "setLastError\0e\0setNumericalPrecisionPolicy\0"
    "precisionPolicy\0setOpen\0o\0setOpenError\0"
    "sqlStatement\0QSqlDriver::StatementType\0"
    "rec\0preparedStatement\0stripDelimiters\0"
    "subscribeToNotification\0name\0"
    "subscribedToNotifications\0tables\0"
    "QSql::TableType\0tableType\0"
    "unsubscribeFromNotification\0DriverFeature\0"
    "Transactions\0QuerySize\0BLOB\0Unicode\0"
    "PreparedQueries\0NamedPlaceholders\0"
    "PositionalPlaceholders\0LastInsertId\0"
    "BatchOperations\0SimpleLocking\0"
    "LowPrecisionNumbers\0EventNotifications\0"
    "FinishQuery\0MultipleResultSets\0"
    "CancelQuery\0IdentifierType\0FieldName\0"
    "TableName\0NotificationSource\0UnknownSource\0"
    "SelfSource\0OtherSource\0StatementType\0"
    "WhereStatement\0SelectStatement\0"
    "UpdateStatement\0InsertStatement\0"
    "DeleteStatement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlDriver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       4,  396, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  199,    3, 0x0a /* Public */,
       1,    0,  202,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  203,    3, 0x0a /* Public */,
       7,    1,  206,    3, 0x0a /* Public */,
       9,    1,  209,    3, 0x0a /* Public */,
      10,    1,  212,    3, 0x0a /* Public */,
      11,    1,  215,    3, 0x0a /* Public */,
      12,    1,  218,    3, 0x0a /* Public */,
      14,    3,  221,    3, 0x0a /* Public */,
      18,    3,  228,    3, 0x0a /* Public */,
      18,    2,  235,    3, 0x2a /* Public | MethodCloned */,
      22,    1,  240,    3, 0x0a /* Public */,
      23,    2,  243,    3, 0x0a /* Public */,
      26,    3,  248,    3, 0x0a /* Public */,
      27,    1,  255,    3, 0x0a /* Public */,
      28,    1,  258,    3, 0x0a /* Public */,
      29,    1,  261,    3, 0x0a /* Public */,
      31,    1,  264,    3, 0x0a /* Public */,
      33,    7,  267,    3, 0x0a /* Public */,
      33,    6,  282,    3, 0x2a /* Public | MethodCloned */,
      33,    5,  295,    3, 0x2a /* Public | MethodCloned */,
      33,    4,  306,    3, 0x2a /* Public | MethodCloned */,
      33,    3,  315,    3, 0x2a /* Public | MethodCloned */,
      33,    2,  322,    3, 0x2a /* Public | MethodCloned */,
      40,    2,  327,    3, 0x0a /* Public */,
      43,    2,  332,    3, 0x0a /* Public */,
      45,    1,  337,    3, 0x0a /* Public */,
      46,    2,  340,    3, 0x0a /* Public */,
      48,    2,  345,    3, 0x0a /* Public */,
      50,    2,  350,    3, 0x0a /* Public */,
      52,    2,  355,    3, 0x0a /* Public */,
      53,    5,  360,    3, 0x0a /* Public */,
      57,    3,  371,    3, 0x0a /* Public */,
      58,    2,  378,    3, 0x0a /* Public */,
      60,    1,  383,    3, 0x0a /* Public */,
      61,    2,  386,    3, 0x0a /* Public */,
      64,    2,  391,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    0x80000000 | 13, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 16,    8,   15,   17,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 19, QMetaType::Bool,    8,   20,   21,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 19,    8,   20,
    QMetaType::QVariant, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 24,    8,   25,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 16,    8,   15,   17,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    0x80000000 | 30, 0x80000000 | 2,    8,
    0x80000000 | 32, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,    8,   34,   35,   36,   37,   38,   39,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    8,   34,   35,   36,   37,   38,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,   34,   35,   36,   37,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,   34,   35,   36,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString, QMetaType::QString,    8,   34,   35,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   34,
    0x80000000 | 41, 0x80000000 | 2, QMetaType::QString,    8,   42,
    0x80000000 | 44, 0x80000000 | 2, QMetaType::QString,    8,   42,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 30,    8,   47,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 32,    8,   49,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    8,   51,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    8,   47,
    QMetaType::QString, 0x80000000 | 2, 0x80000000 | 54, QMetaType::QString, 0x80000000 | 44, QMetaType::Bool,    8,   17,   42,   55,   56,
    QMetaType::QString, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 16,    8,   15,   17,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   59,
    QMetaType::QStringList, 0x80000000 | 2,    8,
    QMetaType::QStringList, 0x80000000 | 2, 0x80000000 | 62,    8,   63,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   59,

 // enums: name, flags, count, data
      65, 0x0,   15,  412,
      81, 0x0,    2,  442,
      84, 0x0,    3,  446,
      88, 0x0,    5,  452,

 // enum data: key, value
      66, uint(PythonQtWrapper_QSqlDriver::Transactions),
      67, uint(PythonQtWrapper_QSqlDriver::QuerySize),
      68, uint(PythonQtWrapper_QSqlDriver::BLOB),
      69, uint(PythonQtWrapper_QSqlDriver::Unicode),
      70, uint(PythonQtWrapper_QSqlDriver::PreparedQueries),
      71, uint(PythonQtWrapper_QSqlDriver::NamedPlaceholders),
      72, uint(PythonQtWrapper_QSqlDriver::PositionalPlaceholders),
      73, uint(PythonQtWrapper_QSqlDriver::LastInsertId),
      74, uint(PythonQtWrapper_QSqlDriver::BatchOperations),
      75, uint(PythonQtWrapper_QSqlDriver::SimpleLocking),
      76, uint(PythonQtWrapper_QSqlDriver::LowPrecisionNumbers),
      77, uint(PythonQtWrapper_QSqlDriver::EventNotifications),
      78, uint(PythonQtWrapper_QSqlDriver::FinishQuery),
      79, uint(PythonQtWrapper_QSqlDriver::MultipleResultSets),
      80, uint(PythonQtWrapper_QSqlDriver::CancelQuery),
      82, uint(PythonQtWrapper_QSqlDriver::FieldName),
      83, uint(PythonQtWrapper_QSqlDriver::TableName),
      85, uint(PythonQtWrapper_QSqlDriver::UnknownSource),
      86, uint(PythonQtWrapper_QSqlDriver::SelfSource),
      87, uint(PythonQtWrapper_QSqlDriver::OtherSource),
      89, uint(PythonQtWrapper_QSqlDriver::WhereStatement),
      90, uint(PythonQtWrapper_QSqlDriver::SelectStatement),
      91, uint(PythonQtWrapper_QSqlDriver::UpdateStatement),
      92, uint(PythonQtWrapper_QSqlDriver::InsertStatement),
      93, uint(PythonQtWrapper_QSqlDriver::DeleteStatement),

       0        // eod
};

void PythonQtWrapper_QSqlDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlDriver *_t = static_cast<PythonQtWrapper_QSqlDriver *>(_o);
        switch (_id) {
        case 0: { QSqlDriver* _r = _t->new_QSqlDriver((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDriver**>(_a[0]) = _r; }  break;
        case 1: { QSqlDriver* _r = _t->new_QSqlDriver();
            if (_a[0]) *reinterpret_cast< QSqlDriver**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSqlDriver((*reinterpret_cast< QSqlDriver*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->beginTransaction((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->cancelQuery((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->close((*reinterpret_cast< QSqlDriver*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->commitTransaction((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QSqlResult* _r = _t->createResult((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlResult**>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->escapeIdentifier((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlDriver::IdentifierType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->formatValue((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->formatValue((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QVariant _r = _t->handle((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->hasFeature((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< QSqlDriver::DriverFeature(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isIdentifierEscaped((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlDriver::IdentifierType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isOpen((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isOpenError((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 17: { QSql::NumericalPrecisionPolicy _r = _t->numericalPrecisionPolicy((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSql::NumericalPrecisionPolicy*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->open((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { QSqlIndex _r = _t->primaryIndex((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlIndex*>(_a[0]) = _r; }  break;
        case 25: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->rollbackTransaction((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->setLastError((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QSqlError(*)>(_a[2]))); break;
        case 28: _t->setNumericalPrecisionPolicy((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< QSql::NumericalPrecisionPolicy(*)>(_a[2]))); break;
        case 29: _t->setOpen((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->setOpenError((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 31: { QString _r = _t->sqlStatement((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< QSqlDriver::StatementType(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QSqlRecord(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 32: { QString _r = _t->stripDelimiters((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlDriver::IdentifierType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->subscribeToNotification((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { QStringList _r = _t->subscribedToNotifications((*reinterpret_cast< QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 35: { QStringList _r = _t->tables((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< QSql::TableType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->unsubscribeFromNotification((*reinterpret_cast< QSqlDriver*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlDriver* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlDriver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlDriver.data,
      qt_meta_data_PythonQtWrapper_QSqlDriver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlDriver.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlDriver*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSqlDriverCreatorBase_t {
    QByteArrayData data[9];
    char stringdata[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlDriverCreatorBase_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlDriverCreatorBase_t qt_meta_stringdata_PythonQtWrapper_QSqlDriverCreatorBase = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_QSqlDriverCre..."
QT_MOC_LITERAL(1, 38, 25), // "new_QSqlDriverCreatorBase"
QT_MOC_LITERAL(2, 64, 22), // "QSqlDriverCreatorBase*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 28), // "delete_QSqlDriverCreatorBase"
QT_MOC_LITERAL(5, 117, 3), // "obj"
QT_MOC_LITERAL(6, 121, 12), // "createObject"
QT_MOC_LITERAL(7, 134, 11), // "QSqlDriver*"
QT_MOC_LITERAL(8, 146, 16) // "theWrappedObject"

    },
    "PythonQtWrapper_QSqlDriverCreatorBase\0"
    "new_QSqlDriverCreatorBase\0"
    "QSqlDriverCreatorBase*\0\0"
    "delete_QSqlDriverCreatorBase\0obj\0"
    "createObject\0QSqlDriver*\0theWrappedObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlDriverCreatorBase[] = {

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
       4,    1,   30,    3, 0x0a /* Public */,
       6,    1,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 2,    8,

       0        // eod
};

void PythonQtWrapper_QSqlDriverCreatorBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlDriverCreatorBase *_t = static_cast<PythonQtWrapper_QSqlDriverCreatorBase *>(_o);
        switch (_id) {
        case 0: { QSqlDriverCreatorBase* _r = _t->new_QSqlDriverCreatorBase();
            if (_a[0]) *reinterpret_cast< QSqlDriverCreatorBase**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSqlDriverCreatorBase((*reinterpret_cast< QSqlDriverCreatorBase*(*)>(_a[1]))); break;
        case 2: { QSqlDriver* _r = _t->createObject((*reinterpret_cast< QSqlDriverCreatorBase*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDriver**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlDriverCreatorBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlDriverCreatorBase.data,
      qt_meta_data_PythonQtWrapper_QSqlDriverCreatorBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlDriverCreatorBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlDriverCreatorBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlDriverCreatorBase.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlDriverCreatorBase*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlDriverCreatorBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSqlError_t {
    QByteArrayData data[31];
    char stringdata[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlError_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlError_t qt_meta_stringdata_PythonQtWrapper_QSqlError = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QSqlError"
QT_MOC_LITERAL(1, 26, 13), // "new_QSqlError"
QT_MOC_LITERAL(2, 40, 10), // "QSqlError*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 9), // "QSqlError"
QT_MOC_LITERAL(5, 62, 5), // "other"
QT_MOC_LITERAL(6, 68, 10), // "driverText"
QT_MOC_LITERAL(7, 79, 12), // "databaseText"
QT_MOC_LITERAL(8, 92, 20), // "QSqlError::ErrorType"
QT_MOC_LITERAL(9, 113, 4), // "type"
QT_MOC_LITERAL(10, 118, 9), // "errorCode"
QT_MOC_LITERAL(11, 128, 6), // "number"
QT_MOC_LITERAL(12, 135, 16), // "delete_QSqlError"
QT_MOC_LITERAL(13, 152, 3), // "obj"
QT_MOC_LITERAL(14, 156, 16), // "theWrappedObject"
QT_MOC_LITERAL(15, 173, 7), // "isValid"
QT_MOC_LITERAL(16, 181, 15), // "nativeErrorCode"
QT_MOC_LITERAL(17, 197, 6), // "__ne__"
QT_MOC_LITERAL(18, 204, 6), // "__eq__"
QT_MOC_LITERAL(19, 211, 15), // "setDatabaseText"
QT_MOC_LITERAL(20, 227, 13), // "setDriverText"
QT_MOC_LITERAL(21, 241, 9), // "setNumber"
QT_MOC_LITERAL(22, 251, 7), // "setType"
QT_MOC_LITERAL(23, 259, 4), // "text"
QT_MOC_LITERAL(24, 264, 11), // "py_toString"
QT_MOC_LITERAL(25, 276, 9), // "ErrorType"
QT_MOC_LITERAL(26, 286, 7), // "NoError"
QT_MOC_LITERAL(27, 294, 15), // "ConnectionError"
QT_MOC_LITERAL(28, 310, 14), // "StatementError"
QT_MOC_LITERAL(29, 325, 16), // "TransactionError"
QT_MOC_LITERAL(30, 342, 12) // "UnknownError"

    },
    "PythonQtWrapper_QSqlError\0new_QSqlError\0"
    "QSqlError*\0\0QSqlError\0other\0driverText\0"
    "databaseText\0QSqlError::ErrorType\0"
    "type\0errorCode\0number\0delete_QSqlError\0"
    "obj\0theWrappedObject\0isValid\0"
    "nativeErrorCode\0__ne__\0__eq__\0"
    "setDatabaseText\0setDriverText\0setNumber\0"
    "setType\0text\0py_toString\0ErrorType\0"
    "NoError\0ConnectionError\0StatementError\0"
    "TransactionError\0UnknownError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlError[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       1,  218, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  124,    3, 0x0a /* Public */,
       1,    4,  127,    3, 0x0a /* Public */,
       1,    3,  136,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  143,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  148,    3, 0x2a /* Public | MethodCloned */,
       1,    0,  151,    3, 0x2a /* Public | MethodCloned */,
       1,    4,  152,    3, 0x0a /* Public */,
      12,    1,  161,    3, 0x0a /* Public */,
       7,    1,  164,    3, 0x0a /* Public */,
       6,    1,  167,    3, 0x0a /* Public */,
      15,    1,  170,    3, 0x0a /* Public */,
      16,    1,  173,    3, 0x0a /* Public */,
      11,    1,  176,    3, 0x0a /* Public */,
      17,    2,  179,    3, 0x0a /* Public */,
      18,    2,  184,    3, 0x0a /* Public */,
      19,    2,  189,    3, 0x0a /* Public */,
      20,    2,  194,    3, 0x0a /* Public */,
      21,    2,  199,    3, 0x0a /* Public */,
      22,    2,  204,    3, 0x0a /* Public */,
      23,    1,  209,    3, 0x0a /* Public */,
       9,    1,  212,    3, 0x0a /* Public */,
      24,    1,  215,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, 0x80000000 | 8, QMetaType::QString,    6,    7,    9,   10,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, 0x80000000 | 8,    6,    7,    9,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    6,    7,
    0x80000000 | 2, QMetaType::QString,    6,
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, 0x80000000 | 8, QMetaType::Int,    6,    7,    9,   11,
    QMetaType::Void, 0x80000000 | 2,   13,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::Int, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   14,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   14,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   14,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   14,    6,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   14,   11,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 8,   14,    9,
    QMetaType::QString, 0x80000000 | 2,   14,
    0x80000000 | 8, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,    3,

 // enums: name, flags, count, data
      25, 0x0,    5,  222,

 // enum data: key, value
      26, uint(PythonQtWrapper_QSqlError::NoError),
      27, uint(PythonQtWrapper_QSqlError::ConnectionError),
      28, uint(PythonQtWrapper_QSqlError::StatementError),
      29, uint(PythonQtWrapper_QSqlError::TransactionError),
      30, uint(PythonQtWrapper_QSqlError::UnknownError),

       0        // eod
};

void PythonQtWrapper_QSqlError::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlError *_t = static_cast<PythonQtWrapper_QSqlError *>(_o);
        switch (_id) {
        case 0: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QSqlError(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 1: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlError::ErrorType(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 2: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlError::ErrorType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 3: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 4: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 5: { QSqlError* _r = _t->new_QSqlError();
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 6: { QSqlError* _r = _t->new_QSqlError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSqlError::ErrorType(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QSqlError**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QSqlError((*reinterpret_cast< QSqlError*(*)>(_a[1]))); break;
        case 8: { QString _r = _t->databaseText((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->driverText((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isValid((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->nativeErrorCode((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->number((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__ne__((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< const QSqlError(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__eq__((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< const QSqlError(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->setDatabaseText((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->setDriverText((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->setNumber((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->setType((*reinterpret_cast< QSqlError*(*)>(_a[1])),(*reinterpret_cast< QSqlError::ErrorType(*)>(_a[2]))); break;
        case 19: { QString _r = _t->text((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 20: { QSqlError::ErrorType _r = _t->type((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError::ErrorType*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->py_toString((*reinterpret_cast< QSqlError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlError::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlError.data,
      qt_meta_data_PythonQtWrapper_QSqlError,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlError::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlError::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlError.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlError*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlError::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSqlField_t {
    QByteArrayData data[52];
    char stringdata[552];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlField_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlField_t qt_meta_stringdata_PythonQtWrapper_QSqlField = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QSqlField"
QT_MOC_LITERAL(1, 26, 13), // "new_QSqlField"
QT_MOC_LITERAL(2, 40, 10), // "QSqlField*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 9), // "QSqlField"
QT_MOC_LITERAL(5, 62, 5), // "other"
QT_MOC_LITERAL(6, 68, 9), // "fieldName"
QT_MOC_LITERAL(7, 78, 14), // "QVariant::Type"
QT_MOC_LITERAL(8, 93, 4), // "type"
QT_MOC_LITERAL(9, 98, 16), // "delete_QSqlField"
QT_MOC_LITERAL(10, 115, 3), // "obj"
QT_MOC_LITERAL(11, 119, 5), // "clear"
QT_MOC_LITERAL(12, 125, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 142, 12), // "defaultValue"
QT_MOC_LITERAL(14, 155, 11), // "isAutoValue"
QT_MOC_LITERAL(15, 167, 11), // "isGenerated"
QT_MOC_LITERAL(16, 179, 6), // "isNull"
QT_MOC_LITERAL(17, 186, 10), // "isReadOnly"
QT_MOC_LITERAL(18, 197, 7), // "isValid"
QT_MOC_LITERAL(19, 205, 6), // "length"
QT_MOC_LITERAL(20, 212, 4), // "name"
QT_MOC_LITERAL(21, 217, 6), // "__ne__"
QT_MOC_LITERAL(22, 224, 6), // "__eq__"
QT_MOC_LITERAL(23, 231, 9), // "precision"
QT_MOC_LITERAL(24, 241, 14), // "requiredStatus"
QT_MOC_LITERAL(25, 256, 25), // "QSqlField::RequiredStatus"
QT_MOC_LITERAL(26, 282, 12), // "setAutoValue"
QT_MOC_LITERAL(27, 295, 7), // "autoVal"
QT_MOC_LITERAL(28, 303, 15), // "setDefaultValue"
QT_MOC_LITERAL(29, 319, 5), // "value"
QT_MOC_LITERAL(30, 325, 12), // "setGenerated"
QT_MOC_LITERAL(31, 338, 3), // "gen"
QT_MOC_LITERAL(32, 342, 9), // "setLength"
QT_MOC_LITERAL(33, 352, 11), // "fieldLength"
QT_MOC_LITERAL(34, 364, 7), // "setName"
QT_MOC_LITERAL(35, 372, 12), // "setPrecision"
QT_MOC_LITERAL(36, 385, 11), // "setReadOnly"
QT_MOC_LITERAL(37, 397, 8), // "readOnly"
QT_MOC_LITERAL(38, 406, 11), // "setRequired"
QT_MOC_LITERAL(39, 418, 8), // "required"
QT_MOC_LITERAL(40, 427, 17), // "setRequiredStatus"
QT_MOC_LITERAL(41, 445, 6), // "status"
QT_MOC_LITERAL(42, 452, 10), // "setSqlType"
QT_MOC_LITERAL(43, 463, 7), // "setType"
QT_MOC_LITERAL(44, 471, 8), // "setValue"
QT_MOC_LITERAL(45, 480, 6), // "typeID"
QT_MOC_LITERAL(46, 487, 11), // "py_toString"
QT_MOC_LITERAL(47, 499, 11), // "__nonzero__"
QT_MOC_LITERAL(48, 511, 14), // "RequiredStatus"
QT_MOC_LITERAL(49, 526, 7), // "Unknown"
QT_MOC_LITERAL(50, 534, 8), // "Optional"
QT_MOC_LITERAL(51, 543, 8) // "Required"

    },
    "PythonQtWrapper_QSqlField\0new_QSqlField\0"
    "QSqlField*\0\0QSqlField\0other\0fieldName\0"
    "QVariant::Type\0type\0delete_QSqlField\0"
    "obj\0clear\0theWrappedObject\0defaultValue\0"
    "isAutoValue\0isGenerated\0isNull\0"
    "isReadOnly\0isValid\0length\0name\0__ne__\0"
    "__eq__\0precision\0requiredStatus\0"
    "QSqlField::RequiredStatus\0setAutoValue\0"
    "autoVal\0setDefaultValue\0value\0"
    "setGenerated\0gen\0setLength\0fieldLength\0"
    "setName\0setPrecision\0setReadOnly\0"
    "readOnly\0setRequired\0required\0"
    "setRequiredStatus\0status\0setSqlType\0"
    "setType\0setValue\0typeID\0py_toString\0"
    "__nonzero__\0RequiredStatus\0Unknown\0"
    "Optional\0Required"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       1,  322, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  189,    3, 0x0a /* Public */,
       1,    2,  192,    3, 0x0a /* Public */,
       1,    1,  197,    3, 0x2a /* Public | MethodCloned */,
       1,    0,  200,    3, 0x2a /* Public | MethodCloned */,
       9,    1,  201,    3, 0x0a /* Public */,
      11,    1,  204,    3, 0x0a /* Public */,
      13,    1,  207,    3, 0x0a /* Public */,
      14,    1,  210,    3, 0x0a /* Public */,
      15,    1,  213,    3, 0x0a /* Public */,
      16,    1,  216,    3, 0x0a /* Public */,
      17,    1,  219,    3, 0x0a /* Public */,
      18,    1,  222,    3, 0x0a /* Public */,
      19,    1,  225,    3, 0x0a /* Public */,
      20,    1,  228,    3, 0x0a /* Public */,
      21,    2,  231,    3, 0x0a /* Public */,
      22,    2,  236,    3, 0x0a /* Public */,
      23,    1,  241,    3, 0x0a /* Public */,
      24,    1,  244,    3, 0x0a /* Public */,
      26,    2,  247,    3, 0x0a /* Public */,
      28,    2,  252,    3, 0x0a /* Public */,
      30,    2,  257,    3, 0x0a /* Public */,
      32,    2,  262,    3, 0x0a /* Public */,
      34,    2,  267,    3, 0x0a /* Public */,
      35,    2,  272,    3, 0x0a /* Public */,
      36,    2,  277,    3, 0x0a /* Public */,
      38,    2,  282,    3, 0x0a /* Public */,
      40,    2,  287,    3, 0x0a /* Public */,
      42,    2,  292,    3, 0x0a /* Public */,
      43,    2,  297,    3, 0x0a /* Public */,
      44,    2,  302,    3, 0x0a /* Public */,
       8,    1,  307,    3, 0x0a /* Public */,
      45,    1,  310,    3, 0x0a /* Public */,
      29,    1,  313,    3, 0x0a /* Public */,
      46,    1,  316,    3, 0x0a /* Public */,
      47,    1,  319,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QString, 0x80000000 | 7,    6,    8,
    0x80000000 | 2, QMetaType::QString,    6,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2,   12,
    QMetaType::QVariant, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::Int, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   12,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   12,    5,
    QMetaType::Int, 0x80000000 | 2,   12,
    0x80000000 | 25, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   12,   27,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant,   12,   29,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   12,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   12,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   12,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   12,   23,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   12,   37,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   12,   39,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25,   12,   41,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   12,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 7,   12,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant,   12,   29,
    0x80000000 | 7, 0x80000000 | 2,   12,
    QMetaType::Int, 0x80000000 | 2,   12,
    QMetaType::QVariant, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,    3,
    QMetaType::Bool, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
      48, 0x0,    3,  326,

 // enum data: key, value
      49, uint(PythonQtWrapper_QSqlField::Unknown),
      50, uint(PythonQtWrapper_QSqlField::Optional),
      51, uint(PythonQtWrapper_QSqlField::Required),

       0        // eod
};

void PythonQtWrapper_QSqlField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlField *_t = static_cast<PythonQtWrapper_QSqlField *>(_o);
        switch (_id) {
        case 0: { QSqlField* _r = _t->new_QSqlField((*reinterpret_cast< const QSqlField(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlField**>(_a[0]) = _r; }  break;
        case 1: { QSqlField* _r = _t->new_QSqlField((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QVariant::Type(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlField**>(_a[0]) = _r; }  break;
        case 2: { QSqlField* _r = _t->new_QSqlField((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlField**>(_a[0]) = _r; }  break;
        case 3: { QSqlField* _r = _t->new_QSqlField();
            if (_a[0]) *reinterpret_cast< QSqlField**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSqlField((*reinterpret_cast< QSqlField*(*)>(_a[1]))); break;
        case 5: _t->clear((*reinterpret_cast< QSqlField*(*)>(_a[1]))); break;
        case 6: { QVariant _r = _t->defaultValue((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isAutoValue((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isGenerated((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isNull((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isReadOnly((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isValid((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->length((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->name((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__ne__((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->__eq__((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { int _r = _t->precision((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 17: { QSqlField::RequiredStatus _r = _t->requiredStatus((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlField::RequiredStatus*>(_a[0]) = _r; }  break;
        case 18: _t->setAutoValue((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->setDefaultValue((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 20: _t->setGenerated((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->setLength((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->setName((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->setPrecision((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->setReadOnly((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->setRequired((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->setRequiredStatus((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< QSqlField::RequiredStatus(*)>(_a[2]))); break;
        case 27: _t->setSqlType((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->setType((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< QVariant::Type(*)>(_a[2]))); break;
        case 29: _t->setValue((*reinterpret_cast< QSqlField*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 30: { QVariant::Type _r = _t->type((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant::Type*>(_a[0]) = _r; }  break;
        case 31: { int _r = _t->typeID((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 32: { QVariant _r = _t->value((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 33: { QString _r = _t->py_toString((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->__nonzero__((*reinterpret_cast< QSqlField*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlField::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlField.data,
      qt_meta_data_PythonQtWrapper_QSqlField,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlField::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlField.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlField*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSqlIndex_t {
    QByteArrayData data[20];
    char stringdata[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlIndex_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlIndex_t qt_meta_stringdata_PythonQtWrapper_QSqlIndex = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QSqlIndex"
QT_MOC_LITERAL(1, 26, 13), // "new_QSqlIndex"
QT_MOC_LITERAL(2, 40, 10), // "QSqlIndex*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 9), // "QSqlIndex"
QT_MOC_LITERAL(5, 62, 5), // "other"
QT_MOC_LITERAL(6, 68, 10), // "cursorName"
QT_MOC_LITERAL(7, 79, 4), // "name"
QT_MOC_LITERAL(8, 84, 16), // "delete_QSqlIndex"
QT_MOC_LITERAL(9, 101, 3), // "obj"
QT_MOC_LITERAL(10, 105, 6), // "append"
QT_MOC_LITERAL(11, 112, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 129, 9), // "QSqlField"
QT_MOC_LITERAL(13, 139, 5), // "field"
QT_MOC_LITERAL(14, 145, 4), // "desc"
QT_MOC_LITERAL(15, 150, 12), // "isDescending"
QT_MOC_LITERAL(16, 163, 1), // "i"
QT_MOC_LITERAL(17, 165, 13), // "setCursorName"
QT_MOC_LITERAL(18, 179, 13), // "setDescending"
QT_MOC_LITERAL(19, 193, 7) // "setName"

    },
    "PythonQtWrapper_QSqlIndex\0new_QSqlIndex\0"
    "QSqlIndex*\0\0QSqlIndex\0other\0cursorName\0"
    "name\0delete_QSqlIndex\0obj\0append\0"
    "theWrappedObject\0QSqlField\0field\0desc\0"
    "isDescending\0i\0setCursorName\0setDescending\0"
    "setName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlIndex[] = {

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
       1,    2,   82,    3, 0x0a /* Public */,
       1,    1,   87,    3, 0x2a /* Public | MethodCloned */,
       1,    0,   90,    3, 0x2a /* Public | MethodCloned */,
       8,    1,   91,    3, 0x0a /* Public */,
      10,    2,   94,    3, 0x0a /* Public */,
      10,    3,   99,    3, 0x0a /* Public */,
       6,    1,  106,    3, 0x0a /* Public */,
      15,    2,  109,    3, 0x0a /* Public */,
       7,    1,  114,    3, 0x0a /* Public */,
      17,    2,  117,    3, 0x0a /* Public */,
      18,    3,  122,    3, 0x0a /* Public */,
      19,    2,  129,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    6,    7,
    0x80000000 | 2, QMetaType::QString,    6,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12, QMetaType::Bool,   11,   13,   14,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   11,   16,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   11,    6,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Bool,   11,   16,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   11,    7,

       0        // eod
};

void PythonQtWrapper_QSqlIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlIndex *_t = static_cast<PythonQtWrapper_QSqlIndex *>(_o);
        switch (_id) {
        case 0: { QSqlIndex* _r = _t->new_QSqlIndex((*reinterpret_cast< const QSqlIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlIndex**>(_a[0]) = _r; }  break;
        case 1: { QSqlIndex* _r = _t->new_QSqlIndex((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlIndex**>(_a[0]) = _r; }  break;
        case 2: { QSqlIndex* _r = _t->new_QSqlIndex((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlIndex**>(_a[0]) = _r; }  break;
        case 3: { QSqlIndex* _r = _t->new_QSqlIndex();
            if (_a[0]) *reinterpret_cast< QSqlIndex**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSqlIndex((*reinterpret_cast< QSqlIndex*(*)>(_a[1]))); break;
        case 5: _t->append((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2]))); break;
        case 6: _t->append((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: { QString _r = _t->cursorName((*reinterpret_cast< QSqlIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isDescending((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->name((*reinterpret_cast< QSqlIndex*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->setCursorName((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->setDescending((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 12: _t->setName((*reinterpret_cast< QSqlIndex*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlIndex::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlIndex.data,
      qt_meta_data_PythonQtWrapper_QSqlIndex,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlIndex.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlIndex*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSqlQuery_t {
    QByteArrayData data[69];
    char stringdata[736];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlQuery_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlQuery_t qt_meta_stringdata_PythonQtWrapper_QSqlQuery = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QSqlQuery"
QT_MOC_LITERAL(1, 26, 13), // "new_QSqlQuery"
QT_MOC_LITERAL(2, 40, 10), // "QSqlQuery*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 12), // "QSqlDatabase"
QT_MOC_LITERAL(5, 65, 2), // "db"
QT_MOC_LITERAL(6, 68, 11), // "QSqlResult*"
QT_MOC_LITERAL(7, 80, 1), // "r"
QT_MOC_LITERAL(8, 82, 9), // "QSqlQuery"
QT_MOC_LITERAL(9, 92, 5), // "other"
QT_MOC_LITERAL(10, 98, 5), // "query"
QT_MOC_LITERAL(11, 104, 16), // "delete_QSqlQuery"
QT_MOC_LITERAL(12, 121, 3), // "obj"
QT_MOC_LITERAL(13, 125, 12), // "addBindValue"
QT_MOC_LITERAL(14, 138, 16), // "theWrappedObject"
QT_MOC_LITERAL(15, 155, 3), // "val"
QT_MOC_LITERAL(16, 159, 15), // "QSql::ParamType"
QT_MOC_LITERAL(17, 175, 4), // "type"
QT_MOC_LITERAL(18, 180, 2), // "at"
QT_MOC_LITERAL(19, 183, 9), // "bindValue"
QT_MOC_LITERAL(20, 193, 11), // "placeholder"
QT_MOC_LITERAL(21, 205, 3), // "pos"
QT_MOC_LITERAL(22, 209, 10), // "boundValue"
QT_MOC_LITERAL(23, 220, 11), // "boundValues"
QT_MOC_LITERAL(24, 232, 5), // "clear"
QT_MOC_LITERAL(25, 238, 6), // "driver"
QT_MOC_LITERAL(26, 245, 17), // "const QSqlDriver*"
QT_MOC_LITERAL(27, 263, 4), // "exec"
QT_MOC_LITERAL(28, 268, 9), // "execBatch"
QT_MOC_LITERAL(29, 278, 29), // "QSqlQuery::BatchExecutionMode"
QT_MOC_LITERAL(30, 308, 4), // "mode"
QT_MOC_LITERAL(31, 313, 13), // "executedQuery"
QT_MOC_LITERAL(32, 327, 6), // "finish"
QT_MOC_LITERAL(33, 334, 5), // "first"
QT_MOC_LITERAL(34, 340, 8), // "isActive"
QT_MOC_LITERAL(35, 349, 13), // "isForwardOnly"
QT_MOC_LITERAL(36, 363, 6), // "isNull"
QT_MOC_LITERAL(37, 370, 4), // "name"
QT_MOC_LITERAL(38, 375, 5), // "field"
QT_MOC_LITERAL(39, 381, 8), // "isSelect"
QT_MOC_LITERAL(40, 390, 7), // "isValid"
QT_MOC_LITERAL(41, 398, 4), // "last"
QT_MOC_LITERAL(42, 403, 9), // "lastError"
QT_MOC_LITERAL(43, 413, 9), // "QSqlError"
QT_MOC_LITERAL(44, 423, 12), // "lastInsertId"
QT_MOC_LITERAL(45, 436, 9), // "lastQuery"
QT_MOC_LITERAL(46, 446, 4), // "next"
QT_MOC_LITERAL(47, 451, 10), // "nextResult"
QT_MOC_LITERAL(48, 462, 15), // "numRowsAffected"
QT_MOC_LITERAL(49, 478, 24), // "numericalPrecisionPolicy"
QT_MOC_LITERAL(50, 503, 30), // "QSql::NumericalPrecisionPolicy"
QT_MOC_LITERAL(51, 534, 7), // "prepare"
QT_MOC_LITERAL(52, 542, 8), // "previous"
QT_MOC_LITERAL(53, 551, 6), // "record"
QT_MOC_LITERAL(54, 558, 10), // "QSqlRecord"
QT_MOC_LITERAL(55, 569, 6), // "result"
QT_MOC_LITERAL(56, 576, 17), // "const QSqlResult*"
QT_MOC_LITERAL(57, 594, 4), // "seek"
QT_MOC_LITERAL(58, 599, 1), // "i"
QT_MOC_LITERAL(59, 601, 8), // "relative"
QT_MOC_LITERAL(60, 610, 14), // "setForwardOnly"
QT_MOC_LITERAL(61, 625, 7), // "forward"
QT_MOC_LITERAL(62, 633, 27), // "setNumericalPrecisionPolicy"
QT_MOC_LITERAL(63, 661, 15), // "precisionPolicy"
QT_MOC_LITERAL(64, 677, 4), // "size"
QT_MOC_LITERAL(65, 682, 5), // "value"
QT_MOC_LITERAL(66, 688, 18), // "BatchExecutionMode"
QT_MOC_LITERAL(67, 707, 12), // "ValuesAsRows"
QT_MOC_LITERAL(68, 720, 15) // "ValuesAsColumns"

    },
    "PythonQtWrapper_QSqlQuery\0new_QSqlQuery\0"
    "QSqlQuery*\0\0QSqlDatabase\0db\0QSqlResult*\0"
    "r\0QSqlQuery\0other\0query\0delete_QSqlQuery\0"
    "obj\0addBindValue\0theWrappedObject\0val\0"
    "QSql::ParamType\0type\0at\0bindValue\0"
    "placeholder\0pos\0boundValue\0boundValues\0"
    "clear\0driver\0const QSqlDriver*\0exec\0"
    "execBatch\0QSqlQuery::BatchExecutionMode\0"
    "mode\0executedQuery\0finish\0first\0"
    "isActive\0isForwardOnly\0isNull\0name\0"
    "field\0isSelect\0isValid\0last\0lastError\0"
    "QSqlError\0lastInsertId\0lastQuery\0next\0"
    "nextResult\0numRowsAffected\0"
    "numericalPrecisionPolicy\0"
    "QSql::NumericalPrecisionPolicy\0prepare\0"
    "previous\0record\0QSqlRecord\0result\0"
    "const QSqlResult*\0seek\0i\0relative\0"
    "setForwardOnly\0forward\0"
    "setNumericalPrecisionPolicy\0precisionPolicy\0"
    "size\0value\0BatchExecutionMode\0"
    "ValuesAsRows\0ValuesAsColumns"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       1,  476, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  269,    3, 0x0a /* Public */,
       1,    1,  272,    3, 0x0a /* Public */,
       1,    1,  275,    3, 0x0a /* Public */,
       1,    2,  278,    3, 0x0a /* Public */,
       1,    1,  283,    3, 0x2a /* Public | MethodCloned */,
       1,    0,  286,    3, 0x2a /* Public | MethodCloned */,
      11,    1,  287,    3, 0x0a /* Public */,
      13,    3,  290,    3, 0x0a /* Public */,
      13,    2,  297,    3, 0x2a /* Public | MethodCloned */,
      18,    1,  302,    3, 0x0a /* Public */,
      19,    4,  305,    3, 0x0a /* Public */,
      19,    3,  314,    3, 0x2a /* Public | MethodCloned */,
      19,    4,  321,    3, 0x0a /* Public */,
      19,    3,  330,    3, 0x2a /* Public | MethodCloned */,
      22,    2,  337,    3, 0x0a /* Public */,
      22,    2,  342,    3, 0x0a /* Public */,
      23,    1,  347,    3, 0x0a /* Public */,
      24,    1,  350,    3, 0x0a /* Public */,
      25,    1,  353,    3, 0x0a /* Public */,
      27,    1,  356,    3, 0x0a /* Public */,
      27,    2,  359,    3, 0x0a /* Public */,
      28,    2,  364,    3, 0x0a /* Public */,
      28,    1,  369,    3, 0x2a /* Public | MethodCloned */,
      31,    1,  372,    3, 0x0a /* Public */,
      32,    1,  375,    3, 0x0a /* Public */,
      33,    1,  378,    3, 0x0a /* Public */,
      34,    1,  381,    3, 0x0a /* Public */,
      35,    1,  384,    3, 0x0a /* Public */,
      36,    2,  387,    3, 0x0a /* Public */,
      36,    2,  392,    3, 0x0a /* Public */,
      39,    1,  397,    3, 0x0a /* Public */,
      40,    1,  400,    3, 0x0a /* Public */,
      41,    1,  403,    3, 0x0a /* Public */,
      42,    1,  406,    3, 0x0a /* Public */,
      44,    1,  409,    3, 0x0a /* Public */,
      45,    1,  412,    3, 0x0a /* Public */,
      46,    1,  415,    3, 0x0a /* Public */,
      47,    1,  418,    3, 0x0a /* Public */,
      48,    1,  421,    3, 0x0a /* Public */,
      49,    1,  424,    3, 0x0a /* Public */,
      51,    2,  427,    3, 0x0a /* Public */,
      52,    1,  432,    3, 0x0a /* Public */,
      53,    1,  435,    3, 0x0a /* Public */,
      55,    1,  438,    3, 0x0a /* Public */,
      57,    3,  441,    3, 0x0a /* Public */,
      57,    2,  448,    3, 0x2a /* Public | MethodCloned */,
      60,    2,  453,    3, 0x0a /* Public */,
      62,    2,  458,    3, 0x0a /* Public */,
      64,    1,  463,    3, 0x0a /* Public */,
      65,    2,  466,    3, 0x0a /* Public */,
      65,    2,  471,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, 0x80000000 | 8,    9,
    0x80000000 | 2, QMetaType::QString, 0x80000000 | 4,   10,    5,
    0x80000000 | 2, QMetaType::QString,   10,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant, 0x80000000 | 16,   14,   15,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant,   14,   15,
    QMetaType::Int, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QVariant, 0x80000000 | 16,   14,   20,   15,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QVariant,   14,   20,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::QVariant, 0x80000000 | 16,   14,   21,   15,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::QVariant,   14,   21,   15,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QString,   14,   20,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int,   14,   21,
    QMetaType::QVariantMap, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2,   14,
    0x80000000 | 26, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,   14,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 29,   14,   30,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,   14,   37,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   14,   38,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    0x80000000 | 43, 0x80000000 | 2,   14,
    QMetaType::QVariant, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Int, 0x80000000 | 2,   14,
    0x80000000 | 50, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,   14,   10,
    QMetaType::Bool, 0x80000000 | 2,   14,
    0x80000000 | 54, 0x80000000 | 2,   14,
    0x80000000 | 56, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Bool,   14,   58,   59,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   14,   58,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   14,   61,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 50,   14,   63,
    QMetaType::Int, 0x80000000 | 2,   14,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QString,   14,   37,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int,   14,   58,

 // enums: name, flags, count, data
      66, 0x0,    2,  480,

 // enum data: key, value
      67, uint(PythonQtWrapper_QSqlQuery::ValuesAsRows),
      68, uint(PythonQtWrapper_QSqlQuery::ValuesAsColumns),

       0        // eod
};

void PythonQtWrapper_QSqlQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlQuery *_t = static_cast<PythonQtWrapper_QSqlQuery *>(_o);
        switch (_id) {
        case 0: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< QSqlDatabase(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 1: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 2: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< const QSqlQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 3: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 4: { QSqlQuery* _r = _t->new_QSqlQuery((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 5: { QSqlQuery* _r = _t->new_QSqlQuery();
            if (_a[0]) *reinterpret_cast< QSqlQuery**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QSqlQuery((*reinterpret_cast< QSqlQuery*(*)>(_a[1]))); break;
        case 7: _t->addBindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< QSql::ParamType(*)>(_a[3]))); break;
        case 8: _t->addBindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 9: { int _r = _t->at((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: _t->bindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< QSql::ParamType(*)>(_a[4]))); break;
        case 11: _t->bindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 12: _t->bindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< QSql::ParamType(*)>(_a[4]))); break;
        case 13: _t->bindValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 14: { QVariant _r = _t->boundValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 15: { QVariant _r = _t->boundValue((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 16: { QMap<QString,QVariant> _r = _t->boundValues((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMap<QString,QVariant>*>(_a[0]) = _r; }  break;
        case 17: _t->clear((*reinterpret_cast< QSqlQuery*(*)>(_a[1]))); break;
        case 18: { const QSqlDriver* _r = _t->driver((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSqlDriver**>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->exec((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->exec((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->execBatch((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< QSqlQuery::BatchExecutionMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->execBatch((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->executedQuery((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: _t->finish((*reinterpret_cast< QSqlQuery*(*)>(_a[1]))); break;
        case 25: { bool _r = _t->first((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->isActive((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->isForwardOnly((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->isNull((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isNull((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isSelect((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->isValid((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->last((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 34: { QVariant _r = _t->lastInsertId((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 35: { QString _r = _t->lastQuery((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->next((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->nextResult((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->numRowsAffected((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: { QSql::NumericalPrecisionPolicy _r = _t->numericalPrecisionPolicy((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSql::NumericalPrecisionPolicy*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->prepare((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->previous((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 43: { const QSqlResult* _r = _t->result((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSqlResult**>(_a[0]) = _r; }  break;
        case 44: { bool _r = _t->seek((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: { bool _r = _t->seek((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: _t->setForwardOnly((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 47: _t->setNumericalPrecisionPolicy((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< QSql::NumericalPrecisionPolicy(*)>(_a[2]))); break;
        case 48: { int _r = _t->size((*reinterpret_cast< QSqlQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 49: { QVariant _r = _t->value((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 50: { QVariant _r = _t->value((*reinterpret_cast< QSqlQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlQuery.data,
      qt_meta_data_PythonQtWrapper_QSqlQuery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlQuery.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSqlQueryModel_t {
    QByteArrayData data[52];
    char stringdata[590];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlQueryModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlQueryModel_t qt_meta_stringdata_PythonQtWrapper_QSqlQueryModel = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QSqlQueryModel"
QT_MOC_LITERAL(1, 31, 18), // "new_QSqlQueryModel"
QT_MOC_LITERAL(2, 50, 15), // "QSqlQueryModel*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 6), // "parent"
QT_MOC_LITERAL(5, 74, 21), // "delete_QSqlQueryModel"
QT_MOC_LITERAL(6, 96, 3), // "obj"
QT_MOC_LITERAL(7, 100, 18), // "beginInsertColumns"
QT_MOC_LITERAL(8, 119, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 136, 5), // "first"
QT_MOC_LITERAL(10, 142, 4), // "last"
QT_MOC_LITERAL(11, 147, 15), // "beginInsertRows"
QT_MOC_LITERAL(12, 163, 18), // "beginRemoveColumns"
QT_MOC_LITERAL(13, 182, 15), // "beginRemoveRows"
QT_MOC_LITERAL(14, 198, 15), // "beginResetModel"
QT_MOC_LITERAL(15, 214, 12), // "canFetchMore"
QT_MOC_LITERAL(16, 227, 5), // "clear"
QT_MOC_LITERAL(17, 233, 11), // "columnCount"
QT_MOC_LITERAL(18, 245, 4), // "data"
QT_MOC_LITERAL(19, 250, 4), // "item"
QT_MOC_LITERAL(20, 255, 4), // "role"
QT_MOC_LITERAL(21, 260, 16), // "endInsertColumns"
QT_MOC_LITERAL(22, 277, 13), // "endInsertRows"
QT_MOC_LITERAL(23, 291, 16), // "endRemoveColumns"
QT_MOC_LITERAL(24, 308, 13), // "endRemoveRows"
QT_MOC_LITERAL(25, 322, 13), // "endResetModel"
QT_MOC_LITERAL(26, 336, 9), // "fetchMore"
QT_MOC_LITERAL(27, 346, 10), // "headerData"
QT_MOC_LITERAL(28, 357, 7), // "section"
QT_MOC_LITERAL(29, 365, 15), // "Qt::Orientation"
QT_MOC_LITERAL(30, 381, 11), // "orientation"
QT_MOC_LITERAL(31, 393, 12), // "indexInQuery"
QT_MOC_LITERAL(32, 406, 13), // "insertColumns"
QT_MOC_LITERAL(33, 420, 6), // "column"
QT_MOC_LITERAL(34, 427, 5), // "count"
QT_MOC_LITERAL(35, 433, 9), // "lastError"
QT_MOC_LITERAL(36, 443, 9), // "QSqlError"
QT_MOC_LITERAL(37, 453, 5), // "query"
QT_MOC_LITERAL(38, 459, 9), // "QSqlQuery"
QT_MOC_LITERAL(39, 469, 11), // "queryChange"
QT_MOC_LITERAL(40, 481, 6), // "record"
QT_MOC_LITERAL(41, 488, 10), // "QSqlRecord"
QT_MOC_LITERAL(42, 499, 3), // "row"
QT_MOC_LITERAL(43, 503, 13), // "removeColumns"
QT_MOC_LITERAL(44, 517, 8), // "rowCount"
QT_MOC_LITERAL(45, 526, 13), // "setHeaderData"
QT_MOC_LITERAL(46, 540, 5), // "value"
QT_MOC_LITERAL(47, 546, 12), // "setLastError"
QT_MOC_LITERAL(48, 559, 5), // "error"
QT_MOC_LITERAL(49, 565, 8), // "setQuery"
QT_MOC_LITERAL(50, 574, 12), // "QSqlDatabase"
QT_MOC_LITERAL(51, 587, 2) // "db"

    },
    "PythonQtWrapper_QSqlQueryModel\0"
    "new_QSqlQueryModel\0QSqlQueryModel*\0\0"
    "parent\0delete_QSqlQueryModel\0obj\0"
    "beginInsertColumns\0theWrappedObject\0"
    "first\0last\0beginInsertRows\0"
    "beginRemoveColumns\0beginRemoveRows\0"
    "beginResetModel\0canFetchMore\0clear\0"
    "columnCount\0data\0item\0role\0endInsertColumns\0"
    "endInsertRows\0endRemoveColumns\0"
    "endRemoveRows\0endResetModel\0fetchMore\0"
    "headerData\0section\0Qt::Orientation\0"
    "orientation\0indexInQuery\0insertColumns\0"
    "column\0count\0lastError\0QSqlError\0query\0"
    "QSqlQuery\0queryChange\0record\0QSqlRecord\0"
    "row\0removeColumns\0rowCount\0setHeaderData\0"
    "value\0setLastError\0error\0setQuery\0"
    "QSqlDatabase\0db"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlQueryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  224,    3, 0x0a /* Public */,
       1,    0,  227,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  228,    3, 0x0a /* Public */,
       7,    4,  231,    3, 0x0a /* Public */,
      11,    4,  240,    3, 0x0a /* Public */,
      12,    4,  249,    3, 0x0a /* Public */,
      13,    4,  258,    3, 0x0a /* Public */,
      14,    1,  267,    3, 0x0a /* Public */,
      15,    2,  270,    3, 0x0a /* Public */,
      15,    1,  275,    3, 0x2a /* Public | MethodCloned */,
      16,    1,  278,    3, 0x0a /* Public */,
      17,    2,  281,    3, 0x0a /* Public */,
      17,    1,  286,    3, 0x2a /* Public | MethodCloned */,
      18,    3,  289,    3, 0x0a /* Public */,
      18,    2,  296,    3, 0x2a /* Public | MethodCloned */,
      21,    1,  301,    3, 0x0a /* Public */,
      22,    1,  304,    3, 0x0a /* Public */,
      23,    1,  307,    3, 0x0a /* Public */,
      24,    1,  310,    3, 0x0a /* Public */,
      25,    1,  313,    3, 0x0a /* Public */,
      26,    2,  316,    3, 0x0a /* Public */,
      26,    1,  321,    3, 0x2a /* Public | MethodCloned */,
      27,    4,  324,    3, 0x0a /* Public */,
      27,    3,  333,    3, 0x2a /* Public | MethodCloned */,
      31,    2,  340,    3, 0x0a /* Public */,
      32,    4,  345,    3, 0x0a /* Public */,
      32,    3,  354,    3, 0x2a /* Public | MethodCloned */,
      35,    1,  361,    3, 0x0a /* Public */,
      37,    1,  364,    3, 0x0a /* Public */,
      39,    1,  367,    3, 0x0a /* Public */,
      40,    1,  370,    3, 0x0a /* Public */,
      40,    2,  373,    3, 0x0a /* Public */,
      43,    4,  378,    3, 0x0a /* Public */,
      43,    3,  387,    3, 0x2a /* Public | MethodCloned */,
      44,    2,  394,    3, 0x0a /* Public */,
      44,    1,  399,    3, 0x2a /* Public | MethodCloned */,
      45,    5,  402,    3, 0x0a /* Public */,
      45,    4,  413,    3, 0x2a /* Public | MethodCloned */,
      47,    2,  422,    3, 0x0a /* Public */,
      49,    2,  427,    3, 0x0a /* Public */,
      49,    3,  432,    3, 0x0a /* Public */,
      49,    2,  439,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    8,    4,    9,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    8,    4,    9,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    8,    4,    9,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    8,    4,    9,   10,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int,    8,   19,   20,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex,    8,   19,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 29, QMetaType::Int,    8,   28,   30,   20,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 29,    8,   28,   30,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,    8,   19,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   33,   34,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   33,   34,
    0x80000000 | 36, 0x80000000 | 2,    8,
    0x80000000 | 38, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    0x80000000 | 41, 0x80000000 | 2,    8,
    0x80000000 | 41, 0x80000000 | 2, QMetaType::Int,    8,   42,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,    8,   33,   34,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,    8,   33,   34,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,    8,    4,
    QMetaType::Int, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 29, QMetaType::QVariant, QMetaType::Int,    8,   28,   30,   46,   20,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 29, QMetaType::QVariant,    8,   28,   30,   46,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 36,    8,   48,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 38,    8,   37,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 50,    8,   37,   51,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    8,   37,

       0        // eod
};

void PythonQtWrapper_QSqlQueryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlQueryModel *_t = static_cast<PythonQtWrapper_QSqlQueryModel *>(_o);
        switch (_id) {
        case 0: { QSqlQueryModel* _r = _t->new_QSqlQueryModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQueryModel**>(_a[0]) = _r; }  break;
        case 1: { QSqlQueryModel* _r = _t->new_QSqlQueryModel();
            if (_a[0]) *reinterpret_cast< QSqlQueryModel**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSqlQueryModel((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 3: _t->beginInsertColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->beginInsertRows((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 5: _t->beginRemoveColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->beginRemoveRows((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->beginResetModel((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->canFetchMore((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->canFetchMore((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->clear((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 11: { int _r = _t->columnCount((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->columnCount((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->data((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: { QVariant _r = _t->data((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 15: _t->endInsertColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 16: _t->endInsertRows((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 17: _t->endRemoveColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 18: _t->endRemoveRows((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 19: _t->endResetModel((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 20: _t->fetchMore((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 21: _t->fetchMore((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 22: { QVariant _r = _t->headerData((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 23: { QVariant _r = _t->headerData((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 24: { QModelIndex _r = _t->indexInQuery((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->insertColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->insertColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 28: { QSqlQuery _r = _t->query((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlQuery*>(_a[0]) = _r; }  break;
        case 29: _t->queryChange((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1]))); break;
        case 30: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 31: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->rowCount((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { int _r = _t->rowCount((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->setHeaderData((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->setHeaderData((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: _t->setLastError((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlError(*)>(_a[2]))); break;
        case 39: _t->setQuery((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlQuery(*)>(_a[2]))); break;
        case 40: _t->setQuery((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QSqlDatabase(*)>(_a[3]))); break;
        case 41: _t->setQuery((*reinterpret_cast< QSqlQueryModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlQueryModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlQueryModel.data,
      qt_meta_data_PythonQtWrapper_QSqlQueryModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlQueryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlQueryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlQueryModel.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlQueryModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlQueryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSqlRecord_t {
    QByteArrayData data[38];
    char stringdata[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlRecord_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlRecord_t qt_meta_stringdata_PythonQtWrapper_QSqlRecord = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QSqlRecord"
QT_MOC_LITERAL(1, 27, 14), // "new_QSqlRecord"
QT_MOC_LITERAL(2, 42, 11), // "QSqlRecord*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 10), // "QSqlRecord"
QT_MOC_LITERAL(5, 66, 5), // "other"
QT_MOC_LITERAL(6, 72, 17), // "delete_QSqlRecord"
QT_MOC_LITERAL(7, 90, 3), // "obj"
QT_MOC_LITERAL(8, 94, 6), // "append"
QT_MOC_LITERAL(9, 101, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 118, 9), // "QSqlField"
QT_MOC_LITERAL(11, 128, 5), // "field"
QT_MOC_LITERAL(12, 134, 5), // "clear"
QT_MOC_LITERAL(13, 140, 11), // "clearValues"
QT_MOC_LITERAL(14, 152, 8), // "contains"
QT_MOC_LITERAL(15, 161, 4), // "name"
QT_MOC_LITERAL(16, 166, 5), // "count"
QT_MOC_LITERAL(17, 172, 1), // "i"
QT_MOC_LITERAL(18, 174, 9), // "fieldName"
QT_MOC_LITERAL(19, 184, 7), // "indexOf"
QT_MOC_LITERAL(20, 192, 6), // "insert"
QT_MOC_LITERAL(21, 199, 3), // "pos"
QT_MOC_LITERAL(22, 203, 7), // "isEmpty"
QT_MOC_LITERAL(23, 211, 11), // "isGenerated"
QT_MOC_LITERAL(24, 223, 6), // "isNull"
QT_MOC_LITERAL(25, 230, 9), // "keyValues"
QT_MOC_LITERAL(26, 240, 9), // "keyFields"
QT_MOC_LITERAL(27, 250, 6), // "__ne__"
QT_MOC_LITERAL(28, 257, 6), // "__eq__"
QT_MOC_LITERAL(29, 264, 6), // "remove"
QT_MOC_LITERAL(30, 271, 7), // "replace"
QT_MOC_LITERAL(31, 279, 12), // "setGenerated"
QT_MOC_LITERAL(32, 292, 9), // "generated"
QT_MOC_LITERAL(33, 302, 7), // "setNull"
QT_MOC_LITERAL(34, 310, 8), // "setValue"
QT_MOC_LITERAL(35, 319, 3), // "val"
QT_MOC_LITERAL(36, 323, 5), // "value"
QT_MOC_LITERAL(37, 329, 11) // "py_toString"

    },
    "PythonQtWrapper_QSqlRecord\0new_QSqlRecord\0"
    "QSqlRecord*\0\0QSqlRecord\0other\0"
    "delete_QSqlRecord\0obj\0append\0"
    "theWrappedObject\0QSqlField\0field\0clear\0"
    "clearValues\0contains\0name\0count\0i\0"
    "fieldName\0indexOf\0insert\0pos\0isEmpty\0"
    "isGenerated\0isNull\0keyValues\0keyFields\0"
    "__ne__\0__eq__\0remove\0replace\0setGenerated\0"
    "generated\0setNull\0setValue\0val\0value\0"
    "py_toString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlRecord[] = {

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
       8,    2,  181,    3, 0x0a /* Public */,
      12,    1,  186,    3, 0x0a /* Public */,
      13,    1,  189,    3, 0x0a /* Public */,
      14,    2,  192,    3, 0x0a /* Public */,
      16,    1,  197,    3, 0x0a /* Public */,
      11,    2,  200,    3, 0x0a /* Public */,
      11,    2,  205,    3, 0x0a /* Public */,
      18,    2,  210,    3, 0x0a /* Public */,
      19,    2,  215,    3, 0x0a /* Public */,
      20,    3,  220,    3, 0x0a /* Public */,
      22,    1,  227,    3, 0x0a /* Public */,
      23,    2,  230,    3, 0x0a /* Public */,
      23,    2,  235,    3, 0x0a /* Public */,
      24,    2,  240,    3, 0x0a /* Public */,
      24,    2,  245,    3, 0x0a /* Public */,
      25,    2,  250,    3, 0x0a /* Public */,
      27,    2,  255,    3, 0x0a /* Public */,
      28,    2,  260,    3, 0x0a /* Public */,
      29,    2,  265,    3, 0x0a /* Public */,
      30,    3,  270,    3, 0x0a /* Public */,
      31,    3,  277,    3, 0x0a /* Public */,
      31,    3,  284,    3, 0x0a /* Public */,
      33,    2,  291,    3, 0x0a /* Public */,
      33,    2,  296,    3, 0x0a /* Public */,
      34,    3,  301,    3, 0x0a /* Public */,
      34,    3,  308,    3, 0x0a /* Public */,
      36,    2,  315,    3, 0x0a /* Public */,
      36,    2,  320,    3, 0x0a /* Public */,
      37,    1,  325,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   15,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::QString,    9,   15,
    0x80000000 | 10, 0x80000000 | 2, QMetaType::Int,    9,   17,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,    9,   17,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QString,    9,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 10,    9,   21,   11,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   15,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    9,   17,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   15,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    9,   17,
    0x80000000 | 4, 0x80000000 | 2, 0x80000000 | 4,    9,   26,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   21,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 10,    9,   21,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::Bool,    9,   15,   32,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::Bool,    9,   17,   32,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QVariant,    9,   15,   35,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::QVariant,    9,   17,   35,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QString,    9,   15,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int,    9,   17,
    QMetaType::QString, 0x80000000 | 2,    3,

       0        // eod
};

void PythonQtWrapper_QSqlRecord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlRecord *_t = static_cast<PythonQtWrapper_QSqlRecord *>(_o);
        switch (_id) {
        case 0: { QSqlRecord* _r = _t->new_QSqlRecord();
            if (_a[0]) *reinterpret_cast< QSqlRecord**>(_a[0]) = _r; }  break;
        case 1: { QSqlRecord* _r = _t->new_QSqlRecord((*reinterpret_cast< const QSqlRecord(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRecord**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSqlRecord((*reinterpret_cast< QSqlRecord*(*)>(_a[1]))); break;
        case 3: _t->append((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QSqlField(*)>(_a[2]))); break;
        case 4: _t->clear((*reinterpret_cast< QSqlRecord*(*)>(_a[1]))); break;
        case 5: _t->clearValues((*reinterpret_cast< QSqlRecord*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->contains((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { int _r = _t->count((*reinterpret_cast< QSqlRecord*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { QSqlField _r = _t->field((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlField*>(_a[0]) = _r; }  break;
        case 9: { QSqlField _r = _t->field((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlField*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->fieldName((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->indexOf((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: _t->insert((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlField(*)>(_a[3]))); break;
        case 13: { bool _r = _t->isEmpty((*reinterpret_cast< QSqlRecord*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isGenerated((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->isGenerated((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isNull((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isNull((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { QSqlRecord _r = _t->keyValues((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QSqlRecord(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->__ne__((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QSqlRecord(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->__eq__((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QSqlRecord(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: _t->remove((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->replace((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlField(*)>(_a[3]))); break;
        case 23: _t->setGenerated((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->setGenerated((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 25: _t->setNull((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->setNull((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->setValue((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 28: _t->setValue((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 29: { QVariant _r = _t->value((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 30: { QVariant _r = _t->value((*reinterpret_cast< QSqlRecord*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 31: { QString _r = _t->py_toString((*reinterpret_cast< QSqlRecord*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlRecord::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlRecord.data,
      qt_meta_data_PythonQtWrapper_QSqlRecord,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlRecord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlRecord::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlRecord.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlRecord*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlRecord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSqlRelation_t {
    QByteArrayData data[16];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlRelation_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlRelation_t qt_meta_stringdata_PythonQtWrapper_QSqlRelation = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QSqlRelation"
QT_MOC_LITERAL(1, 29, 16), // "new_QSqlRelation"
QT_MOC_LITERAL(2, 46, 13), // "QSqlRelation*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 10), // "aTableName"
QT_MOC_LITERAL(5, 72, 8), // "indexCol"
QT_MOC_LITERAL(6, 81, 10), // "displayCol"
QT_MOC_LITERAL(7, 92, 12), // "QSqlRelation"
QT_MOC_LITERAL(8, 105, 5), // "other"
QT_MOC_LITERAL(9, 111, 19), // "delete_QSqlRelation"
QT_MOC_LITERAL(10, 131, 3), // "obj"
QT_MOC_LITERAL(11, 135, 13), // "displayColumn"
QT_MOC_LITERAL(12, 149, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 166, 11), // "indexColumn"
QT_MOC_LITERAL(14, 178, 7), // "isValid"
QT_MOC_LITERAL(15, 186, 9) // "tableName"

    },
    "PythonQtWrapper_QSqlRelation\0"
    "new_QSqlRelation\0QSqlRelation*\0\0"
    "aTableName\0indexCol\0displayCol\0"
    "QSqlRelation\0other\0delete_QSqlRelation\0"
    "obj\0displayColumn\0theWrappedObject\0"
    "indexColumn\0isValid\0tableName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlRelation[] = {

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
       1,    0,   54,    3, 0x0a /* Public */,
       1,    3,   55,    3, 0x0a /* Public */,
       1,    1,   62,    3, 0x0a /* Public */,
       9,    1,   65,    3, 0x0a /* Public */,
      11,    1,   68,    3, 0x0a /* Public */,
      13,    1,   71,    3, 0x0a /* Public */,
      14,    1,   74,    3, 0x0a /* Public */,
      15,    1,   77,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    0x80000000 | 2, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,

       0        // eod
};

void PythonQtWrapper_QSqlRelation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlRelation *_t = static_cast<PythonQtWrapper_QSqlRelation *>(_o);
        switch (_id) {
        case 0: { QSqlRelation* _r = _t->new_QSqlRelation();
            if (_a[0]) *reinterpret_cast< QSqlRelation**>(_a[0]) = _r; }  break;
        case 1: { QSqlRelation* _r = _t->new_QSqlRelation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSqlRelation**>(_a[0]) = _r; }  break;
        case 2: { QSqlRelation* _r = _t->new_QSqlRelation((*reinterpret_cast< const QSqlRelation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRelation**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSqlRelation((*reinterpret_cast< QSqlRelation*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->displayColumn((*reinterpret_cast< QSqlRelation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->indexColumn((*reinterpret_cast< QSqlRelation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->isValid((*reinterpret_cast< QSqlRelation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->tableName((*reinterpret_cast< QSqlRelation*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlRelation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlRelation.data,
      qt_meta_data_PythonQtWrapper_QSqlRelation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlRelation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlRelation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlRelation.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlRelation*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlRelation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSqlRelationalTableModel_t {
    QByteArrayData data[41];
    char stringdata[507];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlRelationalTableModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlRelationalTableModel_t qt_meta_stringdata_PythonQtWrapper_QSqlRelationalTableModel = {
    {
QT_MOC_LITERAL(0, 0, 40), // "PythonQtWrapper_QSqlRelationa..."
QT_MOC_LITERAL(1, 41, 28), // "new_QSqlRelationalTableModel"
QT_MOC_LITERAL(2, 70, 25), // "QSqlRelationalTableModel*"
QT_MOC_LITERAL(3, 96, 0), // ""
QT_MOC_LITERAL(4, 97, 6), // "parent"
QT_MOC_LITERAL(5, 104, 12), // "QSqlDatabase"
QT_MOC_LITERAL(6, 117, 2), // "db"
QT_MOC_LITERAL(7, 120, 31), // "delete_QSqlRelationalTableModel"
QT_MOC_LITERAL(8, 152, 3), // "obj"
QT_MOC_LITERAL(9, 156, 5), // "clear"
QT_MOC_LITERAL(10, 162, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 179, 4), // "data"
QT_MOC_LITERAL(12, 184, 4), // "item"
QT_MOC_LITERAL(13, 189, 4), // "role"
QT_MOC_LITERAL(14, 194, 18), // "insertRowIntoTable"
QT_MOC_LITERAL(15, 213, 10), // "QSqlRecord"
QT_MOC_LITERAL(16, 224, 6), // "values"
QT_MOC_LITERAL(17, 231, 13), // "orderByClause"
QT_MOC_LITERAL(18, 245, 8), // "relation"
QT_MOC_LITERAL(19, 254, 12), // "QSqlRelation"
QT_MOC_LITERAL(20, 267, 6), // "column"
QT_MOC_LITERAL(21, 274, 13), // "relationModel"
QT_MOC_LITERAL(22, 288, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(23, 304, 13), // "removeColumns"
QT_MOC_LITERAL(24, 318, 5), // "count"
QT_MOC_LITERAL(25, 324, 9), // "revertRow"
QT_MOC_LITERAL(26, 334, 3), // "row"
QT_MOC_LITERAL(27, 338, 6), // "select"
QT_MOC_LITERAL(28, 345, 15), // "selectStatement"
QT_MOC_LITERAL(29, 361, 7), // "setData"
QT_MOC_LITERAL(30, 369, 5), // "value"
QT_MOC_LITERAL(31, 375, 11), // "setJoinMode"
QT_MOC_LITERAL(32, 387, 34), // "QSqlRelationalTableModel::Joi..."
QT_MOC_LITERAL(33, 422, 8), // "joinMode"
QT_MOC_LITERAL(34, 431, 11), // "setRelation"
QT_MOC_LITERAL(35, 443, 8), // "setTable"
QT_MOC_LITERAL(36, 452, 9), // "tableName"
QT_MOC_LITERAL(37, 462, 16), // "updateRowInTable"
QT_MOC_LITERAL(38, 479, 8), // "JoinMode"
QT_MOC_LITERAL(39, 488, 9), // "InnerJoin"
QT_MOC_LITERAL(40, 498, 8) // "LeftJoin"

    },
    "PythonQtWrapper_QSqlRelationalTableModel\0"
    "new_QSqlRelationalTableModel\0"
    "QSqlRelationalTableModel*\0\0parent\0"
    "QSqlDatabase\0db\0delete_QSqlRelationalTableModel\0"
    "obj\0clear\0theWrappedObject\0data\0item\0"
    "role\0insertRowIntoTable\0QSqlRecord\0"
    "values\0orderByClause\0relation\0"
    "QSqlRelation\0column\0relationModel\0"
    "QSqlTableModel*\0removeColumns\0count\0"
    "revertRow\0row\0select\0selectStatement\0"
    "setData\0value\0setJoinMode\0"
    "QSqlRelationalTableModel::JoinMode\0"
    "joinMode\0setRelation\0setTable\0tableName\0"
    "updateRowInTable\0JoinMode\0InnerJoin\0"
    "LeftJoin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlRelationalTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       1,  236, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  124,    3, 0x0a /* Public */,
       1,    1,  129,    3, 0x2a /* Public | MethodCloned */,
       1,    0,  132,    3, 0x2a /* Public | MethodCloned */,
       7,    1,  133,    3, 0x0a /* Public */,
       9,    1,  136,    3, 0x0a /* Public */,
      11,    3,  139,    3, 0x0a /* Public */,
      11,    2,  146,    3, 0x2a /* Public | MethodCloned */,
      14,    2,  151,    3, 0x0a /* Public */,
      17,    1,  156,    3, 0x0a /* Public */,
      18,    2,  159,    3, 0x0a /* Public */,
      21,    2,  164,    3, 0x0a /* Public */,
      23,    4,  169,    3, 0x0a /* Public */,
      23,    3,  178,    3, 0x2a /* Public | MethodCloned */,
      25,    2,  185,    3, 0x0a /* Public */,
      27,    1,  190,    3, 0x0a /* Public */,
      28,    1,  193,    3, 0x0a /* Public */,
      29,    4,  196,    3, 0x0a /* Public */,
      29,    3,  205,    3, 0x2a /* Public | MethodCloned */,
      31,    2,  212,    3, 0x0a /* Public */,
      34,    3,  217,    3, 0x0a /* Public */,
      35,    2,  224,    3, 0x0a /* Public */,
      37,    3,  229,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar, 0x80000000 | 5,    4,    6,
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int,   10,   12,   13,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex,   10,   12,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 15,   10,   16,
    QMetaType::QString, 0x80000000 | 2,   10,
    0x80000000 | 19, 0x80000000 | 2, QMetaType::Int,   10,   20,
    0x80000000 | 22, 0x80000000 | 2, QMetaType::Int,   10,   20,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   20,   24,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   20,   24,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,   26,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant, QMetaType::Int,   10,   12,   30,   13,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant,   10,   12,   30,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 32,   10,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 19,   10,   20,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   36,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 15,   10,   26,   16,

 // enums: name, flags, count, data
      38, 0x0,    2,  240,

 // enum data: key, value
      39, uint(PythonQtWrapper_QSqlRelationalTableModel::InnerJoin),
      40, uint(PythonQtWrapper_QSqlRelationalTableModel::LeftJoin),

       0        // eod
};

void PythonQtWrapper_QSqlRelationalTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlRelationalTableModel *_t = static_cast<PythonQtWrapper_QSqlRelationalTableModel *>(_o);
        switch (_id) {
        case 0: { QSqlRelationalTableModel* _r = _t->new_QSqlRelationalTableModel((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRelationalTableModel**>(_a[0]) = _r; }  break;
        case 1: { QSqlRelationalTableModel* _r = _t->new_QSqlRelationalTableModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRelationalTableModel**>(_a[0]) = _r; }  break;
        case 2: { QSqlRelationalTableModel* _r = _t->new_QSqlRelationalTableModel();
            if (_a[0]) *reinterpret_cast< QSqlRelationalTableModel**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSqlRelationalTableModel((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1]))); break;
        case 4: _t->clear((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1]))); break;
        case 5: { QVariant _r = _t->data((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->data((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->insertRowIntoTable((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlRecord(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->orderByClause((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QSqlRelation _r = _t->relation((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRelation*>(_a[0]) = _r; }  break;
        case 10: { QSqlTableModel* _r = _t->relationModel((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlTableModel**>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->revertRow((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: { bool _r = _t->select((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->selectStatement((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->setData((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->setData((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: _t->setJoinMode((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< QSqlRelationalTableModel::JoinMode(*)>(_a[2]))); break;
        case 19: _t->setRelation((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRelation(*)>(_a[3]))); break;
        case 20: _t->setTable((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 21: { bool _r = _t->updateRowInTable((*reinterpret_cast< QSqlRelationalTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRecord(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlRelationalTableModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlRelationalTableModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlRelationalTableModel.data,
      qt_meta_data_PythonQtWrapper_QSqlRelationalTableModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlRelationalTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlRelationalTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlRelationalTableModel.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlRelationalTableModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlRelationalTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSqlResult_t {
    QByteArrayData data[78];
    char stringdata[863];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlResult_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlResult_t qt_meta_stringdata_PythonQtWrapper_QSqlResult = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QSqlResult"
QT_MOC_LITERAL(1, 27, 14), // "new_QSqlResult"
QT_MOC_LITERAL(2, 42, 11), // "QSqlResult*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 17), // "const QSqlDriver*"
QT_MOC_LITERAL(5, 73, 2), // "db"
QT_MOC_LITERAL(6, 76, 17), // "delete_QSqlResult"
QT_MOC_LITERAL(7, 94, 3), // "obj"
QT_MOC_LITERAL(8, 98, 12), // "addBindValue"
QT_MOC_LITERAL(9, 111, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 128, 3), // "val"
QT_MOC_LITERAL(11, 132, 15), // "QSql::ParamType"
QT_MOC_LITERAL(12, 148, 4), // "type"
QT_MOC_LITERAL(13, 153, 2), // "at"
QT_MOC_LITERAL(14, 156, 9), // "bindValue"
QT_MOC_LITERAL(15, 166, 11), // "placeholder"
QT_MOC_LITERAL(16, 178, 3), // "pos"
QT_MOC_LITERAL(17, 182, 13), // "bindValueType"
QT_MOC_LITERAL(18, 196, 13), // "bindingSyntax"
QT_MOC_LITERAL(19, 210, 10), // "boundValue"
QT_MOC_LITERAL(20, 221, 15), // "boundValueCount"
QT_MOC_LITERAL(21, 237, 14), // "boundValueName"
QT_MOC_LITERAL(22, 252, 11), // "boundValues"
QT_MOC_LITERAL(23, 264, 18), // "QVector<QVariant>*"
QT_MOC_LITERAL(24, 283, 5), // "clear"
QT_MOC_LITERAL(25, 289, 4), // "data"
QT_MOC_LITERAL(26, 294, 1), // "i"
QT_MOC_LITERAL(27, 296, 19), // "detachFromResultSet"
QT_MOC_LITERAL(28, 316, 6), // "driver"
QT_MOC_LITERAL(29, 323, 4), // "exec"
QT_MOC_LITERAL(30, 328, 9), // "execBatch"
QT_MOC_LITERAL(31, 338, 9), // "arrayBind"
QT_MOC_LITERAL(32, 348, 13), // "executedQuery"
QT_MOC_LITERAL(33, 362, 5), // "fetch"
QT_MOC_LITERAL(34, 368, 10), // "fetchFirst"
QT_MOC_LITERAL(35, 379, 9), // "fetchLast"
QT_MOC_LITERAL(36, 389, 9), // "fetchNext"
QT_MOC_LITERAL(37, 399, 13), // "fetchPrevious"
QT_MOC_LITERAL(38, 413, 6), // "handle"
QT_MOC_LITERAL(39, 420, 12), // "hasOutValues"
QT_MOC_LITERAL(40, 433, 8), // "isActive"
QT_MOC_LITERAL(41, 442, 13), // "isForwardOnly"
QT_MOC_LITERAL(42, 456, 6), // "isNull"
QT_MOC_LITERAL(43, 463, 8), // "isSelect"
QT_MOC_LITERAL(44, 472, 7), // "isValid"
QT_MOC_LITERAL(45, 480, 9), // "lastError"
QT_MOC_LITERAL(46, 490, 9), // "QSqlError"
QT_MOC_LITERAL(47, 500, 12), // "lastInsertId"
QT_MOC_LITERAL(48, 513, 9), // "lastQuery"
QT_MOC_LITERAL(49, 523, 10), // "nextResult"
QT_MOC_LITERAL(50, 534, 15), // "numRowsAffected"
QT_MOC_LITERAL(51, 550, 24), // "numericalPrecisionPolicy"
QT_MOC_LITERAL(52, 575, 30), // "QSql::NumericalPrecisionPolicy"
QT_MOC_LITERAL(53, 606, 7), // "prepare"
QT_MOC_LITERAL(54, 614, 5), // "query"
QT_MOC_LITERAL(55, 620, 6), // "record"
QT_MOC_LITERAL(56, 627, 10), // "QSqlRecord"
QT_MOC_LITERAL(57, 638, 5), // "reset"
QT_MOC_LITERAL(58, 644, 8), // "sqlquery"
QT_MOC_LITERAL(59, 653, 14), // "resetBindCount"
QT_MOC_LITERAL(60, 668, 11), // "savePrepare"
QT_MOC_LITERAL(61, 680, 9), // "setActive"
QT_MOC_LITERAL(62, 690, 1), // "a"
QT_MOC_LITERAL(63, 692, 5), // "setAt"
QT_MOC_LITERAL(64, 698, 14), // "setForwardOnly"
QT_MOC_LITERAL(65, 713, 7), // "forward"
QT_MOC_LITERAL(66, 721, 12), // "setLastError"
QT_MOC_LITERAL(67, 734, 1), // "e"
QT_MOC_LITERAL(68, 736, 27), // "setNumericalPrecisionPolicy"
QT_MOC_LITERAL(69, 764, 6), // "policy"
QT_MOC_LITERAL(70, 771, 8), // "setQuery"
QT_MOC_LITERAL(71, 780, 9), // "setSelect"
QT_MOC_LITERAL(72, 790, 1), // "s"
QT_MOC_LITERAL(73, 792, 4), // "size"
QT_MOC_LITERAL(74, 797, 13), // "BindingSyntax"
QT_MOC_LITERAL(75, 811, 17), // "PositionalBinding"
QT_MOC_LITERAL(76, 829, 12), // "NamedBinding"
QT_MOC_LITERAL(77, 842, 20) // "VirtualHookOperation"

    },
    "PythonQtWrapper_QSqlResult\0new_QSqlResult\0"
    "QSqlResult*\0\0const QSqlDriver*\0db\0"
    "delete_QSqlResult\0obj\0addBindValue\0"
    "theWrappedObject\0val\0QSql::ParamType\0"
    "type\0at\0bindValue\0placeholder\0pos\0"
    "bindValueType\0bindingSyntax\0boundValue\0"
    "boundValueCount\0boundValueName\0"
    "boundValues\0QVector<QVariant>*\0clear\0"
    "data\0i\0detachFromResultSet\0driver\0"
    "exec\0execBatch\0arrayBind\0executedQuery\0"
    "fetch\0fetchFirst\0fetchLast\0fetchNext\0"
    "fetchPrevious\0handle\0hasOutValues\0"
    "isActive\0isForwardOnly\0isNull\0isSelect\0"
    "isValid\0lastError\0QSqlError\0lastInsertId\0"
    "lastQuery\0nextResult\0numRowsAffected\0"
    "numericalPrecisionPolicy\0"
    "QSql::NumericalPrecisionPolicy\0prepare\0"
    "query\0record\0QSqlRecord\0reset\0sqlquery\0"
    "resetBindCount\0savePrepare\0setActive\0"
    "a\0setAt\0setForwardOnly\0forward\0"
    "setLastError\0e\0setNumericalPrecisionPolicy\0"
    "policy\0setQuery\0setSelect\0s\0size\0"
    "BindingSyntax\0PositionalBinding\0"
    "NamedBinding\0VirtualHookOperation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlResult[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
       0,    0, // properties
       2,  492, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  279,    3, 0x0a /* Public */,
       6,    1,  282,    3, 0x0a /* Public */,
       8,    3,  285,    3, 0x0a /* Public */,
      13,    1,  292,    3, 0x0a /* Public */,
      14,    4,  295,    3, 0x0a /* Public */,
      14,    4,  304,    3, 0x0a /* Public */,
      17,    2,  313,    3, 0x0a /* Public */,
      17,    2,  318,    3, 0x0a /* Public */,
      18,    1,  323,    3, 0x0a /* Public */,
      19,    2,  326,    3, 0x0a /* Public */,
      19,    2,  331,    3, 0x0a /* Public */,
      20,    1,  336,    3, 0x0a /* Public */,
      21,    2,  339,    3, 0x0a /* Public */,
      22,    1,  344,    3, 0x0a /* Public */,
      24,    1,  347,    3, 0x0a /* Public */,
      25,    2,  350,    3, 0x0a /* Public */,
      27,    1,  355,    3, 0x0a /* Public */,
      28,    1,  358,    3, 0x0a /* Public */,
      29,    1,  361,    3, 0x0a /* Public */,
      30,    2,  364,    3, 0x0a /* Public */,
      30,    1,  369,    3, 0x2a /* Public | MethodCloned */,
      32,    1,  372,    3, 0x0a /* Public */,
      33,    2,  375,    3, 0x0a /* Public */,
      34,    1,  380,    3, 0x0a /* Public */,
      35,    1,  383,    3, 0x0a /* Public */,
      36,    1,  386,    3, 0x0a /* Public */,
      37,    1,  389,    3, 0x0a /* Public */,
      38,    1,  392,    3, 0x0a /* Public */,
      39,    1,  395,    3, 0x0a /* Public */,
      40,    1,  398,    3, 0x0a /* Public */,
      41,    1,  401,    3, 0x0a /* Public */,
      42,    2,  404,    3, 0x0a /* Public */,
      43,    1,  409,    3, 0x0a /* Public */,
      44,    1,  412,    3, 0x0a /* Public */,
      45,    1,  415,    3, 0x0a /* Public */,
      47,    1,  418,    3, 0x0a /* Public */,
      48,    1,  421,    3, 0x0a /* Public */,
      49,    1,  424,    3, 0x0a /* Public */,
      50,    1,  427,    3, 0x0a /* Public */,
      51,    1,  430,    3, 0x0a /* Public */,
      53,    2,  433,    3, 0x0a /* Public */,
      55,    1,  438,    3, 0x0a /* Public */,
      57,    2,  441,    3, 0x0a /* Public */,
      59,    1,  446,    3, 0x0a /* Public */,
      60,    2,  449,    3, 0x0a /* Public */,
      61,    2,  454,    3, 0x0a /* Public */,
      63,    2,  459,    3, 0x0a /* Public */,
      64,    2,  464,    3, 0x0a /* Public */,
      66,    2,  469,    3, 0x0a /* Public */,
      68,    2,  474,    3, 0x0a /* Public */,
      70,    2,  479,    3, 0x0a /* Public */,
      71,    2,  484,    3, 0x0a /* Public */,
      73,    1,  489,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QVariant, 0x80000000 | 11,    9,   10,   12,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QVariant, 0x80000000 | 11,    9,   15,   10,   12,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, QMetaType::QVariant, 0x80000000 | 11,    9,   16,   10,   12,
    0x80000000 | 11, 0x80000000 | 2, QMetaType::QString,    9,   15,
    0x80000000 | 11, 0x80000000 | 2, QMetaType::Int,    9,   16,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QString,    9,   15,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int,    9,   16,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2, QMetaType::Int,    9,   16,
    0x80000000 | 23, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int,    9,   26,
    QMetaType::Void, 0x80000000 | 2,    9,
    0x80000000 | 4, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Bool,    9,   31,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    9,   26,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::QVariant, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    9,   26,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    0x80000000 | 46, 0x80000000 | 2,    9,
    QMetaType::QVariant, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 52, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   54,
    0x80000000 | 56, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   58,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    9,   58,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,   62,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   13,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,   65,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 46,    9,   67,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 52,    9,   69,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   54,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    9,   72,
    QMetaType::Int, 0x80000000 | 2,    9,

 // enums: name, flags, count, data
      74, 0x0,    2,  500,
      77, 0x0,    0,  504,

 // enum data: key, value
      75, uint(PythonQtWrapper_QSqlResult::PositionalBinding),
      76, uint(PythonQtWrapper_QSqlResult::NamedBinding),

       0        // eod
};

void PythonQtWrapper_QSqlResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlResult *_t = static_cast<PythonQtWrapper_QSqlResult *>(_o);
        switch (_id) {
        case 0: { QSqlResult* _r = _t->new_QSqlResult((*reinterpret_cast< const QSqlDriver*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlResult**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QSqlResult((*reinterpret_cast< QSqlResult*(*)>(_a[1]))); break;
        case 2: _t->addBindValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< QSql::ParamType(*)>(_a[3]))); break;
        case 3: { int _r = _t->at((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: _t->bindValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< QSql::ParamType(*)>(_a[4]))); break;
        case 5: _t->bindValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< QSql::ParamType(*)>(_a[4]))); break;
        case 6: { QSql::ParamType _r = _t->bindValueType((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSql::ParamType*>(_a[0]) = _r; }  break;
        case 7: { QSql::ParamType _r = _t->bindValueType((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSql::ParamType*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->bindingSyntax((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { QVariant _r = _t->boundValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 10: { QVariant _r = _t->boundValue((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 11: { int _r = _t->boundValueCount((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->boundValueName((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { QVector<QVariant>* _r = _t->boundValues((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QVariant>**>(_a[0]) = _r; }  break;
        case 14: _t->clear((*reinterpret_cast< QSqlResult*(*)>(_a[1]))); break;
        case 15: { QVariant _r = _t->data((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 16: _t->detachFromResultSet((*reinterpret_cast< QSqlResult*(*)>(_a[1]))); break;
        case 17: { const QSqlDriver* _r = _t->driver((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QSqlDriver**>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->exec((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->execBatch((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->execBatch((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { QString _r = _t->executedQuery((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->fetch((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->fetchFirst((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->fetchLast((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->fetchNext((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->fetchPrevious((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { QVariant _r = _t->handle((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->hasOutValues((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->isActive((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->isForwardOnly((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->isNull((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->isSelect((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->isValid((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { QSqlError _r = _t->lastError((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlError*>(_a[0]) = _r; }  break;
        case 35: { QVariant _r = _t->lastInsertId((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 36: { QString _r = _t->lastQuery((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->nextResult((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { int _r = _t->numRowsAffected((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 39: { QSql::NumericalPrecisionPolicy _r = _t->numericalPrecisionPolicy((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSql::NumericalPrecisionPolicy*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->prepare((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 42: { bool _r = _t->reset((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 43: _t->resetBindCount((*reinterpret_cast< QSqlResult*(*)>(_a[1]))); break;
        case 44: { bool _r = _t->savePrepare((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: _t->setActive((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 46: _t->setAt((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 47: _t->setForwardOnly((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 48: _t->setLastError((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QSqlError(*)>(_a[2]))); break;
        case 49: _t->setNumericalPrecisionPolicy((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< QSql::NumericalPrecisionPolicy(*)>(_a[2]))); break;
        case 50: _t->setQuery((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 51: _t->setSelect((*reinterpret_cast< QSqlResult*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 52: { int _r = _t->size((*reinterpret_cast< QSqlResult*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlResult::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlResult.data,
      qt_meta_data_PythonQtWrapper_QSqlResult,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlResult::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlResult.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlResult*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 53)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 53;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSqlTableModel_t {
    QByteArrayData data[75];
    char stringdata[800];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSqlTableModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSqlTableModel_t qt_meta_stringdata_PythonQtWrapper_QSqlTableModel = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QSqlTableModel"
QT_MOC_LITERAL(1, 31, 18), // "new_QSqlTableModel"
QT_MOC_LITERAL(2, 50, 15), // "QSqlTableModel*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 6), // "parent"
QT_MOC_LITERAL(5, 74, 12), // "QSqlDatabase"
QT_MOC_LITERAL(6, 87, 2), // "db"
QT_MOC_LITERAL(7, 90, 21), // "delete_QSqlTableModel"
QT_MOC_LITERAL(8, 112, 3), // "obj"
QT_MOC_LITERAL(9, 116, 5), // "clear"
QT_MOC_LITERAL(10, 122, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 139, 4), // "data"
QT_MOC_LITERAL(12, 144, 3), // "idx"
QT_MOC_LITERAL(13, 148, 4), // "role"
QT_MOC_LITERAL(14, 153, 8), // "database"
QT_MOC_LITERAL(15, 162, 18), // "deleteRowFromTable"
QT_MOC_LITERAL(16, 181, 3), // "row"
QT_MOC_LITERAL(17, 185, 12), // "editStrategy"
QT_MOC_LITERAL(18, 198, 28), // "QSqlTableModel::EditStrategy"
QT_MOC_LITERAL(19, 227, 10), // "fieldIndex"
QT_MOC_LITERAL(20, 238, 9), // "fieldName"
QT_MOC_LITERAL(21, 248, 6), // "filter"
QT_MOC_LITERAL(22, 255, 5), // "flags"
QT_MOC_LITERAL(23, 261, 13), // "Qt::ItemFlags"
QT_MOC_LITERAL(24, 275, 5), // "index"
QT_MOC_LITERAL(25, 281, 10), // "headerData"
QT_MOC_LITERAL(26, 292, 7), // "section"
QT_MOC_LITERAL(27, 300, 15), // "Qt::Orientation"
QT_MOC_LITERAL(28, 316, 11), // "orientation"
QT_MOC_LITERAL(29, 328, 12), // "indexInQuery"
QT_MOC_LITERAL(30, 341, 4), // "item"
QT_MOC_LITERAL(31, 346, 12), // "insertRecord"
QT_MOC_LITERAL(32, 359, 10), // "QSqlRecord"
QT_MOC_LITERAL(33, 370, 6), // "record"
QT_MOC_LITERAL(34, 377, 18), // "insertRowIntoTable"
QT_MOC_LITERAL(35, 396, 6), // "values"
QT_MOC_LITERAL(36, 403, 10), // "insertRows"
QT_MOC_LITERAL(37, 414, 5), // "count"
QT_MOC_LITERAL(38, 420, 7), // "isDirty"
QT_MOC_LITERAL(39, 428, 13), // "orderByClause"
QT_MOC_LITERAL(40, 442, 10), // "primaryKey"
QT_MOC_LITERAL(41, 453, 9), // "QSqlIndex"
QT_MOC_LITERAL(42, 463, 13), // "primaryValues"
QT_MOC_LITERAL(43, 477, 13), // "removeColumns"
QT_MOC_LITERAL(44, 491, 6), // "column"
QT_MOC_LITERAL(45, 498, 10), // "removeRows"
QT_MOC_LITERAL(46, 509, 6), // "revert"
QT_MOC_LITERAL(47, 516, 9), // "revertRow"
QT_MOC_LITERAL(48, 526, 8), // "rowCount"
QT_MOC_LITERAL(49, 535, 6), // "select"
QT_MOC_LITERAL(50, 542, 9), // "selectRow"
QT_MOC_LITERAL(51, 552, 15), // "selectStatement"
QT_MOC_LITERAL(52, 568, 7), // "setData"
QT_MOC_LITERAL(53, 576, 5), // "value"
QT_MOC_LITERAL(54, 582, 15), // "setEditStrategy"
QT_MOC_LITERAL(55, 598, 8), // "strategy"
QT_MOC_LITERAL(56, 607, 9), // "setFilter"
QT_MOC_LITERAL(57, 617, 13), // "setPrimaryKey"
QT_MOC_LITERAL(58, 631, 3), // "key"
QT_MOC_LITERAL(59, 635, 8), // "setQuery"
QT_MOC_LITERAL(60, 644, 9), // "QSqlQuery"
QT_MOC_LITERAL(61, 654, 5), // "query"
QT_MOC_LITERAL(62, 660, 9), // "setRecord"
QT_MOC_LITERAL(63, 670, 7), // "setSort"
QT_MOC_LITERAL(64, 678, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(65, 692, 5), // "order"
QT_MOC_LITERAL(66, 698, 8), // "setTable"
QT_MOC_LITERAL(67, 707, 9), // "tableName"
QT_MOC_LITERAL(68, 717, 4), // "sort"
QT_MOC_LITERAL(69, 722, 6), // "submit"
QT_MOC_LITERAL(70, 729, 16), // "updateRowInTable"
QT_MOC_LITERAL(71, 746, 12), // "EditStrategy"
QT_MOC_LITERAL(72, 759, 13), // "OnFieldChange"
QT_MOC_LITERAL(73, 773, 11), // "OnRowChange"
QT_MOC_LITERAL(74, 785, 14) // "OnManualSubmit"

    },
    "PythonQtWrapper_QSqlTableModel\0"
    "new_QSqlTableModel\0QSqlTableModel*\0\0"
    "parent\0QSqlDatabase\0db\0delete_QSqlTableModel\0"
    "obj\0clear\0theWrappedObject\0data\0idx\0"
    "role\0database\0deleteRowFromTable\0row\0"
    "editStrategy\0QSqlTableModel::EditStrategy\0"
    "fieldIndex\0fieldName\0filter\0flags\0"
    "Qt::ItemFlags\0index\0headerData\0section\0"
    "Qt::Orientation\0orientation\0indexInQuery\0"
    "item\0insertRecord\0QSqlRecord\0record\0"
    "insertRowIntoTable\0values\0insertRows\0"
    "count\0isDirty\0orderByClause\0primaryKey\0"
    "QSqlIndex\0primaryValues\0removeColumns\0"
    "column\0removeRows\0revert\0revertRow\0"
    "rowCount\0select\0selectRow\0selectStatement\0"
    "setData\0value\0setEditStrategy\0strategy\0"
    "setFilter\0setPrimaryKey\0key\0setQuery\0"
    "QSqlQuery\0query\0setRecord\0setSort\0"
    "Qt::SortOrder\0order\0setTable\0tableName\0"
    "sort\0submit\0updateRowInTable\0EditStrategy\0"
    "OnFieldChange\0OnRowChange\0OnManualSubmit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSqlTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       1,  530, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  269,    3, 0x0a /* Public */,
       1,    1,  274,    3, 0x2a /* Public | MethodCloned */,
       1,    0,  277,    3, 0x2a /* Public | MethodCloned */,
       7,    1,  278,    3, 0x0a /* Public */,
       9,    1,  281,    3, 0x0a /* Public */,
      11,    3,  284,    3, 0x0a /* Public */,
      11,    2,  291,    3, 0x2a /* Public | MethodCloned */,
      14,    1,  296,    3, 0x0a /* Public */,
      15,    2,  299,    3, 0x0a /* Public */,
      17,    1,  304,    3, 0x0a /* Public */,
      19,    2,  307,    3, 0x0a /* Public */,
      21,    1,  312,    3, 0x0a /* Public */,
      22,    2,  315,    3, 0x0a /* Public */,
      25,    4,  320,    3, 0x0a /* Public */,
      25,    3,  329,    3, 0x2a /* Public | MethodCloned */,
      29,    2,  336,    3, 0x0a /* Public */,
      31,    3,  341,    3, 0x0a /* Public */,
      34,    2,  348,    3, 0x0a /* Public */,
      36,    4,  353,    3, 0x0a /* Public */,
      36,    3,  362,    3, 0x2a /* Public | MethodCloned */,
      38,    1,  369,    3, 0x0a /* Public */,
      38,    2,  372,    3, 0x0a /* Public */,
      39,    1,  377,    3, 0x0a /* Public */,
      40,    1,  380,    3, 0x0a /* Public */,
      42,    2,  383,    3, 0x0a /* Public */,
      33,    1,  388,    3, 0x0a /* Public */,
      33,    2,  391,    3, 0x0a /* Public */,
      43,    4,  396,    3, 0x0a /* Public */,
      43,    3,  405,    3, 0x2a /* Public | MethodCloned */,
      45,    4,  412,    3, 0x0a /* Public */,
      45,    3,  421,    3, 0x2a /* Public | MethodCloned */,
      46,    1,  428,    3, 0x0a /* Public */,
      47,    2,  431,    3, 0x0a /* Public */,
      48,    2,  436,    3, 0x0a /* Public */,
      48,    1,  441,    3, 0x2a /* Public | MethodCloned */,
      49,    1,  444,    3, 0x0a /* Public */,
      50,    2,  447,    3, 0x0a /* Public */,
      51,    1,  452,    3, 0x0a /* Public */,
      52,    4,  455,    3, 0x0a /* Public */,
      52,    3,  464,    3, 0x2a /* Public | MethodCloned */,
      54,    2,  471,    3, 0x0a /* Public */,
      56,    2,  476,    3, 0x0a /* Public */,
      57,    2,  481,    3, 0x0a /* Public */,
      59,    2,  486,    3, 0x0a /* Public */,
      62,    3,  491,    3, 0x0a /* Public */,
      63,    3,  498,    3, 0x0a /* Public */,
      66,    2,  505,    3, 0x0a /* Public */,
      68,    3,  510,    3, 0x0a /* Public */,
      69,    1,  517,    3, 0x0a /* Public */,
      67,    1,  520,    3, 0x0a /* Public */,
      70,    3,  523,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar, 0x80000000 | 5,    4,    6,
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::Int,   10,   12,   13,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QModelIndex,   10,   12,
    0x80000000 | 5, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   10,   16,
    0x80000000 | 18, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QString,   10,   20,
    QMetaType::QString, 0x80000000 | 2,   10,
    0x80000000 | 23, 0x80000000 | 2, QMetaType::QModelIndex,   10,   24,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 27, QMetaType::Int,   10,   26,   28,   13,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 27,   10,   26,   28,
    QMetaType::QModelIndex, 0x80000000 | 2, QMetaType::QModelIndex,   10,   30,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 32,   10,   16,   33,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 32,   10,   35,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   16,   37,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   16,   37,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex,   10,   24,
    QMetaType::QString, 0x80000000 | 2,   10,
    0x80000000 | 41, 0x80000000 | 2,   10,
    0x80000000 | 32, 0x80000000 | 2, QMetaType::Int,   10,   16,
    0x80000000 | 32, 0x80000000 | 2,   10,
    0x80000000 | 32, 0x80000000 | 2, QMetaType::Int,   10,   16,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   44,   37,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   44,   37,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   10,   16,   37,    4,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, QMetaType::Int,   10,   16,   37,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,   16,
    QMetaType::Int, 0x80000000 | 2, QMetaType::QModelIndex,   10,    4,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   10,   16,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant, QMetaType::Int,   10,   24,   53,   13,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QModelIndex, QMetaType::QVariant,   10,   24,   53,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   10,   55,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   21,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 41,   10,   58,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 60,   10,   61,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 32,   10,   16,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 64,   10,   44,   65,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   67,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 64,   10,   44,   65,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 32,   10,   16,   35,

 // enums: name, flags, count, data
      71, 0x0,    3,  534,

 // enum data: key, value
      72, uint(PythonQtWrapper_QSqlTableModel::OnFieldChange),
      73, uint(PythonQtWrapper_QSqlTableModel::OnRowChange),
      74, uint(PythonQtWrapper_QSqlTableModel::OnManualSubmit),

       0        // eod
};

void PythonQtWrapper_QSqlTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSqlTableModel *_t = static_cast<PythonQtWrapper_QSqlTableModel *>(_o);
        switch (_id) {
        case 0: { QSqlTableModel* _r = _t->new_QSqlTableModel((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QSqlDatabase(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlTableModel**>(_a[0]) = _r; }  break;
        case 1: { QSqlTableModel* _r = _t->new_QSqlTableModel((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlTableModel**>(_a[0]) = _r; }  break;
        case 2: { QSqlTableModel* _r = _t->new_QSqlTableModel();
            if (_a[0]) *reinterpret_cast< QSqlTableModel**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QSqlTableModel((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 4: _t->clear((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 5: { QVariant _r = _t->data((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->data((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { QSqlDatabase _r = _t->database((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlDatabase*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->deleteRowFromTable((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QSqlTableModel::EditStrategy _r = _t->editStrategy((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlTableModel::EditStrategy*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->fieldIndex((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->filter((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->headerData((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: { QVariant _r = _t->headerData((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::Orientation(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 15: { QModelIndex _r = _t->indexInQuery((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->insertRecord((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRecord(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->insertRowIntoTable((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlRecord(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->insertRows((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->insertRows((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->isDirty((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->isDirty((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->orderByClause((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: { QSqlIndex _r = _t->primaryKey((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlIndex*>(_a[0]) = _r; }  break;
        case 24: { QSqlRecord _r = _t->primaryValues((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 25: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 26: { QSqlRecord _r = _t->record((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSqlRecord*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->removeColumns((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->removeRows((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->removeRows((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: _t->revert((*reinterpret_cast< QSqlTableModel*(*)>(_a[1]))); break;
        case 32: _t->revertRow((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: { int _r = _t->rowCount((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->rowCount((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { bool _r = _t->select((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->selectRow((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { QString _r = _t->selectStatement((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 38: { bool _r = _t->setData((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->setData((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: _t->setEditStrategy((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< QSqlTableModel::EditStrategy(*)>(_a[2]))); break;
        case 41: _t->setFilter((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 42: _t->setPrimaryKey((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlIndex(*)>(_a[2]))); break;
        case 43: _t->setQuery((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QSqlQuery(*)>(_a[2]))); break;
        case 44: { bool _r = _t->setRecord((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRecord(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 45: _t->setSort((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 46: _t->setTable((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 47: _t->sort((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[3]))); break;
        case 48: { bool _r = _t->submit((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 49: { QString _r = _t->tableName((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->updateRowInTable((*reinterpret_cast< QSqlTableModel*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QSqlRecord(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlTableModel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSqlTableModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSqlTableModel.data,
      qt_meta_data_PythonQtWrapper_QSqlTableModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSqlTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSqlTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSqlTableModel.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSqlTableModel*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSqlTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
