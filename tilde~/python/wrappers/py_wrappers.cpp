// (c) 2017 Alex Nadzharov
// License: GPL3

#include "py_wrappers.h"

#include "py_qtpd.h"

using namespace qtpd;

pyWrapper::pyWrapper()
{
    qDebug("pyWrapper constructor");
    PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();

    //todo fix

    PythonQt::self()->addDecorators(new pyWindowControllerDecorator());
    //PythonQt::self()->addDecorators(new py());
    PythonQt::self()->addDecorators(new pyUIObjectDecorator());
    PythonQt::self()->addDecorators(new pyPropertyListDecorator());
    PythonQt::self()->addDecorators(new pyObjectVecDecorator());

    PythonQt::self()->registerCPPClass("objectVec");
    PythonQt::self()->registerCPPClass("UIObject");
}

// ----------------------------------------------------

PythonQtObjectPtr pyWrapper::newContext()
{
    PythonQtObjectPtr ctx;
    ctx = PythonQt::self()->createUniqueModule();
    ctx.addObject("Qtpd", new pyQtpd(_appController));

    return ctx;
}

PythonQtObjectPtr pyWrapper::newContextWithPatchController(PatchWindowController* controller)
{
    PythonQtObjectPtr ctx;
    ctx = PythonQt::self()->createUniqueModule();
    ctx.addObject("Qtpd", new pyQtpd(_appController));

    pyLocal* loc = new pyLocal;

    loc->setWindowController(controller);
    //loc->setPdObject(0);
    ctx.addObject("local", loc);

    return ctx;
}

PythonQtObjectPtr pyWrapper::newContextWithPatchControllerAndServerObject(PatchWindowController* controller, ServerObject* object)
{
    PythonQtObjectPtr ctx;
    ctx = PythonQt::self()->createUniqueModule();
    ctx.addObject("Qtpd", new pyQtpd(_appController));

    pyLocal* loc = new pyLocal;

    loc->setWindowController(controller);
    loc->setServerObject(object);
    ctx.addObject("local", loc);

    return ctx;
}

PythonQtObjectPtr pyWrapper::newContextWithPatchControllerServerObjectAndList(PatchWindowController* controller, ServerObject* object, QStringList* list) ///> "weird method name competition" winner
{
    PythonQtObjectPtr ctx;
    ctx = PythonQt::self()->createUniqueModule();
    ctx.addObject("Qtpd", new pyQtpd(_appController));

    pyLocal* loc = new pyLocal;

    loc->setWindowController(controller);
    loc->setServerObject(object);
    loc->setInput(list);
    ctx.addObject("local", loc);

    return ctx;
}
