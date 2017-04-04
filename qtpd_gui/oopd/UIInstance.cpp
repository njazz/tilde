// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIInstance.h"

namespace qtpd {

UIInstance::UIInstance(UIObject* parent)
    : UIObject(parent)
{
    //setPdObjectName("ui.bang");

    setFixedHeight(20);
    //setMinimumWidth(22);
    setMouseTracking(true);

    deselect(); // = false;

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    setAutoFillBackground(true);
    setPalette(Pal);

    setErrorBox(false);

    setSubpatchWindow(0);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    setObjectSizeMode(os_FixedHeight);

    _opInstance = 0;

    _hasType = false;
}

void UIInstance::setInletsPos()
{
    if (_hasType) {
        float h = height() - 20;

        float s = (inletCount() < 2) ? inletCount() : (inletCount() - 1);

        for (int i = 0; i < (int)inletCount(); i++) {
            float x = 0;
            float y = (float(i) / s) * h + 10;

            //inletAt(i)

            inletAt(i)->move(x, y);
            if (inletAt(i)->scene())
                inletAt(i)->viewport()->update();
        }
    } else
        UIObject::setInletsPos();
}

void UIInstance::setOutletsPos()
{
    if (_hasType) {
        float h = height() - 20;

        float s = (outletCount() < 2) ? outletCount() : (outletCount() - 1);

        for (int i = 0; i < (int)outletCount(); i++) {
            float x = width() - 7;
            float y = (float(i) / s) * h + 10;

            outletAt(i)->move(x, y);
            if (outletAt(i)->scene())
                outletAt(i)->viewport()->update();
        }
    } else
        UIObject::setOutletsPos();
}
}
