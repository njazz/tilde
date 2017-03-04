#include "cm_patchwindow.h"

//#include "cm_canvas.h"

cm_patchwindow::cm_patchwindow()
{
    ((QMainWindow*)this)->setWindowTitle("Untitled-1");

    this->createActions();
    this->createMenus();

    QScrollArea *scr = new QScrollArea(this);

    scr->setFrameShape(QFrame::NoFrame);

    this->canvas = new cm_canvas((cm_widget*)scr);
    this->canvas->pd_canvas = cmp_newpatch();

    scr->setWidgetResizable(true);

    this->setCentralWidget(this->canvas);

    if (!this->canvas->pd_canvas)
    {qDebug("Failed to create canvas!");}

    this->objectMaker = new cm_objectmaker();
    this->objectMaker->setParent(this->canvas);
    connect(this->objectMaker,&cm_objectmaker::returnPressed, this, &cm_patchwindow::objectMakerDone);
    this->objectMaker->close();

//    cm_box *box1 = this->canvas->createBox("osc~", QPoint(30,30));
//    cm_box *box2 = this->canvas->createBox("dac~ 1 2", QPoint(30,100));
//    cmo_msg *msg1 = this->canvas->createMsg("test123", QPoint(100,30));

//    this->canvas->patchcord(box1,0, box2,1);
//    this->canvas->patchcord(box1,0, box2,0);



    this->editModeAct->setChecked(true);

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









}


void cm_patchwindow::objectMakerDone()
{


std::string obj_name = this->objectMaker->text().toStdString();

   cm_box *box1 = this->canvas->createBox(obj_name, this->objectMaker->pos());


    this->canvas->dragObject = 0;
    this->objectMaker->close();

}
