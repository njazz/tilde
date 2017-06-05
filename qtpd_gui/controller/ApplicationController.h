// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef APPLICATIONCONTROLLER
#define APPLICATIONCONTROLLER

// TODO
#include "../API_prototype/serverAPIprototype.h"

//#include "ControllerObserver.h"

#ifdef WITH_PYTHON
#include "python/PythonQtScriptingConsole.h"
#endif

namespace qtpd {

class PdWindow;
class PatchWindow;

class PdWindowConsoleObserver : public ConsoleObserver {
private:
    PdWindow* _window;

public:
    void setWindow(PdWindow* w) { _window = w; };
    void update();
};

class ApplicationController : public QObject {
private:
    TheServer* _server;
    //ServerInstance* _mainServerInstance;

    PdWindow* _pdWindow;
    PythonQtScriptingConsole* _pythonConsole;

    PdWindowConsoleObserver* _consoleObserver;

public:
    ApplicationController();
    ServerInstance* mainServerInstance() { return _server->firstInstance(); }
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
};
}

#endif // CM_PDLINK_H
