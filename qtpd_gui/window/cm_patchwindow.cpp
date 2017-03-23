#include "cm_patchwindow.h"

namespace qtpd
{
PatchWindow::PatchWindow()
{
    this->createActions();
    this->createMenus();

    this->scroll = new QScrollArea(this);
    this->scroll->setFrameShape(QFrame::NoFrame);
//    this->scroll->setWidgetResizable(true);

    this->canvas = new Canvas((UIObject*)this->scroll);

//    QGraphicsScene scene;
//    QGraphicsProxyWidget *proxy = scene.addWidget(canvas);

//    QGraphicsView view(&scene);

//    proxy->setScale(3);

    scroll->setWidget(canvas);

    this->setCentralWidget(scroll);



    //TODO weird
    //this->objectMaker = new ObjectMaker((QLineEdit*)this->canvas);


    //this->objectMaker->setParent(this->canvas);
    connect(this->canvas->objectMaker(),&ObjectMaker::objectMakerDoneSignal, this, &PatchWindow::objectMakerDone);

    this->canvas->objectMaker()->close();

    this->editModeAct->setChecked(true);

    //connect subpatch creation routine
    connect(this->canvas, &Canvas::createSubpatchWindow, this, &PatchWindow::s_createSubpatchWindow);
}

PatchWindow* PatchWindow::newWindow()
{
    PatchWindow* this_;
    this_ = new PatchWindow;

    ((QMainWindow*)this_)->setWindowTitle("Untitled-1");

    this_->canvas->setPdObject(  cmp_newpatch() );

    if (!this_->canvas->pdObject())
    {qDebug("Failed to create canvas!");}

    return this_;
}

//////
///// \brief this constructor was used by pd file parser - remove later
/////
//cm_patchwindow* cm_patchwindow::loadWindow(QStringList)    //
//{
//    cm_patchwindow* this_;
//    this_ = new cm_patchwindow;

//    ((QMainWindow*)this_)->setWindowTitle("Untitled-1");

//    this_->createActions();
//    this_->createMenus();

//    QScrollArea *scr = new QScrollArea(this_);
//    scr->setFrameShape(QFrame::NoFrame);

//    this_->canvas = new cm_canvas((cm_widget*)scr);
//    this_->canvas->pd_canvas = cmp_newpatch();

//    scr->setWidgetResizable(this_);

//    this_->setCentralWidget(this_->canvas);

//    if (!this_->canvas->pd_canvas)
//    {qDebug("Failed to create canvas!");}

//    this_->objectMaker = new cm_objectmaker();
//    this_->objectMaker->setParent(this_->canvas);
//    connect(this_->objectMaker,&cm_objectmaker::returnPressed, this_, &cm_patchwindow::objectMakerDone);
//    this_->objectMaker->close();

//    this_->editModeAct->setChecked(true);

//    return this_;
//}

////
/// \brief constructor for the subpatches' windows
/// \param subpatch
///
PatchWindow* PatchWindow::newSubpatch(t_canvas* subpatch)
{
    PatchWindow* this_;
    this_ = new PatchWindow;

    ((QMainWindow*)this_)->setWindowTitle("<subpatch>");

    this_->canvas->setPdObject( subpatch );

    if (!this_->canvas->pdObject())
    {qDebug("Failed to create canvas!");}

    return this_;
}



////
/// \brief re-save patch, uses its current name
///
void PatchWindow::save()
{

    QString fname;

    if (this->canvas->fileName != "")
        fname =  this->canvas->fileName;
    else
        fname = QFileDialog::getSaveFileName(this,QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    doSave(fname);
}

////
/// \brief first save of the patch
///
void PatchWindow::saveAs()
{

    QString fname = QFileDialog::getSaveFileName(this,QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    doSave(fname);

}

void PatchWindow::doSave(QString fname)
{
    if (fname != "")
    {
        QString file = fname.section("/",-1,-1);
        QString dir = fname.section("/",0,-2);

        qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

        FileSaver::save(fname, this->canvas);

        //
        this->canvas->fileName = fname;

        this->setWindowTitle(file);
        this->setWindowFilePath(fname);

    }

}

////
/// \brief set file name when opening patch file
/// \param fname
///
void PatchWindow::setFileName(QString fname)
{

    this->canvas->fileName = fname;

    QString file = fname.section("/",-1,-1);

    this->setWindowTitle(file);
    this->setWindowFilePath(fname);

}

////
/// \brief creates object
///
void PatchWindow::objectMakerDone()
{
    std::string obj_name = this->canvas->objectMaker()->text().toStdString();

    if (obj_name!="")
    {

        UIObject* new_obj = this->canvas->createObject("ui.obj", obj_name, this->canvas->objectMaker()->pos());

        if (this->canvas->replaceObject())
        {
            UIObject* obj = canvas->replaceObject();

            patchcordVec cords = canvas->patchcordsForObject(obj);

            patchcordVec::iterator it;
            for (it = cords.begin(); it != cords.end(); ++it )
            {
                Patchcord* pc = ((Patchcord*)*it);
                UIObject * obj1 = pc->obj1();
                UIObject * obj2 = pc->obj2();
                //replace
                if (obj1==obj) obj1 = new_obj;
                if (obj2==obj) obj2 = new_obj;

                canvas->patchcord(obj1, pc->outletIndex(), obj2, pc->inletIndex());

            }

            //canvas->selectObject(obj);
            canvas->deleteBox(obj);
        }

        this->canvas->dragObject = 0;
        this->canvas->setReplaceObject(0);
        this->canvas->objectMaker()->close();


        //subpatch

        // QStringList atoms = QString(obj_name.c_str()).split( " " );
        //        }
    }

}
}



