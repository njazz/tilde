// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ApplicationController.h"
#include "PatchWindowController.h"

#include "AudioSettings.h"

#include "PatchWindow.h"
#include "PdWindow.h"

#include "FileParser.h"

#ifdef WITH_PYTHON
#include "python/wrappers/py_wrappers.h"
#include "UIScriptEditor.h"
#endif

#include "ControllerObserver.h"
#include "ObjectLoader.h"
#include "PropertiesWindow.h"
#include "ServerWorker.h"
#include "filepaths.h"
#include "pdWindowConsoleObserver.h"
#include "recentfiles.h"
#include <assert.h>


#include "buildNumber.h"

namespace tilde {

void ApplicationController::loadAllLibraries()
{
    _localServer->firstInstance()->setVerboseLevel(4);
    
    

    QStringList libs = _filePaths->librariesFileList();

    for (int i = 0; i < libs.size(); i++) {
        // todo rewrite
        //QStringList path =
        QString file = libs.at(i).left(libs.at(i).lastIndexOf("."));//libs.at(i).split("/").first() + libs.at(i).split("/").last().split(".").first();
        _localServer->firstInstance()->loadLibrary(file.toStdString());
    }
    
    _localServer->firstInstance()->setVerboseLevel(1);
    
}

ApplicationController::ApplicationController()
{
    qDebug("new app controller");

    QFontDatabase::addApplicationFont(":/fonts/SourceCodePro-Regular.otf");

    _filePaths = new FilePaths;
    _localServer = 0;

    ObjectLoader::inst().loadObjects();

    TILDE_PREF_INIT;

#ifdef WITH_PYTHON
    PythonQt::init(PythonQt::RedirectStdOut);
    PythonQt_QtAll::init();
    pyWrapper::inst();

    _scriptRunner = new ScriptRunner();
#endif

    TILDE_AUDIOSETTINGS_INIT;

    _serverWorker = new ServerWorker();
    _serverThread = new QThread();

    connect(_serverThread, &QThread::started, _serverWorker, &ServerWorker::start);
    connect(_serverThread, &QThread::finished, _serverWorker, &ServerWorker::stop);

    _serverWorker->moveToThread(_serverThread);
    _serverThread->start();

#ifdef WITH_PYTHON
    pyWrapper::inst().setAppController(this);
    PythonQtObjectPtr mainContext = pyWrapper::inst().newContext();
    _pythonConsole = new PythonQtScriptingConsole(NULL, mainContext);
#endif

    _consoleObserver = new PdWindowConsoleObserver;

    mainServerInstance()->setConsoleObserver(_consoleObserver);

    _pdWindow = new PdWindow();
    _pdWindow->setAppController(this);
    _pdWindow->move(0, 100);
    _pdWindow->show();

    _consoleObserver->setWindow(_pdWindow);

    _localServer->firstInstance()->post("Server started");

    //_localServer->firstInstance()->setVerboseLevel(4);

    //QString tilde = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).at(0);
    //_localServer->firstInstance()->loadLibrary(QString(tilde + "/tilde~/Libraries/tilde~_ui").toStdString());

    FileParser::setAppController(this);

    // --------

    //temporary folders properties
    QString docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last();

    // load from file later
    //    Preferences::inst().create("Externals", "ExtraFolders", "0.1", docFolder + "/tilde~/Externals");
    //    Preferences::inst().create("Scripts", "ExtraFolders", "0.1", docFolder + "/tilde~/Scripts");
    //    Preferences::inst().create("Help", "ExtraFolders", "0.1", docFolder + "/tilde~/Help");

    //we still need that!
    Preferences::inst().create("Patches", "ExtraFolders", "0.1", docFolder + "/tilde~/Patches");

    //    Preferences::inst().create("Classes", "ExtraFolders", "0.1", docFolder + "/tilde~/Classes");
    //    Preferences::inst().create("Libraries", "ExtraFolders", "0.1", docFolder + "/tilde~/Libraries");

    //    Preferences::inst().get("Externals")->setType(ptStringList);
    //    Preferences::inst().get("Scripts")->setType(ptStringList);
    //    Preferences::inst().get("Help")->setType(ptStringList);
    //    Preferences::inst().get("Patches")->setType(ptStringList);
    //    Preferences::inst().get("Classes")->setType(ptStringList);
    //    Preferences::inst().get("Libraries")->setType(ptStringList);

    //temporary fix
    //    Preferences::inst().create("Paths", "Folders", "0.1", docFolder);
    //    Preferences::inst().get("Paths")->setType(ptStringList);

    //    std::string extPath = Preferences::inst().get("Externals")->asStdString();
    //    std::string extPath1 = extPath + "/ceammc";
    //    std::string extPath2 = extPath + "/fiddle~";
    //    std::string extPath3 = Preferences::inst().get("Help")->asStdString();

    //std::string extPath4 = Preferences::inst().get("Patches")->asStdString();

    //bug - no '/' in the end

    // TODO
    //    Preferences::inst().addPath(extPath.c_str());
    //    Preferences::inst().addPath(extPath1.c_str());
    //    Preferences::inst().addPath(extPath2.c_str());
    //    Preferences::inst().addPath(extPath3.c_str());

    //Preferences::inst().addPath(extPath4.c_str());

    //    mainServerInstance()->addSearchPath(extPath);
    //    mainServerInstance()->addSearchPath(extPath1);
    //    mainServerInstance()->addSearchPath(extPath2);
    //    mainServerInstance()->addSearchPath(extPath3);
    //controller->mainServerInstance()->addSearchPath(extPath4);

    // *******************************
    // TODO
    // "Paths" should be read-only list
    // search all through "FilePath" class
    // set only root ~/tilde~ path
    // extrafolders for additional paths
    Preferences::inst().create("tilde~Path", "Folders", "0.1", _filePaths->basePath());

    loadAllLibraries();

    qDebug() << " *** paths *** ";
    qDebug() << _filePaths->librariesDirList();
    qDebug() << _filePaths->librariesFileList();
    qDebug() << _filePaths->bundlesDirList();

    qDebug() << _filePaths->externalsDirList();

    QStringList paths = _filePaths->externalsDirList();
    // external paths
    for (int i = 0; i < paths.size(); i++) {
        mainServerInstance()->addSearchPath(paths.at(i).toStdString());
    }

    QStringList paths2 = _filePaths->helpDirList();
    // help paths
    for (int i = 0; i < paths2.size(); i++) {
        mainServerInstance()->addSearchPath(paths2.at(i).toStdString());
    }

    Preferences::inst().create("Paths", "Folders", "0.1", paths + paths2);
    Preferences::inst().get("Paths")->setType(ptStringList);

    //mainServerInstance()->post("tilde~ started");
    //mainServerInstance()->post("----");

    _newFilenameCounter = 1;

    _recentFiles = new RecentFiles();
    _recentMenu = new QMenu();

    _pdWindow->setRecentMenu(_recentMenu);
    
    QString bb = QString("tilde~ build: ") + QString::number(TILDE_BUILD_NUMBER);
    ServerInstance::post(bb.toStdString());

    Preferences::inst().readFromTextFile();
};

ServerInstance* ApplicationController::mainServerInstance()
{
    //?
    while (!_localServer) {
        _localServer = _serverWorker->localServer();
    }

    return _localServer->firstInstance();
}

void ApplicationController::newPatchWindowController()
{
    qDebug()<<"0";

    PatchWindowController* newP = new PatchWindowController(this);
    if (!newP) return;
    newP->setNewFileName(newFileName());
    newP->mainWindow()->show();
};

void ApplicationController::openFileDialog()
{
    QString fileName = QFileDialog::getOpenFileName(0, QString("Open patch"), QString("~/"), QString("*.pd"), 0, 0);

    if (fileName != "") {

        PatchWindowController* newP = new PatchWindowController(this);
        newP->openFile(fileName);
        _recentFiles->addFile(fileName);
        createRecentMenu();
    }
}

void ApplicationController::pdWindow()
{
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
    ServerInstance::post("This build is compiled without Python!");
#endif
}

void ApplicationController::preferencesWindow()
{
    qDebug() << "preferences";
    PropertyList* l1 = &Preferences::inst();
    PropertiesWindow* p1 = new PropertiesWindow(l1);
    p1->setWindowTitle("tilde~ preferences");
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

void ApplicationController::createRecentMenu()
{
    QStringList l = *_recentFiles->list();

    //qDebug() << l;

    _recentMenu->clear();

    for (int i = 0; i < l.size(); i++) {

        QAction* a = new QAction();
        a->setText(l.at(i));

        //add menuitems here
        _recentMenu->addAction(a);
        //qDebug() << a;

        connect(a, &QAction::triggered, this, &ApplicationController::openFile);
    }

    _recentMenu->setTitle("Open Recent Patch...");
};

void ApplicationController::openFile()
{
    QAction* a = (QAction*)QObject::sender();

    FileParser::open(a->text());
}

void ApplicationController::newScript()
{
#ifdef WITH_PYTHON
    UIScriptEditor* s = new UIScriptEditor(0);
    s->enableStandalone();

    s->show();
#endif
}

ServerObject* ApplicationController::slotCreateObject(ServerCanvas* canvas, string name)
{
    assert(canvas);

    ServerObject* serverObject = canvas->createObject(name);

    return serverObject;
}
}
