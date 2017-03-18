// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PY_WRAPERS_H
#define PY_WRAPERS_H

// generic

#include <PythonQt.h>
#include <PythonQt_QtAll.h>

#include "py_pdlib.h"
#include "py_qtpd.h"
#include "py_testclass.h"

void pyWrappersInit()
{
    PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();

    static pyTestClass _pyTestClass;
    mainContext.addObject("testClass", &_pyTestClass);

    //    static pyPdLib _pyPdLib;
    //    mainContext.addObject("pdLib", &_pyPdLib);

    static pyQtpd _pyQtpd;
    mainContext.addObject("Qtpd", &_pyQtpd);

    PythonQt::self()->addDecorators(new pyPatchWindowDecorator());
    PythonQt::self()->addDecorators(new pyCanvasDecorator());
    PythonQt::self()->addDecorators(new pyUIObjectDecorator());
    PythonQt::self()->addDecorators(new pyPropertyListDecorator());
}

#endif // PY_WRAPERS_H
