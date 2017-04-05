// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIArray.h"

namespace qtpd {
UIArray::UIArray()//UIObject* parent)
    //: UIObject(parent)
{
    //setPdObjectName("ui.bang");

    setHeight(20);
    //setMinimumWidth(22);
    //setMouseTracking(true);

    deselect(); // = false;

//    QPalette Pal(palette());
//    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
//    setAutoFillBackground(true);
//    setPalette(Pal);

    setErrorBox(false);

    setSubpatchWindow(0);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    initProperties();
}


}
