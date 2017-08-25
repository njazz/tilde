// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIInstance.h"

namespace tilde {

UIInstance::UIInstance()
{
    //setPdObjectName("pdinstance");
    _out1 = 0;

    setHeight(20);
    deselect(); // = false;

    setErrorBox(false);
    //setSubpatchWindow(0);

    objectData()->setObjectSize(os_FixedHeight, 40, 20);
    _opInstance = 0;
    _hasType = false;
}

void UIInstance::setInletsPos()
{
    //XPD-TODO
    /*
    if (_hasType) {
        float h = height() - 20;

        float s = (inletCount() < 2) ? inletCount() : (inletCount() - 1);

        for (int i = 0; i < (int)inletCount(); i++) {
            float x = 0;
            float y = (float(i) / s) * h + 10;

            //inletAt(i)

            inletAt(i)->move(x, y);
            if (inletAt(i)->scene())
                inletAt(i)->update();
        }
    } else
        UIObject::setInletsPos();

    */
}

void UIInstance::setOutletsPos()
{
    //XPD-TODO
    /*
    if (_hasType) {
        float h = height() - 20;

        float s = (outletCount() < 2) ? outletCount() : (outletCount() - 1);

        for (int i = 0; i < (int)outletCount(); i++) {
            float x = width() - 7;
            float y = (float(i) / s) * h + 10;

            outletAt(i)->move(x, y);
            if (outletAt(i)->scene())
                outletAt(i)->update();
        }
    } else
        UIObject::setOutletsPos();
        */
}
}
