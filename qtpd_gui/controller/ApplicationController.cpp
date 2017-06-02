// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ApplicationController.h"
#include "PatchWindowController.h"

void ApplicationController::newPatchWindowController()
{
    //return
    new PatchWindowController(this->mainInstance());
};

void ApplicationController::openFileDialog()
{
    QString fileName = QFileDialog::getOpenFileName(0, QString("Open patch"), QString("~/"), QString("*.pd"), 0, 0);
    if (fileName != "")
    {
        PatchWindowController* newP = new PatchWindowController(this->mainInstance());
        newP->openFile(fileName);
    }

}

void ApplicationController::pdWindow()
{
    //PdWindow::inst()->setAppController(_appController);

    if (PdWindow::inst()->isVisible())
        PdWindow::inst()->hide();
    else
        PdWindow::inst()->show();
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



