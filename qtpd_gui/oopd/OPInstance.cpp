// License: GPL3
//
//  OPInstance.cpp
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#include "OPInstance.h"
#include "OOPD.h"
#include "OPClass.h"

#include "FileParser.h"
#include "PatchWindow.h"
#include "PatchWindowController.h"

#include "CanvasView.h"

namespace qtpd {

OPInstance::OPInstance(OPClass* opClass)
{

    //printf("new instance\n");

    _className = opClass->_className;
    _symbol = OPInstance::toSymbol(this); //gensym(to_string((long)this).c_str());

    // new canvas. only for canvas-based classes
    if (opClass->_canvas) {

        // TODO
        // copy canvas here
        QStringList canvasStrings = opClass->_patchWindow->canvasData()->asPdFileStrings();

        // TODO
        _patchWindow = new PatchWindowController(0);
        FileParser::setParserWindowController(_patchWindow);

        // TODO
        //_canvas = (t_canvas*)_patchWindow->canvasView()->pdObject();

        // register instance before copying objects
        OOPD::inst()->registerInstance(this, _className, _canvas, _symbol);

        _patchWindow->firstWindow()->canvasView()->canvasFromPdStrings(canvasStrings);
        QString windowTitle = QString("(read only) instance: ") + QString(_className.c_str());
        _patchWindow->firstWindow()->setWindowTitle(windowTitle);
        _patchWindow->firstWindow()->canvasView()->setKeepPdObject(true);
        _patchWindow->firstWindow()->hide();

        _patchWindow->firstWindow()->canvasView()->setReadOnly(true);

        _refCount = 1;
    }

    //generate properties
    setPropertyNames(opClass->getPropertyNames());

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

void OPInstance::showWindow()
{
    if (_patchWindow)
        _patchWindow->firstWindow()->show();
}

OPInstance* OPInstance::fromObjectSymbol(t_symbol* objSymbol)
{
    // todo
    QString qstr = objSymbol->s_name; //str.c_str();
    OPInstance* inst_ = (OPInstance*)(qstr.toLong());

    return (OOPD::inst()->instanceExists(inst_)) ? inst_ : 0;
}

OPInstance::~OPInstance()
{
    // delete canvas
    // TODO yet disabled
    // delete _patchWindow;

    // unregister
    OOPD::inst()->unregisterInstance(this, _className, _canvas, _symbol);

    printf("~OPInstance\n");
    printf("canvas: %x\n", _canvas);
}
}
