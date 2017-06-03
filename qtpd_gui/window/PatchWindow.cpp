// (c) 2017 Alex Nadzharov
// License: GPL3

#include "PatchWindow.h"

#include "FileParser.h"

//#include "PatchWindowController.h"

namespace qtpd {
PatchWindow::PatchWindow()
{
    createActions();
    createMenus();

    scroll = new QScrollArea(this);
    //scroll->setFrameShape(QFrame::NoFrame);

    _canvasView = new CanvasView((QGraphicsView*)this);

    //scroll->setWidget(canvas);

    //    QGridLayout* layout1 = new QGridLayout();
    //    layout1->setMargin(20);
    //    layout1->addWidget(canvas);
    //    scroll->setLayout(layout1);

    //    scroll->setWidget(canvas);

    _canvasView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    _canvasView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    //canvas->setMinimumSize(400,300);
    //    setCentralWidget(scroll);

    setCentralWidget(_canvasView);

    //canvas->setParent(centralWidget());
    //scroll->setParent(this);

    //    QGridLayout* layout2 = new QGridLayout();
    //    layout2->addWidget(scroll);
    //    layout2->setMargin(0);
    //setLayout(layout1);

    //TODO weird
    //objectMaker = new ObjectMaker((QLineEdit*)canvas);

    //objectMaker->setParent(canvas);

    connect(_canvasView->objectMaker(), &ObjectMaker::objectMakerDoneSignal, this, &PatchWindow::objectMakerDone);

    _canvasView->objectMaker()->close();

    editModeAct->setChecked(true);

    //connect subpatch creation routine
    connect(_canvasView, &CanvasView::createSubpatchWindow, this, &PatchWindow::s_createSubpatchWindow);

    //
//    connect(cutAct, &QAction::triggered, this, &PatchWindow::cut);
//    connect(copyAct, &QAction::triggered, this, &PatchWindow::copy);
//    connect(duplicateAct, &QAction::triggered, this, &PatchWindow::duplicate);
//    connect(pasteAct, &QAction::triggered, this, &PatchWindow::paste);
}

PatchWindow* PatchWindow::newWindow()
{
    PatchWindow* this_;
    this_ = new PatchWindow();

    // move to canvas

    //todo
    ((QMainWindow*)this_)->setWindowTitle("Untitled-1");

    this_->_canvasView->setPdObject(cmp_newpatch());

    if (!this_->_canvasView->pdObject()) {
        qDebug("Failed to create canvas!");
    }
    //else

    return this_;
}

////
/// \brief constructor for the subpatches' windows
/// \param subpatch
///
PatchWindow* PatchWindow::newSubpatch(t_canvas* subpatch)
{
    PatchWindow* this_;
    this_ = new PatchWindow;

    ((QMainWindow*)this_)->setWindowTitle("<subpatch>");

    this_->_canvasView->setPdObject(subpatch);

    if (!this_->_canvasView->pdObject()) {
        qDebug("Failed to create canvas!");
    }
    //    else
    //        cmp_loadbang(this_->canvas->pdObject());

    return this_;
}

void PatchWindow::setController(PatchWindowController* c)
{
    _controller = c;

    connect(saveAsAct, &QAction::triggered, _controller, &PatchWindowController::menuSaveAs);
    connect(saveAct, &QAction::triggered, _controller, &PatchWindowController::menuSave);

    connect(delObjectAct, &QAction::triggered, _controller, &PatchWindowController::menuDelete);

    connect(cutAct, &QAction::triggered, _controller, &PatchWindowController::menuCut);
    connect(copyAct, &QAction::triggered, _controller, &PatchWindowController::menuCopy);
    connect(pasteAct, &QAction::triggered, _controller, &PatchWindowController::menuPaste);
    connect(duplicateAct, &QAction::triggered, _controller, &PatchWindowController::menuDuplicate);

    connect(selectAllAct, &QAction::triggered, _controller, &PatchWindowController::menuSelectAll);
}

void PatchWindow::closeEvent(QCloseEvent* event)
{
    // FIX

    //if (!canvas->keepPdObject())
    //cmp_closepatch((t_canvas*)canvas->pdObject());

    if (isWindowModified()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Qtpd", "The patch was modified. Do you want to save it?",
            QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);

        if (reply == QMessageBox::No)
            event->accept();
        if (reply == QMessageBox::Cancel)
            event->ignore();
        if (reply == QMessageBox::Yes)
            _controller->menuSave();
    }
}

//////
///// \brief re-save patch, uses its current name
/////
//void PatchWindow::save()
//{

//    QString fname;

//    if (canvas->fileName() != "")
//        fname = canvas->fileName();
//    else
//        fname = QFileDialog::getSaveFileName(this, QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

//    doSave(fname);
//}

//////
///// \brief first save of the patch
/////
//void PatchWindow::saveAs()
//{

//    QString fname = QFileDialog::getSaveFileName(this, QString("Save patch as..."), QString("~/"), QString("*.pd"), 0, 0);

//    doSave(fname);
//}

//void PatchWindow::doSave(QString fname)
//{
//    if (fname != "") {
//        QString file = fname.section("/", -1, -1);
//        QString dir = fname.section("/", 0, -2);

//        qDebug("filename: %s %s", file.toStdString().c_str(), dir.toStdString().c_str());

//        FileSaver::save(fname, canvas);

//        //
//        canvas->setFileName (fname);

