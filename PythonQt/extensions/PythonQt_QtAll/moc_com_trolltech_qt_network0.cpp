/****************************************************************************
** Meta object code from reading C++ file 'com_trolltech_qt_network0.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generated_cpp_54/com_trolltech_qt_network/com_trolltech_qt_network0.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'com_trolltech_qt_network0.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PythonQtWrapper_QAbstractNetworkCache_t {
    QByteArrayData data[20];
    char stringdata[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QAbstractNetworkCache_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QAbstractNetworkCache_t qt_meta_stringdata_PythonQtWrapper_QAbstractNetworkCache = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_QAbstractNetw..."
QT_MOC_LITERAL(1, 38, 25), // "new_QAbstractNetworkCache"
QT_MOC_LITERAL(2, 64, 22), // "QAbstractNetworkCache*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 6), // "parent"
QT_MOC_LITERAL(5, 95, 28), // "delete_QAbstractNetworkCache"
QT_MOC_LITERAL(6, 124, 3), // "obj"
QT_MOC_LITERAL(7, 128, 9), // "cacheSize"
QT_MOC_LITERAL(8, 138, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 155, 5), // "clear"
QT_MOC_LITERAL(10, 161, 4), // "data"
QT_MOC_LITERAL(11, 166, 10), // "QIODevice*"
QT_MOC_LITERAL(12, 177, 3), // "url"
QT_MOC_LITERAL(13, 181, 6), // "insert"
QT_MOC_LITERAL(14, 188, 6), // "device"
QT_MOC_LITERAL(15, 195, 8), // "metaData"
QT_MOC_LITERAL(16, 204, 21), // "QNetworkCacheMetaData"
QT_MOC_LITERAL(17, 226, 7), // "prepare"
QT_MOC_LITERAL(18, 234, 6), // "remove"
QT_MOC_LITERAL(19, 241, 14) // "updateMetaData"

    },
    "PythonQtWrapper_QAbstractNetworkCache\0"
    "new_QAbstractNetworkCache\0"
    "QAbstractNetworkCache*\0\0parent\0"
    "delete_QAbstractNetworkCache\0obj\0"
    "cacheSize\0theWrappedObject\0clear\0data\0"
    "QIODevice*\0url\0insert\0device\0metaData\0"
    "QNetworkCacheMetaData\0prepare\0remove\0"
    "updateMetaData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QAbstractNetworkCache[] = {

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
       1,    0,   72,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   73,    3, 0x0a /* Public */,
       7,    1,   76,    3, 0x0a /* Public */,
       9,    1,   79,    3, 0x0a /* Public */,
      10,    2,   82,    3, 0x0a /* Public */,
      13,    2,   87,    3, 0x0a /* Public */,
      15,    2,   92,    3, 0x0a /* Public */,
      17,    2,   97,    3, 0x0a /* Public */,
      18,    2,  102,    3, 0x0a /* Public */,
      19,    2,  107,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    0x80000000 | 11, 0x80000000 | 2, QMetaType::QUrl,    8,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,    8,   14,
    0x80000000 | 16, 0x80000000 | 2, QMetaType::QUrl,    8,   12,
    0x80000000 | 11, 0x80000000 | 2, 0x80000000 | 16,    8,   15,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QUrl,    8,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,    8,   15,

       0        // eod
};

