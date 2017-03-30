// (c) 2017 Alex Nadzharov
// License: GPL3

#include <QApplication>

#include "PdLink.h"

#include "PatchWindow.h"
#include "PdWindow.h"

#include "BaseMenu.h"

#include "ObjectLoader.h"

#include "cm_preferences.h"

//python
#include <PythonQt.h>
#include <PythonQt_QtAll.h>

#include "python/wrappers/py_wrappers.h"

#include "python/PythonQtScriptingConsole.h"

using namespace qtpd;

void pd_window_printhook(const char* s)
{
    //qDebug("print hook %s",s);
    if (pdw)
        pdw->cm_log(std::string(s));
}

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);
    a.setWindowIcon(QIcon("./pd_ceammc.png"));

    QTPD_PREF_INIT;

    //python
    PythonQt::init(PythonQt::RedirectStdOut); //PythonQt::IgnoreSiteModule |
    PythonQt_QtAll::init();

    ObjectLoader::inst().loadObjects();

    cmp_pdinit();
    cmp_setprinthook(&pd_window_printhook);

    pdw = new PdWindow();

    pdw->move(0, 100);
    pdw->show();

    cmp_post("qtpd started");
    cmp_post("---");

    //temporary
    BaseMenu* m = new BaseMenu(0);

    //temporary folders properties

    QString docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last();

    // load from file later
    Preferences::inst().create("Externals", "Folders", "0.1", docFolder + "/Qtpd/Externals");
    Preferences::inst().create("Scripts", "Folders", "0.1", docFolder + "/Qtpd/Scripts");

    //test
    //fix
    Preferences::inst().create("Paths", "Folders", "0.1", docFolder);

    std::string extPath = Preferences::inst().get("Externals")->asStdString();
    std::string extPath1 = extPath + "/ceammc";
    std::string extPath2 = extPath + "/fiddle~";
    //bug - no '/' in the end

    //std::string extPath3 = extPath + "/pof";

    Preferences::inst().addPath(extPath.c_str());
    Preferences::inst().addPath(extPath1.c_str());
    Preferences::inst().addPath(extPath2.c_str());

    //Preferences::inst().addPath(extPath3.c_str());

    //init python
    pyWrapper::inst();

    return a.exec();
}
