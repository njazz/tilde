#include "cm_patchwindow.h"

namespace cm
{
PatchWindow::PatchWindow()
{
    this->createActions();
    this->createMenus();

    this->scroll = new QScrollArea(this);
    this->scroll->setFrameShape(QFrame::NoFrame);
    this->scroll->setWidgetResizable(true);

    this->canvas = new Canvas((UIWidget*)this->scroll);

    this->setCentralWidget(this->canvas);

    //TODO weird
    this->objectMaker = new ObjectMaker((QLineEdit*)this->canvas);
    //this->objectMaker->setParent(this->canvas);
    connect(this->objectMaker,&ObjectMaker::returnPressed, this, &PatchWindow::objectMakerDone);
    this->objectMaker->close();

    this->editModeAct->setChecked(true);
}

PatchWindow* PatchWindow::newWindow()
{
    PatchWindow* this_;
    this_ = new PatchWindow;

    ((QMainWindow*)this_)->setWindowTitle("Untitled-1");

    this_->canvas->pdCanvas = cmp_newpatch();

    if (!this_->canvas->pdCanvas)
    {qDebug("Failed to create canvas!");}

    return this_;
}

//////
///// \brief this constructor is used by pd file parser
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

    this_->canvas->pdCanvas = subpatch;

    if (!this_->canvas->pdCanvas)
    {qDebug("Failed to create canvas!");}

    return this_;
}



////
/// \brief re-save patch, uses its current name
///
void PatchWindow::save()
{

    QString fname = this->canvas->fileName;

    QString file = fname.section("/",-1,-1);
    QString dir = fname.section("/",0,-2);

    qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

    //cmp_savepatch(this->canvas->pd_canvas, (char*)file.toStdString().c_str(), (char*)dir.toStdString().c_str());
    FileSaver::save(fname, this->canvas);
}

////
/// \brief first save of the patch
///
void PatchWindow::saveAs()
{
    QString fname = QFileDialog::getSaveFileName(this,QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    if (fname != "")
    {
        //QString path = fname.fileName();
        QString file = fname.section("/",-1,-1);
        QString dir = fname.section("/",0,-2);

        qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

        //        cmp_savepatch(this->canvas->pd_canvas, (char*)file.toStdString().c_str(), (char*)dir.toStdString().c_str());
        FileSaver::save(fname, this->canvas);

        //
        this->canvas->fileName = fname;

        this->setWindowTitle(file);
        this->setWindowFilePath(fname);

        //saveAct->setEnabled(true);

        connect(saveAct, &QAction::triggered, this, &PatchWindow::save);
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
    std::string obj_name = this->objectMaker->text().toStdString();

    if (obj_name!="")
    {
        UIBox* b = this->canvas->createBox(obj_name, this->objectMaker->pos());

        this->canvas->dragObject = 0;
        this->objectMaker->close();


        //subpatch

        QStringList atoms = QString(obj_name.c_str()).split( " " );
        if (atoms.at(0) == "pd")
        {
            qDebug("subpatch");

            PatchWindow *subPatch = PatchWindow::newSubpatch((t_canvas*)b->getPdObject());
            b->cmSubcanvas = (QMainWindow*)subPatch;
            subPatch->show();
        }
    }

}
}