void PythonQtWrapper_QAbstractNetworkCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QAbstractNetworkCache *_t = static_cast<PythonQtWrapper_QAbstractNetworkCache *>(_o);
        switch (_id) {
        case 0: { QAbstractNetworkCache* _r = _t->new_QAbstractNetworkCache((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractNetworkCache**>(_a[0]) = _r; }  break;
        case 1: { QAbstractNetworkCache* _r = _t->new_QAbstractNetworkCache();
            if (_a[0]) *reinterpret_cast< QAbstractNetworkCache**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAbstractNetworkCache((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1]))); break;
        case 3: { qint64 _r = _t->cacheSize((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 4: _t->clear((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1]))); break;
        case 5: { QIODevice* _r = _t->data((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 6: _t->insert((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 7: { QNetworkCacheMetaData _r = _t->metaData((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData*>(_a[0]) = _r; }  break;
        case 8: { QIODevice* _r = _t->prepare((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->remove((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->updateMetaData((*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QAbstractNetworkCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractNetworkCache.data,
      qt_meta_data_PythonQtWrapper_QAbstractNetworkCache,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QAbstractNetworkCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractNetworkCache::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractNetworkCache.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractNetworkCache*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractNetworkCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QAbstractSocket_t {
    QByteArrayData data[88];
    char stringdata[1143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QAbstractSocket_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QAbstractSocket_t qt_meta_stringdata_PythonQtWrapper_QAbstractSocket = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QAbstractSocket"
QT_MOC_LITERAL(1, 32, 19), // "new_QAbstractSocket"
QT_MOC_LITERAL(2, 52, 16), // "QAbstractSocket*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 27), // "QAbstractSocket::SocketType"
QT_MOC_LITERAL(5, 98, 10), // "socketType"
QT_MOC_LITERAL(6, 109, 6), // "parent"
QT_MOC_LITERAL(7, 116, 22), // "delete_QAbstractSocket"
QT_MOC_LITERAL(8, 139, 3), // "obj"
QT_MOC_LITERAL(9, 143, 5), // "abort"
QT_MOC_LITERAL(10, 149, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 166, 5), // "atEnd"
QT_MOC_LITERAL(12, 172, 4), // "bind"
QT_MOC_LITERAL(13, 177, 12), // "QHostAddress"
QT_MOC_LITERAL(14, 190, 7), // "address"
QT_MOC_LITERAL(15, 198, 4), // "port"
QT_MOC_LITERAL(16, 203, 25), // "QAbstractSocket::BindMode"
QT_MOC_LITERAL(17, 229, 4), // "mode"
QT_MOC_LITERAL(18, 234, 14), // "bytesAvailable"
QT_MOC_LITERAL(19, 249, 12), // "bytesToWrite"
QT_MOC_LITERAL(20, 262, 11), // "canReadLine"
QT_MOC_LITERAL(21, 274, 5), // "close"
QT_MOC_LITERAL(22, 280, 13), // "connectToHost"
QT_MOC_LITERAL(23, 294, 19), // "QIODevice::OpenMode"
QT_MOC_LITERAL(24, 314, 8), // "hostName"
QT_MOC_LITERAL(25, 323, 37), // "QAbstractSocket::NetworkLayer..."
QT_MOC_LITERAL(26, 361, 8), // "protocol"
QT_MOC_LITERAL(27, 370, 18), // "disconnectFromHost"
QT_MOC_LITERAL(28, 389, 5), // "error"
QT_MOC_LITERAL(29, 395, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(30, 424, 5), // "flush"
QT_MOC_LITERAL(31, 430, 12), // "isSequential"
QT_MOC_LITERAL(32, 443, 7), // "isValid"
QT_MOC_LITERAL(33, 451, 12), // "localAddress"
QT_MOC_LITERAL(34, 464, 9), // "localPort"
QT_MOC_LITERAL(35, 474, 9), // "pauseMode"
QT_MOC_LITERAL(36, 484, 27), // "QAbstractSocket::PauseModes"
QT_MOC_LITERAL(37, 512, 11), // "peerAddress"
QT_MOC_LITERAL(38, 524, 8), // "peerName"
QT_MOC_LITERAL(39, 533, 8), // "peerPort"
QT_MOC_LITERAL(40, 542, 5), // "proxy"
QT_MOC_LITERAL(41, 548, 13), // "QNetworkProxy"
QT_MOC_LITERAL(42, 562, 14), // "readBufferSize"
QT_MOC_LITERAL(43, 577, 8), // "readData"
QT_MOC_LITERAL(44, 586, 5), // "char*"
QT_MOC_LITERAL(45, 592, 4), // "data"
QT_MOC_LITERAL(46, 597, 6), // "maxlen"
QT_MOC_LITERAL(47, 604, 12), // "readLineData"
QT_MOC_LITERAL(48, 617, 6), // "resume"
QT_MOC_LITERAL(49, 624, 15), // "setLocalAddress"
QT_MOC_LITERAL(50, 640, 12), // "setLocalPort"
QT_MOC_LITERAL(51, 653, 12), // "setPauseMode"
QT_MOC_LITERAL(52, 666, 14), // "setPeerAddress"
QT_MOC_LITERAL(53, 681, 11), // "setPeerName"
QT_MOC_LITERAL(54, 693, 4), // "name"
QT_MOC_LITERAL(55, 698, 11), // "setPeerPort"
QT_MOC_LITERAL(56, 710, 8), // "setProxy"
QT_MOC_LITERAL(57, 719, 12), // "networkProxy"
QT_MOC_LITERAL(58, 732, 17), // "setReadBufferSize"
QT_MOC_LITERAL(59, 750, 4), // "size"
QT_MOC_LITERAL(60, 755, 14), // "setSocketError"
QT_MOC_LITERAL(61, 770, 11), // "socketError"
QT_MOC_LITERAL(62, 782, 15), // "setSocketOption"
QT_MOC_LITERAL(63, 798, 29), // "QAbstractSocket::SocketOption"
QT_MOC_LITERAL(64, 828, 6), // "option"
QT_MOC_LITERAL(65, 835, 5), // "value"
QT_MOC_LITERAL(66, 841, 14), // "setSocketState"
QT_MOC_LITERAL(67, 856, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(68, 885, 5), // "state"
QT_MOC_LITERAL(69, 891, 12), // "socketOption"
QT_MOC_LITERAL(70, 904, 19), // "waitForBytesWritten"
QT_MOC_LITERAL(71, 924, 5), // "msecs"
QT_MOC_LITERAL(72, 930, 16), // "waitForConnected"
QT_MOC_LITERAL(73, 947, 19), // "waitForDisconnected"
QT_MOC_LITERAL(74, 967, 16), // "waitForReadyRead"
QT_MOC_LITERAL(75, 984, 9), // "writeData"
QT_MOC_LITERAL(76, 994, 11), // "const char*"
QT_MOC_LITERAL(77, 1006, 3), // "len"
QT_MOC_LITERAL(78, 1010, 8), // "BindFlag"
QT_MOC_LITERAL(79, 1019, 18), // "DefaultForPlatform"
QT_MOC_LITERAL(80, 1038, 12), // "ShareAddress"
QT_MOC_LITERAL(81, 1051, 16), // "DontShareAddress"
QT_MOC_LITERAL(82, 1068, 16), // "ReuseAddressHint"
QT_MOC_LITERAL(83, 1085, 8), // "BindMode"
QT_MOC_LITERAL(84, 1094, 9), // "PauseMode"
QT_MOC_LITERAL(85, 1104, 10), // "PauseNever"
QT_MOC_LITERAL(86, 1115, 16), // "PauseOnSslErrors"
QT_MOC_LITERAL(87, 1132, 10) // "PauseModes"

    },
    "PythonQtWrapper_QAbstractSocket\0"
    "new_QAbstractSocket\0QAbstractSocket*\0"
    "\0QAbstractSocket::SocketType\0socketType\0"
    "parent\0delete_QAbstractSocket\0obj\0"
    "abort\0theWrappedObject\0atEnd\0bind\0"
    "QHostAddress\0address\0port\0"
    "QAbstractSocket::BindMode\0mode\0"
    "bytesAvailable\0bytesToWrite\0canReadLine\0"
    "close\0connectToHost\0QIODevice::OpenMode\0"
    "hostName\0QAbstractSocket::NetworkLayerProtocol\0"
    "protocol\0disconnectFromHost\0error\0"
    "QAbstractSocket::SocketError\0flush\0"
    "isSequential\0isValid\0localAddress\0"
    "localPort\0pauseMode\0QAbstractSocket::PauseModes\0"
    "peerAddress\0peerName\0peerPort\0proxy\0"
    "QNetworkProxy\0readBufferSize\0readData\0"
    "char*\0data\0maxlen\0readLineData\0resume\0"
    "setLocalAddress\0setLocalPort\0setPauseMode\0"
    "setPeerAddress\0setPeerName\0name\0"
    "setPeerPort\0setProxy\0networkProxy\0"
    "setReadBufferSize\0size\0setSocketError\0"
    "socketError\0setSocketOption\0"
    "QAbstractSocket::SocketOption\0option\0"
    "value\0setSocketState\0QAbstractSocket::SocketState\0"
    "state\0socketOption\0waitForBytesWritten\0"
    "msecs\0waitForConnected\0waitForDisconnected\0"
    "waitForReadyRead\0writeData\0const char*\0"
    "len\0BindFlag\0DefaultForPlatform\0"
    "ShareAddress\0DontShareAddress\0"
    "ReuseAddressHint\0BindMode\0PauseMode\0"
    "PauseNever\0PauseOnSslErrors\0PauseModes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QAbstractSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       4,  572, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  304,    3, 0x0a /* Public */,
       7,    1,  309,    3, 0x0a /* Public */,
       9,    1,  312,    3, 0x0a /* Public */,
      11,    1,  315,    3, 0x0a /* Public */,
      12,    4,  318,    3, 0x0a /* Public */,
      12,    3,  327,    3, 0x2a /* Public | MethodCloned */,
      12,    2,  334,    3, 0x2a /* Public | MethodCloned */,
      12,    3,  339,    3, 0x0a /* Public */,
      12,    2,  346,    3, 0x2a /* Public | MethodCloned */,
      12,    1,  351,    3, 0x2a /* Public | MethodCloned */,
      18,    1,  354,    3, 0x0a /* Public */,
      19,    1,  357,    3, 0x0a /* Public */,
      20,    1,  360,    3, 0x0a /* Public */,
      21,    1,  363,    3, 0x0a /* Public */,
      22,    4,  366,    3, 0x0a /* Public */,
      22,    3,  375,    3, 0x2a /* Public | MethodCloned */,
      22,    5,  382,    3, 0x0a /* Public */,
      22,    4,  393,    3, 0x2a /* Public | MethodCloned */,
      22,    3,  402,    3, 0x2a /* Public | MethodCloned */,
      27,    1,  409,    3, 0x0a /* Public */,
      28,    1,  412,    3, 0x0a /* Public */,
      30,    1,  415,    3, 0x0a /* Public */,
      31,    1,  418,    3, 0x0a /* Public */,
      32,    1,  421,    3, 0x0a /* Public */,
      33,    1,  424,    3, 0x0a /* Public */,
      34,    1,  427,    3, 0x0a /* Public */,
      35,    1,  430,    3, 0x0a /* Public */,
      37,    1,  433,    3, 0x0a /* Public */,
      38,    1,  436,    3, 0x0a /* Public */,
      39,    1,  439,    3, 0x0a /* Public */,
      40,    1,  442,    3, 0x0a /* Public */,
      42,    1,  445,    3, 0x0a /* Public */,
      43,    3,  448,    3, 0x0a /* Public */,
      47,    3,  455,    3, 0x0a /* Public */,
      48,    1,  462,    3, 0x0a /* Public */,
      49,    2,  465,    3, 0x0a /* Public */,
      50,    2,  470,    3, 0x0a /* Public */,
      51,    2,  475,    3, 0x0a /* Public */,
      52,    2,  480,    3, 0x0a /* Public */,
      53,    2,  485,    3, 0x0a /* Public */,
      55,    2,  490,    3, 0x0a /* Public */,
      56,    2,  495,    3, 0x0a /* Public */,
      58,    2,  500,    3, 0x0a /* Public */,
      60,    2,  505,    3, 0x0a /* Public */,
      62,    3,  510,    3, 0x0a /* Public */,
      66,    2,  517,    3, 0x0a /* Public */,
      69,    2,  522,    3, 0x0a /* Public */,
       5,    1,  527,    3, 0x0a /* Public */,
      68,    1,  530,    3, 0x0a /* Public */,
      70,    2,  533,    3, 0x0a /* Public */,
      70,    1,  538,    3, 0x2a /* Public | MethodCloned */,
      72,    2,  541,    3, 0x0a /* Public */,
      72,    1,  546,    3, 0x2a /* Public | MethodCloned */,
      73,    2,  549,    3, 0x0a /* Public */,
      73,    1,  554,    3, 0x2a /* Public | MethodCloned */,
      74,    2,  557,    3, 0x0a /* Public */,
      74,    1,  562,    3, 0x2a /* Public | MethodCloned */,
      75,    3,  565,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QObjectStar,    5,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13, QMetaType::UShort, 0x80000000 | 16,   10,   14,   15,   17,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13, QMetaType::UShort,   10,   14,   15,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13,   10,   14,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::UShort, 0x80000000 | 16,   10,   15,   17,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::UShort,   10,   15,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::LongLong, 0x80000000 | 2,   10,
    QMetaType::LongLong, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13, QMetaType::UShort, 0x80000000 | 23,   10,   14,   15,   17,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13, QMetaType::UShort,   10,   14,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::UShort, 0x80000000 | 23, 0x80000000 | 25,   10,   24,   15,   17,   26,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::UShort, 0x80000000 | 23,   10,   24,   15,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::UShort,   10,   24,   15,
    QMetaType::Void, 0x80000000 | 2,   10,
    0x80000000 | 29, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    0x80000000 | 13, 0x80000000 | 2,   10,
    QMetaType::UShort, 0x80000000 | 2,   10,
    0x80000000 | 36, 0x80000000 | 2,   10,
    0x80000000 | 13, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::UShort, 0x80000000 | 2,   10,
    0x80000000 | 41, 0x80000000 | 2,   10,
    QMetaType::LongLong, 0x80000000 | 2,   10,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 44, QMetaType::LongLong,   10,   45,   46,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 44, QMetaType::LongLong,   10,   45,   46,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13,   10,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::UShort,   10,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 36,   10,   35,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13,   10,   14,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   10,   54,
    QMetaType::Void, 0x80000000 | 2, QMetaType::UShort,   10,   15,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 41,   10,   57,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong,   10,   59,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 29,   10,   61,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 63, QMetaType::QVariant,   10,   64,   65,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 67,   10,   68,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 63,   10,   64,
    0x80000000 | 4, 0x80000000 | 2,   10,
    0x80000000 | 67, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   10,   71,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   10,   71,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   10,   71,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   10,   71,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 76, QMetaType::LongLong,   10,   45,   77,

 // enums: name, flags, count, data
      78, 0x0,    4,  588,
      83, 0x1,    4,  596,
      84, 0x0,    2,  604,
      87, 0x1,    2,  608,

 // enum data: key, value
      79, uint(PythonQtWrapper_QAbstractSocket::DefaultForPlatform),
      80, uint(PythonQtWrapper_QAbstractSocket::ShareAddress),
      81, uint(PythonQtWrapper_QAbstractSocket::DontShareAddress),
      82, uint(PythonQtWrapper_QAbstractSocket::ReuseAddressHint),
      79, uint(PythonQtWrapper_QAbstractSocket::DefaultForPlatform),
      80, uint(PythonQtWrapper_QAbstractSocket::ShareAddress),
      81, uint(PythonQtWrapper_QAbstractSocket::DontShareAddress),
      82, uint(PythonQtWrapper_QAbstractSocket::ReuseAddressHint),
      85, uint(PythonQtWrapper_QAbstractSocket::PauseNever),
      86, uint(PythonQtWrapper_QAbstractSocket::PauseOnSslErrors),
      85, uint(PythonQtWrapper_QAbstractSocket::PauseNever),
      86, uint(PythonQtWrapper_QAbstractSocket::PauseOnSslErrors),

       0        // eod
};

void PythonQtWrapper_QAbstractSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QAbstractSocket *_t = static_cast<PythonQtWrapper_QAbstractSocket *>(_o);
        switch (_id) {
        case 0: { QAbstractSocket* _r = _t->new_QAbstractSocket((*reinterpret_cast< QAbstractSocket::SocketType(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QAbstractSocket((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 2: _t->abort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->atEnd((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->bind((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< QAbstractSocket::BindMode(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->bind((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->bind((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->bind((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])),(*reinterpret_cast< QAbstractSocket::BindMode(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->bind((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->bind((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 11: { qint64 _r = _t->bytesToWrite((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->canReadLine((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->close((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 14: _t->connectToHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4]))); break;
        case 15: _t->connectToHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3]))); break;
        case 16: _t->connectToHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4])),(*reinterpret_cast< QAbstractSocket::NetworkLayerProtocol(*)>(_a[5]))); break;
        case 17: _t->connectToHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[4]))); break;
        case 18: _t->connectToHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3]))); break;
        case 19: _t->disconnectFromHost((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 20: { QAbstractSocket::SocketError _r = _t->error((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::SocketError*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->flush((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->isSequential((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isValid((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { QHostAddress _r = _t->localAddress((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 25: { unsigned short _r = _t->localPort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 26: { QAbstractSocket::PauseModes _r = _t->pauseMode((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::PauseModes*>(_a[0]) = _r; }  break;
        case 27: { QHostAddress _r = _t->peerAddress((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 28: { QString _r = _t->peerName((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: { unsigned short _r = _t->peerPort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 30: { QNetworkProxy _r = _t->proxy((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy*>(_a[0]) = _r; }  break;
        case 31: { qint64 _r = _t->readBufferSize((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 32: { qint64 _r = _t->readData((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 33: { qint64 _r = _t->readLineData((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 34: _t->resume((*reinterpret_cast< QAbstractSocket*(*)>(_a[1]))); break;
        case 35: _t->setLocalAddress((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 36: _t->setLocalPort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2]))); break;
        case 37: _t->setPauseMode((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::PauseModes(*)>(_a[2]))); break;
        case 38: _t->setPeerAddress((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 39: _t->setPeerName((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 40: _t->setPeerPort((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2]))); break;
        case 41: _t->setProxy((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2]))); break;
        case 42: _t->setReadBufferSize((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 43: _t->setSocketError((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[2]))); break;
        case 44: _t->setSocketOption((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketOption(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 45: _t->setSocketState((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[2]))); break;
        case 46: { QVariant _r = _t->socketOption((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< QAbstractSocket::SocketOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 47: { QAbstractSocket::SocketType _r = _t->socketType((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::SocketType*>(_a[0]) = _r; }  break;
        case 48: { QAbstractSocket::SocketState _r = _t->state((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::SocketState*>(_a[0]) = _r; }  break;
        case 49: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 50: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 51: { bool _r = _t->waitForConnected((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: { bool _r = _t->waitForConnected((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 53: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 54: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 56: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 57: { qint64 _r = _t->writeData((*reinterpret_cast< QAbstractSocket*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 49:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QAbstractSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAbstractSocket.data,
      qt_meta_data_PythonQtWrapper_QAbstractSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QAbstractSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QAbstractSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAbstractSocket.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAbstractSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAbstractSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QAuthenticator_t {
    QByteArrayData data[24];
    char stringdata[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QAuthenticator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QAuthenticator_t qt_meta_stringdata_PythonQtWrapper_QAuthenticator = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QAuthenticator"
QT_MOC_LITERAL(1, 31, 18), // "new_QAuthenticator"
QT_MOC_LITERAL(2, 50, 15), // "QAuthenticator*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 14), // "QAuthenticator"
QT_MOC_LITERAL(5, 82, 5), // "other"
QT_MOC_LITERAL(6, 88, 21), // "delete_QAuthenticator"
QT_MOC_LITERAL(7, 110, 3), // "obj"
QT_MOC_LITERAL(8, 114, 6), // "isNull"
QT_MOC_LITERAL(9, 121, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 138, 6), // "__ne__"
QT_MOC_LITERAL(11, 145, 6), // "__eq__"
QT_MOC_LITERAL(12, 152, 6), // "option"
QT_MOC_LITERAL(13, 159, 3), // "opt"
QT_MOC_LITERAL(14, 163, 7), // "options"
QT_MOC_LITERAL(15, 171, 8), // "password"
QT_MOC_LITERAL(16, 180, 5), // "realm"
QT_MOC_LITERAL(17, 186, 9), // "setOption"
QT_MOC_LITERAL(18, 196, 5), // "value"
QT_MOC_LITERAL(19, 202, 11), // "setPassword"
QT_MOC_LITERAL(20, 214, 8), // "setRealm"
QT_MOC_LITERAL(21, 223, 7), // "setUser"
QT_MOC_LITERAL(22, 231, 4), // "user"
QT_MOC_LITERAL(23, 236, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QAuthenticator\0"
    "new_QAuthenticator\0QAuthenticator*\0\0"
    "QAuthenticator\0other\0delete_QAuthenticator\0"
    "obj\0isNull\0theWrappedObject\0__ne__\0"
    "__eq__\0option\0opt\0options\0password\0"
    "realm\0setOption\0value\0setPassword\0"
    "setRealm\0setUser\0user\0__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QAuthenticator[] = {

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
      10,    2,  104,    3, 0x0a /* Public */,
      11,    2,  109,    3, 0x0a /* Public */,
      12,    2,  114,    3, 0x0a /* Public */,
      14,    1,  119,    3, 0x0a /* Public */,
      15,    1,  122,    3, 0x0a /* Public */,
      16,    1,  125,    3, 0x0a /* Public */,
      17,    3,  128,    3, 0x0a /* Public */,
      19,    2,  135,    3, 0x0a /* Public */,
      20,    2,  140,    3, 0x0a /* Public */,
      21,    2,  145,    3, 0x0a /* Public */,
      22,    1,  150,    3, 0x0a /* Public */,
      23,    1,  153,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QString,    9,   13,
    QMetaType::QVariantHash, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QVariant,    9,   13,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   16,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   22,
    QMetaType::QString, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    7,

       0        // eod
};

void PythonQtWrapper_QAuthenticator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QAuthenticator *_t = static_cast<PythonQtWrapper_QAuthenticator *>(_o);
        switch (_id) {
        case 0: { QAuthenticator* _r = _t->new_QAuthenticator();
            if (_a[0]) *reinterpret_cast< QAuthenticator**>(_a[0]) = _r; }  break;
        case 1: { QAuthenticator* _r = _t->new_QAuthenticator((*reinterpret_cast< const QAuthenticator(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAuthenticator**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QAuthenticator((*reinterpret_cast< QAuthenticator*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->isNull((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->__ne__((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QAuthenticator(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__eq__((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QAuthenticator(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QVariant _r = _t->option((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 7: { QHash<QString,QVariant> _r = _t->options((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHash<QString,QVariant>*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->password((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->realm((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->setOption((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 11: _t->setPassword((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->setRealm((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 13: _t->setUser((*reinterpret_cast< QAuthenticator*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: { QString _r = _t->user((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->__nonzero__((*reinterpret_cast< QAuthenticator*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QAuthenticator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QAuthenticator.data,
      qt_meta_data_PythonQtWrapper_QAuthenticator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QAuthenticator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QAuthenticator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QAuthenticator.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QAuthenticator*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QAuthenticator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QHostAddress_t {
    QByteArrayData data[47];
    char stringdata[558];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QHostAddress_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QHostAddress_t qt_meta_stringdata_PythonQtWrapper_QHostAddress = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QHostAddress"
QT_MOC_LITERAL(1, 29, 16), // "new_QHostAddress"
QT_MOC_LITERAL(2, 46, 13), // "QHostAddress*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 28), // "QHostAddress::SpecialAddress"
QT_MOC_LITERAL(5, 90, 7), // "address"
QT_MOC_LITERAL(6, 98, 12), // "QHostAddress"
QT_MOC_LITERAL(7, 111, 4), // "copy"
QT_MOC_LITERAL(8, 116, 12), // "QIPv6Address"
QT_MOC_LITERAL(9, 129, 7), // "ip6Addr"
QT_MOC_LITERAL(10, 137, 7), // "ip4Addr"
QT_MOC_LITERAL(11, 145, 19), // "delete_QHostAddress"
QT_MOC_LITERAL(12, 165, 3), // "obj"
QT_MOC_LITERAL(13, 169, 5), // "clear"
QT_MOC_LITERAL(14, 175, 16), // "theWrappedObject"
QT_MOC_LITERAL(15, 192, 10), // "isInSubnet"
QT_MOC_LITERAL(16, 203, 6), // "subnet"
QT_MOC_LITERAL(17, 210, 7), // "netmask"
QT_MOC_LITERAL(18, 218, 23), // "QPair<QHostAddress,int>"
QT_MOC_LITERAL(19, 242, 10), // "isLoopback"
QT_MOC_LITERAL(20, 253, 6), // "isNull"
QT_MOC_LITERAL(21, 260, 6), // "__ne__"
QT_MOC_LITERAL(22, 267, 7), // "writeTo"
QT_MOC_LITERAL(23, 275, 12), // "QDataStream&"
QT_MOC_LITERAL(24, 288, 6), // "arg__1"
QT_MOC_LITERAL(25, 295, 6), // "__eq__"
QT_MOC_LITERAL(26, 302, 8), // "readFrom"
QT_MOC_LITERAL(27, 311, 31), // "static_QHostAddress_parseSubnet"
QT_MOC_LITERAL(28, 343, 8), // "protocol"
QT_MOC_LITERAL(29, 352, 37), // "QAbstractSocket::NetworkLayer..."
QT_MOC_LITERAL(30, 390, 7), // "scopeId"
QT_MOC_LITERAL(31, 398, 10), // "setAddress"
QT_MOC_LITERAL(32, 409, 10), // "setScopeId"
QT_MOC_LITERAL(33, 420, 2), // "id"
QT_MOC_LITERAL(34, 423, 13), // "toIPv4Address"
QT_MOC_LITERAL(35, 437, 13), // "toIPv6Address"
QT_MOC_LITERAL(36, 451, 8), // "toString"
QT_MOC_LITERAL(37, 460, 11), // "py_toString"
QT_MOC_LITERAL(38, 472, 11), // "__nonzero__"
QT_MOC_LITERAL(39, 484, 14), // "SpecialAddress"
QT_MOC_LITERAL(40, 499, 4), // "Null"
QT_MOC_LITERAL(41, 504, 9), // "Broadcast"
QT_MOC_LITERAL(42, 514, 9), // "LocalHost"
QT_MOC_LITERAL(43, 524, 13), // "LocalHostIPv6"
QT_MOC_LITERAL(44, 538, 3), // "Any"
QT_MOC_LITERAL(45, 542, 7), // "AnyIPv6"
QT_MOC_LITERAL(46, 550, 7) // "AnyIPv4"

    },
    "PythonQtWrapper_QHostAddress\0"
    "new_QHostAddress\0QHostAddress*\0\0"
    "QHostAddress::SpecialAddress\0address\0"
    "QHostAddress\0copy\0QIPv6Address\0ip6Addr\0"
    "ip4Addr\0delete_QHostAddress\0obj\0clear\0"
    "theWrappedObject\0isInSubnet\0subnet\0"
    "netmask\0QPair<QHostAddress,int>\0"
    "isLoopback\0isNull\0__ne__\0writeTo\0"
    "QDataStream&\0arg__1\0__eq__\0readFrom\0"
    "static_QHostAddress_parseSubnet\0"
    "protocol\0QAbstractSocket::NetworkLayerProtocol\0"
    "scopeId\0setAddress\0setScopeId\0id\0"
    "toIPv4Address\0toIPv6Address\0toString\0"
    "py_toString\0__nonzero__\0SpecialAddress\0"
    "Null\0Broadcast\0LocalHost\0LocalHostIPv6\0"
    "Any\0AnyIPv6\0AnyIPv4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QHostAddress[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       1,  278, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  164,    3, 0x0a /* Public */,
       1,    1,  165,    3, 0x0a /* Public */,
       1,    1,  168,    3, 0x0a /* Public */,
       1,    1,  171,    3, 0x0a /* Public */,
       1,    1,  174,    3, 0x0a /* Public */,
       1,    1,  177,    3, 0x0a /* Public */,
      11,    1,  180,    3, 0x0a /* Public */,
      13,    1,  183,    3, 0x0a /* Public */,
      15,    3,  186,    3, 0x0a /* Public */,
      15,    2,  193,    3, 0x0a /* Public */,
      19,    1,  198,    3, 0x0a /* Public */,
      20,    1,  201,    3, 0x0a /* Public */,
      21,    2,  204,    3, 0x0a /* Public */,
      21,    2,  209,    3, 0x0a /* Public */,
      22,    2,  214,    3, 0x0a /* Public */,
      25,    2,  219,    3, 0x0a /* Public */,
      25,    2,  224,    3, 0x0a /* Public */,
      26,    2,  229,    3, 0x0a /* Public */,
      27,    1,  234,    3, 0x0a /* Public */,
      28,    1,  237,    3, 0x0a /* Public */,
      30,    1,  240,    3, 0x0a /* Public */,
      31,    2,  243,    3, 0x0a /* Public */,
      31,    2,  248,    3, 0x0a /* Public */,
      31,    2,  253,    3, 0x0a /* Public */,
      32,    2,  258,    3, 0x0a /* Public */,
      34,    1,  263,    3, 0x0a /* Public */,
      35,    1,  266,    3, 0x0a /* Public */,
      36,    1,  269,    3, 0x0a /* Public */,
      37,    1,  272,    3, 0x0a /* Public */,
      38,    1,  275,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 6,    7,
    0x80000000 | 2, 0x80000000 | 8,    9,
    0x80000000 | 2, QMetaType::QString,    5,
    0x80000000 | 2, QMetaType::UInt,   10,
    QMetaType::Void, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 6, QMetaType::Int,   14,   16,   17,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 18,   14,   16,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   14,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 6,   14,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,   14,   24,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   14,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 6,   14,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 23,   14,   24,
    0x80000000 | 18, QMetaType::QString,   16,
    0x80000000 | 29, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 8,   14,    9,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,   14,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::UInt,   14,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   14,   33,
    QMetaType::UInt, 0x80000000 | 2,   14,
    0x80000000 | 8, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,    3,
    QMetaType::Bool, 0x80000000 | 2,   12,

 // enums: name, flags, count, data
      39, 0x0,    7,  282,

 // enum data: key, value
      40, uint(PythonQtWrapper_QHostAddress::Null),
      41, uint(PythonQtWrapper_QHostAddress::Broadcast),
      42, uint(PythonQtWrapper_QHostAddress::LocalHost),
      43, uint(PythonQtWrapper_QHostAddress::LocalHostIPv6),
      44, uint(PythonQtWrapper_QHostAddress::Any),
      45, uint(PythonQtWrapper_QHostAddress::AnyIPv6),
      46, uint(PythonQtWrapper_QHostAddress::AnyIPv4),

       0        // eod
};

void PythonQtWrapper_QHostAddress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QHostAddress *_t = static_cast<PythonQtWrapper_QHostAddress *>(_o);
        switch (_id) {
        case 0: { QHostAddress* _r = _t->new_QHostAddress();
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 1: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< QHostAddress::SpecialAddress(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 2: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< const QHostAddress(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 3: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< const QIPv6Address(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 4: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 5: { QHostAddress* _r = _t->new_QHostAddress((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QHostAddress((*reinterpret_cast< QHostAddress*(*)>(_a[1]))); break;
        case 7: _t->clear((*reinterpret_cast< QHostAddress*(*)>(_a[1]))); break;
        case 8: { bool _r = _t->isInSubnet((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isInSubnet((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QPair<QHostAddress,int>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isLoopback((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->isNull((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__ne__((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< QHostAddress::SpecialAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__ne__((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->writeTo((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 15: { bool _r = _t->__eq__((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< QHostAddress::SpecialAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->__eq__((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->readFrom((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 18: { QPair<QHostAddress,int> _r = _t->static_QHostAddress_parseSubnet((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPair<QHostAddress,int>*>(_a[0]) = _r; }  break;
        case 19: { QAbstractSocket::NetworkLayerProtocol _r = _t->protocol((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::NetworkLayerProtocol*>(_a[0]) = _r; }  break;
        case 20: { QString _r = _t->scopeId((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 21: _t->setAddress((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QIPv6Address(*)>(_a[2]))); break;
        case 22: { bool _r = _t->setAddress((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: _t->setAddress((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 24: _t->setScopeId((*reinterpret_cast< QHostAddress*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: { uint _r = _t->toIPv4Address((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 26: { QIPv6Address _r = _t->toIPv6Address((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIPv6Address*>(_a[0]) = _r; }  break;
        case 27: { QString _r = _t->toString((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 28: { QString _r = _t->py_toString((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->__nonzero__((*reinterpret_cast< QHostAddress*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QHostAddress::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHostAddress.data,
      qt_meta_data_PythonQtWrapper_QHostAddress,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QHostAddress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QHostAddress::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHostAddress.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHostAddress*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHostAddress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QHostInfo_t {
    QByteArrayData data[35];
    char stringdata[489];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QHostInfo_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QHostInfo_t qt_meta_stringdata_PythonQtWrapper_QHostInfo = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QHostInfo"
QT_MOC_LITERAL(1, 26, 13), // "new_QHostInfo"
QT_MOC_LITERAL(2, 40, 10), // "QHostInfo*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 9), // "QHostInfo"
QT_MOC_LITERAL(5, 62, 1), // "d"
QT_MOC_LITERAL(6, 64, 8), // "lookupId"
QT_MOC_LITERAL(7, 73, 16), // "delete_QHostInfo"
QT_MOC_LITERAL(8, 90, 3), // "obj"
QT_MOC_LITERAL(9, 94, 32), // "static_QHostInfo_abortHostLookup"
QT_MOC_LITERAL(10, 127, 9), // "addresses"
QT_MOC_LITERAL(11, 137, 19), // "QList<QHostAddress>"
QT_MOC_LITERAL(12, 157, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 174, 5), // "error"
QT_MOC_LITERAL(14, 180, 24), // "QHostInfo::HostInfoError"
QT_MOC_LITERAL(15, 205, 11), // "errorString"
QT_MOC_LITERAL(16, 217, 25), // "static_QHostInfo_fromName"
QT_MOC_LITERAL(17, 243, 4), // "name"
QT_MOC_LITERAL(18, 248, 8), // "hostName"
QT_MOC_LITERAL(19, 257, 32), // "static_QHostInfo_localDomainName"
QT_MOC_LITERAL(20, 290, 30), // "static_QHostInfo_localHostName"
QT_MOC_LITERAL(21, 321, 27), // "static_QHostInfo_lookupHost"
QT_MOC_LITERAL(22, 349, 8), // "receiver"
QT_MOC_LITERAL(23, 358, 11), // "const char*"
QT_MOC_LITERAL(24, 370, 6), // "member"
QT_MOC_LITERAL(25, 377, 12), // "setAddresses"
QT_MOC_LITERAL(26, 390, 8), // "setError"
QT_MOC_LITERAL(27, 399, 14), // "setErrorString"
QT_MOC_LITERAL(28, 414, 11), // "setHostName"
QT_MOC_LITERAL(29, 426, 11), // "setLookupId"
QT_MOC_LITERAL(30, 438, 2), // "id"
QT_MOC_LITERAL(31, 441, 13), // "HostInfoError"
QT_MOC_LITERAL(32, 455, 7), // "NoError"
QT_MOC_LITERAL(33, 463, 12), // "HostNotFound"
QT_MOC_LITERAL(34, 476, 12) // "UnknownError"

    },
    "PythonQtWrapper_QHostInfo\0new_QHostInfo\0"
    "QHostInfo*\0\0QHostInfo\0d\0lookupId\0"
    "delete_QHostInfo\0obj\0"
    "static_QHostInfo_abortHostLookup\0"
    "addresses\0QList<QHostAddress>\0"
    "theWrappedObject\0error\0QHostInfo::HostInfoError\0"
    "errorString\0static_QHostInfo_fromName\0"
    "name\0hostName\0static_QHostInfo_localDomainName\0"
    "static_QHostInfo_localHostName\0"
    "static_QHostInfo_lookupHost\0receiver\0"
    "const char*\0member\0setAddresses\0"
    "setError\0setErrorString\0setHostName\0"
    "setLookupId\0id\0HostInfoError\0NoError\0"
    "HostNotFound\0UnknownError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QHostInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       1,  174, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  109,    3, 0x0a /* Public */,
       1,    1,  112,    3, 0x0a /* Public */,
       1,    0,  115,    3, 0x2a /* Public | MethodCloned */,
       7,    1,  116,    3, 0x0a /* Public */,
       9,    1,  119,    3, 0x0a /* Public */,
      10,    1,  122,    3, 0x0a /* Public */,
      13,    1,  125,    3, 0x0a /* Public */,
      15,    1,  128,    3, 0x0a /* Public */,
      16,    1,  131,    3, 0x0a /* Public */,
      18,    1,  134,    3, 0x0a /* Public */,
      19,    0,  137,    3, 0x0a /* Public */,
      20,    0,  138,    3, 0x0a /* Public */,
      21,    3,  139,    3, 0x0a /* Public */,
       6,    1,  146,    3, 0x0a /* Public */,
      25,    2,  149,    3, 0x0a /* Public */,
      26,    2,  154,    3, 0x0a /* Public */,
      27,    2,  159,    3, 0x0a /* Public */,
      28,    2,  164,    3, 0x0a /* Public */,
      29,    2,  169,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::Int,    6,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, QMetaType::Int,    6,
    0x80000000 | 11, 0x80000000 | 2,   12,
    0x80000000 | 14, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,
    0x80000000 | 4, QMetaType::QString,   17,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int, QMetaType::QString, QMetaType::QObjectStar, 0x80000000 | 23,   17,   22,   24,
    QMetaType::Int, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,   12,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,   12,   13,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   12,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   12,   17,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   12,   30,

 // enums: name, flags, count, data
      31, 0x0,    3,  178,

 // enum data: key, value
      32, uint(PythonQtWrapper_QHostInfo::NoError),
      33, uint(PythonQtWrapper_QHostInfo::HostNotFound),
      34, uint(PythonQtWrapper_QHostInfo::UnknownError),

       0        // eod
};

void PythonQtWrapper_QHostInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QHostInfo *_t = static_cast<PythonQtWrapper_QHostInfo *>(_o);
        switch (_id) {
        case 0: { QHostInfo* _r = _t->new_QHostInfo((*reinterpret_cast< const QHostInfo(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostInfo**>(_a[0]) = _r; }  break;
        case 1: { QHostInfo* _r = _t->new_QHostInfo((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostInfo**>(_a[0]) = _r; }  break;
        case 2: { QHostInfo* _r = _t->new_QHostInfo();
            if (_a[0]) *reinterpret_cast< QHostInfo**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QHostInfo((*reinterpret_cast< QHostInfo*(*)>(_a[1]))); break;
        case 4: _t->static_QHostInfo_abortHostLookup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: { QList<QHostAddress> _r = _t->addresses((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QHostAddress>*>(_a[0]) = _r; }  break;
        case 6: { QHostInfo::HostInfoError _r = _t->error((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostInfo::HostInfoError*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->errorString((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QHostInfo _r = _t->static_QHostInfo_fromName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostInfo*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->hostName((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->static_QHostInfo_localDomainName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QString _r = _t->static_QHostInfo_localHostName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: { int _r = _t->static_QHostInfo_lookupHost((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const char*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->lookupId((*reinterpret_cast< QHostInfo*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->setAddresses((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< const QList<QHostAddress>(*)>(_a[2]))); break;
        case 15: _t->setError((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< QHostInfo::HostInfoError(*)>(_a[2]))); break;
        case 16: _t->setErrorString((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->setHostName((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->setLookupId((*reinterpret_cast< QHostInfo*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QHostInfo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHostInfo.data,
      qt_meta_data_PythonQtWrapper_QHostInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QHostInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QHostInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHostInfo.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHostInfo*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHostInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QHttpMultiPart_t {
    QByteArrayData data[21];
    char stringdata[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QHttpMultiPart_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QHttpMultiPart_t qt_meta_stringdata_PythonQtWrapper_QHttpMultiPart = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QHttpMultiPart"
QT_MOC_LITERAL(1, 31, 18), // "new_QHttpMultiPart"
QT_MOC_LITERAL(2, 50, 15), // "QHttpMultiPart*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 27), // "QHttpMultiPart::ContentType"
QT_MOC_LITERAL(5, 95, 11), // "contentType"
QT_MOC_LITERAL(6, 107, 6), // "parent"
QT_MOC_LITERAL(7, 114, 21), // "delete_QHttpMultiPart"
QT_MOC_LITERAL(8, 136, 3), // "obj"
QT_MOC_LITERAL(9, 140, 6), // "append"
QT_MOC_LITERAL(10, 147, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 164, 9), // "QHttpPart"
QT_MOC_LITERAL(12, 174, 8), // "httpPart"
QT_MOC_LITERAL(13, 183, 8), // "boundary"
QT_MOC_LITERAL(14, 192, 11), // "setBoundary"
QT_MOC_LITERAL(15, 204, 14), // "setContentType"
QT_MOC_LITERAL(16, 219, 11), // "ContentType"
QT_MOC_LITERAL(17, 231, 9), // "MixedType"
QT_MOC_LITERAL(18, 241, 11), // "RelatedType"
QT_MOC_LITERAL(19, 253, 12), // "FormDataType"
QT_MOC_LITERAL(20, 266, 15) // "AlternativeType"

    },
    "PythonQtWrapper_QHttpMultiPart\0"
    "new_QHttpMultiPart\0QHttpMultiPart*\0\0"
    "QHttpMultiPart::ContentType\0contentType\0"
    "parent\0delete_QHttpMultiPart\0obj\0"
    "append\0theWrappedObject\0QHttpPart\0"
    "httpPart\0boundary\0setBoundary\0"
    "setContentType\0ContentType\0MixedType\0"
    "RelatedType\0FormDataType\0AlternativeType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QHttpMultiPart[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       1,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   59,    3, 0x0a /* Public */,
       1,    1,   64,    3, 0x2a /* Public | MethodCloned */,
       1,    1,   67,    3, 0x0a /* Public */,
       1,    0,   70,    3, 0x2a /* Public | MethodCloned */,
       7,    1,   71,    3, 0x0a /* Public */,
       9,    2,   74,    3, 0x0a /* Public */,
      13,    1,   79,    3, 0x0a /* Public */,
      14,    2,   82,    3, 0x0a /* Public */,
      15,    2,   87,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QObjectStar,    5,    6,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QObjectStar,    6,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,   10,   12,
    QMetaType::QByteArray, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray,   10,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   10,    5,

 // enums: name, flags, count, data
      16, 0x0,    4,   96,

 // enum data: key, value
      17, uint(PythonQtWrapper_QHttpMultiPart::MixedType),
      18, uint(PythonQtWrapper_QHttpMultiPart::RelatedType),
      19, uint(PythonQtWrapper_QHttpMultiPart::FormDataType),
      20, uint(PythonQtWrapper_QHttpMultiPart::AlternativeType),

       0        // eod
};

void PythonQtWrapper_QHttpMultiPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QHttpMultiPart *_t = static_cast<PythonQtWrapper_QHttpMultiPart *>(_o);
        switch (_id) {
        case 0: { QHttpMultiPart* _r = _t->new_QHttpMultiPart((*reinterpret_cast< QHttpMultiPart::ContentType(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHttpMultiPart**>(_a[0]) = _r; }  break;
        case 1: { QHttpMultiPart* _r = _t->new_QHttpMultiPart((*reinterpret_cast< QHttpMultiPart::ContentType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpMultiPart**>(_a[0]) = _r; }  break;
        case 2: { QHttpMultiPart* _r = _t->new_QHttpMultiPart((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpMultiPart**>(_a[0]) = _r; }  break;
        case 3: { QHttpMultiPart* _r = _t->new_QHttpMultiPart();
            if (_a[0]) *reinterpret_cast< QHttpMultiPart**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QHttpMultiPart((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1]))); break;
        case 5: _t->append((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1])),(*reinterpret_cast< const QHttpPart(*)>(_a[2]))); break;
        case 6: { QByteArray _r = _t->boundary((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 7: _t->setBoundary((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 8: _t->setContentType((*reinterpret_cast< QHttpMultiPart*(*)>(_a[1])),(*reinterpret_cast< QHttpMultiPart::ContentType(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpMultiPart* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpMultiPart* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpMultiPart* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpMultiPart* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpMultiPart* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QHttpMultiPart::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHttpMultiPart.data,
      qt_meta_data_PythonQtWrapper_QHttpMultiPart,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QHttpMultiPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QHttpMultiPart::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHttpMultiPart.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHttpMultiPart*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHttpMultiPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QHttpPart_t {
    QByteArrayData data[26];
    char stringdata[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QHttpPart_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QHttpPart_t qt_meta_stringdata_PythonQtWrapper_QHttpPart = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QHttpPart"
QT_MOC_LITERAL(1, 26, 13), // "new_QHttpPart"
QT_MOC_LITERAL(2, 40, 10), // "QHttpPart*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 9), // "QHttpPart"
QT_MOC_LITERAL(5, 62, 5), // "other"
QT_MOC_LITERAL(6, 68, 16), // "delete_QHttpPart"
QT_MOC_LITERAL(7, 85, 3), // "obj"
QT_MOC_LITERAL(8, 89, 6), // "__ne__"
QT_MOC_LITERAL(9, 96, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 113, 15), // "operator_assign"
QT_MOC_LITERAL(11, 129, 6), // "__eq__"
QT_MOC_LITERAL(12, 136, 7), // "setBody"
QT_MOC_LITERAL(13, 144, 4), // "body"
QT_MOC_LITERAL(14, 149, 13), // "setBodyDevice"
QT_MOC_LITERAL(15, 163, 10), // "QIODevice*"
QT_MOC_LITERAL(16, 174, 6), // "device"
QT_MOC_LITERAL(17, 181, 9), // "setHeader"
QT_MOC_LITERAL(18, 191, 29), // "QNetworkRequest::KnownHeaders"
QT_MOC_LITERAL(19, 221, 6), // "header"
QT_MOC_LITERAL(20, 228, 5), // "value"
QT_MOC_LITERAL(21, 234, 12), // "setRawHeader"
QT_MOC_LITERAL(22, 247, 10), // "headerName"
QT_MOC_LITERAL(23, 258, 11), // "headerValue"
QT_MOC_LITERAL(24, 270, 4), // "swap"
QT_MOC_LITERAL(25, 275, 10) // "QHttpPart&"

    },
    "PythonQtWrapper_QHttpPart\0new_QHttpPart\0"
    "QHttpPart*\0\0QHttpPart\0other\0"
    "delete_QHttpPart\0obj\0__ne__\0"
    "theWrappedObject\0operator_assign\0"
    "__eq__\0setBody\0body\0setBodyDevice\0"
    "QIODevice*\0device\0setHeader\0"
    "QNetworkRequest::KnownHeaders\0header\0"
    "value\0setRawHeader\0headerName\0headerValue\0"
    "swap\0QHttpPart&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QHttpPart[] = {

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
      10,    2,   81,    3, 0x0a /* Public */,
      11,    2,   86,    3, 0x0a /* Public */,
      12,    2,   91,    3, 0x0a /* Public */,
      14,    2,   96,    3, 0x0a /* Public */,
      17,    3,  101,    3, 0x0a /* Public */,
      21,    3,  108,    3, 0x0a /* Public */,
      24,    2,  115,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray,    9,   13,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 15,    9,   16,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18, QMetaType::QVariant,    9,   19,   20,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::QByteArray,    9,   22,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25,    9,    5,

       0        // eod
};

void PythonQtWrapper_QHttpPart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QHttpPart *_t = static_cast<PythonQtWrapper_QHttpPart *>(_o);
        switch (_id) {
        case 0: { QHttpPart* _r = _t->new_QHttpPart();
            if (_a[0]) *reinterpret_cast< QHttpPart**>(_a[0]) = _r; }  break;
        case 1: { QHttpPart* _r = _t->new_QHttpPart((*reinterpret_cast< const QHttpPart(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHttpPart**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QHttpPart((*reinterpret_cast< QHttpPart*(*)>(_a[1]))); break;
        case 3: { bool _r = _t->__ne__((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QHttpPart(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QHttpPart* _r = _t->operator_assign((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QHttpPart(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QHttpPart**>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->__eq__((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QHttpPart(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setBody((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 7: _t->setBodyDevice((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 8: _t->setHeader((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 9: _t->setRawHeader((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 10: _t->swap((*reinterpret_cast< QHttpPart*(*)>(_a[1])),(*reinterpret_cast< QHttpPart(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QHttpPart::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QHttpPart.data,
      qt_meta_data_PythonQtWrapper_QHttpPart,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QHttpPart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QHttpPart::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QHttpPart.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QHttpPart*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QHttpPart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QIPv6Address_t {
    QByteArrayData data[8];
    char stringdata[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QIPv6Address_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QIPv6Address_t qt_meta_stringdata_PythonQtWrapper_QIPv6Address = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QIPv6Address"
QT_MOC_LITERAL(1, 29, 16), // "new_QIPv6Address"
QT_MOC_LITERAL(2, 46, 13), // "QIPv6Address*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 12), // "QIPv6Address"
QT_MOC_LITERAL(5, 74, 5), // "other"
QT_MOC_LITERAL(6, 80, 19), // "delete_QIPv6Address"
QT_MOC_LITERAL(7, 100, 3) // "obj"

    },
    "PythonQtWrapper_QIPv6Address\0"
    "new_QIPv6Address\0QIPv6Address*\0\0"
    "QIPv6Address\0other\0delete_QIPv6Address\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QIPv6Address[] = {

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

void PythonQtWrapper_QIPv6Address::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QIPv6Address *_t = static_cast<PythonQtWrapper_QIPv6Address *>(_o);
        switch (_id) {
        case 0: { QIPv6Address* _r = _t->new_QIPv6Address();
            if (_a[0]) *reinterpret_cast< QIPv6Address**>(_a[0]) = _r; }  break;
        case 1: { QIPv6Address* _r = _t->new_QIPv6Address((*reinterpret_cast< const QIPv6Address(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QIPv6Address**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QIPv6Address((*reinterpret_cast< QIPv6Address*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QIPv6Address::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QIPv6Address.data,
      qt_meta_data_PythonQtWrapper_QIPv6Address,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QIPv6Address::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QIPv6Address::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QIPv6Address.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QIPv6Address*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QIPv6Address::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QLocalServer_t {
    QByteArrayData data[42];
    char stringdata[632];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QLocalServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QLocalServer_t qt_meta_stringdata_PythonQtWrapper_QLocalServer = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QLocalServer"
QT_MOC_LITERAL(1, 29, 16), // "new_QLocalServer"
QT_MOC_LITERAL(2, 46, 13), // "QLocalServer*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 6), // "parent"
QT_MOC_LITERAL(5, 68, 19), // "delete_QLocalServer"
QT_MOC_LITERAL(6, 88, 3), // "obj"
QT_MOC_LITERAL(7, 92, 5), // "close"
QT_MOC_LITERAL(8, 98, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 115, 11), // "errorString"
QT_MOC_LITERAL(10, 127, 14), // "fullServerName"
QT_MOC_LITERAL(11, 142, 21), // "hasPendingConnections"
QT_MOC_LITERAL(12, 164, 18), // "incomingConnection"
QT_MOC_LITERAL(13, 183, 8), // "quintptr"
QT_MOC_LITERAL(14, 192, 16), // "socketDescriptor"
QT_MOC_LITERAL(15, 209, 11), // "isListening"
QT_MOC_LITERAL(16, 221, 6), // "listen"
QT_MOC_LITERAL(17, 228, 4), // "name"
QT_MOC_LITERAL(18, 233, 21), // "maxPendingConnections"
QT_MOC_LITERAL(19, 255, 21), // "nextPendingConnection"
QT_MOC_LITERAL(20, 277, 13), // "QLocalSocket*"
QT_MOC_LITERAL(21, 291, 32), // "static_QLocalServer_removeServer"
QT_MOC_LITERAL(22, 324, 11), // "serverError"
QT_MOC_LITERAL(23, 336, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(24, 365, 10), // "serverName"
QT_MOC_LITERAL(25, 376, 24), // "setMaxPendingConnections"
QT_MOC_LITERAL(26, 401, 14), // "numConnections"
QT_MOC_LITERAL(27, 416, 16), // "setSocketOptions"
QT_MOC_LITERAL(28, 433, 27), // "QLocalServer::SocketOptions"
QT_MOC_LITERAL(29, 461, 7), // "options"
QT_MOC_LITERAL(30, 469, 13), // "socketOptions"
QT_MOC_LITERAL(31, 483, 20), // "waitForNewConnection"
QT_MOC_LITERAL(32, 504, 4), // "msec"
QT_MOC_LITERAL(33, 509, 5), // "bool*"
QT_MOC_LITERAL(34, 515, 8), // "timedOut"
QT_MOC_LITERAL(35, 524, 12), // "SocketOption"
QT_MOC_LITERAL(36, 537, 9), // "NoOptions"
QT_MOC_LITERAL(37, 547, 16), // "UserAccessOption"
QT_MOC_LITERAL(38, 564, 17), // "GroupAccessOption"
QT_MOC_LITERAL(39, 582, 17), // "OtherAccessOption"
QT_MOC_LITERAL(40, 600, 17), // "WorldAccessOption"
QT_MOC_LITERAL(41, 618, 13) // "SocketOptions"

    },
    "PythonQtWrapper_QLocalServer\0"
    "new_QLocalServer\0QLocalServer*\0\0parent\0"
    "delete_QLocalServer\0obj\0close\0"
    "theWrappedObject\0errorString\0"
    "fullServerName\0hasPendingConnections\0"
    "incomingConnection\0quintptr\0"
    "socketDescriptor\0isListening\0listen\0"
    "name\0maxPendingConnections\0"
    "nextPendingConnection\0QLocalSocket*\0"
    "static_QLocalServer_removeServer\0"
    "serverError\0QAbstractSocket::SocketError\0"
    "serverName\0setMaxPendingConnections\0"
    "numConnections\0setSocketOptions\0"
    "QLocalServer::SocketOptions\0options\0"
    "socketOptions\0waitForNewConnection\0"
    "msec\0bool*\0timedOut\0SocketOption\0"
    "NoOptions\0UserAccessOption\0GroupAccessOption\0"
    "OtherAccessOption\0WorldAccessOption\0"
    "SocketOptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QLocalServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       2,  194, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  119,    3, 0x0a /* Public */,
       1,    0,  122,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  123,    3, 0x0a /* Public */,
       7,    1,  126,    3, 0x0a /* Public */,
       9,    1,  129,    3, 0x0a /* Public */,
      10,    1,  132,    3, 0x0a /* Public */,
      11,    1,  135,    3, 0x0a /* Public */,
      12,    2,  138,    3, 0x0a /* Public */,
      15,    1,  143,    3, 0x0a /* Public */,
      16,    2,  146,    3, 0x0a /* Public */,
      18,    1,  151,    3, 0x0a /* Public */,
      19,    1,  154,    3, 0x0a /* Public */,
      21,    1,  157,    3, 0x0a /* Public */,
      22,    1,  160,    3, 0x0a /* Public */,
      24,    1,  163,    3, 0x0a /* Public */,
      25,    2,  166,    3, 0x0a /* Public */,
      27,    2,  171,    3, 0x0a /* Public */,
      30,    1,  176,    3, 0x0a /* Public */,
      31,    3,  179,    3, 0x0a /* Public */,
      31,    2,  186,    3, 0x2a /* Public | MethodCloned */,
      31,    1,  191,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13,    8,   14,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QString,    8,   17,
    QMetaType::Int, 0x80000000 | 2,    8,
    0x80000000 | 20, 0x80000000 | 2,    8,
    QMetaType::Bool, QMetaType::QString,   17,
    0x80000000 | 23, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    8,   26,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 28,    8,   29,
    0x80000000 | 28, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int, 0x80000000 | 33,    8,   32,   34,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    8,   32,
    QMetaType::Bool, 0x80000000 | 2,    8,

 // enums: name, flags, count, data
      35, 0x0,    5,  202,
      41, 0x1,    5,  212,

 // enum data: key, value
      36, uint(PythonQtWrapper_QLocalServer::NoOptions),
      37, uint(PythonQtWrapper_QLocalServer::UserAccessOption),
      38, uint(PythonQtWrapper_QLocalServer::GroupAccessOption),
      39, uint(PythonQtWrapper_QLocalServer::OtherAccessOption),
      40, uint(PythonQtWrapper_QLocalServer::WorldAccessOption),
      36, uint(PythonQtWrapper_QLocalServer::NoOptions),
      37, uint(PythonQtWrapper_QLocalServer::UserAccessOption),
      38, uint(PythonQtWrapper_QLocalServer::GroupAccessOption),
      39, uint(PythonQtWrapper_QLocalServer::OtherAccessOption),
      40, uint(PythonQtWrapper_QLocalServer::WorldAccessOption),

       0        // eod
};

void PythonQtWrapper_QLocalServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QLocalServer *_t = static_cast<PythonQtWrapper_QLocalServer *>(_o);
        switch (_id) {
        case 0: { QLocalServer* _r = _t->new_QLocalServer((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalServer**>(_a[0]) = _r; }  break;
        case 1: { QLocalServer* _r = _t->new_QLocalServer();
            if (_a[0]) *reinterpret_cast< QLocalServer**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QLocalServer((*reinterpret_cast< QLocalServer*(*)>(_a[1]))); break;
        case 3: _t->close((*reinterpret_cast< QLocalServer*(*)>(_a[1]))); break;
        case 4: { QString _r = _t->errorString((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->fullServerName((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->hasPendingConnections((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->incomingConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< quintptr(*)>(_a[2]))); break;
        case 8: { bool _r = _t->isListening((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->listen((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { int _r = _t->maxPendingConnections((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { QLocalSocket* _r = _t->nextPendingConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalSocket**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->static_QLocalServer_removeServer((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QAbstractSocket::SocketError _r = _t->serverError((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractSocket::SocketError*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->serverName((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: _t->setMaxPendingConnections((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->setSocketOptions((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< QLocalServer::SocketOptions(*)>(_a[2]))); break;
        case 17: { QLocalServer::SocketOptions _r = _t->socketOptions((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalServer::SocketOptions*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->waitForNewConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->waitForNewConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->waitForNewConnection((*reinterpret_cast< QLocalServer*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalServer* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QLocalServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLocalServer.data,
      qt_meta_data_PythonQtWrapper_QLocalServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QLocalServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QLocalServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLocalServer.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLocalServer*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLocalServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QLocalSocket_t {
    QByteArrayData data[60];
    char stringdata[862];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QLocalSocket_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QLocalSocket_t qt_meta_stringdata_PythonQtWrapper_QLocalSocket = {
    {
QT_MOC_LITERAL(0, 0, 28), // "PythonQtWrapper_QLocalSocket"
QT_MOC_LITERAL(1, 29, 16), // "new_QLocalSocket"
QT_MOC_LITERAL(2, 46, 13), // "QLocalSocket*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 6), // "parent"
QT_MOC_LITERAL(5, 68, 19), // "delete_QLocalSocket"
QT_MOC_LITERAL(6, 88, 3), // "obj"
QT_MOC_LITERAL(7, 92, 5), // "abort"
QT_MOC_LITERAL(8, 98, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 115, 14), // "bytesAvailable"
QT_MOC_LITERAL(10, 130, 12), // "bytesToWrite"
QT_MOC_LITERAL(11, 143, 11), // "canReadLine"
QT_MOC_LITERAL(12, 155, 5), // "close"
QT_MOC_LITERAL(13, 161, 15), // "connectToServer"
QT_MOC_LITERAL(14, 177, 19), // "QIODevice::OpenMode"
QT_MOC_LITERAL(15, 197, 8), // "openMode"
QT_MOC_LITERAL(16, 206, 4), // "name"
QT_MOC_LITERAL(17, 211, 20), // "disconnectFromServer"
QT_MOC_LITERAL(18, 232, 5), // "error"
QT_MOC_LITERAL(19, 238, 30), // "QLocalSocket::LocalSocketError"
QT_MOC_LITERAL(20, 269, 5), // "flush"
QT_MOC_LITERAL(21, 275, 14), // "fullServerName"
QT_MOC_LITERAL(22, 290, 12), // "isSequential"
QT_MOC_LITERAL(23, 303, 7), // "isValid"
QT_MOC_LITERAL(24, 311, 4), // "open"
QT_MOC_LITERAL(25, 316, 14), // "readBufferSize"
QT_MOC_LITERAL(26, 331, 8), // "readData"
QT_MOC_LITERAL(27, 340, 5), // "char*"
QT_MOC_LITERAL(28, 346, 6), // "arg__1"
QT_MOC_LITERAL(29, 353, 6), // "arg__2"
QT_MOC_LITERAL(30, 360, 10), // "serverName"
QT_MOC_LITERAL(31, 371, 17), // "setReadBufferSize"
QT_MOC_LITERAL(32, 389, 4), // "size"
QT_MOC_LITERAL(33, 394, 13), // "setServerName"
QT_MOC_LITERAL(34, 408, 5), // "state"
QT_MOC_LITERAL(35, 414, 30), // "QLocalSocket::LocalSocketState"
QT_MOC_LITERAL(36, 445, 19), // "waitForBytesWritten"
QT_MOC_LITERAL(37, 465, 5), // "msecs"
QT_MOC_LITERAL(38, 471, 16), // "waitForConnected"
QT_MOC_LITERAL(39, 488, 19), // "waitForDisconnected"
QT_MOC_LITERAL(40, 508, 16), // "waitForReadyRead"
QT_MOC_LITERAL(41, 525, 9), // "writeData"
QT_MOC_LITERAL(42, 535, 11), // "const char*"
QT_MOC_LITERAL(43, 547, 16), // "LocalSocketError"
QT_MOC_LITERAL(44, 564, 22), // "ConnectionRefusedError"
QT_MOC_LITERAL(45, 587, 15), // "PeerClosedError"
QT_MOC_LITERAL(46, 603, 19), // "ServerNotFoundError"
QT_MOC_LITERAL(47, 623, 17), // "SocketAccessError"
QT_MOC_LITERAL(48, 641, 19), // "SocketResourceError"
QT_MOC_LITERAL(49, 661, 18), // "SocketTimeoutError"
QT_MOC_LITERAL(50, 680, 21), // "DatagramTooLargeError"
QT_MOC_LITERAL(51, 702, 15), // "ConnectionError"
QT_MOC_LITERAL(52, 718, 31), // "UnsupportedSocketOperationError"
QT_MOC_LITERAL(53, 750, 18), // "UnknownSocketError"
QT_MOC_LITERAL(54, 769, 14), // "OperationError"
QT_MOC_LITERAL(55, 784, 16), // "LocalSocketState"
QT_MOC_LITERAL(56, 801, 16), // "UnconnectedState"
QT_MOC_LITERAL(57, 818, 15), // "ConnectingState"
QT_MOC_LITERAL(58, 834, 14), // "ConnectedState"
QT_MOC_LITERAL(59, 849, 12) // "ClosingState"

    },
    "PythonQtWrapper_QLocalSocket\0"
    "new_QLocalSocket\0QLocalSocket*\0\0parent\0"
    "delete_QLocalSocket\0obj\0abort\0"
    "theWrappedObject\0bytesAvailable\0"
    "bytesToWrite\0canReadLine\0close\0"
    "connectToServer\0QIODevice::OpenMode\0"
    "openMode\0name\0disconnectFromServer\0"
    "error\0QLocalSocket::LocalSocketError\0"
    "flush\0fullServerName\0isSequential\0"
    "isValid\0open\0readBufferSize\0readData\0"
    "char*\0arg__1\0arg__2\0serverName\0"
    "setReadBufferSize\0size\0setServerName\0"
    "state\0QLocalSocket::LocalSocketState\0"
    "waitForBytesWritten\0msecs\0waitForConnected\0"
    "waitForDisconnected\0waitForReadyRead\0"
    "writeData\0const char*\0LocalSocketError\0"
    "ConnectionRefusedError\0PeerClosedError\0"
    "ServerNotFoundError\0SocketAccessError\0"
    "SocketResourceError\0SocketTimeoutError\0"
    "DatagramTooLargeError\0ConnectionError\0"
    "UnsupportedSocketOperationError\0"
    "UnknownSocketError\0OperationError\0"
    "LocalSocketState\0UnconnectedState\0"
    "ConnectingState\0ConnectedState\0"
    "ClosingState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QLocalSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       2,  322, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  189,    3, 0x0a /* Public */,
       1,    0,  192,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  193,    3, 0x0a /* Public */,
       7,    1,  196,    3, 0x0a /* Public */,
       9,    1,  199,    3, 0x0a /* Public */,
      10,    1,  202,    3, 0x0a /* Public */,
      11,    1,  205,    3, 0x0a /* Public */,
      12,    1,  208,    3, 0x0a /* Public */,
      13,    2,  211,    3, 0x0a /* Public */,
      13,    1,  216,    3, 0x2a /* Public | MethodCloned */,
      13,    3,  219,    3, 0x0a /* Public */,
      13,    2,  226,    3, 0x2a /* Public | MethodCloned */,
      17,    1,  231,    3, 0x0a /* Public */,
      18,    1,  234,    3, 0x0a /* Public */,
      20,    1,  237,    3, 0x0a /* Public */,
      21,    1,  240,    3, 0x0a /* Public */,
      22,    1,  243,    3, 0x0a /* Public */,
      23,    1,  246,    3, 0x0a /* Public */,
      24,    2,  249,    3, 0x0a /* Public */,
      24,    1,  254,    3, 0x2a /* Public | MethodCloned */,
      25,    1,  257,    3, 0x0a /* Public */,
      26,    3,  260,    3, 0x0a /* Public */,
      30,    1,  267,    3, 0x0a /* Public */,
      31,    2,  270,    3, 0x0a /* Public */,
      33,    2,  275,    3, 0x0a /* Public */,
      34,    1,  280,    3, 0x0a /* Public */,
      36,    2,  283,    3, 0x0a /* Public */,
      36,    1,  288,    3, 0x2a /* Public | MethodCloned */,
      38,    2,  291,    3, 0x0a /* Public */,
      38,    1,  296,    3, 0x2a /* Public | MethodCloned */,
      39,    2,  299,    3, 0x0a /* Public */,
      39,    1,  304,    3, 0x2a /* Public | MethodCloned */,
      40,    2,  307,    3, 0x0a /* Public */,
      40,    1,  312,    3, 0x2a /* Public | MethodCloned */,
      41,    3,  315,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14,    8,   15,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, 0x80000000 | 14,    8,   16,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    8,   16,
    QMetaType::Void, 0x80000000 | 2,    8,
    0x80000000 | 19, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::QString, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 14,    8,   15,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 27, QMetaType::LongLong,    8,   28,   29,
    QMetaType::QString, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong,    8,   32,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    8,   16,
    0x80000000 | 35, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    8,   37,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    8,   37,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    8,   37,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,    8,   37,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 42, QMetaType::LongLong,    8,   28,   29,

 // enums: name, flags, count, data
      43, 0x0,   11,  330,
      55, 0x0,    4,  352,

 // enum data: key, value
      44, uint(PythonQtWrapper_QLocalSocket::ConnectionRefusedError),
      45, uint(PythonQtWrapper_QLocalSocket::PeerClosedError),
      46, uint(PythonQtWrapper_QLocalSocket::ServerNotFoundError),
      47, uint(PythonQtWrapper_QLocalSocket::SocketAccessError),
      48, uint(PythonQtWrapper_QLocalSocket::SocketResourceError),
      49, uint(PythonQtWrapper_QLocalSocket::SocketTimeoutError),
      50, uint(PythonQtWrapper_QLocalSocket::DatagramTooLargeError),
      51, uint(PythonQtWrapper_QLocalSocket::ConnectionError),
      52, uint(PythonQtWrapper_QLocalSocket::UnsupportedSocketOperationError),
      53, uint(PythonQtWrapper_QLocalSocket::UnknownSocketError),
      54, uint(PythonQtWrapper_QLocalSocket::OperationError),
      56, uint(PythonQtWrapper_QLocalSocket::UnconnectedState),
      57, uint(PythonQtWrapper_QLocalSocket::ConnectingState),
      58, uint(PythonQtWrapper_QLocalSocket::ConnectedState),
      59, uint(PythonQtWrapper_QLocalSocket::ClosingState),

       0        // eod
};

void PythonQtWrapper_QLocalSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QLocalSocket *_t = static_cast<PythonQtWrapper_QLocalSocket *>(_o);
        switch (_id) {
        case 0: { QLocalSocket* _r = _t->new_QLocalSocket((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalSocket**>(_a[0]) = _r; }  break;
        case 1: { QLocalSocket* _r = _t->new_QLocalSocket();
            if (_a[0]) *reinterpret_cast< QLocalSocket**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QLocalSocket((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 3: _t->abort((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 4: { qint64 _r = _t->bytesAvailable((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: { qint64 _r = _t->bytesToWrite((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->canReadLine((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->close((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 8: _t->connectToServer((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2]))); break;
        case 9: _t->connectToServer((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 10: _t->connectToServer((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[3]))); break;
        case 11: _t->connectToServer((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->disconnectFromServer((*reinterpret_cast< QLocalSocket*(*)>(_a[1]))); break;
        case 13: { QLocalSocket::LocalSocketError _r = _t->error((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalSocket::LocalSocketError*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->flush((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QString _r = _t->fullServerName((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->isSequential((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->isValid((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->open((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< QIODevice::OpenMode(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->open((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { qint64 _r = _t->readBufferSize((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 21: { qint64 _r = _t->readData((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 22: { QString _r = _t->serverName((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 23: _t->setReadBufferSize((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 24: _t->setServerName((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: { QLocalSocket::LocalSocketState _r = _t->state((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QLocalSocket::LocalSocketState*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->waitForBytesWritten((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { bool _r = _t->waitForConnected((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->waitForConnected((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->waitForDisconnected((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: { bool _r = _t->waitForReadyRead((*reinterpret_cast< QLocalSocket*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { qint64 _r = _t->writeData((*reinterpret_cast< QLocalSocket*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLocalSocket* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QLocalSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QLocalSocket.data,
      qt_meta_data_PythonQtWrapper_QLocalSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QLocalSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QLocalSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QLocalSocket.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QLocalSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QLocalSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QNetworkAccessManager_t {
    QByteArrayData data[68];
    char stringdata[987];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkAccessManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkAccessManager_t qt_meta_stringdata_PythonQtWrapper_QNetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_QNetworkAcces..."
QT_MOC_LITERAL(1, 38, 25), // "new_QNetworkAccessManager"
QT_MOC_LITERAL(2, 64, 22), // "QNetworkAccessManager*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 6), // "parent"
QT_MOC_LITERAL(5, 95, 28), // "delete_QNetworkAccessManager"
QT_MOC_LITERAL(6, 124, 3), // "obj"
QT_MOC_LITERAL(7, 128, 19), // "activeConfiguration"
QT_MOC_LITERAL(8, 148, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(9, 170, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 187, 5), // "cache"
QT_MOC_LITERAL(11, 193, 22), // "QAbstractNetworkCache*"
QT_MOC_LITERAL(12, 216, 16), // "clearAccessCache"
QT_MOC_LITERAL(13, 233, 13), // "configuration"
QT_MOC_LITERAL(14, 247, 13), // "connectToHost"
QT_MOC_LITERAL(15, 261, 8), // "hostName"
QT_MOC_LITERAL(16, 270, 4), // "port"
QT_MOC_LITERAL(17, 275, 22), // "connectToHostEncrypted"
QT_MOC_LITERAL(18, 298, 17), // "QSslConfiguration"
QT_MOC_LITERAL(19, 316, 16), // "sslConfiguration"
QT_MOC_LITERAL(20, 333, 9), // "cookieJar"
QT_MOC_LITERAL(21, 343, 18), // "QNetworkCookieJar*"
QT_MOC_LITERAL(22, 362, 13), // "createRequest"
QT_MOC_LITERAL(23, 376, 14), // "QNetworkReply*"
QT_MOC_LITERAL(24, 391, 32), // "QNetworkAccessManager::Operation"
QT_MOC_LITERAL(25, 424, 2), // "op"
QT_MOC_LITERAL(26, 427, 15), // "QNetworkRequest"
QT_MOC_LITERAL(27, 443, 7), // "request"
QT_MOC_LITERAL(28, 451, 10), // "QIODevice*"
QT_MOC_LITERAL(29, 462, 12), // "outgoingData"
QT_MOC_LITERAL(30, 475, 14), // "deleteResource"
QT_MOC_LITERAL(31, 490, 3), // "get"
QT_MOC_LITERAL(32, 494, 4), // "head"
QT_MOC_LITERAL(33, 499, 17), // "networkAccessible"
QT_MOC_LITERAL(34, 517, 43), // "QNetworkAccessManager::Networ..."
QT_MOC_LITERAL(35, 561, 4), // "post"
QT_MOC_LITERAL(36, 566, 15), // "QHttpMultiPart*"
QT_MOC_LITERAL(37, 582, 9), // "multiPart"
QT_MOC_LITERAL(38, 592, 4), // "data"
QT_MOC_LITERAL(39, 597, 5), // "proxy"
QT_MOC_LITERAL(40, 603, 13), // "QNetworkProxy"
QT_MOC_LITERAL(41, 617, 12), // "proxyFactory"
QT_MOC_LITERAL(42, 630, 21), // "QNetworkProxyFactory*"
QT_MOC_LITERAL(43, 652, 3), // "put"
QT_MOC_LITERAL(44, 656, 17), // "sendCustomRequest"
QT_MOC_LITERAL(45, 674, 4), // "verb"
QT_MOC_LITERAL(46, 679, 8), // "setCache"
QT_MOC_LITERAL(47, 688, 16), // "setConfiguration"
QT_MOC_LITERAL(48, 705, 6), // "config"
QT_MOC_LITERAL(49, 712, 12), // "setCookieJar"
QT_MOC_LITERAL(50, 725, 20), // "setNetworkAccessible"
QT_MOC_LITERAL(51, 746, 10), // "accessible"
QT_MOC_LITERAL(52, 757, 8), // "setProxy"
QT_MOC_LITERAL(53, 766, 15), // "setProxyFactory"
QT_MOC_LITERAL(54, 782, 7), // "factory"
QT_MOC_LITERAL(55, 790, 16), // "supportedSchemes"
QT_MOC_LITERAL(56, 807, 20), // "NetworkAccessibility"
QT_MOC_LITERAL(57, 828, 20), // "UnknownAccessibility"
QT_MOC_LITERAL(58, 849, 13), // "NotAccessible"
QT_MOC_LITERAL(59, 863, 10), // "Accessible"
QT_MOC_LITERAL(60, 874, 9), // "Operation"
QT_MOC_LITERAL(61, 884, 13), // "HeadOperation"
QT_MOC_LITERAL(62, 898, 12), // "GetOperation"
QT_MOC_LITERAL(63, 911, 12), // "PutOperation"
QT_MOC_LITERAL(64, 924, 13), // "PostOperation"
QT_MOC_LITERAL(65, 938, 15), // "DeleteOperation"
QT_MOC_LITERAL(66, 954, 15), // "CustomOperation"
QT_MOC_LITERAL(67, 970, 16) // "UnknownOperation"

    },
    "PythonQtWrapper_QNetworkAccessManager\0"
    "new_QNetworkAccessManager\0"
    "QNetworkAccessManager*\0\0parent\0"
    "delete_QNetworkAccessManager\0obj\0"
    "activeConfiguration\0QNetworkConfiguration\0"
    "theWrappedObject\0cache\0QAbstractNetworkCache*\0"
    "clearAccessCache\0configuration\0"
    "connectToHost\0hostName\0port\0"
    "connectToHostEncrypted\0QSslConfiguration\0"
    "sslConfiguration\0cookieJar\0"
    "QNetworkCookieJar*\0createRequest\0"
    "QNetworkReply*\0QNetworkAccessManager::Operation\0"
    "op\0QNetworkRequest\0request\0QIODevice*\0"
    "outgoingData\0deleteResource\0get\0head\0"
    "networkAccessible\0"
    "QNetworkAccessManager::NetworkAccessibility\0"
    "post\0QHttpMultiPart*\0multiPart\0data\0"
    "proxy\0QNetworkProxy\0proxyFactory\0"
    "QNetworkProxyFactory*\0put\0sendCustomRequest\0"
    "verb\0setCache\0setConfiguration\0config\0"
    "setCookieJar\0setNetworkAccessible\0"
    "accessible\0setProxy\0setProxyFactory\0"
    "factory\0supportedSchemes\0NetworkAccessibility\0"
    "UnknownAccessibility\0NotAccessible\0"
    "Accessible\0Operation\0HeadOperation\0"
    "GetOperation\0PutOperation\0PostOperation\0"
    "DeleteOperation\0CustomOperation\0"
    "UnknownOperation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkAccessManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       2,  380, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  194,    3, 0x0a /* Public */,
       1,    0,  197,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  198,    3, 0x0a /* Public */,
       7,    1,  201,    3, 0x0a /* Public */,
      10,    1,  204,    3, 0x0a /* Public */,
      12,    1,  207,    3, 0x0a /* Public */,
      13,    1,  210,    3, 0x0a /* Public */,
      14,    3,  213,    3, 0x0a /* Public */,
      14,    2,  220,    3, 0x2a /* Public | MethodCloned */,
      17,    4,  225,    3, 0x0a /* Public */,
      17,    3,  234,    3, 0x2a /* Public | MethodCloned */,
      17,    2,  241,    3, 0x2a /* Public | MethodCloned */,
      20,    1,  246,    3, 0x0a /* Public */,
      22,    4,  249,    3, 0x0a /* Public */,
      22,    3,  258,    3, 0x2a /* Public | MethodCloned */,
      30,    2,  265,    3, 0x0a /* Public */,
      31,    2,  270,    3, 0x0a /* Public */,
      32,    2,  275,    3, 0x0a /* Public */,
      33,    1,  280,    3, 0x0a /* Public */,
      35,    3,  283,    3, 0x0a /* Public */,
      35,    3,  290,    3, 0x0a /* Public */,
      35,    3,  297,    3, 0x0a /* Public */,
      39,    1,  304,    3, 0x0a /* Public */,
      41,    1,  307,    3, 0x0a /* Public */,
      43,    3,  310,    3, 0x0a /* Public */,
      43,    3,  317,    3, 0x0a /* Public */,
      43,    3,  324,    3, 0x0a /* Public */,
      44,    4,  331,    3, 0x0a /* Public */,
      44,    3,  340,    3, 0x2a /* Public | MethodCloned */,
      46,    2,  347,    3, 0x0a /* Public */,
      47,    2,  352,    3, 0x0a /* Public */,
      49,    2,  357,    3, 0x0a /* Public */,
      50,    2,  362,    3, 0x0a /* Public */,
      52,    2,  367,    3, 0x0a /* Public */,
      53,    2,  372,    3, 0x0a /* Public */,
      55,    1,  377,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    0x80000000 | 8, 0x80000000 | 2,    9,
    0x80000000 | 11, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2,    9,
    0x80000000 | 8, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::UShort,    9,   15,   16,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   15,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::UShort, 0x80000000 | 18,    9,   15,   16,   19,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::UShort,    9,   15,   16,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    9,   15,
    0x80000000 | 21, 0x80000000 | 2,    9,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 24, 0x80000000 | 26, 0x80000000 | 28,    9,   25,   27,   29,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 24, 0x80000000 | 26,    9,   25,   27,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26,    9,   27,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26,    9,   27,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26,    9,   27,
    0x80000000 | 34, 0x80000000 | 2,    9,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26, 0x80000000 | 36,    9,   27,   37,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26, 0x80000000 | 28,    9,   27,   38,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26, QMetaType::QByteArray,    9,   27,   38,
    0x80000000 | 40, 0x80000000 | 2,    9,
    0x80000000 | 42, 0x80000000 | 2,    9,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26, 0x80000000 | 36,    9,   27,   37,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26, 0x80000000 | 28,    9,   27,   38,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26, QMetaType::QByteArray,    9,   27,   38,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26, QMetaType::QByteArray, 0x80000000 | 28,    9,   27,   45,   38,
    0x80000000 | 23, 0x80000000 | 2, 0x80000000 | 26, QMetaType::QByteArray,    9,   27,   45,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,    9,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 8,    9,   48,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,    9,   20,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 34,    9,   51,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 40,    9,   39,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 42,    9,   54,
    QMetaType::QStringList, 0x80000000 | 2,    9,

 // enums: name, flags, count, data
      56, 0x0,    3,  388,
      60, 0x0,    7,  394,

 // enum data: key, value
      57, uint(PythonQtWrapper_QNetworkAccessManager::UnknownAccessibility),
      58, uint(PythonQtWrapper_QNetworkAccessManager::NotAccessible),
      59, uint(PythonQtWrapper_QNetworkAccessManager::Accessible),
      61, uint(PythonQtWrapper_QNetworkAccessManager::HeadOperation),
      62, uint(PythonQtWrapper_QNetworkAccessManager::GetOperation),
      63, uint(PythonQtWrapper_QNetworkAccessManager::PutOperation),
      64, uint(PythonQtWrapper_QNetworkAccessManager::PostOperation),
      65, uint(PythonQtWrapper_QNetworkAccessManager::DeleteOperation),
      66, uint(PythonQtWrapper_QNetworkAccessManager::CustomOperation),
      67, uint(PythonQtWrapper_QNetworkAccessManager::UnknownOperation),

       0        // eod
};

void PythonQtWrapper_QNetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkAccessManager *_t = static_cast<PythonQtWrapper_QNetworkAccessManager *>(_o);
        switch (_id) {
        case 0: { QNetworkAccessManager* _r = _t->new_QNetworkAccessManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 1: { QNetworkAccessManager* _r = _t->new_QNetworkAccessManager();
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkAccessManager((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1]))); break;
        case 3: { QNetworkConfiguration _r = _t->activeConfiguration((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 4: { QAbstractNetworkCache* _r = _t->cache((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QAbstractNetworkCache**>(_a[0]) = _r; }  break;
        case 5: _t->clearAccessCache((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1]))); break;
        case 6: { QNetworkConfiguration _r = _t->configuration((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 7: _t->connectToHost((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3]))); break;
        case 8: _t->connectToHost((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->connectToHostEncrypted((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< const QSslConfiguration(*)>(_a[4]))); break;
        case 10: _t->connectToHostEncrypted((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3]))); break;
        case 11: _t->connectToHostEncrypted((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: { QNetworkCookieJar* _r = _t->cookieJar((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCookieJar**>(_a[0]) = _r; }  break;
        case 13: { QNetworkReply* _r = _t->createRequest((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[2])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[3])),(*reinterpret_cast< QIODevice*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 14: { QNetworkReply* _r = _t->createRequest((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[2])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 15: { QNetworkReply* _r = _t->deleteResource((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 16: { QNetworkReply* _r = _t->get((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 17: { QNetworkReply* _r = _t->head((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 18: { QNetworkAccessManager::NetworkAccessibility _r = _t->networkAccessible((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager::NetworkAccessibility*>(_a[0]) = _r; }  break;
        case 19: { QNetworkReply* _r = _t->post((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QHttpMultiPart*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 20: { QNetworkReply* _r = _t->post((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 21: { QNetworkReply* _r = _t->post((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 22: { QNetworkProxy _r = _t->proxy((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy*>(_a[0]) = _r; }  break;
        case 23: { QNetworkProxyFactory* _r = _t->proxyFactory((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyFactory**>(_a[0]) = _r; }  break;
        case 24: { QNetworkReply* _r = _t->put((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QHttpMultiPart*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 25: { QNetworkReply* _r = _t->put((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< QIODevice*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 26: { QNetworkReply* _r = _t->put((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 27: { QNetworkReply* _r = _t->sendCustomRequest((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])),(*reinterpret_cast< QIODevice*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 28: { QNetworkReply* _r = _t->sendCustomRequest((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 29: _t->setCache((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QAbstractNetworkCache*(*)>(_a[2]))); break;
        case 30: _t->setConfiguration((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2]))); break;
        case 31: _t->setCookieJar((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkCookieJar*(*)>(_a[2]))); break;
        case 32: _t->setNetworkAccessible((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager::NetworkAccessibility(*)>(_a[2]))); break;
        case 33: _t->setProxy((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2]))); break;
        case 34: _t->setProxyFactory((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[2]))); break;
        case 35: { QStringList _r = _t->supportedSchemes((*reinterpret_cast< QNetworkAccessManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslConfiguration >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpMultiPart* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpMultiPart* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractNetworkCache* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessManager* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkAccessManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkAccessManager.data,
      qt_meta_data_PythonQtWrapper_QNetworkAccessManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkAccessManager.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkAccessManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkAddressEntry_t {
    QByteArrayData data[26];
    char stringdata[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkAddressEntry_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkAddressEntry_t qt_meta_stringdata_PythonQtWrapper_QNetworkAddressEntry = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_QNetworkAddre..."
QT_MOC_LITERAL(1, 37, 24), // "new_QNetworkAddressEntry"
QT_MOC_LITERAL(2, 62, 21), // "QNetworkAddressEntry*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 20), // "QNetworkAddressEntry"
QT_MOC_LITERAL(5, 106, 5), // "other"
QT_MOC_LITERAL(6, 112, 27), // "delete_QNetworkAddressEntry"
QT_MOC_LITERAL(7, 140, 3), // "obj"
QT_MOC_LITERAL(8, 144, 9), // "broadcast"
QT_MOC_LITERAL(9, 154, 12), // "QHostAddress"
QT_MOC_LITERAL(10, 167, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 184, 2), // "ip"
QT_MOC_LITERAL(12, 187, 7), // "netmask"
QT_MOC_LITERAL(13, 195, 6), // "__ne__"
QT_MOC_LITERAL(14, 202, 6), // "__eq__"
QT_MOC_LITERAL(15, 209, 12), // "prefixLength"
QT_MOC_LITERAL(16, 222, 12), // "setBroadcast"
QT_MOC_LITERAL(17, 235, 12), // "newBroadcast"
QT_MOC_LITERAL(18, 248, 5), // "setIp"
QT_MOC_LITERAL(19, 254, 5), // "newIp"
QT_MOC_LITERAL(20, 260, 10), // "setNetmask"
QT_MOC_LITERAL(21, 271, 10), // "newNetmask"
QT_MOC_LITERAL(22, 282, 15), // "setPrefixLength"
QT_MOC_LITERAL(23, 298, 6), // "length"
QT_MOC_LITERAL(24, 305, 4), // "swap"
QT_MOC_LITERAL(25, 310, 21) // "QNetworkAddressEntry&"

    },
    "PythonQtWrapper_QNetworkAddressEntry\0"
    "new_QNetworkAddressEntry\0QNetworkAddressEntry*\0"
    "\0QNetworkAddressEntry\0other\0"
    "delete_QNetworkAddressEntry\0obj\0"
    "broadcast\0QHostAddress\0theWrappedObject\0"
    "ip\0netmask\0__ne__\0__eq__\0prefixLength\0"
    "setBroadcast\0newBroadcast\0setIp\0newIp\0"
    "setNetmask\0newNetmask\0setPrefixLength\0"
    "length\0swap\0QNetworkAddressEntry&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkAddressEntry[] = {

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
       6,    1,   88,    3, 0x0a /* Public */,
       8,    1,   91,    3, 0x0a /* Public */,
      11,    1,   94,    3, 0x0a /* Public */,
      12,    1,   97,    3, 0x0a /* Public */,
      13,    2,  100,    3, 0x0a /* Public */,
      14,    2,  105,    3, 0x0a /* Public */,
      15,    1,  110,    3, 0x0a /* Public */,
      16,    2,  113,    3, 0x0a /* Public */,
      18,    2,  118,    3, 0x0a /* Public */,
      20,    2,  123,    3, 0x0a /* Public */,
      22,    2,  128,    3, 0x0a /* Public */,
      24,    2,  133,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    0x80000000 | 9, 0x80000000 | 2,   10,
    0x80000000 | 9, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Int, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9,   10,   17,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9,   10,   19,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9,   10,   21,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   10,   23,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25,   10,    5,

       0        // eod
};

void PythonQtWrapper_QNetworkAddressEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkAddressEntry *_t = static_cast<PythonQtWrapper_QNetworkAddressEntry *>(_o);
        switch (_id) {
        case 0: { QNetworkAddressEntry* _r = _t->new_QNetworkAddressEntry();
            if (_a[0]) *reinterpret_cast< QNetworkAddressEntry**>(_a[0]) = _r; }  break;
        case 1: { QNetworkAddressEntry* _r = _t->new_QNetworkAddressEntry((*reinterpret_cast< const QNetworkAddressEntry(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAddressEntry**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkAddressEntry((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1]))); break;
        case 3: { QHostAddress _r = _t->broadcast((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 4: { QHostAddress _r = _t->ip((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 5: { QHostAddress _r = _t->netmask((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHostAddress*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QNetworkAddressEntry(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QNetworkAddressEntry(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { int _r = _t->prefixLength((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: _t->setBroadcast((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 10: _t->setIp((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 11: _t->setNetmask((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2]))); break;
        case 12: _t->setPrefixLength((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->swap((*reinterpret_cast< QNetworkAddressEntry*(*)>(_a[1])),(*reinterpret_cast< QNetworkAddressEntry(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkAddressEntry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkAddressEntry.data,
      qt_meta_data_PythonQtWrapper_QNetworkAddressEntry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkAddressEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkAddressEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkAddressEntry.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkAddressEntry*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkAddressEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkCacheMetaData_t {
    QByteArrayData data[35];
    char stringdata[504];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkCacheMetaData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkCacheMetaData_t qt_meta_stringdata_PythonQtWrapper_QNetworkCacheMetaData = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_QNetworkCache..."
QT_MOC_LITERAL(1, 38, 25), // "new_QNetworkCacheMetaData"
QT_MOC_LITERAL(2, 64, 22), // "QNetworkCacheMetaData*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 21), // "QNetworkCacheMetaData"
QT_MOC_LITERAL(5, 110, 5), // "other"
QT_MOC_LITERAL(6, 116, 28), // "delete_QNetworkCacheMetaData"
QT_MOC_LITERAL(7, 145, 3), // "obj"
QT_MOC_LITERAL(8, 149, 10), // "attributes"
QT_MOC_LITERAL(9, 160, 42), // "QHash<QNetworkRequest::Attrib..."
QT_MOC_LITERAL(10, 203, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 220, 14), // "expirationDate"
QT_MOC_LITERAL(12, 235, 7), // "isValid"
QT_MOC_LITERAL(13, 243, 12), // "lastModified"
QT_MOC_LITERAL(14, 256, 6), // "__ne__"
QT_MOC_LITERAL(15, 263, 7), // "writeTo"
QT_MOC_LITERAL(16, 271, 12), // "QDataStream&"
QT_MOC_LITERAL(17, 284, 6), // "arg__1"
QT_MOC_LITERAL(18, 291, 6), // "__eq__"
QT_MOC_LITERAL(19, 298, 8), // "readFrom"
QT_MOC_LITERAL(20, 307, 10), // "rawHeaders"
QT_MOC_LITERAL(21, 318, 36), // "QList<QPair<QByteArray,QByteA..."
QT_MOC_LITERAL(22, 355, 10), // "saveToDisk"
QT_MOC_LITERAL(23, 366, 13), // "setAttributes"
QT_MOC_LITERAL(24, 380, 17), // "setExpirationDate"
QT_MOC_LITERAL(25, 398, 8), // "dateTime"
QT_MOC_LITERAL(26, 407, 15), // "setLastModified"
QT_MOC_LITERAL(27, 423, 13), // "setRawHeaders"
QT_MOC_LITERAL(28, 437, 7), // "headers"
QT_MOC_LITERAL(29, 445, 13), // "setSaveToDisk"
QT_MOC_LITERAL(30, 459, 5), // "allow"
QT_MOC_LITERAL(31, 465, 6), // "setUrl"
QT_MOC_LITERAL(32, 472, 3), // "url"
QT_MOC_LITERAL(33, 476, 4), // "swap"
QT_MOC_LITERAL(34, 481, 22) // "QNetworkCacheMetaData&"

    },
    "PythonQtWrapper_QNetworkCacheMetaData\0"
    "new_QNetworkCacheMetaData\0"
    "QNetworkCacheMetaData*\0\0QNetworkCacheMetaData\0"
    "other\0delete_QNetworkCacheMetaData\0"
    "obj\0attributes\0"
    "QHash<QNetworkRequest::Attribute,QVariant>\0"
    "theWrappedObject\0expirationDate\0isValid\0"
    "lastModified\0__ne__\0writeTo\0QDataStream&\0"
    "arg__1\0__eq__\0readFrom\0rawHeaders\0"
    "QList<QPair<QByteArray,QByteArray> >\0"
    "saveToDisk\0setAttributes\0setExpirationDate\0"
    "dateTime\0setLastModified\0setRawHeaders\0"
    "headers\0setSaveToDisk\0allow\0setUrl\0"
    "url\0swap\0QNetworkCacheMetaData&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkCacheMetaData[] = {

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
       6,    1,  123,    3, 0x0a /* Public */,
       8,    1,  126,    3, 0x0a /* Public */,
      11,    1,  129,    3, 0x0a /* Public */,
      12,    1,  132,    3, 0x0a /* Public */,
      13,    1,  135,    3, 0x0a /* Public */,
      14,    2,  138,    3, 0x0a /* Public */,
      15,    2,  143,    3, 0x0a /* Public */,
      18,    2,  148,    3, 0x0a /* Public */,
      19,    2,  153,    3, 0x0a /* Public */,
      20,    1,  158,    3, 0x0a /* Public */,
      22,    1,  161,    3, 0x0a /* Public */,
      23,    2,  164,    3, 0x0a /* Public */,
      24,    2,  169,    3, 0x0a /* Public */,
      26,    2,  174,    3, 0x0a /* Public */,
      27,    2,  179,    3, 0x0a /* Public */,
      29,    2,  184,    3, 0x0a /* Public */,
      31,    2,  189,    3, 0x0a /* Public */,
      33,    2,  194,    3, 0x0a /* Public */,
      32,    1,  199,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    QMetaType::QDateTime, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QDateTime, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   10,   17,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   10,   17,
    0x80000000 | 21, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9,   10,    8,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QDateTime,   10,   25,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QDateTime,   10,   25,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,   10,   28,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   10,   30,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,   10,   32,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 34,   10,    5,
    QMetaType::QUrl, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QNetworkCacheMetaData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkCacheMetaData *_t = static_cast<PythonQtWrapper_QNetworkCacheMetaData *>(_o);
        switch (_id) {
        case 0: { QNetworkCacheMetaData* _r = _t->new_QNetworkCacheMetaData();
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData**>(_a[0]) = _r; }  break;
        case 1: { QNetworkCacheMetaData* _r = _t->new_QNetworkCacheMetaData((*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkCacheMetaData((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1]))); break;
        case 3: { QHash<QNetworkRequest::Attribute,QVariant> _r = _t->attributes((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QHash<QNetworkRequest::Attribute,QVariant>*>(_a[0]) = _r; }  break;
        case 4: { QDateTime _r = _t->expirationDate((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->isValid((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { QDateTime _r = _t->lastModified((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->writeTo((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 9: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->readFrom((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< QDataStream(*)>(_a[2]))); break;
        case 11: { QList<QPair<QByteArray,QByteArray> > _r = _t->rawHeaders((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QPair<QByteArray,QByteArray> >*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->saveToDisk((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->setAttributes((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QHash<QNetworkRequest::Attribute,QVariant>(*)>(_a[2]))); break;
        case 14: _t->setExpirationDate((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 15: _t->setLastModified((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 16: _t->setRawHeaders((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QList<QPair<QByteArray,QByteArray> >(*)>(_a[2]))); break;
        case 17: _t->setSaveToDisk((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->setUrl((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 19: _t->swap((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])),(*reinterpret_cast< QNetworkCacheMetaData(*)>(_a[2]))); break;
        case 20: { QUrl _r = _t->url((*reinterpret_cast< QNetworkCacheMetaData*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkCacheMetaData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkCacheMetaData.data,
      qt_meta_data_PythonQtWrapper_QNetworkCacheMetaData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkCacheMetaData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkCacheMetaData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkCacheMetaData.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkCacheMetaData*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkCacheMetaData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QNetworkConfiguration_t {
    QByteArrayData data[60];
    char stringdata[850];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkConfiguration_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkConfiguration_t qt_meta_stringdata_PythonQtWrapper_QNetworkConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 37), // "PythonQtWrapper_QNetworkConfi..."
QT_MOC_LITERAL(1, 38, 25), // "new_QNetworkConfiguration"
QT_MOC_LITERAL(2, 64, 22), // "QNetworkConfiguration*"
QT_MOC_LITERAL(3, 87, 0), // ""
QT_MOC_LITERAL(4, 88, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(5, 110, 5), // "other"
QT_MOC_LITERAL(6, 116, 28), // "delete_QNetworkConfiguration"
QT_MOC_LITERAL(7, 145, 3), // "obj"
QT_MOC_LITERAL(8, 149, 10), // "bearerType"
QT_MOC_LITERAL(9, 160, 33), // "QNetworkConfiguration::Bearer..."
QT_MOC_LITERAL(10, 194, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 211, 16), // "bearerTypeFamily"
QT_MOC_LITERAL(12, 228, 14), // "bearerTypeName"
QT_MOC_LITERAL(13, 243, 8), // "children"
QT_MOC_LITERAL(14, 252, 28), // "QList<QNetworkConfiguration>"
QT_MOC_LITERAL(15, 281, 10), // "identifier"
QT_MOC_LITERAL(16, 292, 18), // "isRoamingAvailable"
QT_MOC_LITERAL(17, 311, 7), // "isValid"
QT_MOC_LITERAL(18, 319, 4), // "name"
QT_MOC_LITERAL(19, 324, 6), // "__ne__"
QT_MOC_LITERAL(20, 331, 15), // "operator_assign"
QT_MOC_LITERAL(21, 347, 6), // "__eq__"
QT_MOC_LITERAL(22, 354, 7), // "purpose"
QT_MOC_LITERAL(23, 362, 30), // "QNetworkConfiguration::Purpose"
QT_MOC_LITERAL(24, 393, 5), // "state"
QT_MOC_LITERAL(25, 399, 33), // "QNetworkConfiguration::StateF..."
QT_MOC_LITERAL(26, 433, 4), // "swap"
QT_MOC_LITERAL(27, 438, 22), // "QNetworkConfiguration&"
QT_MOC_LITERAL(28, 461, 4), // "type"
QT_MOC_LITERAL(29, 466, 27), // "QNetworkConfiguration::Type"
QT_MOC_LITERAL(30, 494, 10), // "BearerType"
QT_MOC_LITERAL(31, 505, 13), // "BearerUnknown"
QT_MOC_LITERAL(32, 519, 14), // "BearerEthernet"
QT_MOC_LITERAL(33, 534, 10), // "BearerWLAN"
QT_MOC_LITERAL(34, 545, 8), // "Bearer2G"
QT_MOC_LITERAL(35, 554, 14), // "BearerCDMA2000"
QT_MOC_LITERAL(36, 569, 11), // "BearerWCDMA"
QT_MOC_LITERAL(37, 581, 10), // "BearerHSPA"
QT_MOC_LITERAL(38, 592, 15), // "BearerBluetooth"
QT_MOC_LITERAL(39, 608, 11), // "BearerWiMAX"
QT_MOC_LITERAL(40, 620, 10), // "BearerEVDO"
QT_MOC_LITERAL(41, 631, 9), // "BearerLTE"
QT_MOC_LITERAL(42, 641, 8), // "Bearer3G"
QT_MOC_LITERAL(43, 650, 8), // "Bearer4G"
QT_MOC_LITERAL(44, 659, 7), // "Purpose"
QT_MOC_LITERAL(45, 667, 14), // "UnknownPurpose"
QT_MOC_LITERAL(46, 682, 13), // "PublicPurpose"
QT_MOC_LITERAL(47, 696, 14), // "PrivatePurpose"
QT_MOC_LITERAL(48, 711, 22), // "ServiceSpecificPurpose"
QT_MOC_LITERAL(49, 734, 9), // "StateFlag"
QT_MOC_LITERAL(50, 744, 9), // "Undefined"
QT_MOC_LITERAL(51, 754, 7), // "Defined"
QT_MOC_LITERAL(52, 762, 10), // "Discovered"
QT_MOC_LITERAL(53, 773, 6), // "Active"
QT_MOC_LITERAL(54, 780, 10), // "StateFlags"
QT_MOC_LITERAL(55, 791, 4), // "Type"
QT_MOC_LITERAL(56, 796, 19), // "InternetAccessPoint"
QT_MOC_LITERAL(57, 816, 14), // "ServiceNetwork"
QT_MOC_LITERAL(58, 831, 10), // "UserChoice"
QT_MOC_LITERAL(59, 842, 7) // "Invalid"

    },
    "PythonQtWrapper_QNetworkConfiguration\0"
    "new_QNetworkConfiguration\0"
    "QNetworkConfiguration*\0\0QNetworkConfiguration\0"
    "other\0delete_QNetworkConfiguration\0"
    "obj\0bearerType\0QNetworkConfiguration::BearerType\0"
    "theWrappedObject\0bearerTypeFamily\0"
    "bearerTypeName\0children\0"
    "QList<QNetworkConfiguration>\0identifier\0"
    "isRoamingAvailable\0isValid\0name\0__ne__\0"
    "operator_assign\0__eq__\0purpose\0"
    "QNetworkConfiguration::Purpose\0state\0"
    "QNetworkConfiguration::StateFlags\0"
    "swap\0QNetworkConfiguration&\0type\0"
    "QNetworkConfiguration::Type\0BearerType\0"
    "BearerUnknown\0BearerEthernet\0BearerWLAN\0"
    "Bearer2G\0BearerCDMA2000\0BearerWCDMA\0"
    "BearerHSPA\0BearerBluetooth\0BearerWiMAX\0"
    "BearerEVDO\0BearerLTE\0Bearer3G\0Bearer4G\0"
    "Purpose\0UnknownPurpose\0PublicPurpose\0"
    "PrivatePurpose\0ServiceSpecificPurpose\0"
    "StateFlag\0Undefined\0Defined\0Discovered\0"
    "Active\0StateFlags\0Type\0InternetAccessPoint\0"
    "ServiceNetwork\0UserChoice\0Invalid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkConfiguration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       5,  164, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  104,    3, 0x0a /* Public */,
       1,    1,  105,    3, 0x0a /* Public */,
       6,    1,  108,    3, 0x0a /* Public */,
       8,    1,  111,    3, 0x0a /* Public */,
      11,    1,  114,    3, 0x0a /* Public */,
      12,    1,  117,    3, 0x0a /* Public */,
      13,    1,  120,    3, 0x0a /* Public */,
      15,    1,  123,    3, 0x0a /* Public */,
      16,    1,  126,    3, 0x0a /* Public */,
      17,    1,  129,    3, 0x0a /* Public */,
      18,    1,  132,    3, 0x0a /* Public */,
      19,    2,  135,    3, 0x0a /* Public */,
      20,    2,  140,    3, 0x0a /* Public */,
      21,    2,  145,    3, 0x0a /* Public */,
      22,    1,  150,    3, 0x0a /* Public */,
      24,    1,  153,    3, 0x0a /* Public */,
      26,    2,  156,    3, 0x0a /* Public */,
      28,    1,  161,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    0x80000000 | 9, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    0x80000000 | 14, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    0x80000000 | 23, 0x80000000 | 2,   10,
    0x80000000 | 25, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 27,   10,    5,
    0x80000000 | 29, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
      30, 0x0,   13,  184,
      44, 0x0,    4,  210,
      49, 0x0,    4,  218,
      54, 0x1,    4,  226,
      55, 0x0,    4,  234,

 // enum data: key, value
      31, uint(PythonQtWrapper_QNetworkConfiguration::BearerUnknown),
      32, uint(PythonQtWrapper_QNetworkConfiguration::BearerEthernet),
      33, uint(PythonQtWrapper_QNetworkConfiguration::BearerWLAN),
      34, uint(PythonQtWrapper_QNetworkConfiguration::Bearer2G),
      35, uint(PythonQtWrapper_QNetworkConfiguration::BearerCDMA2000),
      36, uint(PythonQtWrapper_QNetworkConfiguration::BearerWCDMA),
      37, uint(PythonQtWrapper_QNetworkConfiguration::BearerHSPA),
      38, uint(PythonQtWrapper_QNetworkConfiguration::BearerBluetooth),
      39, uint(PythonQtWrapper_QNetworkConfiguration::BearerWiMAX),
      40, uint(PythonQtWrapper_QNetworkConfiguration::BearerEVDO),
      41, uint(PythonQtWrapper_QNetworkConfiguration::BearerLTE),
      42, uint(PythonQtWrapper_QNetworkConfiguration::Bearer3G),
      43, uint(PythonQtWrapper_QNetworkConfiguration::Bearer4G),
      45, uint(PythonQtWrapper_QNetworkConfiguration::UnknownPurpose),
      46, uint(PythonQtWrapper_QNetworkConfiguration::PublicPurpose),
      47, uint(PythonQtWrapper_QNetworkConfiguration::PrivatePurpose),
      48, uint(PythonQtWrapper_QNetworkConfiguration::ServiceSpecificPurpose),
      50, uint(PythonQtWrapper_QNetworkConfiguration::Undefined),
      51, uint(PythonQtWrapper_QNetworkConfiguration::Defined),
      52, uint(PythonQtWrapper_QNetworkConfiguration::Discovered),
      53, uint(PythonQtWrapper_QNetworkConfiguration::Active),
      50, uint(PythonQtWrapper_QNetworkConfiguration::Undefined),
      51, uint(PythonQtWrapper_QNetworkConfiguration::Defined),
      52, uint(PythonQtWrapper_QNetworkConfiguration::Discovered),
      53, uint(PythonQtWrapper_QNetworkConfiguration::Active),
      56, uint(PythonQtWrapper_QNetworkConfiguration::InternetAccessPoint),
      57, uint(PythonQtWrapper_QNetworkConfiguration::ServiceNetwork),
      58, uint(PythonQtWrapper_QNetworkConfiguration::UserChoice),
      59, uint(PythonQtWrapper_QNetworkConfiguration::Invalid),

       0        // eod
};

void PythonQtWrapper_QNetworkConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkConfiguration *_t = static_cast<PythonQtWrapper_QNetworkConfiguration *>(_o);
        switch (_id) {
        case 0: { QNetworkConfiguration* _r = _t->new_QNetworkConfiguration();
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration**>(_a[0]) = _r; }  break;
        case 1: { QNetworkConfiguration* _r = _t->new_QNetworkConfiguration((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkConfiguration((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1]))); break;
        case 3: { QNetworkConfiguration::BearerType _r = _t->bearerType((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration::BearerType*>(_a[0]) = _r; }  break;
        case 4: { QNetworkConfiguration::BearerType _r = _t->bearerTypeFamily((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration::BearerType*>(_a[0]) = _r; }  break;
        case 5: { QString _r = _t->bearerTypeName((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QList<QNetworkConfiguration> _r = _t->children((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkConfiguration>*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->identifier((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isRoamingAvailable((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isValid((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->name((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { QNetworkConfiguration* _r = _t->operator_assign((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration**>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QNetworkConfiguration::Purpose _r = _t->purpose((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration::Purpose*>(_a[0]) = _r; }  break;
        case 15: { QNetworkConfiguration::StateFlags _r = _t->state((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration::StateFlags*>(_a[0]) = _r; }  break;
        case 16: _t->swap((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])),(*reinterpret_cast< QNetworkConfiguration(*)>(_a[2]))); break;
        case 17: { QNetworkConfiguration::Type _r = _t->type((*reinterpret_cast< QNetworkConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration::Type*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkConfiguration::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkConfiguration.data,
      qt_meta_data_PythonQtWrapper_QNetworkConfiguration,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkConfiguration.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkConfiguration*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkConfigurationManager_t {
    QByteArrayData data[28];
    char stringdata[578];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkConfigurationManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkConfigurationManager_t qt_meta_stringdata_PythonQtWrapper_QNetworkConfigurationManager = {
    {
QT_MOC_LITERAL(0, 0, 44), // "PythonQtWrapper_QNetworkConfi..."
QT_MOC_LITERAL(1, 45, 32), // "new_QNetworkConfigurationManager"
QT_MOC_LITERAL(2, 78, 29), // "QNetworkConfigurationManager*"
QT_MOC_LITERAL(3, 108, 0), // ""
QT_MOC_LITERAL(4, 109, 6), // "parent"
QT_MOC_LITERAL(5, 116, 35), // "delete_QNetworkConfigurationM..."
QT_MOC_LITERAL(6, 152, 3), // "obj"
QT_MOC_LITERAL(7, 156, 17), // "allConfigurations"
QT_MOC_LITERAL(8, 174, 28), // "QList<QNetworkConfiguration>"
QT_MOC_LITERAL(9, 203, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 220, 33), // "QNetworkConfiguration::StateF..."
QT_MOC_LITERAL(11, 254, 5), // "flags"
QT_MOC_LITERAL(12, 260, 12), // "capabilities"
QT_MOC_LITERAL(13, 273, 42), // "QNetworkConfigurationManager:..."
QT_MOC_LITERAL(14, 316, 27), // "configurationFromIdentifier"
QT_MOC_LITERAL(15, 344, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(16, 366, 10), // "identifier"
QT_MOC_LITERAL(17, 377, 20), // "defaultConfiguration"
QT_MOC_LITERAL(18, 398, 8), // "isOnline"
QT_MOC_LITERAL(19, 407, 10), // "Capability"
QT_MOC_LITERAL(20, 418, 25), // "CanStartAndStopInterfaces"
QT_MOC_LITERAL(21, 444, 23), // "DirectConnectionRouting"
QT_MOC_LITERAL(22, 468, 20), // "SystemSessionSupport"
QT_MOC_LITERAL(23, 489, 23), // "ApplicationLevelRoaming"
QT_MOC_LITERAL(24, 513, 13), // "ForcedRoaming"
QT_MOC_LITERAL(25, 527, 14), // "DataStatistics"
QT_MOC_LITERAL(26, 542, 22), // "NetworkSessionRequired"
QT_MOC_LITERAL(27, 565, 12) // "Capabilities"

    },
    "PythonQtWrapper_QNetworkConfigurationManager\0"
    "new_QNetworkConfigurationManager\0"
    "QNetworkConfigurationManager*\0\0parent\0"
    "delete_QNetworkConfigurationManager\0"
    "obj\0allConfigurations\0"
    "QList<QNetworkConfiguration>\0"
    "theWrappedObject\0QNetworkConfiguration::StateFlags\0"
    "flags\0capabilities\0"
    "QNetworkConfigurationManager::Capabilities\0"
    "configurationFromIdentifier\0"
    "QNetworkConfiguration\0identifier\0"
    "defaultConfiguration\0isOnline\0Capability\0"
    "CanStartAndStopInterfaces\0"
    "DirectConnectionRouting\0SystemSessionSupport\0"
    "ApplicationLevelRoaming\0ForcedRoaming\0"
    "DataStatistics\0NetworkSessionRequired\0"
    "Capabilities"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkConfigurationManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       2,   88, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    3, 0x0a /* Public */,
       1,    0,   62,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   63,    3, 0x0a /* Public */,
       7,    2,   66,    3, 0x0a /* Public */,
       7,    1,   71,    3, 0x2a /* Public | MethodCloned */,
      12,    1,   74,    3, 0x0a /* Public */,
      14,    2,   77,    3, 0x0a /* Public */,
      17,    1,   82,    3, 0x0a /* Public */,
      18,    1,   85,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    0x80000000 | 8, 0x80000000 | 2, 0x80000000 | 10,    9,   11,
    0x80000000 | 8, 0x80000000 | 2,    9,
    0x80000000 | 13, 0x80000000 | 2,    9,
    0x80000000 | 15, 0x80000000 | 2, QMetaType::QString,    9,   16,
    0x80000000 | 15, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2,    9,

 // enums: name, flags, count, data
      19, 0x0,    7,   96,
      27, 0x1,    7,  110,

 // enum data: key, value
      20, uint(PythonQtWrapper_QNetworkConfigurationManager::CanStartAndStopInterfaces),
      21, uint(PythonQtWrapper_QNetworkConfigurationManager::DirectConnectionRouting),
      22, uint(PythonQtWrapper_QNetworkConfigurationManager::SystemSessionSupport),
      23, uint(PythonQtWrapper_QNetworkConfigurationManager::ApplicationLevelRoaming),
      24, uint(PythonQtWrapper_QNetworkConfigurationManager::ForcedRoaming),
      25, uint(PythonQtWrapper_QNetworkConfigurationManager::DataStatistics),
      26, uint(PythonQtWrapper_QNetworkConfigurationManager::NetworkSessionRequired),
      20, uint(PythonQtWrapper_QNetworkConfigurationManager::CanStartAndStopInterfaces),
      21, uint(PythonQtWrapper_QNetworkConfigurationManager::DirectConnectionRouting),
      22, uint(PythonQtWrapper_QNetworkConfigurationManager::SystemSessionSupport),
      23, uint(PythonQtWrapper_QNetworkConfigurationManager::ApplicationLevelRoaming),
      24, uint(PythonQtWrapper_QNetworkConfigurationManager::ForcedRoaming),
      25, uint(PythonQtWrapper_QNetworkConfigurationManager::DataStatistics),
      26, uint(PythonQtWrapper_QNetworkConfigurationManager::NetworkSessionRequired),

       0        // eod
};

void PythonQtWrapper_QNetworkConfigurationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkConfigurationManager *_t = static_cast<PythonQtWrapper_QNetworkConfigurationManager *>(_o);
        switch (_id) {
        case 0: { QNetworkConfigurationManager* _r = _t->new_QNetworkConfigurationManager((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfigurationManager**>(_a[0]) = _r; }  break;
        case 1: { QNetworkConfigurationManager* _r = _t->new_QNetworkConfigurationManager();
            if (_a[0]) *reinterpret_cast< QNetworkConfigurationManager**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkConfigurationManager((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1]))); break;
        case 3: { QList<QNetworkConfiguration> _r = _t->allConfigurations((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])),(*reinterpret_cast< QNetworkConfiguration::StateFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkConfiguration>*>(_a[0]) = _r; }  break;
        case 4: { QList<QNetworkConfiguration> _r = _t->allConfigurations((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkConfiguration>*>(_a[0]) = _r; }  break;
        case 5: { QNetworkConfigurationManager::Capabilities _r = _t->capabilities((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfigurationManager::Capabilities*>(_a[0]) = _r; }  break;
        case 6: { QNetworkConfiguration _r = _t->configurationFromIdentifier((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 7: { QNetworkConfiguration _r = _t->defaultConfiguration((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isOnline((*reinterpret_cast< QNetworkConfigurationManager*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationManager* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationManager* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationManager* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationManager* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationManager* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationManager* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationManager* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkConfigurationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkConfigurationManager.data,
      qt_meta_data_PythonQtWrapper_QNetworkConfigurationManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkConfigurationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkConfigurationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkConfigurationManager.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkConfigurationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkConfigurationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkCookie_t {
    QByteArrayData data[44];
    char stringdata[521];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkCookie_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkCookie_t qt_meta_stringdata_PythonQtWrapper_QNetworkCookie = {
    {
QT_MOC_LITERAL(0, 0, 30), // "PythonQtWrapper_QNetworkCookie"
QT_MOC_LITERAL(1, 31, 18), // "new_QNetworkCookie"
QT_MOC_LITERAL(2, 50, 15), // "QNetworkCookie*"
QT_MOC_LITERAL(3, 66, 0), // ""
QT_MOC_LITERAL(4, 67, 4), // "name"
QT_MOC_LITERAL(5, 72, 5), // "value"
QT_MOC_LITERAL(6, 78, 14), // "QNetworkCookie"
QT_MOC_LITERAL(7, 93, 5), // "other"
QT_MOC_LITERAL(8, 99, 21), // "delete_QNetworkCookie"
QT_MOC_LITERAL(9, 121, 3), // "obj"
QT_MOC_LITERAL(10, 125, 6), // "domain"
QT_MOC_LITERAL(11, 132, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 149, 14), // "expirationDate"
QT_MOC_LITERAL(13, 164, 17), // "hasSameIdentifier"
QT_MOC_LITERAL(14, 182, 10), // "isHttpOnly"
QT_MOC_LITERAL(15, 193, 8), // "isSecure"
QT_MOC_LITERAL(16, 202, 15), // "isSessionCookie"
QT_MOC_LITERAL(17, 218, 9), // "normalize"
QT_MOC_LITERAL(18, 228, 3), // "url"
QT_MOC_LITERAL(19, 232, 6), // "__ne__"
QT_MOC_LITERAL(20, 239, 6), // "__eq__"
QT_MOC_LITERAL(21, 246, 34), // "static_QNetworkCookie_parseCo..."
QT_MOC_LITERAL(22, 281, 21), // "QList<QNetworkCookie>"
QT_MOC_LITERAL(23, 303, 12), // "cookieString"
QT_MOC_LITERAL(24, 316, 4), // "path"
QT_MOC_LITERAL(25, 321, 9), // "setDomain"
QT_MOC_LITERAL(26, 331, 17), // "setExpirationDate"
QT_MOC_LITERAL(27, 349, 4), // "date"
QT_MOC_LITERAL(28, 354, 11), // "setHttpOnly"
QT_MOC_LITERAL(29, 366, 6), // "enable"
QT_MOC_LITERAL(30, 373, 7), // "setName"
QT_MOC_LITERAL(31, 381, 10), // "cookieName"
QT_MOC_LITERAL(32, 392, 7), // "setPath"
QT_MOC_LITERAL(33, 400, 9), // "setSecure"
QT_MOC_LITERAL(34, 410, 8), // "setValue"
QT_MOC_LITERAL(35, 419, 4), // "swap"
QT_MOC_LITERAL(36, 424, 15), // "QNetworkCookie&"
QT_MOC_LITERAL(37, 440, 9), // "toRawForm"
QT_MOC_LITERAL(38, 450, 23), // "QNetworkCookie::RawForm"
QT_MOC_LITERAL(39, 474, 4), // "form"
QT_MOC_LITERAL(40, 479, 11), // "py_toString"
QT_MOC_LITERAL(41, 491, 7), // "RawForm"
QT_MOC_LITERAL(42, 499, 16), // "NameAndValueOnly"
QT_MOC_LITERAL(43, 516, 4) // "Full"

    },
    "PythonQtWrapper_QNetworkCookie\0"
    "new_QNetworkCookie\0QNetworkCookie*\0\0"
    "name\0value\0QNetworkCookie\0other\0"
    "delete_QNetworkCookie\0obj\0domain\0"
    "theWrappedObject\0expirationDate\0"
    "hasSameIdentifier\0isHttpOnly\0isSecure\0"
    "isSessionCookie\0normalize\0url\0__ne__\0"
    "__eq__\0static_QNetworkCookie_parseCookies\0"
    "QList<QNetworkCookie>\0cookieString\0"
    "path\0setDomain\0setExpirationDate\0date\0"
    "setHttpOnly\0enable\0setName\0cookieName\0"
    "setPath\0setSecure\0setValue\0swap\0"
    "QNetworkCookie&\0toRawForm\0"
    "QNetworkCookie::RawForm\0form\0py_toString\0"
    "RawForm\0NameAndValueOnly\0Full"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkCookie[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       1,  272, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  159,    3, 0x0a /* Public */,
       1,    1,  164,    3, 0x2a /* Public | MethodCloned */,
       1,    0,  167,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  168,    3, 0x0a /* Public */,
       8,    1,  171,    3, 0x0a /* Public */,
      10,    1,  174,    3, 0x0a /* Public */,
      12,    1,  177,    3, 0x0a /* Public */,
      13,    2,  180,    3, 0x0a /* Public */,
      14,    1,  185,    3, 0x0a /* Public */,
      15,    1,  188,    3, 0x0a /* Public */,
      16,    1,  191,    3, 0x0a /* Public */,
       4,    1,  194,    3, 0x0a /* Public */,
      17,    2,  197,    3, 0x0a /* Public */,
      19,    2,  202,    3, 0x0a /* Public */,
      20,    2,  207,    3, 0x0a /* Public */,
      21,    1,  212,    3, 0x0a /* Public */,
      24,    1,  215,    3, 0x0a /* Public */,
      25,    2,  218,    3, 0x0a /* Public */,
      26,    2,  223,    3, 0x0a /* Public */,
      28,    2,  228,    3, 0x0a /* Public */,
      30,    2,  233,    3, 0x0a /* Public */,
      32,    2,  238,    3, 0x0a /* Public */,
      33,    2,  243,    3, 0x0a /* Public */,
      34,    2,  248,    3, 0x0a /* Public */,
      35,    2,  253,    3, 0x0a /* Public */,
      37,    2,  258,    3, 0x0a /* Public */,
      37,    1,  263,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  266,    3, 0x0a /* Public */,
      40,    1,  269,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QByteArray, QMetaType::QByteArray,    4,    5,
    0x80000000 | 2, QMetaType::QByteArray,    4,
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 2,    9,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::QDateTime, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 6,   11,    7,
    QMetaType::Bool, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2,   11,
    QMetaType::Bool, 0x80000000 | 2,   11,
    QMetaType::QByteArray, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,   11,   18,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 6,   11,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 6,   11,    7,
    0x80000000 | 22, QMetaType::QByteArray,   23,
    QMetaType::QString, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   11,   10,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QDateTime,   11,   27,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   11,   29,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray,   11,   31,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   11,   24,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,   11,   29,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray,   11,    5,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 36,   11,    7,
    QMetaType::QByteArray, 0x80000000 | 2, 0x80000000 | 38,   11,   39,
    QMetaType::QByteArray, 0x80000000 | 2,   11,
    QMetaType::QByteArray, 0x80000000 | 2,   11,
    QMetaType::QString, 0x80000000 | 2,    3,

 // enums: name, flags, count, data
      41, 0x0,    2,  276,

 // enum data: key, value
      42, uint(PythonQtWrapper_QNetworkCookie::NameAndValueOnly),
      43, uint(PythonQtWrapper_QNetworkCookie::Full),

       0        // eod
};

void PythonQtWrapper_QNetworkCookie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkCookie *_t = static_cast<PythonQtWrapper_QNetworkCookie *>(_o);
        switch (_id) {
        case 0: { QNetworkCookie* _r = _t->new_QNetworkCookie((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkCookie**>(_a[0]) = _r; }  break;
        case 1: { QNetworkCookie* _r = _t->new_QNetworkCookie((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCookie**>(_a[0]) = _r; }  break;
        case 2: { QNetworkCookie* _r = _t->new_QNetworkCookie();
            if (_a[0]) *reinterpret_cast< QNetworkCookie**>(_a[0]) = _r; }  break;
        case 3: { QNetworkCookie* _r = _t->new_QNetworkCookie((*reinterpret_cast< const QNetworkCookie(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCookie**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QNetworkCookie((*reinterpret_cast< QNetworkCookie*(*)>(_a[1]))); break;
        case 5: { QString _r = _t->domain((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QDateTime _r = _t->expirationDate((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->hasSameIdentifier((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCookie(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->isHttpOnly((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->isSecure((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->isSessionCookie((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QByteArray _r = _t->name((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 12: _t->normalize((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 13: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCookie(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCookie(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QList<QNetworkCookie> _r = _t->static_QNetworkCookie_parseCookies((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkCookie>*>(_a[0]) = _r; }  break;
        case 16: { QString _r = _t->path((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 17: _t->setDomain((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: _t->setExpirationDate((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2]))); break;
        case 19: _t->setHttpOnly((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->setName((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 21: _t->setPath((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: _t->setSecure((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 23: _t->setValue((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 24: _t->swap((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< QNetworkCookie(*)>(_a[2]))); break;
        case 25: { QByteArray _r = _t->toRawForm((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])),(*reinterpret_cast< QNetworkCookie::RawForm(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 26: { QByteArray _r = _t->toRawForm((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 27: { QByteArray _r = _t->value((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 28: { QString _r = _t->py_toString((*reinterpret_cast< QNetworkCookie*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkCookie::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkCookie.data,
      qt_meta_data_PythonQtWrapper_QNetworkCookie,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkCookie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkCookie::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkCookie.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkCookie*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkCookie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QNetworkCookieJar_t {
    QByteArrayData data[21];
    char stringdata[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkCookieJar_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkCookieJar_t qt_meta_stringdata_PythonQtWrapper_QNetworkCookieJar = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_QNetworkCooki..."
QT_MOC_LITERAL(1, 34, 21), // "new_QNetworkCookieJar"
QT_MOC_LITERAL(2, 56, 18), // "QNetworkCookieJar*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 6), // "parent"
QT_MOC_LITERAL(5, 83, 24), // "delete_QNetworkCookieJar"
QT_MOC_LITERAL(6, 108, 3), // "obj"
QT_MOC_LITERAL(7, 112, 10), // "allCookies"
QT_MOC_LITERAL(8, 123, 21), // "QList<QNetworkCookie>"
QT_MOC_LITERAL(9, 145, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 162, 13), // "cookiesForUrl"
QT_MOC_LITERAL(11, 176, 3), // "url"
QT_MOC_LITERAL(12, 180, 12), // "deleteCookie"
QT_MOC_LITERAL(13, 193, 14), // "QNetworkCookie"
QT_MOC_LITERAL(14, 208, 6), // "cookie"
QT_MOC_LITERAL(15, 215, 12), // "insertCookie"
QT_MOC_LITERAL(16, 228, 13), // "setAllCookies"
QT_MOC_LITERAL(17, 242, 10), // "cookieList"
QT_MOC_LITERAL(18, 253, 17), // "setCookiesFromUrl"
QT_MOC_LITERAL(19, 271, 12), // "updateCookie"
QT_MOC_LITERAL(20, 284, 14) // "validateCookie"

    },
    "PythonQtWrapper_QNetworkCookieJar\0"
    "new_QNetworkCookieJar\0QNetworkCookieJar*\0"
    "\0parent\0delete_QNetworkCookieJar\0obj\0"
    "allCookies\0QList<QNetworkCookie>\0"
    "theWrappedObject\0cookiesForUrl\0url\0"
    "deleteCookie\0QNetworkCookie\0cookie\0"
    "insertCookie\0setAllCookies\0cookieList\0"
    "setCookiesFromUrl\0updateCookie\0"
    "validateCookie"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkCookieJar[] = {

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
       1,    0,   72,    3, 0x2a /* Public | MethodCloned */,
       5,    1,   73,    3, 0x0a /* Public */,
       7,    1,   76,    3, 0x0a /* Public */,
      10,    2,   79,    3, 0x0a /* Public */,
      12,    2,   84,    3, 0x0a /* Public */,
      15,    2,   89,    3, 0x0a /* Public */,
      16,    2,   94,    3, 0x0a /* Public */,
      18,    3,   99,    3, 0x0a /* Public */,
      19,    2,  106,    3, 0x0a /* Public */,
      20,    3,  111,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    0x80000000 | 8, 0x80000000 | 2,    9,
    0x80000000 | 8, 0x80000000 | 2, QMetaType::QUrl,    9,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13,    9,   14,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13,    9,   14,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 8,    9,   17,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 8, QMetaType::QUrl,    9,   17,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13,    9,   14,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13, QMetaType::QUrl,    9,   14,   11,

       0        // eod
};

void PythonQtWrapper_QNetworkCookieJar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkCookieJar *_t = static_cast<PythonQtWrapper_QNetworkCookieJar *>(_o);
        switch (_id) {
        case 0: { QNetworkCookieJar* _r = _t->new_QNetworkCookieJar((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkCookieJar**>(_a[0]) = _r; }  break;
        case 1: { QNetworkCookieJar* _r = _t->new_QNetworkCookieJar();
            if (_a[0]) *reinterpret_cast< QNetworkCookieJar**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkCookieJar((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1]))); break;
        case 3: { QList<QNetworkCookie> _r = _t->allCookies((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkCookie>*>(_a[0]) = _r; }  break;
        case 4: { QList<QNetworkCookie> _r = _t->cookiesForUrl((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkCookie>*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->deleteCookie((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCookie(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->insertCookie((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCookie(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->setAllCookies((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QList<QNetworkCookie>(*)>(_a[2]))); break;
        case 8: { bool _r = _t->setCookiesFromUrl((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QList<QNetworkCookie>(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->updateCookie((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCookie(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->validateCookie((*reinterpret_cast< QNetworkCookieJar*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCookie(*)>(_a[2])),(*reinterpret_cast< const QUrl(*)>(_a[3])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QNetworkCookie> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QNetworkCookie> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookie >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkCookieJar* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkCookieJar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkCookieJar.data,
      qt_meta_data_PythonQtWrapper_QNetworkCookieJar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkCookieJar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkCookieJar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkCookieJar.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkCookieJar*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkCookieJar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkDiskCache_t {
    QByteArrayData data[29];
    char stringdata[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkDiskCache_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkDiskCache_t qt_meta_stringdata_PythonQtWrapper_QNetworkDiskCache = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_QNetworkDiskC..."
QT_MOC_LITERAL(1, 34, 21), // "new_QNetworkDiskCache"
QT_MOC_LITERAL(2, 56, 18), // "QNetworkDiskCache*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 6), // "parent"
QT_MOC_LITERAL(5, 83, 24), // "delete_QNetworkDiskCache"
QT_MOC_LITERAL(6, 108, 3), // "obj"
QT_MOC_LITERAL(7, 112, 14), // "cacheDirectory"
QT_MOC_LITERAL(8, 127, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 144, 9), // "cacheSize"
QT_MOC_LITERAL(10, 154, 5), // "clear"
QT_MOC_LITERAL(11, 160, 4), // "data"
QT_MOC_LITERAL(12, 165, 10), // "QIODevice*"
QT_MOC_LITERAL(13, 176, 3), // "url"
QT_MOC_LITERAL(14, 180, 6), // "expire"
QT_MOC_LITERAL(15, 187, 12), // "fileMetaData"
QT_MOC_LITERAL(16, 200, 21), // "QNetworkCacheMetaData"
QT_MOC_LITERAL(17, 222, 8), // "fileName"
QT_MOC_LITERAL(18, 231, 6), // "insert"
QT_MOC_LITERAL(19, 238, 6), // "device"
QT_MOC_LITERAL(20, 245, 16), // "maximumCacheSize"
QT_MOC_LITERAL(21, 262, 8), // "metaData"
QT_MOC_LITERAL(22, 271, 7), // "prepare"
QT_MOC_LITERAL(23, 279, 6), // "remove"
QT_MOC_LITERAL(24, 286, 17), // "setCacheDirectory"
QT_MOC_LITERAL(25, 304, 8), // "cacheDir"
QT_MOC_LITERAL(26, 313, 19), // "setMaximumCacheSize"
QT_MOC_LITERAL(27, 333, 4), // "size"
QT_MOC_LITERAL(28, 338, 14) // "updateMetaData"

    },
    "PythonQtWrapper_QNetworkDiskCache\0"
    "new_QNetworkDiskCache\0QNetworkDiskCache*\0"
    "\0parent\0delete_QNetworkDiskCache\0obj\0"
    "cacheDirectory\0theWrappedObject\0"
    "cacheSize\0clear\0data\0QIODevice*\0url\0"
    "expire\0fileMetaData\0QNetworkCacheMetaData\0"
    "fileName\0insert\0device\0maximumCacheSize\0"
    "metaData\0prepare\0remove\0setCacheDirectory\0"
    "cacheDir\0setMaximumCacheSize\0size\0"
    "updateMetaData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkDiskCache[] = {

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
       5,    1,  103,    3, 0x0a /* Public */,
       7,    1,  106,    3, 0x0a /* Public */,
       9,    1,  109,    3, 0x0a /* Public */,
      10,    1,  112,    3, 0x0a /* Public */,
      11,    2,  115,    3, 0x0a /* Public */,
      14,    1,  120,    3, 0x0a /* Public */,
      15,    2,  123,    3, 0x0a /* Public */,
      18,    2,  128,    3, 0x0a /* Public */,
      20,    1,  133,    3, 0x0a /* Public */,
      21,    2,  136,    3, 0x0a /* Public */,
      22,    2,  141,    3, 0x0a /* Public */,
      23,    2,  146,    3, 0x0a /* Public */,
      24,    2,  151,    3, 0x0a /* Public */,
      26,    2,  156,    3, 0x0a /* Public */,
      28,    2,  161,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::QString, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2,    8,
    0x80000000 | 12, 0x80000000 | 2, QMetaType::QUrl,    8,   13,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    0x80000000 | 16, 0x80000000 | 2, QMetaType::QString,    8,   17,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 12,    8,   19,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    0x80000000 | 16, 0x80000000 | 2, QMetaType::QUrl,    8,   13,
    0x80000000 | 12, 0x80000000 | 2, 0x80000000 | 16,    8,   21,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QUrl,    8,   13,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,    8,   25,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong,    8,   27,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,    8,   21,

       0        // eod
};

void PythonQtWrapper_QNetworkDiskCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkDiskCache *_t = static_cast<PythonQtWrapper_QNetworkDiskCache *>(_o);
        switch (_id) {
        case 0: { QNetworkDiskCache* _r = _t->new_QNetworkDiskCache((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkDiskCache**>(_a[0]) = _r; }  break;
        case 1: { QNetworkDiskCache* _r = _t->new_QNetworkDiskCache();
            if (_a[0]) *reinterpret_cast< QNetworkDiskCache**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkDiskCache((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1]))); break;
        case 3: { QString _r = _t->cacheDirectory((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 4: { qint64 _r = _t->cacheSize((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 5: _t->clear((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1]))); break;
        case 6: { QIODevice* _r = _t->data((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 7: { qint64 _r = _t->expire((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 8: { QNetworkCacheMetaData _r = _t->fileMetaData((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData*>(_a[0]) = _r; }  break;
        case 9: _t->insert((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2]))); break;
        case 10: { qint64 _r = _t->maximumCacheSize((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 11: { QNetworkCacheMetaData _r = _t->metaData((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkCacheMetaData*>(_a[0]) = _r; }  break;
        case 12: { QIODevice* _r = _t->prepare((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QIODevice**>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->remove((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->setCacheDirectory((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->setMaximumCacheSize((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 16: _t->updateMetaData((*reinterpret_cast< QNetworkDiskCache*(*)>(_a[1])),(*reinterpret_cast< const QNetworkCacheMetaData(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkDiskCache* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkDiskCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkDiskCache.data,
      qt_meta_data_PythonQtWrapper_QNetworkDiskCache,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkDiskCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkDiskCache::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkDiskCache.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkDiskCache*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkDiskCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkInterface_t {
    QByteArrayData data[35];
    char stringdata[623];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkInterface_t qt_meta_stringdata_PythonQtWrapper_QNetworkInterface = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_QNetworkInter..."
QT_MOC_LITERAL(1, 34, 21), // "new_QNetworkInterface"
QT_MOC_LITERAL(2, 56, 18), // "QNetworkInterface*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 17), // "QNetworkInterface"
QT_MOC_LITERAL(5, 94, 5), // "other"
QT_MOC_LITERAL(6, 100, 24), // "delete_QNetworkInterface"
QT_MOC_LITERAL(7, 125, 3), // "obj"
QT_MOC_LITERAL(8, 129, 14), // "addressEntries"
QT_MOC_LITERAL(9, 144, 27), // "QList<QNetworkAddressEntry>"
QT_MOC_LITERAL(10, 172, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 189, 37), // "static_QNetworkInterface_allA..."
QT_MOC_LITERAL(12, 227, 19), // "QList<QHostAddress>"
QT_MOC_LITERAL(13, 247, 38), // "static_QNetworkInterface_allI..."
QT_MOC_LITERAL(14, 286, 24), // "QList<QNetworkInterface>"
QT_MOC_LITERAL(15, 311, 5), // "flags"
QT_MOC_LITERAL(16, 317, 33), // "QNetworkInterface::InterfaceF..."
QT_MOC_LITERAL(17, 351, 15), // "hardwareAddress"
QT_MOC_LITERAL(18, 367, 17), // "humanReadableName"
QT_MOC_LITERAL(19, 385, 5), // "index"
QT_MOC_LITERAL(20, 391, 43), // "static_QNetworkInterface_inte..."
QT_MOC_LITERAL(21, 435, 42), // "static_QNetworkInterface_inte..."
QT_MOC_LITERAL(22, 478, 4), // "name"
QT_MOC_LITERAL(23, 483, 7), // "isValid"
QT_MOC_LITERAL(24, 491, 4), // "swap"
QT_MOC_LITERAL(25, 496, 18), // "QNetworkInterface&"
QT_MOC_LITERAL(26, 515, 11), // "py_toString"
QT_MOC_LITERAL(27, 527, 13), // "InterfaceFlag"
QT_MOC_LITERAL(28, 541, 4), // "IsUp"
QT_MOC_LITERAL(29, 546, 9), // "IsRunning"
QT_MOC_LITERAL(30, 556, 12), // "CanBroadcast"
QT_MOC_LITERAL(31, 569, 10), // "IsLoopBack"
QT_MOC_LITERAL(32, 580, 14), // "IsPointToPoint"
QT_MOC_LITERAL(33, 595, 12), // "CanMulticast"
QT_MOC_LITERAL(34, 608, 14) // "InterfaceFlags"

    },
    "PythonQtWrapper_QNetworkInterface\0"
    "new_QNetworkInterface\0QNetworkInterface*\0"
    "\0QNetworkInterface\0other\0"
    "delete_QNetworkInterface\0obj\0"
    "addressEntries\0QList<QNetworkAddressEntry>\0"
    "theWrappedObject\0static_QNetworkInterface_allAddresses\0"
    "QList<QHostAddress>\0"
    "static_QNetworkInterface_allInterfaces\0"
    "QList<QNetworkInterface>\0flags\0"
    "QNetworkInterface::InterfaceFlags\0"
    "hardwareAddress\0humanReadableName\0"
    "index\0static_QNetworkInterface_interfaceFromIndex\0"
    "static_QNetworkInterface_interfaceFromName\0"
    "name\0isValid\0swap\0QNetworkInterface&\0"
    "py_toString\0InterfaceFlag\0IsUp\0IsRunning\0"
    "CanBroadcast\0IsLoopBack\0IsPointToPoint\0"
    "CanMulticast\0InterfaceFlags"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       2,  138, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    3, 0x0a /* Public */,
       1,    1,   95,    3, 0x0a /* Public */,
       6,    1,   98,    3, 0x0a /* Public */,
       8,    1,  101,    3, 0x0a /* Public */,
      11,    0,  104,    3, 0x0a /* Public */,
      13,    0,  105,    3, 0x0a /* Public */,
      15,    1,  106,    3, 0x0a /* Public */,
      17,    1,  109,    3, 0x0a /* Public */,
      18,    1,  112,    3, 0x0a /* Public */,
      19,    1,  115,    3, 0x0a /* Public */,
      20,    1,  118,    3, 0x0a /* Public */,
      21,    1,  121,    3, 0x0a /* Public */,
      23,    1,  124,    3, 0x0a /* Public */,
      22,    1,  127,    3, 0x0a /* Public */,
      24,    2,  130,    3, 0x0a /* Public */,
      26,    1,  135,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    0x80000000 | 9, 0x80000000 | 2,   10,
    0x80000000 | 12,
    0x80000000 | 14,
    0x80000000 | 16, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Int, 0x80000000 | 2,   10,
    0x80000000 | 4, QMetaType::Int,   19,
    0x80000000 | 4, QMetaType::QString,   22,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 25,   10,    5,
    QMetaType::QString, 0x80000000 | 2,    3,

 // enums: name, flags, count, data
      27, 0x0,    6,  146,
      34, 0x1,    6,  158,

 // enum data: key, value
      28, uint(PythonQtWrapper_QNetworkInterface::IsUp),
      29, uint(PythonQtWrapper_QNetworkInterface::IsRunning),
      30, uint(PythonQtWrapper_QNetworkInterface::CanBroadcast),
      31, uint(PythonQtWrapper_QNetworkInterface::IsLoopBack),
      32, uint(PythonQtWrapper_QNetworkInterface::IsPointToPoint),
      33, uint(PythonQtWrapper_QNetworkInterface::CanMulticast),
      28, uint(PythonQtWrapper_QNetworkInterface::IsUp),
      29, uint(PythonQtWrapper_QNetworkInterface::IsRunning),
      30, uint(PythonQtWrapper_QNetworkInterface::CanBroadcast),
      31, uint(PythonQtWrapper_QNetworkInterface::IsLoopBack),
      32, uint(PythonQtWrapper_QNetworkInterface::IsPointToPoint),
      33, uint(PythonQtWrapper_QNetworkInterface::CanMulticast),

       0        // eod
};

void PythonQtWrapper_QNetworkInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkInterface *_t = static_cast<PythonQtWrapper_QNetworkInterface *>(_o);
        switch (_id) {
        case 0: { QNetworkInterface* _r = _t->new_QNetworkInterface();
            if (_a[0]) *reinterpret_cast< QNetworkInterface**>(_a[0]) = _r; }  break;
        case 1: { QNetworkInterface* _r = _t->new_QNetworkInterface((*reinterpret_cast< const QNetworkInterface(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkInterface((*reinterpret_cast< QNetworkInterface*(*)>(_a[1]))); break;
        case 3: { QList<QNetworkAddressEntry> _r = _t->addressEntries((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkAddressEntry>*>(_a[0]) = _r; }  break;
        case 4: { QList<QHostAddress> _r = _t->static_QNetworkInterface_allAddresses();
            if (_a[0]) *reinterpret_cast< QList<QHostAddress>*>(_a[0]) = _r; }  break;
        case 5: { QList<QNetworkInterface> _r = _t->static_QNetworkInterface_allInterfaces();
            if (_a[0]) *reinterpret_cast< QList<QNetworkInterface>*>(_a[0]) = _r; }  break;
        case 6: { QNetworkInterface::InterfaceFlags _r = _t->flags((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface::InterfaceFlags*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->hardwareAddress((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->humanReadableName((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { int _r = _t->index((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { QNetworkInterface _r = _t->static_QNetworkInterface_interfaceFromIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface*>(_a[0]) = _r; }  break;
        case 11: { QNetworkInterface _r = _t->static_QNetworkInterface_interfaceFromName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isValid((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QString _r = _t->name((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: _t->swap((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])),(*reinterpret_cast< QNetworkInterface(*)>(_a[2]))); break;
        case 15: { QString _r = _t->py_toString((*reinterpret_cast< QNetworkInterface*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkInterface.data,
      qt_meta_data_PythonQtWrapper_QNetworkInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkInterface.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkProxy_t {
    QByteArrayData data[58];
    char stringdata[799];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkProxy_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkProxy_t qt_meta_stringdata_PythonQtWrapper_QNetworkProxy = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QNetworkProxy"
QT_MOC_LITERAL(1, 30, 17), // "new_QNetworkProxy"
QT_MOC_LITERAL(2, 48, 14), // "QNetworkProxy*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 24), // "QNetworkProxy::ProxyType"
QT_MOC_LITERAL(5, 89, 4), // "type"
QT_MOC_LITERAL(6, 94, 8), // "hostName"
QT_MOC_LITERAL(7, 103, 4), // "port"
QT_MOC_LITERAL(8, 108, 4), // "user"
QT_MOC_LITERAL(9, 113, 8), // "password"
QT_MOC_LITERAL(10, 122, 13), // "QNetworkProxy"
QT_MOC_LITERAL(11, 136, 5), // "other"
QT_MOC_LITERAL(12, 142, 20), // "delete_QNetworkProxy"
QT_MOC_LITERAL(13, 163, 3), // "obj"
QT_MOC_LITERAL(14, 167, 37), // "static_QNetworkProxy_applicat..."
QT_MOC_LITERAL(15, 205, 12), // "capabilities"
QT_MOC_LITERAL(16, 218, 27), // "QNetworkProxy::Capabilities"
QT_MOC_LITERAL(17, 246, 16), // "theWrappedObject"
QT_MOC_LITERAL(18, 263, 12), // "hasRawHeader"
QT_MOC_LITERAL(19, 276, 10), // "headerName"
QT_MOC_LITERAL(20, 287, 6), // "header"
QT_MOC_LITERAL(21, 294, 29), // "QNetworkRequest::KnownHeaders"
QT_MOC_LITERAL(22, 324, 14), // "isCachingProxy"
QT_MOC_LITERAL(23, 339, 18), // "isTransparentProxy"
QT_MOC_LITERAL(24, 358, 6), // "__ne__"
QT_MOC_LITERAL(25, 365, 6), // "__eq__"
QT_MOC_LITERAL(26, 372, 9), // "rawHeader"
QT_MOC_LITERAL(27, 382, 13), // "rawHeaderList"
QT_MOC_LITERAL(28, 396, 40), // "static_QNetworkProxy_setAppli..."
QT_MOC_LITERAL(29, 437, 5), // "proxy"
QT_MOC_LITERAL(30, 443, 15), // "setCapabilities"
QT_MOC_LITERAL(31, 459, 5), // "capab"
QT_MOC_LITERAL(32, 465, 9), // "setHeader"
QT_MOC_LITERAL(33, 475, 5), // "value"
QT_MOC_LITERAL(34, 481, 11), // "setHostName"
QT_MOC_LITERAL(35, 493, 11), // "setPassword"
QT_MOC_LITERAL(36, 505, 7), // "setPort"
QT_MOC_LITERAL(37, 513, 12), // "setRawHeader"
QT_MOC_LITERAL(38, 526, 7), // "setType"
QT_MOC_LITERAL(39, 534, 7), // "setUser"
QT_MOC_LITERAL(40, 542, 8), // "userName"
QT_MOC_LITERAL(41, 551, 4), // "swap"
QT_MOC_LITERAL(42, 556, 14), // "QNetworkProxy&"
QT_MOC_LITERAL(43, 571, 11), // "py_toString"
QT_MOC_LITERAL(44, 583, 10), // "Capability"
QT_MOC_LITERAL(45, 594, 19), // "TunnelingCapability"
QT_MOC_LITERAL(46, 614, 19), // "ListeningCapability"
QT_MOC_LITERAL(47, 634, 22), // "UdpTunnelingCapability"
QT_MOC_LITERAL(48, 657, 17), // "CachingCapability"
QT_MOC_LITERAL(49, 675, 24), // "HostNameLookupCapability"
QT_MOC_LITERAL(50, 700, 12), // "Capabilities"
QT_MOC_LITERAL(51, 713, 9), // "ProxyType"
QT_MOC_LITERAL(52, 723, 12), // "DefaultProxy"
QT_MOC_LITERAL(53, 736, 11), // "Socks5Proxy"
QT_MOC_LITERAL(54, 748, 7), // "NoProxy"
QT_MOC_LITERAL(55, 756, 9), // "HttpProxy"
QT_MOC_LITERAL(56, 766, 16), // "HttpCachingProxy"
QT_MOC_LITERAL(57, 783, 15) // "FtpCachingProxy"

    },
    "PythonQtWrapper_QNetworkProxy\0"
    "new_QNetworkProxy\0QNetworkProxy*\0\0"
    "QNetworkProxy::ProxyType\0type\0hostName\0"
    "port\0user\0password\0QNetworkProxy\0other\0"
    "delete_QNetworkProxy\0obj\0"
    "static_QNetworkProxy_applicationProxy\0"
    "capabilities\0QNetworkProxy::Capabilities\0"
    "theWrappedObject\0hasRawHeader\0headerName\0"
    "header\0QNetworkRequest::KnownHeaders\0"
    "isCachingProxy\0isTransparentProxy\0"
    "__ne__\0__eq__\0rawHeader\0rawHeaderList\0"
    "static_QNetworkProxy_setApplicationProxy\0"
    "proxy\0setCapabilities\0capab\0setHeader\0"
    "value\0setHostName\0setPassword\0setPort\0"
    "setRawHeader\0setType\0setUser\0userName\0"
    "swap\0QNetworkProxy&\0py_toString\0"
    "Capability\0TunnelingCapability\0"
    "ListeningCapability\0UdpTunnelingCapability\0"
    "CachingCapability\0HostNameLookupCapability\0"
    "Capabilities\0ProxyType\0DefaultProxy\0"
    "Socks5Proxy\0NoProxy\0HttpProxy\0"
    "HttpCachingProxy\0FtpCachingProxy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       3,  334, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  184,    3, 0x0a /* Public */,
       1,    5,  185,    3, 0x0a /* Public */,
       1,    4,  196,    3, 0x2a /* Public | MethodCloned */,
       1,    3,  205,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  212,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  217,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  220,    3, 0x0a /* Public */,
      12,    1,  223,    3, 0x0a /* Public */,
      14,    0,  226,    3, 0x0a /* Public */,
      15,    1,  227,    3, 0x0a /* Public */,
      18,    2,  230,    3, 0x0a /* Public */,
      20,    2,  235,    3, 0x0a /* Public */,
       6,    1,  240,    3, 0x0a /* Public */,
      22,    1,  243,    3, 0x0a /* Public */,
      23,    1,  246,    3, 0x0a /* Public */,
      24,    2,  249,    3, 0x0a /* Public */,
      25,    2,  254,    3, 0x0a /* Public */,
       9,    1,  259,    3, 0x0a /* Public */,
       7,    1,  262,    3, 0x0a /* Public */,
      26,    2,  265,    3, 0x0a /* Public */,
      27,    1,  270,    3, 0x0a /* Public */,
      28,    1,  273,    3, 0x0a /* Public */,
      30,    2,  276,    3, 0x0a /* Public */,
      32,    3,  281,    3, 0x0a /* Public */,
      34,    2,  288,    3, 0x0a /* Public */,
      35,    2,  293,    3, 0x0a /* Public */,
      36,    2,  298,    3, 0x0a /* Public */,
      37,    3,  303,    3, 0x0a /* Public */,
      38,    2,  310,    3, 0x0a /* Public */,
      39,    2,  315,    3, 0x0a /* Public */,
      41,    2,  320,    3, 0x0a /* Public */,
       5,    1,  325,    3, 0x0a /* Public */,
       8,    1,  328,    3, 0x0a /* Public */,
      43,    1,  331,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::UShort, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,    9,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::UShort, QMetaType::QString,    5,    6,    7,    8,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::UShort,    5,    6,    7,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString,    5,    6,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 2,   13,
    0x80000000 | 10,
    0x80000000 | 16, 0x80000000 | 2,   17,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray,   17,   19,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 21,   17,   20,
    QMetaType::QString, 0x80000000 | 2,   17,
    QMetaType::Bool, 0x80000000 | 2,   17,
    QMetaType::Bool, 0x80000000 | 2,   17,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,   17,   11,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 10,   17,   11,
    QMetaType::QString, 0x80000000 | 2,   17,
    QMetaType::UShort, 0x80000000 | 2,   17,
    QMetaType::QByteArray, 0x80000000 | 2, QMetaType::QByteArray,   17,   19,
    QMetaType::QByteArrayList, 0x80000000 | 2,   17,
    QMetaType::Void, 0x80000000 | 10,   29,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 16,   17,   31,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21, QMetaType::QVariant,   17,   20,   33,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   17,    6,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   17,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::UShort,   17,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::QByteArray,   17,   19,   33,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   17,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   17,   40,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 42,   17,   11,
    0x80000000 | 4, 0x80000000 | 2,   17,
    QMetaType::QString, 0x80000000 | 2,   17,
    QMetaType::QString, 0x80000000 | 2,    3,

 // enums: name, flags, count, data
      44, 0x0,    5,  346,
      50, 0x1,    5,  356,
      51, 0x0,    6,  366,

 // enum data: key, value
      45, uint(PythonQtWrapper_QNetworkProxy::TunnelingCapability),
      46, uint(PythonQtWrapper_QNetworkProxy::ListeningCapability),
      47, uint(PythonQtWrapper_QNetworkProxy::UdpTunnelingCapability),
      48, uint(PythonQtWrapper_QNetworkProxy::CachingCapability),
      49, uint(PythonQtWrapper_QNetworkProxy::HostNameLookupCapability),
      45, uint(PythonQtWrapper_QNetworkProxy::TunnelingCapability),
      46, uint(PythonQtWrapper_QNetworkProxy::ListeningCapability),
      47, uint(PythonQtWrapper_QNetworkProxy::UdpTunnelingCapability),
      48, uint(PythonQtWrapper_QNetworkProxy::CachingCapability),
      49, uint(PythonQtWrapper_QNetworkProxy::HostNameLookupCapability),
      52, uint(PythonQtWrapper_QNetworkProxy::DefaultProxy),
      53, uint(PythonQtWrapper_QNetworkProxy::Socks5Proxy),
      54, uint(PythonQtWrapper_QNetworkProxy::NoProxy),
      55, uint(PythonQtWrapper_QNetworkProxy::HttpProxy),
      56, uint(PythonQtWrapper_QNetworkProxy::HttpCachingProxy),
      57, uint(PythonQtWrapper_QNetworkProxy::FtpCachingProxy),

       0        // eod
};

void PythonQtWrapper_QNetworkProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkProxy *_t = static_cast<PythonQtWrapper_QNetworkProxy *>(_o);
        switch (_id) {
        case 0: { QNetworkProxy* _r = _t->new_QNetworkProxy();
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 1: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 2: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 3: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< unsigned short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 4: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 5: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 6: { QNetworkProxy* _r = _t->new_QNetworkProxy((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy**>(_a[0]) = _r; }  break;
        case 7: _t->delete_QNetworkProxy((*reinterpret_cast< QNetworkProxy*(*)>(_a[1]))); break;
        case 8: { QNetworkProxy _r = _t->static_QNetworkProxy_applicationProxy();
            if (_a[0]) *reinterpret_cast< QNetworkProxy*>(_a[0]) = _r; }  break;
        case 9: { QNetworkProxy::Capabilities _r = _t->capabilities((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy::Capabilities*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->hasRawHeader((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QVariant _r = _t->header((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 12: { QString _r = _t->hostName((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isCachingProxy((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->isTransparentProxy((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxy(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { QString _r = _t->password((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 18: { unsigned short _r = _t->port((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< unsigned short*>(_a[0]) = _r; }  break;
        case 19: { QByteArray _r = _t->rawHeader((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 20: { QList<QByteArray> _r = _t->rawHeaderList((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 21: _t->static_QNetworkProxy_setApplicationProxy((*reinterpret_cast< const QNetworkProxy(*)>(_a[1]))); break;
        case 22: _t->setCapabilities((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxy::Capabilities(*)>(_a[2]))); break;
        case 23: _t->setHeader((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 24: _t->setHostName((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 25: _t->setPassword((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->setPort((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2]))); break;
        case 27: _t->setRawHeader((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 28: _t->setType((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxy::ProxyType(*)>(_a[2]))); break;
        case 29: _t->setUser((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->swap((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxy(*)>(_a[2]))); break;
        case 31: { QNetworkProxy::ProxyType _r = _t->type((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxy::ProxyType*>(_a[0]) = _r; }  break;
        case 32: { QString _r = _t->user((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 33: { QString _r = _t->py_toString((*reinterpret_cast< QNetworkProxy*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkProxy::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkProxy.data,
      qt_meta_data_PythonQtWrapper_QNetworkProxy,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkProxy.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkProxy*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QNetworkProxyFactory_t {
    QByteArrayData data[17];
    char stringdata[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkProxyFactory_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkProxyFactory_t qt_meta_stringdata_PythonQtWrapper_QNetworkProxyFactory = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PythonQtWrapper_QNetworkProxy..."
QT_MOC_LITERAL(1, 37, 24), // "new_QNetworkProxyFactory"
QT_MOC_LITERAL(2, 62, 21), // "QNetworkProxyFactory*"
QT_MOC_LITERAL(3, 84, 0), // ""
QT_MOC_LITERAL(4, 85, 27), // "delete_QNetworkProxyFactory"
QT_MOC_LITERAL(5, 113, 3), // "obj"
QT_MOC_LITERAL(6, 117, 41), // "static_QNetworkProxyFactory_p..."
QT_MOC_LITERAL(7, 159, 20), // "QList<QNetworkProxy>"
QT_MOC_LITERAL(8, 180, 18), // "QNetworkProxyQuery"
QT_MOC_LITERAL(9, 199, 5), // "query"
QT_MOC_LITERAL(10, 205, 10), // "queryProxy"
QT_MOC_LITERAL(11, 216, 16), // "theWrappedObject"
QT_MOC_LITERAL(12, 233, 54), // "static_QNetworkProxyFactory_s..."
QT_MOC_LITERAL(13, 288, 7), // "factory"
QT_MOC_LITERAL(14, 296, 53), // "static_QNetworkProxyFactory_s..."
QT_MOC_LITERAL(15, 350, 6), // "enable"
QT_MOC_LITERAL(16, 357, 47) // "static_QNetworkProxyFactory_s..."

    },
    "PythonQtWrapper_QNetworkProxyFactory\0"
    "new_QNetworkProxyFactory\0QNetworkProxyFactory*\0"
    "\0delete_QNetworkProxyFactory\0obj\0"
    "static_QNetworkProxyFactory_proxyForQuery\0"
    "QList<QNetworkProxy>\0QNetworkProxyQuery\0"
    "query\0queryProxy\0theWrappedObject\0"
    "static_QNetworkProxyFactory_setApplicationProxyFactory\0"
    "factory\0static_QNetworkProxyFactory_setUseSystemConfiguration\0"
    "enable\0static_QNetworkProxyFactory_systemProxyForQuery"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkProxyFactory[] = {

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
       4,    1,   60,    3, 0x0a /* Public */,
       6,    1,   63,    3, 0x0a /* Public */,
      10,    2,   66,    3, 0x0a /* Public */,
      10,    1,   71,    3, 0x2a /* Public | MethodCloned */,
      12,    1,   74,    3, 0x0a /* Public */,
      14,    1,   77,    3, 0x0a /* Public */,
      16,    1,   80,    3, 0x0a /* Public */,
      16,    0,   83,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    5,
    0x80000000 | 7, 0x80000000 | 8,    9,
    0x80000000 | 7, 0x80000000 | 2, 0x80000000 | 8,   11,    9,
    0x80000000 | 7, 0x80000000 | 2,   11,
    QMetaType::Void, 0x80000000 | 2,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    0x80000000 | 7, 0x80000000 | 8,    9,
    0x80000000 | 7,

       0        // eod
};

void PythonQtWrapper_QNetworkProxyFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkProxyFactory *_t = static_cast<PythonQtWrapper_QNetworkProxyFactory *>(_o);
        switch (_id) {
        case 0: { QNetworkProxyFactory* _r = _t->new_QNetworkProxyFactory();
            if (_a[0]) *reinterpret_cast< QNetworkProxyFactory**>(_a[0]) = _r; }  break;
        case 1: _t->delete_QNetworkProxyFactory((*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[1]))); break;
        case 2: { QList<QNetworkProxy> _r = _t->static_QNetworkProxyFactory_proxyForQuery((*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        case 3: { QList<QNetworkProxy> _r = _t->queryProxy((*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        case 4: { QList<QNetworkProxy> _r = _t->queryProxy((*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        case 5: _t->static_QNetworkProxyFactory_setApplicationProxyFactory((*reinterpret_cast< QNetworkProxyFactory*(*)>(_a[1]))); break;
        case 6: _t->static_QNetworkProxyFactory_setUseSystemConfiguration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { QList<QNetworkProxy> _r = _t->static_QNetworkProxyFactory_systemProxyForQuery((*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        case 8: { QList<QNetworkProxy> _r = _t->static_QNetworkProxyFactory_systemProxyForQuery();
            if (_a[0]) *reinterpret_cast< QList<QNetworkProxy>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkProxyFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkProxyFactory.data,
      qt_meta_data_PythonQtWrapper_QNetworkProxyFactory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkProxyFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkProxyFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkProxyFactory.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkProxyFactory*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkProxyFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkProxyQuery_t {
    QByteArrayData data[39];
    char stringdata[511];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkProxyQuery_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkProxyQuery_t qt_meta_stringdata_PythonQtWrapper_QNetworkProxyQuery = {
    {
QT_MOC_LITERAL(0, 0, 34), // "PythonQtWrapper_QNetworkProxy..."
QT_MOC_LITERAL(1, 35, 22), // "new_QNetworkProxyQuery"
QT_MOC_LITERAL(2, 58, 19), // "QNetworkProxyQuery*"
QT_MOC_LITERAL(3, 78, 0), // ""
QT_MOC_LITERAL(4, 79, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(5, 101, 20), // "networkConfiguration"
QT_MOC_LITERAL(6, 122, 8), // "hostname"
QT_MOC_LITERAL(7, 131, 4), // "port"
QT_MOC_LITERAL(8, 136, 11), // "protocolTag"
QT_MOC_LITERAL(9, 148, 29), // "QNetworkProxyQuery::QueryType"
QT_MOC_LITERAL(10, 178, 9), // "queryType"
QT_MOC_LITERAL(11, 188, 10), // "requestUrl"
QT_MOC_LITERAL(12, 199, 8), // "bindPort"
QT_MOC_LITERAL(13, 208, 18), // "QNetworkProxyQuery"
QT_MOC_LITERAL(14, 227, 5), // "other"
QT_MOC_LITERAL(15, 233, 25), // "delete_QNetworkProxyQuery"
QT_MOC_LITERAL(16, 259, 3), // "obj"
QT_MOC_LITERAL(17, 263, 9), // "localPort"
QT_MOC_LITERAL(18, 273, 16), // "theWrappedObject"
QT_MOC_LITERAL(19, 290, 6), // "__ne__"
QT_MOC_LITERAL(20, 297, 6), // "__eq__"
QT_MOC_LITERAL(21, 304, 12), // "peerHostName"
QT_MOC_LITERAL(22, 317, 8), // "peerPort"
QT_MOC_LITERAL(23, 326, 12), // "setLocalPort"
QT_MOC_LITERAL(24, 339, 23), // "setNetworkConfiguration"
QT_MOC_LITERAL(25, 363, 15), // "setPeerHostName"
QT_MOC_LITERAL(26, 379, 11), // "setPeerPort"
QT_MOC_LITERAL(27, 391, 14), // "setProtocolTag"
QT_MOC_LITERAL(28, 406, 12), // "setQueryType"
QT_MOC_LITERAL(29, 419, 4), // "type"
QT_MOC_LITERAL(30, 424, 6), // "setUrl"
QT_MOC_LITERAL(31, 431, 3), // "url"
QT_MOC_LITERAL(32, 435, 4), // "swap"
QT_MOC_LITERAL(33, 440, 19), // "QNetworkProxyQuery&"
QT_MOC_LITERAL(34, 460, 9), // "QueryType"
QT_MOC_LITERAL(35, 470, 9), // "TcpSocket"
QT_MOC_LITERAL(36, 480, 9), // "UdpSocket"
QT_MOC_LITERAL(37, 490, 9), // "TcpServer"
QT_MOC_LITERAL(38, 500, 10) // "UrlRequest"

    },
    "PythonQtWrapper_QNetworkProxyQuery\0"
    "new_QNetworkProxyQuery\0QNetworkProxyQuery*\0"
    "\0QNetworkConfiguration\0networkConfiguration\0"
    "hostname\0port\0protocolTag\0"
    "QNetworkProxyQuery::QueryType\0queryType\0"
    "requestUrl\0bindPort\0QNetworkProxyQuery\0"
    "other\0delete_QNetworkProxyQuery\0obj\0"
    "localPort\0theWrappedObject\0__ne__\0"
    "__eq__\0peerHostName\0peerPort\0setLocalPort\0"
    "setNetworkConfiguration\0setPeerHostName\0"
    "setPeerPort\0setProtocolTag\0setQueryType\0"
    "type\0setUrl\0url\0swap\0QNetworkProxyQuery&\0"
    "QueryType\0TcpSocket\0UdpSocket\0TcpServer\0"
    "UrlRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkProxyQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       1,  376, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  194,    3, 0x0a /* Public */,
       1,    5,  195,    3, 0x0a /* Public */,
       1,    4,  206,    3, 0x2a /* Public | MethodCloned */,
       1,    3,  215,    3, 0x2a /* Public | MethodCloned */,
       1,    3,  222,    3, 0x0a /* Public */,
       1,    2,  229,    3, 0x2a /* Public | MethodCloned */,
       1,    4,  234,    3, 0x0a /* Public */,
       1,    3,  243,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  250,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  255,    3, 0x0a /* Public */,
       1,    4,  258,    3, 0x0a /* Public */,
       1,    3,  267,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  274,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  279,    3, 0x0a /* Public */,
       1,    1,  284,    3, 0x2a /* Public | MethodCloned */,
       1,    3,  287,    3, 0x0a /* Public */,
       1,    2,  294,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  299,    3, 0x2a /* Public | MethodCloned */,
      15,    1,  302,    3, 0x0a /* Public */,
      17,    1,  305,    3, 0x0a /* Public */,
       5,    1,  308,    3, 0x0a /* Public */,
      19,    2,  311,    3, 0x0a /* Public */,
      20,    2,  316,    3, 0x0a /* Public */,
      21,    1,  321,    3, 0x0a /* Public */,
      22,    1,  324,    3, 0x0a /* Public */,
       8,    1,  327,    3, 0x0a /* Public */,
      10,    1,  330,    3, 0x0a /* Public */,
      23,    2,  333,    3, 0x0a /* Public */,
      24,    2,  338,    3, 0x0a /* Public */,
      25,    2,  343,    3, 0x0a /* Public */,
      26,    2,  348,    3, 0x0a /* Public */,
      27,    2,  353,    3, 0x0a /* Public */,
      28,    2,  358,    3, 0x0a /* Public */,
      30,    2,  363,    3, 0x0a /* Public */,
      32,    2,  368,    3, 0x0a /* Public */,
      31,    1,  373,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::Int, QMetaType::QString, 0x80000000 | 9,    5,    6,    7,    8,   10,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::Int, QMetaType::QString,    5,    6,    7,    8,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QString, QMetaType::Int,    5,    6,    7,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QUrl, 0x80000000 | 9,    5,   11,   10,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QUrl,    5,   11,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::UShort, QMetaType::QString, 0x80000000 | 9,    5,   12,    8,   10,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::UShort, QMetaType::QString,    5,   12,    8,
    0x80000000 | 2, 0x80000000 | 4, QMetaType::UShort,    5,   12,
    0x80000000 | 2, 0x80000000 | 13,   14,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int, QMetaType::QString, 0x80000000 | 9,    6,    7,    8,   10,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int, QMetaType::QString,    6,    7,    8,
    0x80000000 | 2, QMetaType::QString, QMetaType::Int,    6,    7,
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 9,   11,   10,
    0x80000000 | 2, QMetaType::QUrl,   11,
    0x80000000 | 2, QMetaType::UShort, QMetaType::QString, 0x80000000 | 9,   12,    8,   10,
    0x80000000 | 2, QMetaType::UShort, QMetaType::QString,   12,    8,
    0x80000000 | 2, QMetaType::UShort,   12,
    QMetaType::Void, 0x80000000 | 2,   16,
    QMetaType::Int, 0x80000000 | 2,   18,
    0x80000000 | 4, 0x80000000 | 2,   18,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13,   18,   14,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 13,   18,   14,
    QMetaType::QString, 0x80000000 | 2,   18,
    QMetaType::Int, 0x80000000 | 2,   18,
    QMetaType::QString, 0x80000000 | 2,   18,
    0x80000000 | 9, 0x80000000 | 2,   18,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   18,    7,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 4,   18,    5,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   18,    6,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,   18,    7,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString,   18,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 9,   18,   29,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,   18,   31,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 33,   18,   14,
    QMetaType::QUrl, 0x80000000 | 2,   18,

 // enums: name, flags, count, data
      34, 0x0,    4,  380,

 // enum data: key, value
      35, uint(PythonQtWrapper_QNetworkProxyQuery::TcpSocket),
      36, uint(PythonQtWrapper_QNetworkProxyQuery::UdpSocket),
      37, uint(PythonQtWrapper_QNetworkProxyQuery::TcpServer),
      38, uint(PythonQtWrapper_QNetworkProxyQuery::UrlRequest),

       0        // eod
};

void PythonQtWrapper_QNetworkProxyQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkProxyQuery *_t = static_cast<PythonQtWrapper_QNetworkProxyQuery *>(_o);
        switch (_id) {
        case 0: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery();
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 1: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 2: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 3: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 4: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 5: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 6: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 7: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 8: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 9: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 10: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 11: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 12: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 13: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 14: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 15: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< unsigned short(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 16: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< unsigned short(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 17: { QNetworkProxyQuery* _r = _t->new_QNetworkProxyQuery((*reinterpret_cast< unsigned short(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery**>(_a[0]) = _r; }  break;
        case 18: _t->delete_QNetworkProxyQuery((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1]))); break;
        case 19: { int _r = _t->localPort((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 20: { QNetworkConfiguration _r = _t->networkConfiguration((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QNetworkProxyQuery(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { QString _r = _t->peerHostName((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->peerPort((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: { QString _r = _t->protocolTag((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 26: { QNetworkProxyQuery::QueryType _r = _t->queryType((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkProxyQuery::QueryType*>(_a[0]) = _r; }  break;
        case 27: _t->setLocalPort((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: _t->setNetworkConfiguration((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QNetworkConfiguration(*)>(_a[2]))); break;
        case 29: _t->setPeerHostName((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->setPeerPort((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->setProtocolTag((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 32: _t->setQueryType((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxyQuery::QueryType(*)>(_a[2]))); break;
        case 33: _t->setUrl((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 34: _t->swap((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])),(*reinterpret_cast< QNetworkProxyQuery(*)>(_a[2]))); break;
        case 35: { QUrl _r = _t->url((*reinterpret_cast< QNetworkProxyQuery*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkProxyQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkProxyQuery.data,
      qt_meta_data_PythonQtWrapper_QNetworkProxyQuery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkProxyQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkProxyQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkProxyQuery.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkProxyQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkProxyQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkReply_t {
    QByteArrayData data[59];
    char stringdata[838];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkReply_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkReply_t qt_meta_stringdata_PythonQtWrapper_QNetworkReply = {
    {
QT_MOC_LITERAL(0, 0, 29), // "PythonQtWrapper_QNetworkReply"
QT_MOC_LITERAL(1, 30, 17), // "new_QNetworkReply"
QT_MOC_LITERAL(2, 48, 14), // "QNetworkReply*"
QT_MOC_LITERAL(3, 63, 0), // ""
QT_MOC_LITERAL(4, 64, 6), // "parent"
QT_MOC_LITERAL(5, 71, 20), // "delete_QNetworkReply"
QT_MOC_LITERAL(6, 92, 3), // "obj"
QT_MOC_LITERAL(7, 96, 5), // "abort"
QT_MOC_LITERAL(8, 102, 16), // "theWrappedObject"
QT_MOC_LITERAL(9, 119, 9), // "attribute"
QT_MOC_LITERAL(10, 129, 26), // "QNetworkRequest::Attribute"
QT_MOC_LITERAL(11, 156, 4), // "code"
QT_MOC_LITERAL(12, 161, 5), // "close"
QT_MOC_LITERAL(13, 167, 5), // "error"
QT_MOC_LITERAL(14, 173, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(15, 201, 12), // "hasRawHeader"
QT_MOC_LITERAL(16, 214, 10), // "headerName"
QT_MOC_LITERAL(17, 225, 6), // "header"
QT_MOC_LITERAL(18, 232, 29), // "QNetworkRequest::KnownHeaders"
QT_MOC_LITERAL(19, 262, 15), // "ignoreSslErrors"
QT_MOC_LITERAL(20, 278, 29), // "ignoreSslErrorsImplementation"
QT_MOC_LITERAL(21, 308, 16), // "QList<QSslError>"
QT_MOC_LITERAL(22, 325, 6), // "arg__1"
QT_MOC_LITERAL(23, 332, 10), // "isFinished"
QT_MOC_LITERAL(24, 343, 9), // "isRunning"
QT_MOC_LITERAL(25, 353, 12), // "isSequential"
QT_MOC_LITERAL(26, 366, 7), // "manager"
QT_MOC_LITERAL(27, 374, 22), // "QNetworkAccessManager*"
QT_MOC_LITERAL(28, 397, 9), // "operation"
QT_MOC_LITERAL(29, 407, 32), // "QNetworkAccessManager::Operation"
QT_MOC_LITERAL(30, 440, 9), // "rawHeader"
QT_MOC_LITERAL(31, 450, 13), // "rawHeaderList"
QT_MOC_LITERAL(32, 464, 14), // "rawHeaderPairs"
QT_MOC_LITERAL(33, 479, 43), // "const QList<QPair<QByteArray,..."
QT_MOC_LITERAL(34, 523, 14), // "readBufferSize"
QT_MOC_LITERAL(35, 538, 7), // "request"
QT_MOC_LITERAL(36, 546, 15), // "QNetworkRequest"
QT_MOC_LITERAL(37, 562, 12), // "setAttribute"
QT_MOC_LITERAL(38, 575, 5), // "value"
QT_MOC_LITERAL(39, 581, 8), // "setError"
QT_MOC_LITERAL(40, 590, 9), // "errorCode"
QT_MOC_LITERAL(41, 600, 11), // "errorString"
QT_MOC_LITERAL(42, 612, 11), // "setFinished"
QT_MOC_LITERAL(43, 624, 9), // "setHeader"
QT_MOC_LITERAL(44, 634, 12), // "setOperation"
QT_MOC_LITERAL(45, 647, 12), // "setRawHeader"
QT_MOC_LITERAL(46, 660, 17), // "setReadBufferSize"
QT_MOC_LITERAL(47, 678, 4), // "size"
QT_MOC_LITERAL(48, 683, 10), // "setRequest"
QT_MOC_LITERAL(49, 694, 33), // "setSslConfigurationImplementa..."
QT_MOC_LITERAL(50, 728, 17), // "QSslConfiguration"
QT_MOC_LITERAL(51, 746, 6), // "setUrl"
QT_MOC_LITERAL(52, 753, 3), // "url"
QT_MOC_LITERAL(53, 757, 30), // "sslConfigurationImplementation"
QT_MOC_LITERAL(54, 788, 18), // "QSslConfiguration&"
QT_MOC_LITERAL(55, 807, 9), // "writeData"
QT_MOC_LITERAL(56, 817, 11), // "const char*"
QT_MOC_LITERAL(57, 829, 4), // "data"
QT_MOC_LITERAL(58, 834, 3) // "len"

    },
    "PythonQtWrapper_QNetworkReply\0"
    "new_QNetworkReply\0QNetworkReply*\0\0"
    "parent\0delete_QNetworkReply\0obj\0abort\0"
    "theWrappedObject\0attribute\0"
    "QNetworkRequest::Attribute\0code\0close\0"
    "error\0QNetworkReply::NetworkError\0"
    "hasRawHeader\0headerName\0header\0"
    "QNetworkRequest::KnownHeaders\0"
    "ignoreSslErrors\0ignoreSslErrorsImplementation\0"
    "QList<QSslError>\0arg__1\0isFinished\0"
    "isRunning\0isSequential\0manager\0"
    "QNetworkAccessManager*\0operation\0"
    "QNetworkAccessManager::Operation\0"
    "rawHeader\0rawHeaderList\0rawHeaderPairs\0"
    "const QList<QPair<QByteArray,QByteArray> >*\0"
    "readBufferSize\0request\0QNetworkRequest\0"
    "setAttribute\0value\0setError\0errorCode\0"
    "errorString\0setFinished\0setHeader\0"
    "setOperation\0setRawHeader\0setReadBufferSize\0"
    "size\0setRequest\0setSslConfigurationImplementation\0"
    "QSslConfiguration\0setUrl\0url\0"
    "sslConfigurationImplementation\0"
    "QSslConfiguration&\0writeData\0const char*\0"
    "data\0len"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  184,    3, 0x0a /* Public */,
       1,    0,  187,    3, 0x2a /* Public | MethodCloned */,
       5,    1,  188,    3, 0x0a /* Public */,
       7,    1,  191,    3, 0x0a /* Public */,
       9,    2,  194,    3, 0x0a /* Public */,
      12,    1,  199,    3, 0x0a /* Public */,
      13,    1,  202,    3, 0x0a /* Public */,
      15,    2,  205,    3, 0x0a /* Public */,
      17,    2,  210,    3, 0x0a /* Public */,
      19,    1,  215,    3, 0x0a /* Public */,
      20,    2,  218,    3, 0x0a /* Public */,
      23,    1,  223,    3, 0x0a /* Public */,
      24,    1,  226,    3, 0x0a /* Public */,
      25,    1,  229,    3, 0x0a /* Public */,
      26,    1,  232,    3, 0x0a /* Public */,
      28,    1,  235,    3, 0x0a /* Public */,
      30,    2,  238,    3, 0x0a /* Public */,
      31,    1,  243,    3, 0x0a /* Public */,
      32,    1,  246,    3, 0x0a /* Public */,
      34,    1,  249,    3, 0x0a /* Public */,
      35,    1,  252,    3, 0x0a /* Public */,
      37,    3,  255,    3, 0x0a /* Public */,
      39,    3,  262,    3, 0x0a /* Public */,
      42,    2,  269,    3, 0x0a /* Public */,
      43,    3,  274,    3, 0x0a /* Public */,
      44,    2,  281,    3, 0x0a /* Public */,
      45,    3,  286,    3, 0x0a /* Public */,
      46,    2,  293,    3, 0x0a /* Public */,
      48,    2,  298,    3, 0x0a /* Public */,
      49,    2,  303,    3, 0x0a /* Public */,
      51,    2,  308,    3, 0x0a /* Public */,
      53,    2,  313,    3, 0x0a /* Public */,
      52,    1,  318,    3, 0x0a /* Public */,
      55,    3,  321,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QObjectStar,    4,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    6,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 10,    8,   11,
    QMetaType::Void, 0x80000000 | 2,    8,
    0x80000000 | 14, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray,    8,   16,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 18,    8,   17,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 21,    8,   22,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    QMetaType::Bool, 0x80000000 | 2,    8,
    0x80000000 | 27, 0x80000000 | 2,    8,
    0x80000000 | 29, 0x80000000 | 2,    8,
    QMetaType::QByteArray, 0x80000000 | 2, QMetaType::QByteArray,    8,   16,
    QMetaType::QByteArrayList, 0x80000000 | 2,    8,
    0x80000000 | 33, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2,    8,
    0x80000000 | 36, 0x80000000 | 2,    8,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 10, QMetaType::QVariant,    8,   11,   38,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 14, QMetaType::QString,    8,   40,   41,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Bool,    8,   22,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18, QMetaType::QVariant,    8,   17,   38,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 29,    8,   28,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::QByteArray,    8,   16,   38,
    QMetaType::Void, 0x80000000 | 2, QMetaType::LongLong,    8,   47,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 36,    8,   35,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 50,    8,   22,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,    8,   52,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 54,    8,   22,
    QMetaType::QUrl, 0x80000000 | 2,    8,
    QMetaType::LongLong, 0x80000000 | 2, 0x80000000 | 56, QMetaType::LongLong,    8,   57,   58,

       0        // eod
};

void PythonQtWrapper_QNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkReply *_t = static_cast<PythonQtWrapper_QNetworkReply *>(_o);
        switch (_id) {
        case 0: { QNetworkReply* _r = _t->new_QNetworkReply((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 1: { QNetworkReply* _r = _t->new_QNetworkReply();
            if (_a[0]) *reinterpret_cast< QNetworkReply**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->abort((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: { QVariant _r = _t->attribute((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 5: _t->close((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: { QNetworkReply::NetworkError _r = _t->error((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkReply::NetworkError*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->hasRawHeader((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QVariant _r = _t->header((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 9: _t->ignoreSslErrors((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->ignoreSslErrorsImplementation((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslError>(*)>(_a[2]))); break;
        case 11: { bool _r = _t->isFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isRunning((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->isSequential((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { QNetworkAccessManager* _r = _t->manager((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager**>(_a[0]) = _r; }  break;
        case 15: { QNetworkAccessManager::Operation _r = _t->operation((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkAccessManager::Operation*>(_a[0]) = _r; }  break;
        case 16: { QByteArray _r = _t->rawHeader((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 17: { QList<QByteArray> _r = _t->rawHeaderList((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 18: { const QList<QPair<QByteArray,QByteArray> >* _r = _t->rawHeaderPairs((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< const QList<QPair<QByteArray,QByteArray> >**>(_a[0]) = _r; }  break;
        case 19: { qint64 _r = _t->readBufferSize((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 20: { QNetworkRequest _r = _t->request((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkRequest*>(_a[0]) = _r; }  break;
        case 21: _t->setAttribute((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 22: _t->setError((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 23: _t->setFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->setHeader((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 25: _t->setOperation((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[2]))); break;
        case 26: _t->setRawHeader((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 27: _t->setReadBufferSize((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 28: _t->setRequest((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2]))); break;
        case 29: _t->setSslConfigurationImplementation((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QSslConfiguration(*)>(_a[2]))); break;
        case 30: _t->setUrl((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 31: _t->sslConfigurationImplementation((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QSslConfiguration(*)>(_a[2]))); break;
        case 32: { QUrl _r = _t->url((*reinterpret_cast< QNetworkReply*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = _r; }  break;
        case 33: { qint64 _r = _t->writeData((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslConfiguration >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkReply.data,
      qt_meta_data_PythonQtWrapper_QNetworkReply,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkReply.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkReply*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QNetworkRequest_t {
    QByteArrayData data[80];
    char stringdata[1333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkRequest_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkRequest_t qt_meta_stringdata_PythonQtWrapper_QNetworkRequest = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QNetworkRequest"
QT_MOC_LITERAL(1, 32, 19), // "new_QNetworkRequest"
QT_MOC_LITERAL(2, 52, 16), // "QNetworkRequest*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 15), // "QNetworkRequest"
QT_MOC_LITERAL(5, 86, 5), // "other"
QT_MOC_LITERAL(6, 92, 3), // "url"
QT_MOC_LITERAL(7, 96, 22), // "delete_QNetworkRequest"
QT_MOC_LITERAL(8, 119, 3), // "obj"
QT_MOC_LITERAL(9, 123, 9), // "attribute"
QT_MOC_LITERAL(10, 133, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 150, 26), // "QNetworkRequest::Attribute"
QT_MOC_LITERAL(12, 177, 4), // "code"
QT_MOC_LITERAL(13, 182, 12), // "defaultValue"
QT_MOC_LITERAL(14, 195, 12), // "hasRawHeader"
QT_MOC_LITERAL(15, 208, 10), // "headerName"
QT_MOC_LITERAL(16, 219, 6), // "header"
QT_MOC_LITERAL(17, 226, 29), // "QNetworkRequest::KnownHeaders"
QT_MOC_LITERAL(18, 256, 6), // "__ne__"
QT_MOC_LITERAL(19, 263, 6), // "__eq__"
QT_MOC_LITERAL(20, 270, 17), // "originatingObject"
QT_MOC_LITERAL(21, 288, 8), // "priority"
QT_MOC_LITERAL(22, 297, 25), // "QNetworkRequest::Priority"
QT_MOC_LITERAL(23, 323, 9), // "rawHeader"
QT_MOC_LITERAL(24, 333, 13), // "rawHeaderList"
QT_MOC_LITERAL(25, 347, 12), // "setAttribute"
QT_MOC_LITERAL(26, 360, 5), // "value"
QT_MOC_LITERAL(27, 366, 9), // "setHeader"
QT_MOC_LITERAL(28, 376, 20), // "setOriginatingObject"
QT_MOC_LITERAL(29, 397, 6), // "object"
QT_MOC_LITERAL(30, 404, 11), // "setPriority"
QT_MOC_LITERAL(31, 416, 12), // "setRawHeader"
QT_MOC_LITERAL(32, 429, 6), // "setUrl"
QT_MOC_LITERAL(33, 436, 4), // "swap"
QT_MOC_LITERAL(34, 441, 16), // "QNetworkRequest&"
QT_MOC_LITERAL(35, 458, 9), // "Attribute"
QT_MOC_LITERAL(36, 468, 23), // "HttpStatusCodeAttribute"
QT_MOC_LITERAL(37, 492, 25), // "HttpReasonPhraseAttribute"
QT_MOC_LITERAL(38, 518, 26), // "RedirectionTargetAttribute"
QT_MOC_LITERAL(39, 545, 28), // "ConnectionEncryptedAttribute"
QT_MOC_LITERAL(40, 574, 25), // "CacheLoadControlAttribute"
QT_MOC_LITERAL(41, 600, 25), // "CacheSaveControlAttribute"
QT_MOC_LITERAL(42, 626, 26), // "SourceIsFromCacheAttribute"
QT_MOC_LITERAL(43, 653, 30), // "DoNotBufferUploadDataAttribute"
QT_MOC_LITERAL(44, 684, 30), // "HttpPipeliningAllowedAttribute"
QT_MOC_LITERAL(45, 715, 30), // "HttpPipeliningWasUsedAttribute"
QT_MOC_LITERAL(46, 746, 19), // "CustomVerbAttribute"
QT_MOC_LITERAL(47, 766, 26), // "CookieLoadControlAttribute"
QT_MOC_LITERAL(48, 793, 28), // "AuthenticationReuseAttribute"
QT_MOC_LITERAL(49, 822, 26), // "CookieSaveControlAttribute"
QT_MOC_LITERAL(50, 849, 34), // "MaximumDownloadBufferSizeAttr..."
QT_MOC_LITERAL(51, 884, 23), // "DownloadBufferAttribute"
QT_MOC_LITERAL(52, 908, 27), // "SynchronousRequestAttribute"
QT_MOC_LITERAL(53, 936, 26), // "BackgroundRequestAttribute"
QT_MOC_LITERAL(54, 963, 20), // "SpdyAllowedAttribute"
QT_MOC_LITERAL(55, 984, 20), // "SpdyWasUsedAttribute"
QT_MOC_LITERAL(56, 1005, 4), // "User"
QT_MOC_LITERAL(57, 1010, 7), // "UserMax"
QT_MOC_LITERAL(58, 1018, 16), // "CacheLoadControl"
QT_MOC_LITERAL(59, 1035, 13), // "AlwaysNetwork"
QT_MOC_LITERAL(60, 1049, 13), // "PreferNetwork"
QT_MOC_LITERAL(61, 1063, 11), // "PreferCache"
QT_MOC_LITERAL(62, 1075, 11), // "AlwaysCache"
QT_MOC_LITERAL(63, 1087, 12), // "KnownHeaders"
QT_MOC_LITERAL(64, 1100, 17), // "ContentTypeHeader"
QT_MOC_LITERAL(65, 1118, 19), // "ContentLengthHeader"
QT_MOC_LITERAL(66, 1138, 14), // "LocationHeader"
QT_MOC_LITERAL(67, 1153, 18), // "LastModifiedHeader"
QT_MOC_LITERAL(68, 1172, 12), // "CookieHeader"
QT_MOC_LITERAL(69, 1185, 15), // "SetCookieHeader"
QT_MOC_LITERAL(70, 1201, 24), // "ContentDispositionHeader"
QT_MOC_LITERAL(71, 1226, 15), // "UserAgentHeader"
QT_MOC_LITERAL(72, 1242, 12), // "ServerHeader"
QT_MOC_LITERAL(73, 1255, 11), // "LoadControl"
QT_MOC_LITERAL(74, 1267, 9), // "Automatic"
QT_MOC_LITERAL(75, 1277, 6), // "Manual"
QT_MOC_LITERAL(76, 1284, 8), // "Priority"
QT_MOC_LITERAL(77, 1293, 12), // "HighPriority"
QT_MOC_LITERAL(78, 1306, 14), // "NormalPriority"
QT_MOC_LITERAL(79, 1321, 11) // "LowPriority"

    },
    "PythonQtWrapper_QNetworkRequest\0"
    "new_QNetworkRequest\0QNetworkRequest*\0"
    "\0QNetworkRequest\0other\0url\0"
    "delete_QNetworkRequest\0obj\0attribute\0"
    "theWrappedObject\0QNetworkRequest::Attribute\0"
    "code\0defaultValue\0hasRawHeader\0"
    "headerName\0header\0QNetworkRequest::KnownHeaders\0"
    "__ne__\0__eq__\0originatingObject\0"
    "priority\0QNetworkRequest::Priority\0"
    "rawHeader\0rawHeaderList\0setAttribute\0"
    "value\0setHeader\0setOriginatingObject\0"
    "object\0setPriority\0setRawHeader\0setUrl\0"
    "swap\0QNetworkRequest&\0Attribute\0"
    "HttpStatusCodeAttribute\0"
    "HttpReasonPhraseAttribute\0"
    "RedirectionTargetAttribute\0"
    "ConnectionEncryptedAttribute\0"
    "CacheLoadControlAttribute\0"
    "CacheSaveControlAttribute\0"
    "SourceIsFromCacheAttribute\0"
    "DoNotBufferUploadDataAttribute\0"
    "HttpPipeliningAllowedAttribute\0"
    "HttpPipeliningWasUsedAttribute\0"
    "CustomVerbAttribute\0CookieLoadControlAttribute\0"
    "AuthenticationReuseAttribute\0"
    "CookieSaveControlAttribute\0"
    "MaximumDownloadBufferSizeAttribute\0"
    "DownloadBufferAttribute\0"
    "SynchronousRequestAttribute\0"
    "BackgroundRequestAttribute\0"
    "SpdyAllowedAttribute\0SpdyWasUsedAttribute\0"
    "User\0UserMax\0CacheLoadControl\0"
    "AlwaysNetwork\0PreferNetwork\0PreferCache\0"
    "AlwaysCache\0KnownHeaders\0ContentTypeHeader\0"
    "ContentLengthHeader\0LocationHeader\0"
    "LastModifiedHeader\0CookieHeader\0"
    "SetCookieHeader\0ContentDispositionHeader\0"
    "UserAgentHeader\0ServerHeader\0LoadControl\0"
    "Automatic\0Manual\0Priority\0HighPriority\0"
    "NormalPriority\0LowPriority"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       5,  224, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  124,    3, 0x0a /* Public */,
       1,    1,  127,    3, 0x0a /* Public */,
       1,    0,  130,    3, 0x2a /* Public | MethodCloned */,
       7,    1,  131,    3, 0x0a /* Public */,
       9,    3,  134,    3, 0x0a /* Public */,
       9,    2,  141,    3, 0x2a /* Public | MethodCloned */,
      14,    2,  146,    3, 0x0a /* Public */,
      16,    2,  151,    3, 0x0a /* Public */,
      18,    2,  156,    3, 0x0a /* Public */,
      19,    2,  161,    3, 0x0a /* Public */,
      20,    1,  166,    3, 0x0a /* Public */,
      21,    1,  169,    3, 0x0a /* Public */,
      23,    2,  172,    3, 0x0a /* Public */,
      24,    1,  177,    3, 0x0a /* Public */,
      25,    3,  180,    3, 0x0a /* Public */,
      27,    3,  187,    3, 0x0a /* Public */,
      28,    2,  194,    3, 0x0a /* Public */,
      30,    2,  199,    3, 0x0a /* Public */,
      31,    3,  204,    3, 0x0a /* Public */,
      32,    2,  211,    3, 0x0a /* Public */,
      33,    2,  216,    3, 0x0a /* Public */,
       6,    1,  221,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QUrl,    6,
    0x80000000 | 2,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 11, QMetaType::QVariant,   10,   12,   13,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 11,   10,   12,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::QByteArray,   10,   15,
    QMetaType::QVariant, 0x80000000 | 2, 0x80000000 | 17,   10,   16,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   10,    5,
    QMetaType::QObjectStar, 0x80000000 | 2,   10,
    0x80000000 | 22, 0x80000000 | 2,   10,
    QMetaType::QByteArray, 0x80000000 | 2, QMetaType::QByteArray,   10,   15,
    QMetaType::QByteArrayList, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11, QMetaType::QVariant,   10,   12,   26,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17, QMetaType::QVariant,   10,   16,   26,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QObjectStar,   10,   29,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,   10,   21,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray, QMetaType::QByteArray,   10,   15,   26,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QUrl,   10,    6,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 34,   10,    5,
    QMetaType::QUrl, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
      35, 0x0,   22,  244,
      58, 0x0,    4,  288,
      63, 0x0,    9,  296,
      73, 0x0,    2,  314,
      76, 0x0,    3,  318,

 // enum data: key, value
      36, uint(PythonQtWrapper_QNetworkRequest::HttpStatusCodeAttribute),
      37, uint(PythonQtWrapper_QNetworkRequest::HttpReasonPhraseAttribute),
      38, uint(PythonQtWrapper_QNetworkRequest::RedirectionTargetAttribute),
      39, uint(PythonQtWrapper_QNetworkRequest::ConnectionEncryptedAttribute),
      40, uint(PythonQtWrapper_QNetworkRequest::CacheLoadControlAttribute),
      41, uint(PythonQtWrapper_QNetworkRequest::CacheSaveControlAttribute),
      42, uint(PythonQtWrapper_QNetworkRequest::SourceIsFromCacheAttribute),
      43, uint(PythonQtWrapper_QNetworkRequest::DoNotBufferUploadDataAttribute),
      44, uint(PythonQtWrapper_QNetworkRequest::HttpPipeliningAllowedAttribute),
      45, uint(PythonQtWrapper_QNetworkRequest::HttpPipeliningWasUsedAttribute),
      46, uint(PythonQtWrapper_QNetworkRequest::CustomVerbAttribute),
      47, uint(PythonQtWrapper_QNetworkRequest::CookieLoadControlAttribute),
      48, uint(PythonQtWrapper_QNetworkRequest::AuthenticationReuseAttribute),
      49, uint(PythonQtWrapper_QNetworkRequest::CookieSaveControlAttribute),
      50, uint(PythonQtWrapper_QNetworkRequest::MaximumDownloadBufferSizeAttribute),
      51, uint(PythonQtWrapper_QNetworkRequest::DownloadBufferAttribute),
      52, uint(PythonQtWrapper_QNetworkRequest::SynchronousRequestAttribute),
      53, uint(PythonQtWrapper_QNetworkRequest::BackgroundRequestAttribute),
      54, uint(PythonQtWrapper_QNetworkRequest::SpdyAllowedAttribute),
      55, uint(PythonQtWrapper_QNetworkRequest::SpdyWasUsedAttribute),
      56, uint(PythonQtWrapper_QNetworkRequest::User),
      57, uint(PythonQtWrapper_QNetworkRequest::UserMax),
      59, uint(PythonQtWrapper_QNetworkRequest::AlwaysNetwork),
      60, uint(PythonQtWrapper_QNetworkRequest::PreferNetwork),
      61, uint(PythonQtWrapper_QNetworkRequest::PreferCache),
      62, uint(PythonQtWrapper_QNetworkRequest::AlwaysCache),
      64, uint(PythonQtWrapper_QNetworkRequest::ContentTypeHeader),
      65, uint(PythonQtWrapper_QNetworkRequest::ContentLengthHeader),
      66, uint(PythonQtWrapper_QNetworkRequest::LocationHeader),
      67, uint(PythonQtWrapper_QNetworkRequest::LastModifiedHeader),
      68, uint(PythonQtWrapper_QNetworkRequest::CookieHeader),
      69, uint(PythonQtWrapper_QNetworkRequest::SetCookieHeader),
      70, uint(PythonQtWrapper_QNetworkRequest::ContentDispositionHeader),
      71, uint(PythonQtWrapper_QNetworkRequest::UserAgentHeader),
      72, uint(PythonQtWrapper_QNetworkRequest::ServerHeader),
      74, uint(PythonQtWrapper_QNetworkRequest::Automatic),
      75, uint(PythonQtWrapper_QNetworkRequest::Manual),
      77, uint(PythonQtWrapper_QNetworkRequest::HighPriority),
      78, uint(PythonQtWrapper_QNetworkRequest::NormalPriority),
      79, uint(PythonQtWrapper_QNetworkRequest::LowPriority),

       0        // eod
};

void PythonQtWrapper_QNetworkRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkRequest *_t = static_cast<PythonQtWrapper_QNetworkRequest *>(_o);
        switch (_id) {
        case 0: { QNetworkRequest* _r = _t->new_QNetworkRequest((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkRequest**>(_a[0]) = _r; }  break;
        case 1: { QNetworkRequest* _r = _t->new_QNetworkRequest((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkRequest**>(_a[0]) = _r; }  break;
        case 2: { QNetworkRequest* _r = _t->new_QNetworkRequest();
            if (_a[0]) *reinterpret_cast< QNetworkRequest**>(_a[0]) = _r; }  break;
        case 3: _t->delete_QNetworkRequest((*reinterpret_cast< QNetworkRequest*(*)>(_a[1]))); break;
        case 4: { QVariant _r = _t->attribute((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 5: { QVariant _r = _t->attribute((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->hasRawHeader((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { QVariant _r = _t->header((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->__eq__((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QNetworkRequest(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QObject* _r = _t->originatingObject((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = _r; }  break;
        case 11: { QNetworkRequest::Priority _r = _t->priority((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkRequest::Priority*>(_a[0]) = _r; }  break;
        case 12: { QByteArray _r = _t->rawHeader((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 13: { QList<QByteArray> _r = _t->rawHeaderList((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 14: _t->setAttribute((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Attribute(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 15: _t->setHeader((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::KnownHeaders(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 16: _t->setOriginatingObject((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 17: _t->setPriority((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest::Priority(*)>(_a[2]))); break;
        case 18: _t->setRawHeader((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 19: _t->setUrl((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 20: _t->swap((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])),(*reinterpret_cast< QNetworkRequest(*)>(_a[2]))); break;
        case 21: { QUrl _r = _t->url((*reinterpret_cast< QNetworkRequest*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkRequest.data,
      qt_meta_data_PythonQtWrapper_QNetworkRequest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkRequest.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkRequest*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QNetworkSession_t {
    QByteArrayData data[52];
    char stringdata[735];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QNetworkSession_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QNetworkSession_t qt_meta_stringdata_PythonQtWrapper_QNetworkSession = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QNetworkSession"
QT_MOC_LITERAL(1, 32, 19), // "new_QNetworkSession"
QT_MOC_LITERAL(2, 52, 16), // "QNetworkSession*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(5, 92, 10), // "connConfig"
QT_MOC_LITERAL(6, 103, 6), // "parent"
QT_MOC_LITERAL(7, 110, 22), // "delete_QNetworkSession"
QT_MOC_LITERAL(8, 133, 3), // "obj"
QT_MOC_LITERAL(9, 137, 10), // "activeTime"
QT_MOC_LITERAL(10, 148, 16), // "theWrappedObject"
QT_MOC_LITERAL(11, 165, 13), // "bytesReceived"
QT_MOC_LITERAL(12, 179, 12), // "bytesWritten"
QT_MOC_LITERAL(13, 192, 13), // "configuration"
QT_MOC_LITERAL(14, 206, 13), // "connectNotify"
QT_MOC_LITERAL(15, 220, 11), // "QMetaMethod"
QT_MOC_LITERAL(16, 232, 6), // "signal"
QT_MOC_LITERAL(17, 239, 16), // "disconnectNotify"
QT_MOC_LITERAL(18, 256, 5), // "error"
QT_MOC_LITERAL(19, 262, 29), // "QNetworkSession::SessionError"
QT_MOC_LITERAL(20, 292, 11), // "errorString"
QT_MOC_LITERAL(21, 304, 9), // "interface"
QT_MOC_LITERAL(22, 314, 17), // "QNetworkInterface"
QT_MOC_LITERAL(23, 332, 6), // "isOpen"
QT_MOC_LITERAL(24, 339, 15), // "sessionProperty"
QT_MOC_LITERAL(25, 355, 3), // "key"
QT_MOC_LITERAL(26, 359, 18), // "setSessionProperty"
QT_MOC_LITERAL(27, 378, 5), // "value"
QT_MOC_LITERAL(28, 384, 5), // "state"
QT_MOC_LITERAL(29, 390, 22), // "QNetworkSession::State"
QT_MOC_LITERAL(30, 413, 13), // "usagePolicies"
QT_MOC_LITERAL(31, 427, 30), // "QNetworkSession::UsagePolicies"
QT_MOC_LITERAL(32, 458, 13), // "waitForOpened"
QT_MOC_LITERAL(33, 472, 5), // "msecs"
QT_MOC_LITERAL(34, 478, 12), // "SessionError"
QT_MOC_LITERAL(35, 491, 19), // "UnknownSessionError"
QT_MOC_LITERAL(36, 511, 19), // "SessionAbortedError"
QT_MOC_LITERAL(37, 531, 12), // "RoamingError"
QT_MOC_LITERAL(38, 544, 26), // "OperationNotSupportedError"
QT_MOC_LITERAL(39, 571, 25), // "InvalidConfigurationError"
QT_MOC_LITERAL(40, 597, 5), // "State"
QT_MOC_LITERAL(41, 603, 7), // "Invalid"
QT_MOC_LITERAL(42, 611, 12), // "NotAvailable"
QT_MOC_LITERAL(43, 624, 10), // "Connecting"
QT_MOC_LITERAL(44, 635, 9), // "Connected"
QT_MOC_LITERAL(45, 645, 7), // "Closing"
QT_MOC_LITERAL(46, 653, 12), // "Disconnected"
QT_MOC_LITERAL(47, 666, 7), // "Roaming"
QT_MOC_LITERAL(48, 674, 11), // "UsagePolicy"
QT_MOC_LITERAL(49, 686, 8), // "NoPolicy"
QT_MOC_LITERAL(50, 695, 25), // "NoBackgroundTrafficPolicy"
QT_MOC_LITERAL(51, 721, 13) // "UsagePolicies"

    },
    "PythonQtWrapper_QNetworkSession\0"
    "new_QNetworkSession\0QNetworkSession*\0"
    "\0QNetworkConfiguration\0connConfig\0"
    "parent\0delete_QNetworkSession\0obj\0"
    "activeTime\0theWrappedObject\0bytesReceived\0"
    "bytesWritten\0configuration\0connectNotify\0"
    "QMetaMethod\0signal\0disconnectNotify\0"
    "error\0QNetworkSession::SessionError\0"
    "errorString\0interface\0QNetworkInterface\0"
    "isOpen\0sessionProperty\0key\0"
    "setSessionProperty\0value\0state\0"
    "QNetworkSession::State\0usagePolicies\0"
    "QNetworkSession::UsagePolicies\0"
    "waitForOpened\0msecs\0SessionError\0"
    "UnknownSessionError\0SessionAbortedError\0"
    "RoamingError\0OperationNotSupportedError\0"
    "InvalidConfigurationError\0State\0Invalid\0"
    "NotAvailable\0Connecting\0Connected\0"
    "Closing\0Disconnected\0Roaming\0UsagePolicy\0"
    "NoPolicy\0NoBackgroundTrafficPolicy\0"
    "UsagePolicies"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QNetworkSession[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       4,  180, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  109,    3, 0x0a /* Public */,
       1,    1,  114,    3, 0x2a /* Public | MethodCloned */,
       7,    1,  117,    3, 0x0a /* Public */,
       9,    1,  120,    3, 0x0a /* Public */,
      11,    1,  123,    3, 0x0a /* Public */,
      12,    1,  126,    3, 0x0a /* Public */,
      13,    1,  129,    3, 0x0a /* Public */,
      14,    2,  132,    3, 0x0a /* Public */,
      17,    2,  137,    3, 0x0a /* Public */,
      18,    1,  142,    3, 0x0a /* Public */,
      20,    1,  145,    3, 0x0a /* Public */,
      21,    1,  148,    3, 0x0a /* Public */,
      23,    1,  151,    3, 0x0a /* Public */,
      24,    2,  154,    3, 0x0a /* Public */,
      26,    3,  159,    3, 0x0a /* Public */,
      28,    1,  166,    3, 0x0a /* Public */,
      30,    1,  169,    3, 0x0a /* Public */,
      32,    2,  172,    3, 0x0a /* Public */,
      32,    1,  177,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, QMetaType::QObjectStar,    5,    6,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    8,
    QMetaType::ULongLong, 0x80000000 | 2,   10,
    QMetaType::ULongLong, 0x80000000 | 2,   10,
    QMetaType::ULongLong, 0x80000000 | 2,   10,
    0x80000000 | 4, 0x80000000 | 2,   10,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 15,   10,   16,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 15,   10,   16,
    0x80000000 | 19, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   10,
    0x80000000 | 22, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2,   10,
    QMetaType::QVariant, 0x80000000 | 2, QMetaType::QString,   10,   25,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QString, QMetaType::QVariant,   10,   25,   27,
    0x80000000 | 29, 0x80000000 | 2,   10,
    0x80000000 | 31, 0x80000000 | 2,   10,
    QMetaType::Bool, 0x80000000 | 2, QMetaType::Int,   10,   33,
    QMetaType::Bool, 0x80000000 | 2,   10,

 // enums: name, flags, count, data
      34, 0x0,    5,  196,
      40, 0x0,    7,  206,
      48, 0x0,    2,  220,
      51, 0x1,    2,  224,

 // enum data: key, value
      35, uint(PythonQtWrapper_QNetworkSession::UnknownSessionError),
      36, uint(PythonQtWrapper_QNetworkSession::SessionAbortedError),
      37, uint(PythonQtWrapper_QNetworkSession::RoamingError),
      38, uint(PythonQtWrapper_QNetworkSession::OperationNotSupportedError),
      39, uint(PythonQtWrapper_QNetworkSession::InvalidConfigurationError),
      41, uint(PythonQtWrapper_QNetworkSession::Invalid),
      42, uint(PythonQtWrapper_QNetworkSession::NotAvailable),
      43, uint(PythonQtWrapper_QNetworkSession::Connecting),
      44, uint(PythonQtWrapper_QNetworkSession::Connected),
      45, uint(PythonQtWrapper_QNetworkSession::Closing),
      46, uint(PythonQtWrapper_QNetworkSession::Disconnected),
      47, uint(PythonQtWrapper_QNetworkSession::Roaming),
      49, uint(PythonQtWrapper_QNetworkSession::NoPolicy),
      50, uint(PythonQtWrapper_QNetworkSession::NoBackgroundTrafficPolicy),
      49, uint(PythonQtWrapper_QNetworkSession::NoPolicy),
      50, uint(PythonQtWrapper_QNetworkSession::NoBackgroundTrafficPolicy),

       0        // eod
};

void PythonQtWrapper_QNetworkSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QNetworkSession *_t = static_cast<PythonQtWrapper_QNetworkSession *>(_o);
        switch (_id) {
        case 0: { QNetworkSession* _r = _t->new_QNetworkSession((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QNetworkSession**>(_a[0]) = _r; }  break;
        case 1: { QNetworkSession* _r = _t->new_QNetworkSession((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkSession**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QNetworkSession((*reinterpret_cast< QNetworkSession*(*)>(_a[1]))); break;
        case 3: { quint64 _r = _t->activeTime((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 4: { quint64 _r = _t->bytesReceived((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 5: { quint64 _r = _t->bytesWritten((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< quint64*>(_a[0]) = _r; }  break;
        case 6: { QNetworkConfiguration _r = _t->configuration((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkConfiguration*>(_a[0]) = _r; }  break;
        case 7: _t->connectNotify((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< const QMetaMethod(*)>(_a[2]))); break;
        case 8: _t->disconnectNotify((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< const QMetaMethod(*)>(_a[2]))); break;
        case 9: { QNetworkSession::SessionError _r = _t->error((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkSession::SessionError*>(_a[0]) = _r; }  break;
        case 10: { QString _r = _t->errorString((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 11: { QNetworkInterface _r = _t->interface((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkInterface*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->isOpen((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QVariant _r = _t->sessionProperty((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 14: _t->setSessionProperty((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 15: { QNetworkSession::State _r = _t->state((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkSession::State*>(_a[0]) = _r; }  break;
        case 16: { QNetworkSession::UsagePolicies _r = _t->usagePolicies((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QNetworkSession::UsagePolicies*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->waitForOpened((*reinterpret_cast< QNetworkSession*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->waitForOpened((*reinterpret_cast< QNetworkSession*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QNetworkSession::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QNetworkSession.data,
      qt_meta_data_PythonQtWrapper_QNetworkSession,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QNetworkSession::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QNetworkSession::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QNetworkSession.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QNetworkSession*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QNetworkSession::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSsl_t {
    QByteArrayData data[33];
    char stringdata[499];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSsl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSsl_t qt_meta_stringdata_PythonQtWrapper_QSsl = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PythonQtWrapper_QSsl"
QT_MOC_LITERAL(1, 21, 24), // "AlternativeNameEntryType"
QT_MOC_LITERAL(2, 46, 10), // "EmailEntry"
QT_MOC_LITERAL(3, 57, 8), // "DnsEntry"
QT_MOC_LITERAL(4, 66, 14), // "EncodingFormat"
QT_MOC_LITERAL(5, 81, 3), // "Pem"
QT_MOC_LITERAL(6, 85, 3), // "Der"
QT_MOC_LITERAL(7, 89, 12), // "KeyAlgorithm"
QT_MOC_LITERAL(8, 102, 6), // "Opaque"
QT_MOC_LITERAL(9, 109, 3), // "Rsa"
QT_MOC_LITERAL(10, 113, 3), // "Dsa"
QT_MOC_LITERAL(11, 117, 7), // "KeyType"
QT_MOC_LITERAL(12, 125, 10), // "PrivateKey"
QT_MOC_LITERAL(13, 136, 9), // "PublicKey"
QT_MOC_LITERAL(14, 146, 9), // "SslOption"
QT_MOC_LITERAL(15, 156, 30), // "SslOptionDisableEmptyFragments"
QT_MOC_LITERAL(16, 187, 30), // "SslOptionDisableSessionTickets"
QT_MOC_LITERAL(17, 218, 27), // "SslOptionDisableCompression"
QT_MOC_LITERAL(18, 246, 36), // "SslOptionDisableServerNameInd..."
QT_MOC_LITERAL(19, 283, 35), // "SslOptionDisableLegacyRenegot..."
QT_MOC_LITERAL(20, 319, 30), // "SslOptionDisableSessionSharing"
QT_MOC_LITERAL(21, 350, 34), // "SslOptionDisableSessionPersis..."
QT_MOC_LITERAL(22, 385, 10), // "SslOptions"
QT_MOC_LITERAL(23, 396, 11), // "SslProtocol"
QT_MOC_LITERAL(24, 408, 5), // "SslV3"
QT_MOC_LITERAL(25, 414, 5), // "SslV2"
QT_MOC_LITERAL(26, 420, 7), // "TlsV1_0"
QT_MOC_LITERAL(27, 428, 7), // "TlsV1_1"
QT_MOC_LITERAL(28, 436, 7), // "TlsV1_2"
QT_MOC_LITERAL(29, 444, 11), // "AnyProtocol"
QT_MOC_LITERAL(30, 456, 10), // "TlsV1SslV3"
QT_MOC_LITERAL(31, 467, 15), // "SecureProtocols"
QT_MOC_LITERAL(32, 483, 15) // "UnknownProtocol"

    },
    "PythonQtWrapper_QSsl\0AlternativeNameEntryType\0"
    "EmailEntry\0DnsEntry\0EncodingFormat\0"
    "Pem\0Der\0KeyAlgorithm\0Opaque\0Rsa\0Dsa\0"
    "KeyType\0PrivateKey\0PublicKey\0SslOption\0"
    "SslOptionDisableEmptyFragments\0"
    "SslOptionDisableSessionTickets\0"
    "SslOptionDisableCompression\0"
    "SslOptionDisableServerNameIndication\0"
    "SslOptionDisableLegacyRenegotiation\0"
    "SslOptionDisableSessionSharing\0"
    "SslOptionDisableSessionPersistence\0"
    "SslOptions\0SslProtocol\0SslV3\0SslV2\0"
    "TlsV1_0\0TlsV1_1\0TlsV1_2\0AnyProtocol\0"
    "TlsV1SslV3\0SecureProtocols\0UnknownProtocol"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSsl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       7,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   42,
       4, 0x0,    2,   46,
       7, 0x0,    3,   50,
      11, 0x0,    2,   56,
      14, 0x0,    7,   60,
      22, 0x1,    7,   74,
      23, 0x0,    9,   88,

 // enum data: key, value
       2, uint(PythonQtWrapper_QSsl::EmailEntry),
       3, uint(PythonQtWrapper_QSsl::DnsEntry),
       5, uint(PythonQtWrapper_QSsl::Pem),
       6, uint(PythonQtWrapper_QSsl::Der),
       8, uint(PythonQtWrapper_QSsl::Opaque),
       9, uint(PythonQtWrapper_QSsl::Rsa),
      10, uint(PythonQtWrapper_QSsl::Dsa),
      12, uint(PythonQtWrapper_QSsl::PrivateKey),
      13, uint(PythonQtWrapper_QSsl::PublicKey),
      15, uint(PythonQtWrapper_QSsl::SslOptionDisableEmptyFragments),
      16, uint(PythonQtWrapper_QSsl::SslOptionDisableSessionTickets),
      17, uint(PythonQtWrapper_QSsl::SslOptionDisableCompression),
      18, uint(PythonQtWrapper_QSsl::SslOptionDisableServerNameIndication),
      19, uint(PythonQtWrapper_QSsl::SslOptionDisableLegacyRenegotiation),
      20, uint(PythonQtWrapper_QSsl::SslOptionDisableSessionSharing),
      21, uint(PythonQtWrapper_QSsl::SslOptionDisableSessionPersistence),
      15, uint(PythonQtWrapper_QSsl::SslOptionDisableEmptyFragments),
      16, uint(PythonQtWrapper_QSsl::SslOptionDisableSessionTickets),
      17, uint(PythonQtWrapper_QSsl::SslOptionDisableCompression),
      18, uint(PythonQtWrapper_QSsl::SslOptionDisableServerNameIndication),
      19, uint(PythonQtWrapper_QSsl::SslOptionDisableLegacyRenegotiation),
      20, uint(PythonQtWrapper_QSsl::SslOptionDisableSessionSharing),
      21, uint(PythonQtWrapper_QSsl::SslOptionDisableSessionPersistence),
      24, uint(PythonQtWrapper_QSsl::SslV3),
      25, uint(PythonQtWrapper_QSsl::SslV2),
      26, uint(PythonQtWrapper_QSsl::TlsV1_0),
      27, uint(PythonQtWrapper_QSsl::TlsV1_1),
      28, uint(PythonQtWrapper_QSsl::TlsV1_2),
      29, uint(PythonQtWrapper_QSsl::AnyProtocol),
      30, uint(PythonQtWrapper_QSsl::TlsV1SslV3),
      31, uint(PythonQtWrapper_QSsl::SecureProtocols),
      32, uint(PythonQtWrapper_QSsl::UnknownProtocol),

       0        // eod
};

void PythonQtWrapper_QSsl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PythonQtWrapper_QSsl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSsl.data,
      qt_meta_data_PythonQtWrapper_QSsl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSsl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSsl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSsl.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSsl*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSsl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSslCertificate_t {
    QByteArrayData data[76];
    char stringdata[1125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSslCertificate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSslCertificate_t qt_meta_stringdata_PythonQtWrapper_QSslCertificate = {
    {
QT_MOC_LITERAL(0, 0, 31), // "PythonQtWrapper_QSslCertificate"
QT_MOC_LITERAL(1, 32, 19), // "new_QSslCertificate"
QT_MOC_LITERAL(2, 52, 16), // "QSslCertificate*"
QT_MOC_LITERAL(3, 69, 0), // ""
QT_MOC_LITERAL(4, 70, 10), // "QIODevice*"
QT_MOC_LITERAL(5, 81, 6), // "device"
QT_MOC_LITERAL(6, 88, 20), // "QSsl::EncodingFormat"
QT_MOC_LITERAL(7, 109, 6), // "format"
QT_MOC_LITERAL(8, 116, 4), // "data"
QT_MOC_LITERAL(9, 121, 15), // "QSslCertificate"
QT_MOC_LITERAL(10, 137, 5), // "other"
QT_MOC_LITERAL(11, 143, 22), // "delete_QSslCertificate"
QT_MOC_LITERAL(12, 166, 3), // "obj"
QT_MOC_LITERAL(13, 170, 5), // "clear"
QT_MOC_LITERAL(14, 176, 16), // "theWrappedObject"
QT_MOC_LITERAL(15, 193, 6), // "digest"
QT_MOC_LITERAL(16, 200, 29), // "QCryptographicHash::Algorithm"
QT_MOC_LITERAL(17, 230, 9), // "algorithm"
QT_MOC_LITERAL(18, 240, 13), // "effectiveDate"
QT_MOC_LITERAL(19, 254, 10), // "expiryDate"
QT_MOC_LITERAL(20, 265, 31), // "static_QSslCertificate_fromData"
QT_MOC_LITERAL(21, 297, 22), // "QList<QSslCertificate>"
QT_MOC_LITERAL(22, 320, 33), // "static_QSslCertificate_fromDe..."
QT_MOC_LITERAL(23, 354, 31), // "static_QSslCertificate_fromPath"
QT_MOC_LITERAL(24, 386, 4), // "path"
QT_MOC_LITERAL(25, 391, 22), // "QRegExp::PatternSyntax"
QT_MOC_LITERAL(26, 414, 6), // "syntax"
QT_MOC_LITERAL(27, 421, 6), // "handle"
QT_MOC_LITERAL(28, 428, 10), // "Qt::HANDLE"
QT_MOC_LITERAL(29, 439, 35), // "static_QSslCertificate_import..."
QT_MOC_LITERAL(30, 475, 8), // "QSslKey*"
QT_MOC_LITERAL(31, 484, 3), // "key"
QT_MOC_LITERAL(32, 488, 4), // "cert"
QT_MOC_LITERAL(33, 493, 23), // "QList<QSslCertificate>*"
QT_MOC_LITERAL(34, 517, 14), // "caCertificates"
QT_MOC_LITERAL(35, 532, 10), // "passPhrase"
QT_MOC_LITERAL(36, 543, 13), // "isBlacklisted"
QT_MOC_LITERAL(37, 557, 6), // "isNull"
QT_MOC_LITERAL(38, 564, 12), // "isSelfSigned"
QT_MOC_LITERAL(39, 577, 10), // "issuerInfo"
QT_MOC_LITERAL(40, 588, 28), // "QSslCertificate::SubjectInfo"
QT_MOC_LITERAL(41, 617, 4), // "info"
QT_MOC_LITERAL(42, 622, 9), // "attribute"
QT_MOC_LITERAL(43, 632, 20), // "issuerInfoAttributes"
QT_MOC_LITERAL(44, 653, 6), // "__ne__"
QT_MOC_LITERAL(45, 660, 15), // "operator_assign"
QT_MOC_LITERAL(46, 676, 6), // "__eq__"
QT_MOC_LITERAL(47, 683, 9), // "publicKey"
QT_MOC_LITERAL(48, 693, 7), // "QSslKey"
QT_MOC_LITERAL(49, 701, 12), // "serialNumber"
QT_MOC_LITERAL(50, 714, 23), // "subjectAlternativeNames"
QT_MOC_LITERAL(51, 738, 49), // "QMultiMap<QSsl::AlternativeNa..."
QT_MOC_LITERAL(52, 788, 11), // "subjectInfo"
QT_MOC_LITERAL(53, 800, 21), // "subjectInfoAttributes"
QT_MOC_LITERAL(54, 822, 4), // "swap"
QT_MOC_LITERAL(55, 827, 16), // "QSslCertificate&"
QT_MOC_LITERAL(56, 844, 5), // "toDer"
QT_MOC_LITERAL(57, 850, 5), // "toPem"
QT_MOC_LITERAL(58, 856, 6), // "toText"
QT_MOC_LITERAL(59, 863, 29), // "static_QSslCertificate_verify"
QT_MOC_LITERAL(60, 893, 16), // "QList<QSslError>"
QT_MOC_LITERAL(61, 910, 16), // "certificateChain"
QT_MOC_LITERAL(62, 927, 8), // "hostName"
QT_MOC_LITERAL(63, 936, 7), // "version"
QT_MOC_LITERAL(64, 944, 11), // "py_toString"
QT_MOC_LITERAL(65, 956, 11), // "__nonzero__"
QT_MOC_LITERAL(66, 968, 11), // "SubjectInfo"
QT_MOC_LITERAL(67, 980, 12), // "Organization"
QT_MOC_LITERAL(68, 993, 10), // "CommonName"
QT_MOC_LITERAL(69, 1004, 12), // "LocalityName"
QT_MOC_LITERAL(70, 1017, 22), // "OrganizationalUnitName"
QT_MOC_LITERAL(71, 1040, 11), // "CountryName"
QT_MOC_LITERAL(72, 1052, 19), // "StateOrProvinceName"
QT_MOC_LITERAL(73, 1072, 26), // "DistinguishedNameQualifier"
QT_MOC_LITERAL(74, 1099, 12), // "SerialNumber"
QT_MOC_LITERAL(75, 1112, 12) // "EmailAddress"

    },
    "PythonQtWrapper_QSslCertificate\0"
    "new_QSslCertificate\0QSslCertificate*\0"
    "\0QIODevice*\0device\0QSsl::EncodingFormat\0"
    "format\0data\0QSslCertificate\0other\0"
    "delete_QSslCertificate\0obj\0clear\0"
    "theWrappedObject\0digest\0"
    "QCryptographicHash::Algorithm\0algorithm\0"
    "effectiveDate\0expiryDate\0"
    "static_QSslCertificate_fromData\0"
    "QList<QSslCertificate>\0"
    "static_QSslCertificate_fromDevice\0"
    "static_QSslCertificate_fromPath\0path\0"
    "QRegExp::PatternSyntax\0syntax\0handle\0"
    "Qt::HANDLE\0static_QSslCertificate_importPkcs12\0"
    "QSslKey*\0key\0cert\0QList<QSslCertificate>*\0"
    "caCertificates\0passPhrase\0isBlacklisted\0"
    "isNull\0isSelfSigned\0issuerInfo\0"
    "QSslCertificate::SubjectInfo\0info\0"
    "attribute\0issuerInfoAttributes\0__ne__\0"
    "operator_assign\0__eq__\0publicKey\0"
    "QSslKey\0serialNumber\0subjectAlternativeNames\0"
    "QMultiMap<QSsl::AlternativeNameEntryType,QString>\0"
    "subjectInfo\0subjectInfoAttributes\0"
    "swap\0QSslCertificate&\0toDer\0toPem\0"
    "toText\0static_QSslCertificate_verify\0"
    "QList<QSslError>\0certificateChain\0"
    "hostName\0version\0py_toString\0__nonzero__\0"
    "SubjectInfo\0Organization\0CommonName\0"
    "LocalityName\0OrganizationalUnitName\0"
    "CountryName\0StateOrProvinceName\0"
    "DistinguishedNameQualifier\0SerialNumber\0"
    "EmailAddress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSslCertificate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       1,  440, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  249,    3, 0x0a /* Public */,
       1,    1,  254,    3, 0x2a /* Public | MethodCloned */,
       1,    2,  257,    3, 0x0a /* Public */,
       1,    1,  262,    3, 0x2a /* Public | MethodCloned */,
       1,    0,  265,    3, 0x2a /* Public | MethodCloned */,
       1,    1,  266,    3, 0x0a /* Public */,
      11,    1,  269,    3, 0x0a /* Public */,
      13,    1,  272,    3, 0x0a /* Public */,
      15,    2,  275,    3, 0x0a /* Public */,
      15,    1,  280,    3, 0x2a /* Public | MethodCloned */,
      18,    1,  283,    3, 0x0a /* Public */,
      19,    1,  286,    3, 0x0a /* Public */,
      20,    2,  289,    3, 0x0a /* Public */,
      20,    1,  294,    3, 0x2a /* Public | MethodCloned */,
      22,    2,  297,    3, 0x0a /* Public */,
      22,    1,  302,    3, 0x2a /* Public | MethodCloned */,
      23,    3,  305,    3, 0x0a /* Public */,
      23,    2,  312,    3, 0x2a /* Public | MethodCloned */,
      23,    1,  317,    3, 0x2a /* Public | MethodCloned */,
      27,    1,  320,    3, 0x0a /* Public */,
      29,    5,  323,    3, 0x0a /* Public */,
      29,    4,  334,    3, 0x2a /* Public | MethodCloned */,
      29,    3,  343,    3, 0x2a /* Public | MethodCloned */,
      36,    1,  350,    3, 0x0a /* Public */,
      37,    1,  353,    3, 0x0a /* Public */,
      38,    1,  356,    3, 0x0a /* Public */,
      39,    2,  359,    3, 0x0a /* Public */,
      39,    2,  364,    3, 0x0a /* Public */,
      43,    1,  369,    3, 0x0a /* Public */,
      44,    2,  372,    3, 0x0a /* Public */,
      45,    2,  377,    3, 0x0a /* Public */,
      46,    2,  382,    3, 0x0a /* Public */,
      47,    1,  387,    3, 0x0a /* Public */,
      49,    1,  390,    3, 0x0a /* Public */,
      50,    1,  393,    3, 0x0a /* Public */,
      52,    2,  396,    3, 0x0a /* Public */,
      52,    2,  401,    3, 0x0a /* Public */,
      53,    1,  406,    3, 0x0a /* Public */,
      54,    2,  409,    3, 0x0a /* Public */,
      56,    1,  414,    3, 0x0a /* Public */,
      57,    1,  417,    3, 0x0a /* Public */,
      58,    1,  420,    3, 0x0a /* Public */,
      59,    2,  423,    3, 0x0a /* Public */,
      59,    1,  428,    3, 0x2a /* Public | MethodCloned */,
      63,    1,  431,    3, 0x0a /* Public */,
      64,    1,  434,    3, 0x0a /* Public */,
      65,    1,  437,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QByteArray, 0x80000000 | 6,    8,    7,
    0x80000000 | 2, QMetaType::QByteArray,    8,
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2,   14,
    QMetaType::QByteArray, 0x80000000 | 2, 0x80000000 | 16,   14,   17,
    QMetaType::QByteArray, 0x80000000 | 2,   14,
    QMetaType::QDateTime, 0x80000000 | 2,   14,
    QMetaType::QDateTime, 0x80000000 | 2,   14,
    0x80000000 | 21, QMetaType::QByteArray, 0x80000000 | 6,    8,    7,
    0x80000000 | 21, QMetaType::QByteArray,    8,
    0x80000000 | 21, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 21, 0x80000000 | 4,    5,
    0x80000000 | 21, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 25,   24,    7,   26,
    0x80000000 | 21, QMetaType::QString, 0x80000000 | 6,   24,    7,
    0x80000000 | 21, QMetaType::QString,   24,
    0x80000000 | 28, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 30, 0x80000000 | 2, 0x80000000 | 33, QMetaType::QByteArray,    5,   31,   32,   34,   35,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 30, 0x80000000 | 2, 0x80000000 | 33,    5,   31,   32,   34,
    QMetaType::Bool, 0x80000000 | 4, 0x80000000 | 30, 0x80000000 | 2,    5,   31,   32,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2,   14,
    QMetaType::QStringList, 0x80000000 | 2, 0x80000000 | 40,   14,   41,
    QMetaType::QStringList, 0x80000000 | 2, QMetaType::QByteArray,   14,   42,
    QMetaType::QByteArrayList, 0x80000000 | 2,   14,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 9,   14,   10,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 9,   14,   10,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 9,   14,   10,
    0x80000000 | 48, 0x80000000 | 2,   14,
    QMetaType::QByteArray, 0x80000000 | 2,   14,
    0x80000000 | 51, 0x80000000 | 2,   14,
    QMetaType::QStringList, 0x80000000 | 2, 0x80000000 | 40,   14,   41,
    QMetaType::QStringList, 0x80000000 | 2, QMetaType::QByteArray,   14,   42,
    QMetaType::QByteArrayList, 0x80000000 | 2,   14,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 55,   14,   10,
    QMetaType::QByteArray, 0x80000000 | 2,   14,
    QMetaType::QByteArray, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,   14,
    0x80000000 | 60, 0x80000000 | 21, QMetaType::QString,   61,   62,
    0x80000000 | 60, 0x80000000 | 21,   61,
    QMetaType::QByteArray, 0x80000000 | 2,   14,
    QMetaType::QString, 0x80000000 | 2,    3,
    QMetaType::Bool, 0x80000000 | 2,   12,

 // enums: name, flags, count, data
      66, 0x0,    9,  444,

 // enum data: key, value
      67, uint(PythonQtWrapper_QSslCertificate::Organization),
      68, uint(PythonQtWrapper_QSslCertificate::CommonName),
      69, uint(PythonQtWrapper_QSslCertificate::LocalityName),
      70, uint(PythonQtWrapper_QSslCertificate::OrganizationalUnitName),
      71, uint(PythonQtWrapper_QSslCertificate::CountryName),
      72, uint(PythonQtWrapper_QSslCertificate::StateOrProvinceName),
      73, uint(PythonQtWrapper_QSslCertificate::DistinguishedNameQualifier),
      74, uint(PythonQtWrapper_QSslCertificate::SerialNumber),
      75, uint(PythonQtWrapper_QSslCertificate::EmailAddress),

       0        // eod
};

void PythonQtWrapper_QSslCertificate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSslCertificate *_t = static_cast<PythonQtWrapper_QSslCertificate *>(_o);
        switch (_id) {
        case 0: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 1: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 2: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 3: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 4: { QSslCertificate* _r = _t->new_QSslCertificate();
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 5: { QSslCertificate* _r = _t->new_QSslCertificate((*reinterpret_cast< const QSslCertificate(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 6: _t->delete_QSslCertificate((*reinterpret_cast< QSslCertificate*(*)>(_a[1]))); break;
        case 7: _t->clear((*reinterpret_cast< QSslCertificate*(*)>(_a[1]))); break;
        case 8: { QByteArray _r = _t->digest((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< QCryptographicHash::Algorithm(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 9: { QByteArray _r = _t->digest((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 10: { QDateTime _r = _t->effectiveDate((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 11: { QDateTime _r = _t->expiryDate((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = _r; }  break;
        case 12: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromData((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 13: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromData((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 14: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromDevice((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 15: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromDevice((*reinterpret_cast< QIODevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 16: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])),(*reinterpret_cast< QRegExp::PatternSyntax(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 17: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSsl::EncodingFormat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 18: { QList<QSslCertificate> _r = _t->static_QSslCertificate_fromPath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 19: { Qt::HANDLE _r = _t->handle((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::HANDLE*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->static_QSslCertificate_importPkcs12((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSslKey*(*)>(_a[2])),(*reinterpret_cast< QSslCertificate*(*)>(_a[3])),(*reinterpret_cast< QList<QSslCertificate>*(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->static_QSslCertificate_importPkcs12((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSslKey*(*)>(_a[2])),(*reinterpret_cast< QSslCertificate*(*)>(_a[3])),(*reinterpret_cast< QList<QSslCertificate>*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->static_QSslCertificate_importPkcs12((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QSslKey*(*)>(_a[2])),(*reinterpret_cast< QSslCertificate*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isBlacklisted((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isNull((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->isSelfSigned((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { QStringList _r = _t->issuerInfo((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< QSslCertificate::SubjectInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 27: { QStringList _r = _t->issuerInfo((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 28: { QList<QByteArray> _r = _t->issuerInfoAttributes((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 29: { bool _r = _t->__ne__((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 30: { QSslCertificate* _r = _t->operator_assign((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCertificate**>(_a[0]) = _r; }  break;
        case 31: { bool _r = _t->__eq__((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 32: { QSslKey _r = _t->publicKey((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslKey*>(_a[0]) = _r; }  break;
        case 33: { QByteArray _r = _t->serialNumber((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 34: { QMultiMap<QSsl::AlternativeNameEntryType,QString> _r = _t->subjectAlternativeNames((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QMultiMap<QSsl::AlternativeNameEntryType,QString>*>(_a[0]) = _r; }  break;
        case 35: { QStringList _r = _t->subjectInfo((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< QSslCertificate::SubjectInfo(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 36: { QStringList _r = _t->subjectInfo((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 37: { QList<QByteArray> _r = _t->subjectInfoAttributes((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 38: _t->swap((*reinterpret_cast< QSslCertificate*(*)>(_a[1])),(*reinterpret_cast< QSslCertificate(*)>(_a[2]))); break;
        case 39: { QByteArray _r = _t->toDer((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 40: { QByteArray _r = _t->toPem((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 41: { QString _r = _t->toText((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 42: { QList<QSslError> _r = _t->static_QSslCertificate_verify((*reinterpret_cast< QList<QSslCertificate>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QSslError>*>(_a[0]) = _r; }  break;
        case 43: { QList<QSslError> _r = _t->static_QSslCertificate_verify((*reinterpret_cast< QList<QSslCertificate>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslError>*>(_a[0]) = _r; }  break;
        case 44: { QByteArray _r = _t->version((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 45: { QString _r = _t->py_toString((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 46: { bool _r = _t->__nonzero__((*reinterpret_cast< QSslCertificate*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslCertificate >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslCertificate >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslCertificate >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslCertificate >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslCertificate> >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslCertificate> >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSslCertificate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslCertificate.data,
      qt_meta_data_PythonQtWrapper_QSslCertificate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSslCertificate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSslCertificate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslCertificate.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslCertificate*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslCertificate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSslCipher_t {
    QByteArrayData data[26];
    char stringdata[315];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSslCipher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSslCipher_t qt_meta_stringdata_PythonQtWrapper_QSslCipher = {
    {
QT_MOC_LITERAL(0, 0, 26), // "PythonQtWrapper_QSslCipher"
QT_MOC_LITERAL(1, 27, 14), // "new_QSslCipher"
QT_MOC_LITERAL(2, 42, 11), // "QSslCipher*"
QT_MOC_LITERAL(3, 54, 0), // ""
QT_MOC_LITERAL(4, 55, 10), // "QSslCipher"
QT_MOC_LITERAL(5, 66, 5), // "other"
QT_MOC_LITERAL(6, 72, 4), // "name"
QT_MOC_LITERAL(7, 77, 17), // "QSsl::SslProtocol"
QT_MOC_LITERAL(8, 95, 8), // "protocol"
QT_MOC_LITERAL(9, 104, 17), // "delete_QSslCipher"
QT_MOC_LITERAL(10, 122, 3), // "obj"
QT_MOC_LITERAL(11, 126, 20), // "authenticationMethod"
QT_MOC_LITERAL(12, 147, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 164, 16), // "encryptionMethod"
QT_MOC_LITERAL(14, 181, 6), // "isNull"
QT_MOC_LITERAL(15, 188, 17), // "keyExchangeMethod"
QT_MOC_LITERAL(16, 206, 6), // "__ne__"
QT_MOC_LITERAL(17, 213, 15), // "operator_assign"
QT_MOC_LITERAL(18, 229, 6), // "__eq__"
QT_MOC_LITERAL(19, 236, 14), // "protocolString"
QT_MOC_LITERAL(20, 251, 13), // "supportedBits"
QT_MOC_LITERAL(21, 265, 4), // "swap"
QT_MOC_LITERAL(22, 270, 11), // "QSslCipher&"
QT_MOC_LITERAL(23, 282, 8), // "usedBits"
QT_MOC_LITERAL(24, 291, 11), // "py_toString"
QT_MOC_LITERAL(25, 303, 11) // "__nonzero__"

    },
    "PythonQtWrapper_QSslCipher\0new_QSslCipher\0"
    "QSslCipher*\0\0QSslCipher\0other\0name\0"
    "QSsl::SslProtocol\0protocol\0delete_QSslCipher\0"
    "obj\0authenticationMethod\0theWrappedObject\0"
    "encryptionMethod\0isNull\0keyExchangeMethod\0"
    "__ne__\0operator_assign\0__eq__\0"
    "protocolString\0supportedBits\0swap\0"
    "QSslCipher&\0usedBits\0py_toString\0"
    "__nonzero__"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSslCipher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  114,    3, 0x0a /* Public */,
       1,    1,  115,    3, 0x0a /* Public */,
       1,    1,  118,    3, 0x0a /* Public */,
       1,    2,  121,    3, 0x0a /* Public */,
       9,    1,  126,    3, 0x0a /* Public */,
      11,    1,  129,    3, 0x0a /* Public */,
      13,    1,  132,    3, 0x0a /* Public */,
      14,    1,  135,    3, 0x0a /* Public */,
      15,    1,  138,    3, 0x0a /* Public */,
       6,    1,  141,    3, 0x0a /* Public */,
      16,    2,  144,    3, 0x0a /* Public */,
      17,    2,  149,    3, 0x0a /* Public */,
      18,    2,  154,    3, 0x0a /* Public */,
       8,    1,  159,    3, 0x0a /* Public */,
      19,    1,  162,    3, 0x0a /* Public */,
      20,    1,  165,    3, 0x0a /* Public */,
      21,    2,  168,    3, 0x0a /* Public */,
      23,    1,  173,    3, 0x0a /* Public */,
      24,    1,  176,    3, 0x0a /* Public */,
      25,    1,  179,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, QMetaType::QString,    6,
    0x80000000 | 2, QMetaType::QString, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 2,   10,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   12,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,   12,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,   12,    5,
    0x80000000 | 7, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::Int, 0x80000000 | 2,   12,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 22,   12,    5,
    QMetaType::Int, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,    3,
    QMetaType::Bool, 0x80000000 | 2,   10,

       0        // eod
};

void PythonQtWrapper_QSslCipher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSslCipher *_t = static_cast<PythonQtWrapper_QSslCipher *>(_o);
        switch (_id) {
        case 0: { QSslCipher* _r = _t->new_QSslCipher();
            if (_a[0]) *reinterpret_cast< QSslCipher**>(_a[0]) = _r; }  break;
        case 1: { QSslCipher* _r = _t->new_QSslCipher((*reinterpret_cast< const QSslCipher(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCipher**>(_a[0]) = _r; }  break;
        case 2: { QSslCipher* _r = _t->new_QSslCipher((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCipher**>(_a[0]) = _r; }  break;
        case 3: { QSslCipher* _r = _t->new_QSslCipher((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QSsl::SslProtocol(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCipher**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSslCipher((*reinterpret_cast< QSslCipher*(*)>(_a[1]))); break;
        case 5: { QString _r = _t->authenticationMethod((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 6: { QString _r = _t->encryptionMethod((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isNull((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->keyExchangeMethod((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 9: { QString _r = _t->name((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__ne__((*reinterpret_cast< QSslCipher*(*)>(_a[1])),(*reinterpret_cast< const QSslCipher(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { QSslCipher* _r = _t->operator_assign((*reinterpret_cast< QSslCipher*(*)>(_a[1])),(*reinterpret_cast< const QSslCipher(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslCipher**>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__eq__((*reinterpret_cast< QSslCipher*(*)>(_a[1])),(*reinterpret_cast< const QSslCipher(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QSsl::SslProtocol _r = _t->protocol((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSsl::SslProtocol*>(_a[0]) = _r; }  break;
        case 14: { QString _r = _t->protocolString((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 15: { int _r = _t->supportedBits((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 16: _t->swap((*reinterpret_cast< QSslCipher*(*)>(_a[1])),(*reinterpret_cast< QSslCipher(*)>(_a[2]))); break;
        case 17: { int _r = _t->usedBits((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { QString _r = _t->py_toString((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->__nonzero__((*reinterpret_cast< QSslCipher*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject PythonQtWrapper_QSslCipher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslCipher.data,
      qt_meta_data_PythonQtWrapper_QSslCipher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSslCipher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSslCipher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslCipher.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslCipher*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslCipher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}
struct qt_meta_stringdata_PythonQtWrapper_QSslConfiguration_t {
    QByteArrayData data[70];
    char stringdata[1211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSslConfiguration_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSslConfiguration_t qt_meta_stringdata_PythonQtWrapper_QSslConfiguration = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PythonQtWrapper_QSslConfigura..."
QT_MOC_LITERAL(1, 34, 21), // "new_QSslConfiguration"
QT_MOC_LITERAL(2, 56, 18), // "QSslConfiguration*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 17), // "QSslConfiguration"
QT_MOC_LITERAL(5, 94, 5), // "other"
QT_MOC_LITERAL(6, 100, 24), // "delete_QSslConfiguration"
QT_MOC_LITERAL(7, 125, 3), // "obj"
QT_MOC_LITERAL(8, 129, 20), // "allowedNextProtocols"
QT_MOC_LITERAL(9, 150, 16), // "theWrappedObject"
QT_MOC_LITERAL(10, 167, 14), // "caCertificates"
QT_MOC_LITERAL(11, 182, 22), // "QList<QSslCertificate>"
QT_MOC_LITERAL(12, 205, 7), // "ciphers"
QT_MOC_LITERAL(13, 213, 17), // "QList<QSslCipher>"
QT_MOC_LITERAL(14, 231, 45), // "static_QSslConfiguration_defa..."
QT_MOC_LITERAL(15, 277, 6), // "isNull"
QT_MOC_LITERAL(16, 284, 16), // "localCertificate"
QT_MOC_LITERAL(17, 301, 15), // "QSslCertificate"
QT_MOC_LITERAL(18, 317, 21), // "localCertificateChain"
QT_MOC_LITERAL(19, 339, 22), // "nextNegotiatedProtocol"
QT_MOC_LITERAL(20, 362, 29), // "nextProtocolNegotiationStatus"
QT_MOC_LITERAL(21, 392, 48), // "QSslConfiguration::NextProtoc..."
QT_MOC_LITERAL(22, 441, 6), // "__ne__"
QT_MOC_LITERAL(23, 448, 15), // "operator_assign"
QT_MOC_LITERAL(24, 464, 6), // "__eq__"
QT_MOC_LITERAL(25, 471, 15), // "peerCertificate"
QT_MOC_LITERAL(26, 487, 20), // "peerCertificateChain"
QT_MOC_LITERAL(27, 508, 15), // "peerVerifyDepth"
QT_MOC_LITERAL(28, 524, 14), // "peerVerifyMode"
QT_MOC_LITERAL(29, 539, 26), // "QSslSocket::PeerVerifyMode"
QT_MOC_LITERAL(30, 566, 10), // "privateKey"
QT_MOC_LITERAL(31, 577, 7), // "QSslKey"
QT_MOC_LITERAL(32, 585, 8), // "protocol"
QT_MOC_LITERAL(33, 594, 17), // "QSsl::SslProtocol"
QT_MOC_LITERAL(34, 612, 13), // "sessionCipher"
QT_MOC_LITERAL(35, 626, 10), // "QSslCipher"
QT_MOC_LITERAL(36, 637, 15), // "sessionProtocol"
QT_MOC_LITERAL(37, 653, 13), // "sessionTicket"
QT_MOC_LITERAL(38, 667, 25), // "sessionTicketLifeTimeHint"
QT_MOC_LITERAL(39, 693, 23), // "setAllowedNextProtocols"
QT_MOC_LITERAL(40, 717, 9), // "protocols"
QT_MOC_LITERAL(41, 727, 17), // "setCaCertificates"
QT_MOC_LITERAL(42, 745, 12), // "certificates"
QT_MOC_LITERAL(43, 758, 10), // "setCiphers"
QT_MOC_LITERAL(44, 769, 48), // "static_QSslConfiguration_setD..."
QT_MOC_LITERAL(45, 818, 13), // "configuration"
QT_MOC_LITERAL(46, 832, 19), // "setLocalCertificate"
QT_MOC_LITERAL(47, 852, 11), // "certificate"
QT_MOC_LITERAL(48, 864, 24), // "setLocalCertificateChain"
QT_MOC_LITERAL(49, 889, 10), // "localChain"
QT_MOC_LITERAL(50, 900, 18), // "setPeerVerifyDepth"
QT_MOC_LITERAL(51, 919, 5), // "depth"
QT_MOC_LITERAL(52, 925, 17), // "setPeerVerifyMode"
QT_MOC_LITERAL(53, 943, 4), // "mode"
QT_MOC_LITERAL(54, 948, 13), // "setPrivateKey"
QT_MOC_LITERAL(55, 962, 3), // "key"
QT_MOC_LITERAL(56, 966, 11), // "setProtocol"
QT_MOC_LITERAL(57, 978, 16), // "setSessionTicket"
QT_MOC_LITERAL(58, 995, 12), // "setSslOption"
QT_MOC_LITERAL(59, 1008, 15), // "QSsl::SslOption"
QT_MOC_LITERAL(60, 1024, 6), // "option"
QT_MOC_LITERAL(61, 1031, 2), // "on"
QT_MOC_LITERAL(62, 1034, 4), // "swap"
QT_MOC_LITERAL(63, 1039, 18), // "QSslConfiguration&"
QT_MOC_LITERAL(64, 1058, 13), // "testSslOption"
QT_MOC_LITERAL(65, 1072, 11), // "__nonzero__"
QT_MOC_LITERAL(66, 1084, 29), // "NextProtocolNegotiationStatus"
QT_MOC_LITERAL(67, 1114, 27), // "NextProtocolNegotiationNone"
QT_MOC_LITERAL(68, 1142, 33), // "NextProtocolNegotiationNegoti..."
QT_MOC_LITERAL(69, 1176, 34) // "NextProtocolNegotiationUnsupp..."

    },
    "PythonQtWrapper_QSslConfiguration\0"
    "new_QSslConfiguration\0QSslConfiguration*\0"
    "\0QSslConfiguration\0other\0"
    "delete_QSslConfiguration\0obj\0"
    "allowedNextProtocols\0theWrappedObject\0"
    "caCertificates\0QList<QSslCertificate>\0"
    "ciphers\0QList<QSslCipher>\0"
    "static_QSslConfiguration_defaultConfiguration\0"
    "isNull\0localCertificate\0QSslCertificate\0"
    "localCertificateChain\0nextNegotiatedProtocol\0"
    "nextProtocolNegotiationStatus\0"
    "QSslConfiguration::NextProtocolNegotiationStatus\0"
    "__ne__\0operator_assign\0__eq__\0"
    "peerCertificate\0peerCertificateChain\0"
    "peerVerifyDepth\0peerVerifyMode\0"
    "QSslSocket::PeerVerifyMode\0privateKey\0"
    "QSslKey\0protocol\0QSsl::SslProtocol\0"
    "sessionCipher\0QSslCipher\0sessionProtocol\0"
    "sessionTicket\0sessionTicketLifeTimeHint\0"
    "setAllowedNextProtocols\0protocols\0"
    "setCaCertificates\0certificates\0"
    "setCiphers\0static_QSslConfiguration_setDefaultConfiguration\0"
    "configuration\0setLocalCertificate\0"
    "certificate\0setLocalCertificateChain\0"
    "localChain\0setPeerVerifyDepth\0depth\0"
    "setPeerVerifyMode\0mode\0setPrivateKey\0"
    "key\0setProtocol\0setSessionTicket\0"
    "setSslOption\0QSsl::SslOption\0option\0"
    "on\0swap\0QSslConfiguration&\0testSslOption\0"
    "__nonzero__\0NextProtocolNegotiationStatus\0"
    "NextProtocolNegotiationNone\0"
    "NextProtocolNegotiationNegotiated\0"
    "NextProtocolNegotiationUnsupported"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSslConfiguration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       1,  364, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  214,    3, 0x0a /* Public */,
       1,    1,  215,    3, 0x0a /* Public */,
       6,    1,  218,    3, 0x0a /* Public */,
       8,    1,  221,    3, 0x0a /* Public */,
      10,    1,  224,    3, 0x0a /* Public */,
      12,    1,  227,    3, 0x0a /* Public */,
      14,    0,  230,    3, 0x0a /* Public */,
      15,    1,  231,    3, 0x0a /* Public */,
      16,    1,  234,    3, 0x0a /* Public */,
      18,    1,  237,    3, 0x0a /* Public */,
      19,    1,  240,    3, 0x0a /* Public */,
      20,    1,  243,    3, 0x0a /* Public */,
      22,    2,  246,    3, 0x0a /* Public */,
      23,    2,  251,    3, 0x0a /* Public */,
      24,    2,  256,    3, 0x0a /* Public */,
      25,    1,  261,    3, 0x0a /* Public */,
      26,    1,  264,    3, 0x0a /* Public */,
      27,    1,  267,    3, 0x0a /* Public */,
      28,    1,  270,    3, 0x0a /* Public */,
      30,    1,  273,    3, 0x0a /* Public */,
      32,    1,  276,    3, 0x0a /* Public */,
      34,    1,  279,    3, 0x0a /* Public */,
      36,    1,  282,    3, 0x0a /* Public */,
      37,    1,  285,    3, 0x0a /* Public */,
      38,    1,  288,    3, 0x0a /* Public */,
      39,    2,  291,    3, 0x0a /* Public */,
      41,    2,  296,    3, 0x0a /* Public */,
      43,    2,  301,    3, 0x0a /* Public */,
      44,    1,  306,    3, 0x0a /* Public */,
      46,    2,  309,    3, 0x0a /* Public */,
      48,    2,  314,    3, 0x0a /* Public */,
      50,    2,  319,    3, 0x0a /* Public */,
      52,    2,  324,    3, 0x0a /* Public */,
      54,    2,  329,    3, 0x0a /* Public */,
      56,    2,  334,    3, 0x0a /* Public */,
      57,    2,  339,    3, 0x0a /* Public */,
      58,    3,  344,    3, 0x0a /* Public */,
      62,    2,  351,    3, 0x0a /* Public */,
      64,    2,  356,    3, 0x0a /* Public */,
      65,    1,  361,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 2,    7,
    QMetaType::QByteArrayList, 0x80000000 | 2,    9,
    0x80000000 | 11, 0x80000000 | 2,    9,
    0x80000000 | 13, 0x80000000 | 2,    9,
    0x80000000 | 4,
    QMetaType::Bool, 0x80000000 | 2,    9,
    0x80000000 | 17, 0x80000000 | 2,    9,
    0x80000000 | 11, 0x80000000 | 2,    9,
    QMetaType::QByteArray, 0x80000000 | 2,    9,
    0x80000000 | 21, 0x80000000 | 2,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 4,    9,    5,
    0x80000000 | 17, 0x80000000 | 2,    9,
    0x80000000 | 11, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    0x80000000 | 29, 0x80000000 | 2,    9,
    0x80000000 | 31, 0x80000000 | 2,    9,
    0x80000000 | 33, 0x80000000 | 2,    9,
    0x80000000 | 35, 0x80000000 | 2,    9,
    0x80000000 | 33, 0x80000000 | 2,    9,
    QMetaType::QByteArray, 0x80000000 | 2,    9,
    QMetaType::Int, 0x80000000 | 2,    9,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArrayList,    9,   40,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,    9,   42,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 13,    9,   12,
    QMetaType::Void, 0x80000000 | 4,   45,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 17,    9,   47,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 11,    9,   49,
    QMetaType::Void, 0x80000000 | 2, QMetaType::Int,    9,   51,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 29,    9,   53,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 31,    9,   55,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 33,    9,   32,
    QMetaType::Void, 0x80000000 | 2, QMetaType::QByteArray,    9,   37,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 59, QMetaType::Bool,    9,   60,   61,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 63,    9,    5,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 59,    9,   60,
    QMetaType::Bool, 0x80000000 | 2,    7,

 // enums: name, flags, count, data
      66, 0x0,    3,  368,

 // enum data: key, value
      67, uint(PythonQtWrapper_QSslConfiguration::NextProtocolNegotiationNone),
      68, uint(PythonQtWrapper_QSslConfiguration::NextProtocolNegotiationNegotiated),
      69, uint(PythonQtWrapper_QSslConfiguration::NextProtocolNegotiationUnsupported),

       0        // eod
};

void PythonQtWrapper_QSslConfiguration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSslConfiguration *_t = static_cast<PythonQtWrapper_QSslConfiguration *>(_o);
        switch (_id) {
        case 0: { QSslConfiguration* _r = _t->new_QSslConfiguration();
            if (_a[0]) *reinterpret_cast< QSslConfiguration**>(_a[0]) = _r; }  break;
        case 1: { QSslConfiguration* _r = _t->new_QSslConfiguration((*reinterpret_cast< const QSslConfiguration(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslConfiguration**>(_a[0]) = _r; }  break;
        case 2: _t->delete_QSslConfiguration((*reinterpret_cast< QSslConfiguration*(*)>(_a[1]))); break;
        case 3: { QList<QByteArray> _r = _t->allowedNextProtocols((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QByteArray>*>(_a[0]) = _r; }  break;
        case 4: { QList<QSslCertificate> _r = _t->caCertificates((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 5: { QList<QSslCipher> _r = _t->ciphers((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCipher>*>(_a[0]) = _r; }  break;
        case 6: { QSslConfiguration _r = _t->static_QSslConfiguration_defaultConfiguration();
            if (_a[0]) *reinterpret_cast< QSslConfiguration*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->isNull((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QSslCertificate _r = _t->localCertificate((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate*>(_a[0]) = _r; }  break;
        case 9: { QList<QSslCertificate> _r = _t->localCertificateChain((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 10: { QByteArray _r = _t->nextNegotiatedProtocol((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 11: { QSslConfiguration::NextProtocolNegotiationStatus _r = _t->nextProtocolNegotiationStatus((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslConfiguration::NextProtocolNegotiationStatus*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->__ne__((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { QSslConfiguration* _r = _t->operator_assign((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslConfiguration**>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->__eq__((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslConfiguration(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: { QSslCertificate _r = _t->peerCertificate((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate*>(_a[0]) = _r; }  break;
        case 16: { QList<QSslCertificate> _r = _t->peerCertificateChain((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QSslCertificate>*>(_a[0]) = _r; }  break;
        case 17: { int _r = _t->peerVerifyDepth((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 18: { QSslSocket::PeerVerifyMode _r = _t->peerVerifyMode((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslSocket::PeerVerifyMode*>(_a[0]) = _r; }  break;
        case 19: { QSslKey _r = _t->privateKey((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslKey*>(_a[0]) = _r; }  break;
        case 20: { QSsl::SslProtocol _r = _t->protocol((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSsl::SslProtocol*>(_a[0]) = _r; }  break;
        case 21: { QSslCipher _r = _t->sessionCipher((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCipher*>(_a[0]) = _r; }  break;
        case 22: { QSsl::SslProtocol _r = _t->sessionProtocol((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSsl::SslProtocol*>(_a[0]) = _r; }  break;
        case 23: { QByteArray _r = _t->sessionTicket((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = _r; }  break;
        case 24: { int _r = _t->sessionTicketLifeTimeHint((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 25: _t->setAllowedNextProtocols((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QList<QByteArray>(*)>(_a[2]))); break;
        case 26: _t->setCaCertificates((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[2]))); break;
        case 27: _t->setCiphers((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslCipher>(*)>(_a[2]))); break;
        case 28: _t->static_QSslConfiguration_setDefaultConfiguration((*reinterpret_cast< const QSslConfiguration(*)>(_a[1]))); break;
        case 29: _t->setLocalCertificate((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2]))); break;
        case 30: _t->setLocalCertificateChain((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QList<QSslCertificate>(*)>(_a[2]))); break;
        case 31: _t->setPeerVerifyDepth((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->setPeerVerifyMode((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QSslSocket::PeerVerifyMode(*)>(_a[2]))); break;
        case 33: _t->setPrivateKey((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QSslKey(*)>(_a[2]))); break;
        case 34: _t->setProtocol((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QSsl::SslProtocol(*)>(_a[2]))); break;
        case 35: _t->setSessionTicket((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 36: _t->setSslOption((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QSsl::SslOption(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 37: _t->swap((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QSslConfiguration(*)>(_a[2]))); break;
        case 38: { bool _r = _t->testSslOption((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])),(*reinterpret_cast< QSsl::SslOption(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: { bool _r = _t->__nonzero__((*reinterpret_cast< QSslConfiguration*(*)>(_a[1])));
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslConfiguration >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslConfiguration >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslConfiguration >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslConfiguration >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslCertificate> >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslConfiguration >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslCertificate >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslCertificate> >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSslConfiguration::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslConfiguration.data,
      qt_meta_data_PythonQtWrapper_QSslConfiguration,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSslConfiguration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSslConfiguration::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslConfiguration.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslConfiguration*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslConfiguration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_PythonQtWrapper_QSslError_t {
    QByteArrayData data[47];
    char stringdata[831];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PythonQtWrapper_QSslError_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PythonQtWrapper_QSslError_t qt_meta_stringdata_PythonQtWrapper_QSslError = {
    {
QT_MOC_LITERAL(0, 0, 25), // "PythonQtWrapper_QSslError"
QT_MOC_LITERAL(1, 26, 13), // "new_QSslError"
QT_MOC_LITERAL(2, 40, 10), // "QSslError*"
QT_MOC_LITERAL(3, 51, 0), // ""
QT_MOC_LITERAL(4, 52, 19), // "QSslError::SslError"
QT_MOC_LITERAL(5, 72, 5), // "error"
QT_MOC_LITERAL(6, 78, 15), // "QSslCertificate"
QT_MOC_LITERAL(7, 94, 11), // "certificate"
QT_MOC_LITERAL(8, 106, 9), // "QSslError"
QT_MOC_LITERAL(9, 116, 5), // "other"
QT_MOC_LITERAL(10, 122, 16), // "delete_QSslError"
QT_MOC_LITERAL(11, 139, 3), // "obj"
QT_MOC_LITERAL(12, 143, 16), // "theWrappedObject"
QT_MOC_LITERAL(13, 160, 11), // "errorString"
QT_MOC_LITERAL(14, 172, 6), // "__ne__"
QT_MOC_LITERAL(15, 179, 15), // "operator_assign"
QT_MOC_LITERAL(16, 195, 6), // "__eq__"
QT_MOC_LITERAL(17, 202, 4), // "swap"
QT_MOC_LITERAL(18, 207, 10), // "QSslError&"
QT_MOC_LITERAL(19, 218, 11), // "py_toString"
QT_MOC_LITERAL(20, 230, 8), // "SslError"
QT_MOC_LITERAL(21, 239, 7), // "NoError"
QT_MOC_LITERAL(22, 247, 28), // "UnableToGetIssuerCertificate"
QT_MOC_LITERAL(23, 276, 35), // "UnableToDecryptCertificateSig..."
QT_MOC_LITERAL(24, 312, 29), // "UnableToDecodeIssuerPublicKey"
QT_MOC_LITERAL(25, 342, 26), // "CertificateSignatureFailed"
QT_MOC_LITERAL(26, 369, 22), // "CertificateNotYetValid"
QT_MOC_LITERAL(27, 392, 18), // "CertificateExpired"
QT_MOC_LITERAL(28, 411, 21), // "InvalidNotBeforeField"
QT_MOC_LITERAL(29, 433, 20), // "InvalidNotAfterField"
QT_MOC_LITERAL(30, 454, 21), // "SelfSignedCertificate"
QT_MOC_LITERAL(31, 476, 28), // "SelfSignedCertificateInChain"
QT_MOC_LITERAL(32, 505, 33), // "UnableToGetLocalIssuerCertifi..."
QT_MOC_LITERAL(33, 539, 30), // "UnableToVerifyFirstCertificate"
QT_MOC_LITERAL(34, 570, 18), // "CertificateRevoked"
QT_MOC_LITERAL(35, 589, 20), // "InvalidCaCertificate"
QT_MOC_LITERAL(36, 610, 18), // "PathLengthExceeded"
QT_MOC_LITERAL(37, 629, 14), // "InvalidPurpose"
QT_MOC_LITERAL(38, 644, 20), // "CertificateUntrusted"
QT_MOC_LITERAL(39, 665, 19), // "CertificateRejected"
QT_MOC_LITERAL(40, 685, 21), // "SubjectIssuerMismatch"
QT_MOC_LITERAL(41, 707, 35), // "AuthorityIssuerSerialNumberMi..."
QT_MOC_LITERAL(42, 743, 17), // "NoPeerCertificate"
QT_MOC_LITERAL(43, 761, 16), // "HostNameMismatch"
QT_MOC_LITERAL(44, 778, 12), // "NoSslSupport"
QT_MOC_LITERAL(45, 791, 22), // "CertificateBlacklisted"
QT_MOC_LITERAL(46, 814, 16) // "UnspecifiedError"

    },
    "PythonQtWrapper_QSslError\0new_QSslError\0"
    "QSslError*\0\0QSslError::SslError\0error\0"
    "QSslCertificate\0certificate\0QSslError\0"
    "other\0delete_QSslError\0obj\0theWrappedObject\0"
    "errorString\0__ne__\0operator_assign\0"
    "__eq__\0swap\0QSslError&\0py_toString\0"
    "SslError\0NoError\0UnableToGetIssuerCertificate\0"
    "UnableToDecryptCertificateSignature\0"
    "UnableToDecodeIssuerPublicKey\0"
    "CertificateSignatureFailed\0"
    "CertificateNotYetValid\0CertificateExpired\0"
    "InvalidNotBeforeField\0InvalidNotAfterField\0"
    "SelfSignedCertificate\0"
    "SelfSignedCertificateInChain\0"
    "UnableToGetLocalIssuerCertificate\0"
    "UnableToVerifyFirstCertificate\0"
    "CertificateRevoked\0InvalidCaCertificate\0"
    "PathLengthExceeded\0InvalidPurpose\0"
    "CertificateUntrusted\0CertificateRejected\0"
    "SubjectIssuerMismatch\0"
    "AuthorityIssuerSerialNumberMismatch\0"
    "NoPeerCertificate\0HostNameMismatch\0"
    "NoSslSupport\0CertificateBlacklisted\0"
    "UnspecifiedError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PythonQtWrapper_QSslError[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       1,  126, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    3, 0x0a /* Public */,
       1,    1,   80,    3, 0x0a /* Public */,
       1,    2,   83,    3, 0x0a /* Public */,
       1,    1,   88,    3, 0x0a /* Public */,
      10,    1,   91,    3, 0x0a /* Public */,
       7,    1,   94,    3, 0x0a /* Public */,
       5,    1,   97,    3, 0x0a /* Public */,
      13,    1,  100,    3, 0x0a /* Public */,
      14,    2,  103,    3, 0x0a /* Public */,
      15,    2,  108,    3, 0x0a /* Public */,
      16,    2,  113,    3, 0x0a /* Public */,
      17,    2,  118,    3, 0x0a /* Public */,
      19,    1,  123,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    0x80000000 | 2, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 2,   11,
    0x80000000 | 6, 0x80000000 | 2,   12,
    0x80000000 | 4, 0x80000000 | 2,   12,
    QMetaType::QString, 0x80000000 | 2,   12,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 8,   12,    9,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 8,   12,    9,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 8,   12,    9,
    QMetaType::Void, 0x80000000 | 2, 0x80000000 | 18,   12,    9,
    QMetaType::QString, 0x80000000 | 2,    3,

 // enums: name, flags, count, data
      20, 0x0,   26,  130,

 // enum data: key, value
      21, uint(PythonQtWrapper_QSslError::NoError),
      22, uint(PythonQtWrapper_QSslError::UnableToGetIssuerCertificate),
      23, uint(PythonQtWrapper_QSslError::UnableToDecryptCertificateSignature),
      24, uint(PythonQtWrapper_QSslError::UnableToDecodeIssuerPublicKey),
      25, uint(PythonQtWrapper_QSslError::CertificateSignatureFailed),
      26, uint(PythonQtWrapper_QSslError::CertificateNotYetValid),
      27, uint(PythonQtWrapper_QSslError::CertificateExpired),
      28, uint(PythonQtWrapper_QSslError::InvalidNotBeforeField),
      29, uint(PythonQtWrapper_QSslError::InvalidNotAfterField),
      30, uint(PythonQtWrapper_QSslError::SelfSignedCertificate),
      31, uint(PythonQtWrapper_QSslError::SelfSignedCertificateInChain),
      32, uint(PythonQtWrapper_QSslError::UnableToGetLocalIssuerCertificate),
      33, uint(PythonQtWrapper_QSslError::UnableToVerifyFirstCertificate),
      34, uint(PythonQtWrapper_QSslError::CertificateRevoked),
      35, uint(PythonQtWrapper_QSslError::InvalidCaCertificate),
      36, uint(PythonQtWrapper_QSslError::PathLengthExceeded),
      37, uint(PythonQtWrapper_QSslError::InvalidPurpose),
      38, uint(PythonQtWrapper_QSslError::CertificateUntrusted),
      39, uint(PythonQtWrapper_QSslError::CertificateRejected),
      40, uint(PythonQtWrapper_QSslError::SubjectIssuerMismatch),
      41, uint(PythonQtWrapper_QSslError::AuthorityIssuerSerialNumberMismatch),
      42, uint(PythonQtWrapper_QSslError::NoPeerCertificate),
      43, uint(PythonQtWrapper_QSslError::HostNameMismatch),
      44, uint(PythonQtWrapper_QSslError::NoSslSupport),
      45, uint(PythonQtWrapper_QSslError::CertificateBlacklisted),
      46, uint(PythonQtWrapper_QSslError::UnspecifiedError),

       0        // eod
};

void PythonQtWrapper_QSslError::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PythonQtWrapper_QSslError *_t = static_cast<PythonQtWrapper_QSslError *>(_o);
        switch (_id) {
        case 0: { QSslError* _r = _t->new_QSslError();
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 1: { QSslError* _r = _t->new_QSslError((*reinterpret_cast< QSslError::SslError(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 2: { QSslError* _r = _t->new_QSslError((*reinterpret_cast< QSslError::SslError(*)>(_a[1])),(*reinterpret_cast< const QSslCertificate(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 3: { QSslError* _r = _t->new_QSslError((*reinterpret_cast< const QSslError(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 4: _t->delete_QSslError((*reinterpret_cast< QSslError*(*)>(_a[1]))); break;
        case 5: { QSslCertificate _r = _t->certificate((*reinterpret_cast< QSslError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslCertificate*>(_a[0]) = _r; }  break;
        case 6: { QSslError::SslError _r = _t->error((*reinterpret_cast< QSslError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSslError::SslError*>(_a[0]) = _r; }  break;
        case 7: { QString _r = _t->errorString((*reinterpret_cast< QSslError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->__ne__((*reinterpret_cast< QSslError*(*)>(_a[1])),(*reinterpret_cast< const QSslError(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { QSslError* _r = _t->operator_assign((*reinterpret_cast< QSslError*(*)>(_a[1])),(*reinterpret_cast< const QSslError(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSslError**>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->__eq__((*reinterpret_cast< QSslError*(*)>(_a[1])),(*reinterpret_cast< const QSslError(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->swap((*reinterpret_cast< QSslError*(*)>(_a[1])),(*reinterpret_cast< QSslError(*)>(_a[2]))); break;
        case 12: { QString _r = _t->py_toString((*reinterpret_cast< QSslError*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSslCertificate >(); break;
            }
            break;
        }
    }
}

const QMetaObject PythonQtWrapper_QSslError::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PythonQtWrapper_QSslError.data,
      qt_meta_data_PythonQtWrapper_QSslError,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PythonQtWrapper_QSslError::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PythonQtWrapper_QSslError::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PythonQtWrapper_QSslError.stringdata))
        return static_cast<void*>(const_cast< PythonQtWrapper_QSslError*>(this));
    return QObject::qt_metacast(_clname);
}

int PythonQtWrapper_QSslError::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
