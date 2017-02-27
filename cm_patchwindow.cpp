#include "cm_patchwindow.h"

#include "cm_canvas.h"

cm_patchwindow::cm_patchwindow()
{
    ((QMainWindow*)this)->setWindowTitle("Untitled-1");

    this->createActions();
    this->createMenus();

    QScrollArea *scr = new QScrollArea(this);

    scr->setFrameShape(QFrame::NoFrame);

    this->canvas = new cm_canvas((cm_widget*)scr);
    scr->setWidgetResizable(true);

    this->setCentralWidget(this->canvas);

    cm_box *box1 = this->canvas->createBox("osc~ 440", QPoint(30,30), 1,1);
    cm_box *box2 = this->canvas->createBox("dac~", QPoint(30,100), 2,0);
    box2->setFixedWidth(45);

    box1->move(30,30);
    box2->move(30,100);

    //cm_patchcord *pc = new cm_patchcord(this->canvas);
    //pc->setPorts(box1,box2,box1->getOutletAt(0), box2->getInletAt(1));

    //move
//    cm_box *box = new cm_box(this->canvas);
//    box->pdObjName = "osc~ 440";
//    box->addInlet();
//    box->addOutlet();
//    connect(box,&cm_box::selectBox, this->canvas, &cm_canvas::s_SelectBox);

//    cm_box *box2 = new cm_box(this->canvas);
//    box2->move(30,100);
//    box2->pdObjName = "dac~";
//    box2->addInlet();
//    box2->addInlet();
//    box2->setFixedWidth(45);
//    connect(box2,&cm_box::selectBox, this->canvas, &cm_canvas::s_SelectBox);



    this->objectMaker = new cm_objectmaker();
    this->objectMaker->setParent(this->canvas);
    connect(this->objectMaker,&cm_objectmaker::returnPressed, this, &cm_patchwindow::objectMakerDone);
    this->objectMaker->close();





}
