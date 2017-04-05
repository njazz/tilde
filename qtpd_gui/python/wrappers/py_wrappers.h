// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef PY_WRAPERS_H
#define PY_WRAPERS_H

#include "UIBox.h"
#include "UIObject.h"

#include <PythonQt.h>
#include <PythonQt_QtAll.h>

using namespace qtpd;
////
/// \brief python wrapper singleton class
///
///

class pyWrapper
{
private:

   pyWrapper();
public:
    static pyWrapper& inst()
    {
        static pyWrapper instance;
        return instance;
    }

    ////
    /// \brief this one is for UIScript - adds UI Canvas to Python context
    /// \param canvas
    /// \return
    ///

    // FIX

    PythonQtObjectPtr withCanvas(QObject* canvas);
    PythonQtObjectPtr withCanvasAndPdObject(QObject* canvas, t_object* obj);
    PythonQtObjectPtr withCanvasPdObjectAndInput(QObject* canvas, t_object* obj, QStringList* list);
};

#endif // PY_WRAPERS_H
