// (c) 2017 Alex Nadzharov
// License: GPL3

#include <QApplication>

#include "PdLink.h"

#include "PatchWindow.h"
#include "PdWindow.h"

#include "BaseMenu.h"

#include "ObjectLoader.h"

#include "Preferences.h"

//python

#ifdef WITH_PYTHON
#include <PythonQt.h>
#include <PythonQt_QtAll.h>

#include "python/wrappers/py_wrappers.h"

#include "python/PythonQtScriptingConsole.h"
#endif

using namespace qtpd;

void pd_window_printhook(const char* s)
{
    //qDebug("print hook %s",s);
    //if (pdw)
    PdWindow::inst()->cm_log(std::string(s));
}

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);
    a.setWindowIcon(QIcon("./pd_ceammc.png"));

    QTPD_PREF_INIT;

#ifdef WITH_PYTHON
    //python
    PythonQt::init(PythonQt::RedirectStdOut); //PythonQt::IgnoreSiteModule |
    PythonQt_QtAll::init();

    //temporary
    new BaseMenu();
    //init python
    pyWrapper::inst();
#endif

    ObjectLoader::inst().loadObjects();

    cmp_pdinit();
    cmp_setprinthook(&pd_window_printhook);

    PdWindow::inst()->move(0, 100);
    PdWindow::inst()->show();

    cmp_post("qtpd started");
    cmp_post("---");



    //temporary folders properties

    QString docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last();

    // load from file later
    Preferences::inst().create("Externals", "Folders", "0.1", docFolder + "/Qtpd/Externals");
    Preferences::inst().create("Scripts", "Folders", "0.1", docFolder + "/Qtpd/Scripts");
    Preferences::inst().create("Help", "Folders", "0.1", docFolder + "/Qtpd/Help");
    Preferences::inst().create("Patches", "Folders", "0.1", docFolder + "/Qtpd/Patches");
    Preferences::inst().create("Classes", "Folders", "0.1", docFolder + "/Qtpd/Classes");

    //test
    //fix
    Preferences::inst().create("Paths", "Folders", "0.1", docFolder);

    std::string extPath = Preferences::inst().get("Externals")->asStdString();
    std::string extPath1 = extPath + "/ceammc";
    std::string extPath2 = extPath + "/fiddle~";
    std::string extPath3 = Preferences::inst().get("Help")->asStdString();
    //bug - no '/' in the end

    //std::string extPath3 = extPath + "/pof";

    Preferences::inst().addPath(extPath.c_str());
    Preferences::inst().addPath(extPath1.c_str());
    Preferences::inst().addPath(extPath2.c_str());
    Preferences::inst().addPath(extPath3.c_str());




    return a.exec();
}
