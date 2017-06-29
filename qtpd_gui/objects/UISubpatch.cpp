// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UISubpatch.h"

#include "PatchWindow.h"

#include "PatchWindowController.h"

namespace qtpd {
UISubpatch::UISubpatch()

{
    qDebug("subpatch - constructor");

    setHeight(20);
    deselect();
    setBgColor(QColor(240, 240, 240));
    setErrorBox(false);

    _objectDataModel.setObjectSize(os_FixedHeight, 40, 20);

    setAcceptHoverEvents(true);

    resizeEvent();
}

std::string UISubpatch::asPdFileString()
{
    std::string ret;

//    if (subpatchWindow()) {
//        QStringList patchList = ((PatchWindow*)subpatchWindow())->controller()->canvasData()->asPdFileStrings();

//        ret += patchList.join("\r\n").toStdString();
//    } else {
//        qDebug() << "missing subcanvas data";
//    }

    ret += "#X restore ";
    ret += std::to_string(pos().x()) + " " + std::to_string(pos().y()) + " ";

    ret += _objectDataModel.objectData().toStdString() + properties()->asPdFileString();
    //ret += objectData();

    return ret;
}

void UISubpatch::setSubpatchWindow(QMainWindow* cwindow)
{
    //UIObject::setSubpatchWindow(cwindow);

    if (0) {
        PatchWindow* p = (PatchWindow*)cwindow;

        CanvasView* subCanvas;
        //if (p)
        subCanvas = p->canvasView();

        QWidget* test = new QWidget();
        //    //_subcanvasView()->show();
        //_subcanvasView()->setParent(test);

        QGraphicsScene* sc;// = new QGraphicsScene();
        sc = subCanvas->scene();

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
