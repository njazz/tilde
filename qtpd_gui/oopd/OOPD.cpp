//
//  OOPD.cpp
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#include "OOPD.h"

#include "PatchWindow.h"

//temp
#include "FileParser.h"

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
    OOPD::inst().registerClass(this, _className, _canvas, _symbol);
}

void OPClass::showWindow()
{
    if (_patchWindow)
        _patchWindow->show();
}

OPInstance::OPInstance(OPClass* opClass)
{

    printf("new instance\n");

    _className = opClass->_className;
    _symbol = OPInstance::toSymbol(this); //gensym(to_string((long)this).c_str());

    // new canvas. only for canvas-based classes
    if (opClass->_canvas) {

        // TODO
        // copy canvas here
        QStringList canvasStrings = opClass->_patchWindow->canvas->canvasAsPdStrings();

        _patchWindow =  PatchWindow::newWindow();
        FileParser::setParserWindow(_patchWindow);
        _patchWindow->canvas->canvasFromPdStrings(canvasStrings);
        QString windowTitle = QString("instance: ") + QString(_className.c_str());
        _patchWindow->setWindowTitle(windowTitle);
        _patchWindow->canvas->setKeepPdObject(true);
        _patchWindow->hide();

        _canvas = (t_canvas*)_patchWindow->canvas->pdObject();

        // register instance
        OOPD::inst().registerInstance(this, _className, _canvas, _symbol);

        _refCount = 1;
    }

    //generate properties
    _propertyNames = opClass->getPropertyNames();

    //TODO

    //generate methods
    //TODO normal class / singleton
    //        OPClasses* dyn_class = new OPClasses("__dynamicStub", "exp.method");
    //        if (!dyn_class->ref()) {
    //            dyn_class->ref() = new OPClass();
    //            dyn_class->ref()->class_name = "__dynamicStub";
    //        }

    //_methodNames = _opclass->getMethodNames();

    // temporary
    //        map<string, string>::iterator it;
    //        for (it = _methodNames.begin(); it != _methodNames.end(); ++it) {
    //            t_outlet* dyn_out = dyn_class->ref()->getMethodOutletForReferenceName(it->second);

    //            if (dyn_out)
    //                addMethod(gensym(it->first.c_str()), dyn_out);

    //            t_outlet* dyn_pointer_out = dyn_class->ref()->getMethodPointerOutletForReferenceName(it->second);

    //            if (dyn_pointer_out)
    //                addMethodPointerOut(gensym(it->first.c_str()), dyn_pointer_out);
    //        }
}
}

void OPInstance::showWindow()
{
    if (_patchWindow)
        _patchWindow->show();
}
