// License: GPL3
//
//  OPClass.cpp
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#include "OPClass.h"
#include "OOPD.h"

//temp
#include "FileParser.h"
#include "FileSaver.h"

#include "CanvasView.h"

#include "PatchWindowController.h"
#include "PatchWindow.h"

#include "Preferences.h"

namespace tilde {

OPClass::OPClass(string className)
{

    //TODO
    // create canvas here
    // TODO instance
    _patchWindow = new PatchWindowController(0);

    QString windowTitle = QString("pdclass: ") + QString(className.c_str());
    _patchWindow->mainWindow()->setWindowTitle(windowTitle);
    _patchWindow->mainWindow()->canvasView()->setKeepPdObject(true);
    _patchWindow->mainWindow()->hide();

    // TODO
    //_canvas = (t_canvas*)_patchWindow->canvasView()->pdObject();
    _symbol = gensym(_className.c_str());

    _className = className;
    // register
    OOPD::inst()->registerClass(this, _className, _canvas, _symbol);
}

void OPClass::showWindow()
{
    if (_patchWindow)
        _patchWindow->mainWindow()->show();
}

// ===========================

void OPClass::readFile()
{
    std::string classPath = Preferences::inst().get("Classes")->asStdString();

    QString fileName = QString(classPath.c_str()) + "/" + _className.c_str();
    fileName = fileName + ".class.pd";

    // TODO
    //PatchWindow *oldWindow = FileParser::parserWindow();

    qDebug() << "pw cnv " << (long)_patchWindow << (long)_patchWindow->mainWindow()->canvasView();

    PatchWindowController* _prevWindow = 0;//FileParser::parserPrevWindowController();
    PatchWindowController* _pWindow = FileParser::parserWindowController();
    PatchWindowController* _pFirstWindow = FileParser::parserFirstWindowController();
    //

    FileParser::open(fileName);

    if (FileParser::parserFirstWindowController() != _pFirstWindow) {
        //OOPD::inst()->unregisterClass(this, _className, _canvas, _symbol);

        // erase and copy
        // need to copy canvas - otherwise it is registered after all objects are loaded
        // probably fix that later

        FileParser::parserFirstWindowController()->mainWindow()->hide();

        _patchWindow->menuSelectAll();
        _patchWindow->deleteSelectedObjects();

        QStringList canvasStrings = FileParser::parserFirstWindowController()->canvasData()->asPdFileStrings();
        // TODO fix
        PatchWindowController* tmp = FileParser::parserWindowController();
        FileParser::setParserWindowController(_patchWindow);
        _patchWindow->mainWindow()->canvasView()->canvasFromPdStrings(canvasStrings);
        FileParser::setParserWindowController(tmp);

        delete FileParser::parserFirstWindowController();
    }

    qDebug() << "pw cnv " << (long)_patchWindow << (long)_patchWindow->mainWindow()->canvasView();

    FileParser::setParserWindowControllers(_pWindow, _prevWindow, _pFirstWindow);
}

void OPClass::writeFile()
{
    std::string classPath = Preferences::inst().get("Classes")->asStdString();

    QString fileName = QString(classPath.c_str()) + "/" + _className.c_str();
    fileName = fileName + ".class.pd";

    FileSaver::save(fileName, _patchWindow->canvasData());
}
}
