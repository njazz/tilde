#include "py_wrappers.h"

// generic



#include "py_pdlib.h"
#include "py_qtpd.h"

using namespace qtpd;

pyWrapper::pyWrapper()
{
    qDebug("pyWrapper constructor");
    PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();

    //todo fix

    mainContext.addObject("Qtpd", new pyQtpd());

    PythonQt::self()->addDecorators(new pyPatchWindowDecorator());
    PythonQt::self()->addDecorators(new pyCanvasDecorator());
    PythonQt::self()->addDecorators(new pyUIObjectDecorator());
    PythonQt::self()->addDecorators(new pyPropertyListDecorator());
    PythonQt::self()->addDecorators(new pyObjectVecDecorator());

    PythonQt::self()->registerCPPClass("objectVec");
    PythonQt::self()->registerCPPClass("UIObject");

}

PythonQtObjectPtr pyWrapper::withCanvas(QObject *canvas)
{
    PythonQtObjectPtr ctx;
    ctx = PythonQt::self()->createUniqueModule();
    ctx.addObject("Qtpd", new pyQtpd());

    pyLocal * loc = new pyLocal;
    loc->setCanvas((Canvas*)canvas); // canvas, canvas, canvas, canvas
    loc->setPdObject(0);
    ctx.addObject("local", loc);

    return ctx;
}

PythonQtObjectPtr pyWrapper::withCanvasAndPdObject(UIObject* canvas, t_object* obj)
{
    PythonQtObjectPtr ctx;
    ctx = PythonQt::self()->createUniqueModule();
    ctx.addObject("Qtpd", new pyQtpd());

    pyLocal * loc = new pyLocal;
    loc->setCanvas((Canvas*)canvas); // canvas, canvas, canvas, canvas
    loc->setPdObject(obj);
    ctx.addObject("local", loc);


    return ctx;
}

// weird method name competition winner

PythonQtObjectPtr pyWrapper::withCanvasPdObjectAndInput(UIObject* canvas, t_object* obj, QStringList* list)
{
    PythonQtObjectPtr ctx;
    ctx = PythonQt::self()->createUniqueModule();
    ctx.addObject("Qtpd", new pyQtpd());

    pyLocal * loc = new pyLocal;
    loc->setCanvas((Canvas*)canvas); // canvas, canvas, canvas, canvas
    loc->setPdObject(obj);
    loc->setInput(list);
    ctx.addObject("local", loc);


    return ctx;
}

