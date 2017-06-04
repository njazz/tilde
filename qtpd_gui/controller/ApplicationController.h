// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef APPLICATIONCONTROLLER
#define APPLICATIONCONTROLLER

// TODO
#include "../API_prototype/serverAPIprototype.h"
#include "PatchWindow.h"
//#include "PdWindow.h"

//#include "ControllerObserver.h"

#ifdef WITH_PYTHON
#include "python/PythonQtScriptingConsole.h"
#endif

//void pd_window_printhook(const char* s)
//{
//    //emit _pdWindow->cm_log_signal(QString(s));
//}

namespace qtpd{

class PdWindow;

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
    ServerInstance* _mainInstance;

    PdWindow* _pdWindow;
    PythonQtScriptingConsole* _pythonConsole;

    PdWindowConsoleObserver* _consoleObserver;

public:
    ApplicationController();
    ServerInstance* mainInstance() {return _mainInstance;}
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
