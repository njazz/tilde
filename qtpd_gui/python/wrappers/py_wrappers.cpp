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

PythonQtObjectPtr pyWrapper::withCanvas(UIObject* canvas)
{
    PythonQtObjectPtr ctx;
    ctx = PythonQt::self()->createUniqueModule();
    ctx.addObject("Qtpd", new pyQtpd());

    pyLocal * loc = new pyLocal;
    loc->setCanvas((Canvas*)canvas); // canvas, canvas, canvas, canvas
    ctx.addObject("local", loc);

    return ctx;
}


