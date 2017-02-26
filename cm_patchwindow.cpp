#include "cm_patchwindow.h"

#include "cm_canvas.h"

cm_patchwindow::cm_patchwindow()
{
    ((QMainWindow*)this)->setWindowTitle("Untitled-1");

    this->createActions();
    this->createMenus();

    QScrollArea *scr = new QScrollArea(this);

//    QHBoxLayout *horizontalLayout = new QHBoxLayout(this);

//    horizontalLayout->setContentsMargins(0, 0, 0, 0);
//    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

//    horizontalLayout->addWidget(scr);

    scr->setFrameShape(QFrame::NoFrame);

    this->canvas = new cm_canvas(scr);
    scr->setWidgetResizable(true);

    this->setCentralWidget(this->canvas);

    cm_box *box = new cm_box(this->canvas);
    box->pdObjName = "osc~ 440";
    cm_box *box2 = new cm_box(this->canvas);
    box2->move(30,100);
    box2->pdObjName = "dac~";



}
