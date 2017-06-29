// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef APPLICATIONCONTROLLER
#define APPLICATIONCONTROLLER

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

    PdWindow* _pdWindow;
    PythonQtScriptingConsole* _pythonConsole;

    PdWindowConsoleObserver* _consoleObserver;

public:
    ApplicationController();

    ServerInstance* mainServerInstance();

    Observer* controllerObserver();

    ServerWorker* serverWorker() { return _serverWorker; };

signals:
    void getLocalServer(LocalServer* ret);

public slots:
    void newPatchWindowController();
    void openFileDialog();

    void pdWindow();
    void pythonConsole();

    void preferencesWindow();
    void audioSettingsWindow();

    void dspOn();
    void dspOff();

    ServerObject* slotCreateObject(ServerCanvas* canvas, string name);
};
}

#endif // CM_PDLINK_H