//        setWindowTitle(file);
//        setWindowFilePath(fname);
//        setWindowModified(false);
//    }
//}

////
/// \brief set file name when opening patch file
/// \param fname
///
void PatchWindow::setFileName(QString fname)
{

    _canvasView->setFileName(fname);

    QString file = fname.section("/", -1, -1);

    setWindowTitle(file);
    setWindowFilePath(fname);
}

////
/// \brief creates object TODO move to canvas
///
void PatchWindow::objectMakerDone()
{
    QString obj_name = _canvasView->objectMaker()->text(); //.toStdString();

    if (obj_name != "") {

        //"ui.obj",

        if (_canvasView->replaceObject()) {

            UIObject* new_obj = _controller->createObject(obj_name.toStdString(), _canvasView->replaceObject()->pos().toPoint());

            UIObject* obj = _canvasView->replaceObject();
            patchcordVec cords = _canvasView->patchcordsForObject(obj);

            patchcordVec::iterator it;
            for (it = cords.begin(); it != cords.end(); ++it) {
                UIPatchcord* pc = ((UIPatchcord*)*it);
                UIObject* obj1 = pc->obj1();
                UIObject* obj2 = pc->obj2();

                qDebug() << "o1 o2 n" << obj1 << obj2 << new_obj;
                //replace
                if (obj1 == obj)
                    obj1 = new_obj;
                if (obj2 == obj)
                    obj2 = new_obj;

                if (obj1 && obj2)
                    _canvasView->patchcord(obj1, pc->outletIndex(), obj2, pc->inletIndex());
                else
                    qDebug("replace object - patchcord error");
            }

            _controller->deleteObject(obj);
        } else {
            UIObject* new_obj = _controller->createObject(obj_name.toStdString(), _canvasView->newObjectPos());
        }

        _canvasView->setDragObject(0);
        _canvasView->setReplaceObject(0);
        _canvasView->objectMaker()->close();
    }
}

// ==============================
// TODO move to controller

//void PatchWindow::cut()
//{
//    _canvasView->dataCut();
//}

//void PatchWindow::copy()
//{
//    _canvasView->dataCopy();
//}

//void PatchWindow::duplicate()
//{
//    _canvasView->dataDuplicate();
//}

//void PatchWindow::paste()
//{
//    FileParser::setParserWindow(this);
//    _canvasView->dataPaste();
//}

// ----------

void PatchWindow::resizeEvent(QResizeEvent* event)
{
    //        canvas->move(0,0);

    //        // todo move to canvas
    QSize newSize = _canvasView->minimumCanvasSize();
    if (newSize.width() < event->size().width())
        newSize.setWidth(event->size().width());
    if (newSize.height() < event->size().height())
        newSize.setHeight(event->size().height());
    //canvas->setMinimumSize(newSize);

    //canvas->viewport()->setMinimumSize(newSize);
    //canvas->setWindowSize(newSize);

    //        //FIX
    //        canvas->move(0,0);
}

// ===============================================

void PatchWindow:: newMessageBox()
{

    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newMsg = _controller->createObject("ui.msg", QPoint(100, 100));

        canvasView()->setDragObject ( newMsg );
        //todo
        canvasView()->update();
        //newMsg->show();
    }

    setWindowModified(true);
}

void PatchWindow:: newFloatBox()
{

    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newFlo = _controller->createObject("ui.float 0", QPoint(100, 100));
        canvasView()->setDragObject ( newFlo );

        //todo
        canvasView()->update();

        //newFlo->show();
    }

    setWindowModified(true);
}

void PatchWindow:: newCommentBox()
{

    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newTxt = _controller->createObject("ui.text", QPoint(100, 100));
       canvasView()->setDragObject ( newTxt );

       //todo
       canvasView()->update();
       // newTxt->show();
    }

    setWindowModified(true);
}

void PatchWindow:: newBangBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newBng = _controller->createObject("ui.bang", QPoint(100, 100));
        canvasView()->setDragObject ( newBng );

        //todo
        canvasView()->update();
        //newBng->show();
    }

    setWindowModified(true);
}

void PatchWindow:: newToggleBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newBng = _controller->createObject("ui.toggle", QPoint(100, 100));
        canvasView()->setDragObject ( newBng);

        //todo
        canvasView()->update();
        //newBng->show();
    }

    setWindowModified(true);
}

void PatchWindow:: newScriptBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newBng = _controller->createObject("ui.script", QPoint(100, 100));
        canvasView()->setDragObject (newBng);

        //todo
        canvasView()->update();
        //newBng->show();
    }

    setWindowModified(true);
}

void PatchWindow:: newArrayBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newArr = _controller->createObject("ui.array", QPoint(100, 100));
        canvasView()->setDragObject (newArr);

        //todo
        canvasView()->update();
        //newArr->show();
    }

    setWindowModified(true);
}

void PatchWindow:: newPdClassBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newArr = _controller->createObject("pdclass", QPoint(100, 100));
        canvasView()->setDragObject (newArr);

        //todo
        canvasView()->update();
        //newArr->show();
    }

    setWindowModified(true);
}

void PatchWindow:: newPdInstanceBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newArr = _controller->createObject("pdinstance", QPoint(100, 100));
        canvasView()->setDragObject (newArr);

        //todo
        canvasView()->update();
        //newArr->show();
    }

    setWindowModified(true);
}

}
