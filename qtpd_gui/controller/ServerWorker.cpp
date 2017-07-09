#include "ServerWorker.h"

namespace qtpd {
ServerWorker::ServerWorker()
{

    qDebug() << "new server worker " << this;

    // connect(this, &ServerWorker::getLocalServer, this, &ServerWorker::getLocalServerSlot);
    //connect(this, &ServerWorker::sendMessageSignal, this, &ServerWorker::sendMessageToObject);
};

LocalServer* ServerWorker::localServer() const { return _localServer; };

void ServerWorker::start()
{
    _localServer = new LocalServer();

    qDebug() << "server " << _localServer << " in thread / worker: " << this;
};

void ServerWorker::stop()
{
    qDebug() << "deleted server";
    delete _localServer;
};

void ServerWorker::sendMessageToObject(ServerObject* object, QString msg)
{
    qDebug() << "send message";
    object->message(msg.toStdString());
}
}
