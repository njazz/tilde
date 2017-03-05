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

}

cm_patchwindow::cm_patchwindow(QStringList )    //
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

    this->editModeAct->setChecked(true);

}

//cm_patchwindow::cm_patchwindow(QString fname)
//{
//    QString file = fname.section("/",-1,-1);
//    QString dir = fname.section("/",0,-2);

//    qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

//    //

//    ((QMainWindow*)this)->setWindowTitle(file);
//    ((QMainWindow*)this)->setWindowFilePath(fname);

//    this->createActions();
//    this->createMenus();

//    QScrollArea *scr = new QScrollArea(this);
//    scr->setFrameShape(QFrame::NoFrame);

//    this->canvas = new cm_canvas((cm_widget*)scr);
//    this->canvas->pd_canvas = cmp_openpatch((char*)file.toStdString().c_str(), (char*)dir.toStdString().c_str());

//    //load objects here

//    t_object* obj = (t_object*)this->canvas->pd_canvas;

//    t_binbuf *bb;
//    bb->

//    for (_gobj* y = &obj->te_g; y; y = obj->te_g.g_next)
//    {
//        qDebug("obj ptr %lu", (long) y);
//    }

//    //

//    scr->setWidgetResizable(true);

//    this->setCentralWidget(this->canvas);

//    if (!this->canvas->pd_canvas)
//    {qDebug("Failed to create canvas!");}

//    this->objectMaker = new cm_objectmaker();
//    this->objectMaker->setParent(this->canvas);
//    connect(this->objectMaker,&cm_objectmaker::returnPressed, this, &cm_patchwindow::objectMakerDone);
//    this->objectMaker->close();

//}



void cm_patchwindow::save()
{

    QString fname = this->canvas->fileName;

    QString file = fname.section("/",-1,-1);
    QString dir = fname.section("/",0,-2);

    qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

    cmp_savepatch(this->canvas->pd_canvas, (char*)file.toStdString().c_str(), (char*)dir.toStdString().c_str());

}

void cm_patchwindow::saveAs()
{
    QString fname = QFileDialog::getSaveFileName(this,QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    //QString path = fname.fileName();
    QString file = fname.section("/",-1,-1);
    QString dir = fname.section("/",0,-2);

    qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

    cmp_savepatch(this->canvas->pd_canvas, (char*)file.toStdString().c_str(), (char*)dir.toStdString().c_str());

    //
    this->canvas->fileName = fname;

    this->setWindowTitle(file);
    this->setWindowFilePath(fname);

    saveAct->setEnabled(true);

}


void cm_patchwindow::objectMakerDone()
{
    std::string obj_name = this->objectMaker->text().toStdString();

    // cmo_box *box1 =

    this->canvas->createBox(obj_name, this->objectMaker->pos());

    this->canvas->dragObject = 0;
    this->objectMaker->close();

}




