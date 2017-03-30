// (c) 2017 Alex Nadzharov
// License: GPL3

#include "BaseMenu.h"

#include "BaseWindow.h"
#include "PatchWindow.h"
#include "PdWindow.h"

#include "PdLink.h"

#include "FileParser.h"

namespace qtpd {

PythonQtScriptingConsole* BaseMenu::pythonConsole_;

////
/// \brief new patch window
///
void BaseMenu::newFile()
{
    PatchWindow* newWindow = PatchWindow::newWindow();
    newWindow->show();
}

////
/// \brief new patch window from file
///
void BaseMenu::open()
{
    QString fname = QFileDialog::getOpenFileName(0, QString("Open patch"), QString("~/"), QString("*.pd"), 0, 0);
    if (fname != "")
        FileParser::open(fname);
}

////
/// \brief show/hide Pd console
///
void BaseMenu::pdWindow()
{
    //if (pdw)
        if (PdWindow::inst().isVisible())
        PdWindow::inst().hide();
    else PdWindow::inst().show();

    //    post("pd window");
}

void BaseMenu::pythonConsole()
{
    if (pythonConsole_) {
        pythonConsole_->show();
    }
}
}
