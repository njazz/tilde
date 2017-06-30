#ifndef LOCALSERVER_H
#define LOCALSERVER_H

#include <pdServer.hpp>

#include <QDebug>
#include <QThread>

namespace qtpd{

class ServerWorker : public QObject {

    Q_OBJECT

    LocalServer* _localServer;

public:
    ServerWorker()
    {

        qDebug() << "new server worker " << this;

        // connect(this, &ServerWorker::getLocalServer, this, &ServerWorker::getLocalServerSlot);

        //connect(this, &ServerWorker::sendMessageSignal, this, &ServerWorker::sendMessageToObject);
    };

    LocalServer* localServer() const { return _localServer; };

public slots:
    void start()
    {
        _localServer = new LocalServer();

        qDebug() << "server " << _localServer << " in thread / worker: " << this;
    };

    void stop()
    {
        qDebug() << "deleted server";
        delete _localServer;
    };

    void sendMessageToObject(ServerObject* object, QString msg)
    {
        qDebug() << "send message";
        object->message(msg.toStdString());
    }

signals:
    void sendMessageSignal(ServerObject* object, string msg);

    //signals:
    //    LocalServer* getLocalServer();

    //public slots:
    //     void getLocalServerSlot(LocalServer* ret)
    //    {
    //        qDebug() << "server worker slot";

    //        if (!_localServer)
    //        {
    //            _localServer = new LocalServer();

    //            qDebug() << "new server " << _localServer << " in thread / worker: " << this;

    //        }
    //        qDebug() << _localServer;

    //        ret = _localServer;
    //    };
};

}

#endif // LOCALSERVER_H
