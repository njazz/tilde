// (c) 2017 Alex Nadzharov
// License: GPL3

#include <QApplication>

#include "PatchWindow.h"
#include "PdWindow.h"

//#include "BaseMenu.h"

#include "ObjectLoader.h"

#include "AudioSettings.h"
#include "Preferences.h"

//python

#ifdef WITH_PYTHON
#include <PythonQt.h>
#include <PythonQt_QtAll.h>

#include "python/PythonQtScriptingConsole.h"
#include "python/wrappers/py_wrappers.h"
#endif

#include "ApplicationController.h"

using namespace qtpd;

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);

    // TODO move all to appcontroller
    ApplicationController* controller = new ApplicationController();



    a.setCursorFlashTime(500);

    //temporary folders properties
    QString docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last();

    // load from file later
    Preferences::inst().create("Externals", "Folders", "0.1", docFolder + "/Qtpd/Externals");
    Preferences::inst().create("Scripts", "Folders", "0.1", docFolder + "/Qtpd/Scripts");
    Preferences::inst().create("Help", "Folders", "0.1", docFolder + "/Qtpd/Help");
    Preferences::inst().create("Patches", "Folders", "0.1", docFolder + "/Qtpd/Patches");
    Preferences::inst().create("Classes", "Folders", "0.1", docFolder + "/Qtpd/Classes");
    Preferences::inst().create("Libraries", "Folders", "0.1", docFolder + "/Qtpd/Libraries");

    //temporary fix
    Preferences::inst().create("Paths", "Folders", "0.1", docFolder);

    std::string extPath = Preferences::inst().get("Externals")->asStdString();
    std::string extPath1 = extPath + "/ceammc";
    std::string extPath2 = extPath + "/fiddle~";
    std::string extPath3 = Preferences::inst().get("Help")->asStdString();
    //bug - no '/' in the end

    // TODO
    Preferences::inst().addPath(extPath.c_str());
    Preferences::inst().addPath(extPath1.c_str());
    Preferences::inst().addPath(extPath2.c_str());
    Preferences::inst().addPath(extPath3.c_str());

    controller->mainServerInstance()->addSearchPath(extPath);
    controller->mainServerInstance()->addSearchPath(extPath1);
    controller->mainServerInstance()->addSearchPath(extPath2);
    controller->mainServerInstance()->addSearchPath(extPath3);

    return a.exec();
}
