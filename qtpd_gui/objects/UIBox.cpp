// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBox.h"

namespace qtpd {
UIBox::UIBox()//UIObjectItem* parent)
    //: UIObjectItem(parent)
{
    qDebug("constructor");

    setHeight(20);

    deselect();

    setBgColor(QColor(240, 240, 240));

    setErrorBox(false);

    setSubpatchWindow(0);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    setObjectSizeMode(os_FixedHeight);
    setAcceptHoverEvents(true);

    sizeBox()->move(33,13);

}


}
