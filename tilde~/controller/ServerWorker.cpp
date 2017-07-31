// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ServerWorker.h"
#include "PropertyList.h"
#include "UIObject.h"

namespace qtpd {
ServerWorker::ServerWorker()
{
    qDebug() << "new server worker " << this;

    _localServer = 0;

    // connect(this, &ServerWorker::getLocalServer, this, &ServerWorker::getLocalServerSlot);
    //connect(this, &ServerWorker::sendMessageSignal, this, &ServerWorker::sendMessageToObject);
};

LocalServer* ServerWorker::localServer() const
{
    return _localServer;
};

void ServerWorker::start()
{
    _localServer = new LocalServer();

    //qDebug() << "server " << _localServer << " in thread / worker: " << this;
};

void ServerWorker::stop()
{
    qDebug() << "deleted server";
    delete _localServer;
};

void ServerWorker::sendMessageToObject(ServerObject* object, QString msg)
{
    UIObject* obj = (UIObject*)QObject::sender();
    QString dest = obj->properties()->get("SendSymbol")->asQString();

    if (dest != "")
        ServerInstance::sendMessage(dest.toStdString(), msg.toStdString());

    //qDebug() << "send message";
    object->message(msg.toStdString());
}
}
