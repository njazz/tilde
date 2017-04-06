// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UISubpatch.h"

#include "PatchWindow.h"

namespace qtpd {
UISubpatch::UISubpatch()//UIObjectItem* parent)
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
}

std::string UISubpatch::asPdFileString()
{
    //if (drawStyle() == ds_Box)
    {
        std::string ret;

        if (subpatchWindow()) {
            QStringList patchList = ((PatchWindow*)subpatchWindow())->canvas->canvasAsPdStrings();

            ret += patchList.join("\r\n").toStdString();
        } else {
            qDebug() << "missing subcanvas data";
        }

        ret += "#X restore ";
        ret += std::to_string(pos().x()) + " " + std::to_string(pos().y()) + " ";

        ret += "pd "+ objectData() + properties()->asPdFileString();
        //ret += objectData();

        return ret;
    }
}


}
