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

namespace qtpd {

OPClass::OPClass(string className)
{

    //TODO
    // create canvas here
    _patchWindow = PatchWindow::newWindow();

    QString windowTitle = QString("pdclass: ") + QString(className.c_str());
    _patchWindow->setWindowTitle(windowTitle);
    _patchWindow->canvas->setKeepPdObject(true);
    _patchWindow->hide();

    _canvas = (t_canvas*)_patchWindow->canvas->pdObject();
    _symbol = gensym(_className.c_str());

    _className = className;
    // register
    OOPD::inst()->registerClass(this, _className, _canvas, _symbol);
}

void OPClass::showWindow()
{
    if (_patchWindow)
        _patchWindow->show();
}

// ===========================

void OPClass::readFile()
{
    std::string classPath = Preferences::inst().get("Classes")->asStdString();

    QString fileName = QString(classPath.c_str()) + "/" + _className.c_str();
    fileName = fileName + ".class.pd";

    // TODO
    //PatchWindow *oldWindow = FileParser::parserWindow();

    qDebug() << "pw cnv " << (long)_patchWindow << (long)_patchWindow->canvas;

    PatchWindow* _prevWindow = FileParser::parserPrevWindow();
    PatchWindow* _pWindow = FileParser::parserWindow();
    PatchWindow* _pFirstWindow = FileParser::parserFirstWindow();
    //

    FileParser::open(fileName);

    if (FileParser::parserFirstWindow() != _pFirstWindow) {
        //OOPD::inst()->unregisterClass(this, _className, _canvas, _symbol);

        // erase and copy
        // need to copy canvas - otherwise it is registered after all objects are loaded
        // probably fix that later

        FileParser::parserFirstWindow()->hide();

        _patchWindow->canvas->selectAll();
        _patchWindow->canvas->deleteSelectedObjects();

        QStringList canvasStrings = FileParser::parserFirstWindow()->canvas->canvasAsPdStrings();
        // TODO fix
        PatchWindow* tmp = FileParser::parserWindow();
        FileParser::setParserWindow(_patchWindow);
        _patchWindow->canvas->canvasFromPdStrings(canvasStrings);
        FileParser::setParserWindow(tmp);

        delete FileParser::parserFirstWindow();
    }

    qDebug() << "pw cnv " << (long)_patchWindow << (long)_patchWindow->canvas;

    FileParser::setParserWindows(_pWindow, _prevWindow, _pFirstWindow);
}

void OPClass::writeFile()
{
    std::string classPath = Preferences::inst().get("Classes")->asStdString();

    QString fileName = QString(classPath.c_str()) + "/" + _className.c_str();
    fileName = fileName + ".class.pd";

    FileSaver::save(fileName, _patchWindow->canvas);
}
}
