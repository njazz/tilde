#ifndef LOCALSERVER_H
#define LOCALSERVER_H

// #include <pdServer.hpp>

#include <QDebug>
#include <QThread>


class LocalServer;

using namespace std;

class ServerObject;

namespace tilde {

////
/// \brief Stub for the server in separate thread
///
class ServerWorker : public QObject {

    Q_OBJECT

    LocalServer* _localServer;

public:
    ServerWorker();

    LocalServer* localServer() const;

public slots:
    void start();
    void stop();
    void sendMessageToObject(ServerObject* object, QString msg);

signals:
    void sendMessageSignal(ServerObject* object, string msg);
};
}

#endif // LOCALSERVER_H
