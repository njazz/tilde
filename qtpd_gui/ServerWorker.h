#ifndef LOCALSERVER_H
#define LOCALSERVER_H

#include "../API_prototype/serverapiprototype.h"

#include <QDebug>
#include <QThread>

class ServerWorker : public QObject {

    Q_OBJECT

    LocalServer* _localServer;

public:
    ServerWorker(){

    };

    LocalServer* localServer() {return _localServer;};

//signals:
//    void getServer();
//    void setServer(LocalServer* server);

public slots:
    void start()
    {
        _localServer = new LocalServer();

        qDebug() << "server in thread: " << _localServer;

        //emit setServer(_localServer);

        qDebug() << ">>emit";

    };

    void stop()
    {
        delete _localServer;
    };

//    void slotGetServer()
//    {

//        qDebug() << "server get " << _localServer;

//        emit setServer(_localServer);
//    }
};

#endif // LOCALSERVER_H
