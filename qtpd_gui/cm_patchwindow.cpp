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
    scr->setWidgetResizable(true);

    this->setCentralWidget(this->canvas);

    cm_box *box1 = this->canvas->createBox("osc~ 440", QPoint(30,30), 1,1);
    cm_box *box2 = this->canvas->createBox("dac~", QPoint(30,100), 2,0);
    box2->setFixedWidth(45);

//    box1->move(30,30);
//    box2->move(30,100);

    cmo_msg *msg1 = this->canvas->createMsg("1 2 3", QPoint(100,30));

    this->canvas->patchcord(box1,0, box2,1);
    this->canvas->patchcord(box1,0, box2,0);

    this->pd_canvas = cmp_newpatch();
    if (!this->pd_canvas)
    {qDebug("Failed to create canvas!");}

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



    this->objectMaker = new cm_objectmaker();
    this->objectMaker->setParent(this->canvas);
    connect(this->objectMaker,&cm_objectmaker::returnPressed, this, &cm_patchwindow::objectMakerDone);
    this->objectMaker->close();





}


void cm_patchwindow::objectMakerDone()
{

    const char * obj_name = this->objectMaker->text().toStdString().c_str();
    t_object* new_obj = 0 ;

    int in_c=0, out_c=0;

    //temp
    if (!this->pd_canvas)
    {
        qDebug("bad pd canvas instance");
    }
    else
    {
        new_obj = cmp_create_object(this->pd_canvas,(char*)obj_name,(int)this->objectMaker->pos().x(), (int)this->objectMaker->pos().y());
    }

    if (new_obj)
    {

         qDebug ("created object %lu, new_obj");

        in_c = cmp_get_inlet_count(new_obj);
        out_c = cmp_get_outlet_count(new_obj);

        qDebug ("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, new_obj);

        cm_box* newBox = this->canvas->createBox(this->objectMaker->text().toStdString(),this->objectMaker->pos(),in_c,out_c);
        newBox->pdObject = new_obj;
        newBox->show();
    }
    else
    {
        qDebug("Error: no such object %s", obj_name);
    }

    this->canvas->dragObject = 0;
    this->objectMaker->close();

}
