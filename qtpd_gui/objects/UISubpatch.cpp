// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UISubpatch.h"

#include "PatchWindow.h"

namespace qtpd {
UISubpatch::UISubpatch()

{
    qDebug("constructor");

    setHeight(20);

    deselect();

    setBgColor(QColor(240, 240, 240));

    setErrorBox(false);

    //setSubpatchWindow(0);

    setMinimumBoxWidth(40);
    setMinimumBoxHeight(20);

    setObjectSizeMode(os_FixedHeight);
    setAcceptHoverEvents(true);

    resizeEvent();
}

std::string UISubpatch::asPdFileString()
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

    ret += _objectDataModel.objectData().toStdString() + properties()->asPdFileString();
    //ret += objectData();

    return ret;
}

void UISubpatch::setSubpatchWindow(QMainWindow* cwindow)
{
    UIObject::setSubpatchWindow(cwindow);

    if (0) {
        PatchWindow* p = (PatchWindow*)cwindow;

        Canvas* _subCanvas;
        //if (p)
        _subCanvas = p->canvas;

        QWidget* test = new QWidget();
        //    //_subCanvas->show();
        //_subCanvas->setParent(test);

        QGraphicsScene* sc = new QGraphicsScene();
        sc = _subCanvas->scene();

        QGraphicsView* v = new QGraphicsView;
        v->setScene(sc);
        // v->setParent(test);

        QGraphicsProxyWidget* proxy = new QGraphicsProxyWidget(this);
        proxy->setWidget(v);

        //            if (((Canvas*)canvas())->scene())
        //                ((Canvas*)canvas())->scene()->addWidget(_subCanvas);

        scene()->addItem(proxy);

        proxy->setPos(0, 20);
        proxy->show();

        setWidth(400);
        setHeight(300);
    }
}
}
