// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ServerWorker.h"
#include "PropertyList.h"
#include "UIObject.h"

class ServerObject;

namespace tilde {
ServerWorker::ServerWorker()
{
    qDebug() << "new server worker " << this;

    _localServer = 0;

};

LocalServer* ServerWorker::localServer() const
{
    return _localServer;
};

void ServerWorker::start()
{
    // XPD-TODO
    // _localServer = new LocalServer();

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

    // XPD-TODO
    /*
    if (dest != "")
        ServerInstance::sendMessage(dest.toStdString(), msg.toStdString());
        */

    // XPD-TODO
    // object->message(msg.toStdString());
}
}
