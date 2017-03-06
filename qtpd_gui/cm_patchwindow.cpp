#include "cm_patchwindow.h"

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

    this->editModeAct->setChecked(true);

}

////
/// \brief this constructor is used by pd file parser
///
cm_patchwindow::cm_patchwindow(QStringList)    //
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




////
/// \brief re-save patch, uses its current name
///
void cm_patchwindow::save()
{

    QString fname = this->canvas->fileName;

    QString file = fname.section("/",-1,-1);
    QString dir = fname.section("/",0,-2);

    qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

    cmp_savepatch(this->canvas->pd_canvas, (char*)file.toStdString().c_str(), (char*)dir.toStdString().c_str());

}

////
/// \brief first save of the patch
///
void cm_patchwindow::saveAs()
{
    QString fname = QFileDialog::getSaveFileName(this,QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

    if (fname != "")
    {
        //QString path = fname.fileName();
        QString file = fname.section("/",-1,-1);
        QString dir = fname.section("/",0,-2);

        qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

        cmp_savepatch(this->canvas->pd_canvas, (char*)file.toStdString().c_str(), (char*)dir.toStdString().c_str());

        //
        this->canvas->fileName = fname;

        this->setWindowTitle(file);
        this->setWindowFilePath(fname);

        //saveAct->setEnabled(true);

        connect(saveAct, &QAction::triggered, this, &cm_patchwindow::save);
    }

}

////
/// \brief set file name when opening patch file
/// \param fname
///
void cm_patchwindow::setFileName(QString fname)
{

    this->canvas->fileName = fname;

    QString file = fname.section("/",-1,-1);

    this->setWindowTitle(file);
    this->setWindowFilePath(fname);

}

////
/// \brief creates object
///
void cm_patchwindow::objectMakerDone()
{
    std::string obj_name = this->objectMaker->text().toStdString();

    if (obj_name!="")
    {
        this->canvas->createBox(obj_name, this->objectMaker->pos());

        this->canvas->dragObject = 0;
        this->objectMaker->close();
    }

}




