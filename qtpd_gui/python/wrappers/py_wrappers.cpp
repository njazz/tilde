// (c) 2017 Alex Nadzharov
// License: GPL3

#include "py_wrappers.h"

// generic

//#include "py_pdlib.h"
#include "py_qtpd.h"

using namespace qtpd;

pyWrapper::pyWrapper()
{
    qDebug("pyWrapper constructor");
    PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();

    //todo fix

    //mainContext.addObject("Qtpd", new pyQtpd(_appController));

    //PythonQt::self()->addDecorators(new pyPatchWindowDecorator());
    PythonQt::self()->addDecorators(new pyWindowControllerDecorator());
    //PythonQt::self()->addDecorators(new py());
    PythonQt::self()->addDecorators(new pyUIObjectDecorator());
    PythonQt::self()->addDecorators(new pyPropertyListDecorator());
    PythonQt::self()->addDecorators(new pyObjectVecDecorator());

    PythonQt::self()->registerCPPClass("objectVec");
    PythonQt::self()->registerCPPClass("UIObject");
}

//PythonQtObjectPtr pyWrapper::withCanvas(QObject* canvas)
//{
//    PythonQtObjectPtr ctx;
//    ctx = PythonQt::self()->createUniqueModule();
//    ctx.addObject("Qtpd", new pyQtpd(_appController));

//    pyLocal* loc = new pyLocal;
//    loc->setCanvas((CanvasView*)canvas); // canvas, canvas, canvas, canvas
//    loc->setPdObject(0);
//    ctx.addObject("local", loc);

//    return ctx;
//}

// ----------------------------------------------------

PythonQtObjectPtr pyWrapper::newContext()
{
    PythonQtObjectPtr ctx;
    ctx = PythonQt::self()->createUniqueModule();
    ctx.addObject("Qtpd", new pyQtpd(_appController));

    return ctx;
}

PythonQtObjectPtr pyWrapper::withPatchController(PatchWindowController* controller)
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

PythonQtObjectPtr pyWrapper::withPatchControllerAndServerObject(PatchWindowController* controller, ServerObject* object)
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

PythonQtObjectPtr pyWrapper::withPatchControllerServerObjectAndList(PatchWindowController* controller, ServerObject* object, QStringList* list)
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

// ----------------------------------------------------
//PythonQtObjectPtr pyWrapper::withCanvasAndPdObject(QObject* canvas, t_object* obj)
//{
//    PythonQtObjectPtr ctx;
//    ctx = PythonQt::self()->createUniqueModule();
//    ctx.addObject("Qtpd", new pyQtpd(_appController));

//    pyLocal* loc = new pyLocal;
//    loc->setCanvas((CanvasView*)canvas); // canvas, canvas, canvas, canvas
//    loc->setPdObject(obj);
//    ctx.addObject("local", loc);

//    return ctx;
//}

//// weird method name competition winner

//PythonQtObjectPtr pyWrapper::withCanvasPdObjectAndInput(QObject* canvas, t_object* obj, QStringList* list)
//{
//    PythonQtObjectPtr ctx;
//    ctx = PythonQt::self()->createUniqueModule();
//    ctx.addObject("Qtpd", new pyQtpd(_appController));

//    pyLocal* loc = new pyLocal;
//    loc->setCanvas((CanvasView*)canvas); // canvas, canvas, canvas, canvas
//    loc->setPdObject(obj);
//    loc->setInput(list);
//    ctx.addObject("local", loc);

//    return ctx;
//}
