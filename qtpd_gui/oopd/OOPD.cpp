//
//  OOPD.cpp
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#include "OOPD.h"

#include "PatchWindow.h"

namespace qtpd {

OPClass::OPClass(string className)
{

    //TODO
    // create canvas here
    _patchWindow = PatchWindow::newWindow();

    QString windowTitle = QString("pdclass: ") + QString(className.c_str());
    _patchWindow->setWindowTitle(windowTitle);
    _patchWindow->show();

    _canvas = (t_canvas*)_patchWindow->canvas->pdObject();
    _symbol = gensym(_className.c_str());

    _className = className;
    // register
    OOPD::inst().registerClass(className, _canvas, _symbol);
}

void OPClass::showWindow()
{
    if (_patchWindow)
        _patchWindow->show();
}
}
