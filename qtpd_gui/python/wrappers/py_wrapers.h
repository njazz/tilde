#ifndef PY_WRAPERS_H
#define PY_WRAPERS_H

// generic

#include <PythonQt.h>
#include <PythonQt_QtAll.h>

#include "py_testclass.h"
#include "py_pdlib.h"

void pyWrappersInit()
{
    PythonQtObjectPtr  mainContext = PythonQt::self()->getMainModule();

    static pyTestClass _pyTestClass;
    mainContext.addObject("testClass", &_pyTestClass);

    static pyPdLib _pyPdLib;
    mainContext.addObject("pdLib", &_pyPdLib);


}


#endif // PY_WRAPERS_H
