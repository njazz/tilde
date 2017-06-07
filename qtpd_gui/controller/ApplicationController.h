// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef APPLICATIONCONTROLLER
#define APPLICATIONCONTROLLER

// TODO
//#include "../API_prototype/serverAPIprototype.h"

#include "ServerWorker.h"

//#include "ControllerObserver.h"

#ifdef WITH_PYTHON
#include "python/PythonQtScriptingConsole.h"
#endif

#include <QApplication>

namespace qtpd {

class PdWindow;
class PatchWindow;
class UIObject;

class PdWindowConsoleObserver : public ConsoleObserver {
private:
    PdWindow* _window;

public:
    void setWindow(PdWindow* w) { _window = w; };
    void update();
};

class ApplicationController : public QObject {
    Q_OBJECT

private:
    LocalServer* _localServer;

    ServerWorker* _serverWorker;
    QThread* _serverThread;
    //ServerInstance* _mainServerInstance;

    PdWindow* _pdWindow;
    PythonQtScriptingConsole* _pythonConsole;

    PdWindowConsoleObserver* _consoleObserver;

public:
    ApplicationController();

    ServerInstance* mainServerInstance()
    {

        while (!_localServer) {

            _localServer = _serverWorker->localServer();

            qDebug() << "server @appc " << _localServer;
        }

        return _localServer->firstInstance();
    }

    Observer* controllerObserver();

public slots:
    void newPatchWindowController(); //older createPatch //PatchWindowController*
    void openFileDialog();

    void pdWindow();
    void pythonConsole();

    void preferencesWindow();
    void audioSettingsWindow();

    void dspOn();
    void dspOff();

    ServerObject* slotCreateObject(ServerCanvas* canvas, string name);

//    void setServer(LocalServer* server)
//    {
//        qDebug() << "set server " << server;

//        _localServer = server;
//    }

//signals:
//    LocalServer* getServer();
};
}

#endif // CM_PDLINK_H
