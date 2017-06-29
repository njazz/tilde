// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ApplicationController.h"
#include "PatchWindowController.h"

#include "AudioSettings.h"

#include "PatchWindow.h"
#include "PdWindow.h"

#include "FileParser.h"

namespace qtpd {

ApplicationController::ApplicationController()
{
    qDebug("new app controller");

    //_server = new TheServer();

    _localServer = 0;

    _serverWorker = new ServerWorker();

    //connect(this, &ApplicationController::getLocalServer, _serverWorker, &ServerWorker::getLocalServerSlot);

    _serverThread = new QThread();

    connect(_serverThread, &QThread::started, _serverWorker, &ServerWorker::start);
    connect(_serverThread, &QThread::finished, _serverWorker, &ServerWorker::stop);

    //connect(_serverWorker, &ServerWorker::setServer, this, &ApplicationController::setServer);

    _serverWorker->moveToThread(_serverThread);
    _serverThread->start();

//_mainServerInstance = _server->createInstance();

#ifdef WITH_PYTHON
    PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();
    _pythonConsole = new PythonQtScriptingConsole(NULL, mainContext);
    qDebug("pyConsole %lu", (long)_pythonConsole);
#endif

    _consoleObserver = new PdWindowConsoleObserver;

    mainServerInstance()->setConsoleObserver(_consoleObserver);

    _pdWindow = new PdWindow();
    _pdWindow->setAppController(this);
    _pdWindow->move(0, 100);
    _pdWindow->show();

    _consoleObserver->setWindow(_pdWindow);

    _localServer->firstInstance()->post("Server started");
    _localServer->firstInstance()->setVerboseLevel(5);
    _localServer->firstInstance()->loadLibrary("~/Documents/Qtpd/Libraries/qtpd_ui");

    FileParser::setAppController(this);
};

ServerInstance* ApplicationController::mainServerInstance()
{
    while (!_localServer) {
        _localServer = _serverWorker->localServer();
    }

    qDebug() << "server @appc " << _localServer;

    return _localServer->firstInstance();
}

void ApplicationController::newPatchWindowController()
{
    qDebug("new patch from menu >>");
    //return
    PatchWindowController* newP = new PatchWindowController(this);
    //newP->setAppController(this);
    newP->firstWindow()->show();
    qDebug("<<");
};

void ApplicationController::openFileDialog()
{
    QString fileName = QFileDialog::getOpenFileName(0, QString("Open patch"), QString("~/"), QString("*.pd"), 0, 0);

    if (fileName != "") {
        PatchWindowController* newP = new PatchWindowController(this);
        newP->openFile(fileName);
    }
}

void ApplicationController::pdWindow()
{
    //PdWindow::inst()->setAppController(_appController);

    if (_pdWindow->isVisible())
        _pdWindow->hide();
    else
        _pdWindow->show();
}

void ApplicationController::pythonConsole()
{
#ifdef WITH_PYTHON
    if (_pythonConsole) {
        if (_pythonConsole->isVisible())
            _pythonConsole->hide();
        else {
            _pythonConsole->show();
        }
    }

#else
    cmp_post("This build is compiled without Python!");
#endif
}

void ApplicationController::preferencesWindow()
{
    qDebug() << "preferences";
    PropertyList* l1 = &Preferences::inst();
    PropertiesWindow* p1 = new PropertiesWindow(l1);
    p1->setWindowTitle("Qtpd preferences");
    p1->move(30, 30);
    p1->show();
}

void ApplicationController::audioSettingsWindow()
{
    qDebug() << "audio settings";
    PropertyList* l1 = &AudioSettings::inst();
    PropertiesWindow* p1 = new PropertiesWindow(l1);
    p1->setWindowTitle("Audio settings");
    p1->move(30, 30);
    p1->show();
}

void ApplicationController::dspOn()
{
    qDebug() << "dsp on";

    mainServerInstance()->dspOn();

    //todo DSP observer
}

void ApplicationController::dspOff()
{

    mainServerInstance()->dspOff();
}

void PdWindowConsoleObserver::update()
{
    if (_window) {
        emit _window->cm_log_signal(QString(text().c_str()));
    }
};

ServerObject* ApplicationController::slotCreateObject(ServerCanvas* canvas, string name)
{
    //qDebug() << "create obj slot";

    assert(canvas);

    ServerObject* serverObject = canvas->createObject(name);
    // TEST
    //serverObject->_pdObject = cmp_create_object((t_canvas*)_serverCanvas->canvasObject(),name,0,0);

    //    uiObject->setParentCanvasView(_windows[0]->canvasView());
    //    uiObject->setServerObject(serverObject);
    //    uiObject->sync();

    //    uiObject->setEditModeRef(_windows[0]->canvasView()->getEditModeRef());

    //    // TODO

    //    //connect(uiObject, &UIObject::selectBox, _windows[0]->canvasView(), &CanvasView::s_SelectBox);
    //    //connect(uiObject, &UIObject::moveBox, _windows[0]->canvasView(), &CanvasView::s_MoveBox);

    //    //uiObject->setEditModeRef( _windows[0]->canvasEditMode()); //Canvas::getEditModeRef());
    //    //connect(uiObject, &UIObject::editObject, this, &CanvasView::objectStartsEdit);

    //    uiObject->move(pos.x(), pos.y());

    //    _canvasData->addUniqueBox(_canvasData->boxes(), uiObject);
    //    _scene->addItem(uiObject);

    //    connect(uiObject, &UIObject::selectBox, _windows[0]->canvasView(), &CanvasView::slotSelectBox);
    //    connect(uiObject, &UIObject::moveBox, _windows[0]->canvasView(), &CanvasView::slotMoveBox);

    return serverObject;
}
}
