// (c) 2017 Alex Nadzharov
// License: GPL3

#include "PatchWindow.h"

#include "FileParser.h"

#include "CanvasView.h"
#include "FileParser.h"
#include "PatchWindowController.h"

namespace qtpd {
PatchWindow::PatchWindow()
{
    createActions();
    createMenus();

    _scroll = new QScrollArea(this);
    _canvasView = new CanvasView((QGraphicsView*)this);
    _canvasView->setController(_controller);

    //scroll->setWidget(canvas);

    //    QGridLayout* layout1 = new QGridLayout();
    //    layout1->setMargin(20);
    //    layout1->addWidget(canvas);
    //    scroll->setLayout(layout1);

    //    scroll->setWidget(canvas);

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

    editModeAct->setChecked(true);

    // TODO
    //connect subpatch creation routine
    //connect(_canvasView, &CanvasView::createSubpatchWindow, this, &PatchWindow::s_createSubpatchWindow);

    //todo
    setWindowTitle("<TODO> Untitled-1");

    //
    //    connect(cutAct, &QAction::triggered, this, &PatchWindow::cut);
    //    connect(copyAct, &QAction::triggered, this, &PatchWindow::copy);
    //    connect(duplicateAct, &QAction::triggered, this, &PatchWindow::duplicate);
    //    connect(pasteAct, &QAction::triggered, this, &PatchWindow::paste);
}

void PatchWindow::createActions()
{
    //        connect(openAct, &QAction::triggered, this, &cm_patchwindow::open);

    delObjectAct = new QAction(tr("Delete object"), this);
    delObjectAct->setShortcut(tr("Backspace"));
    //connect(delObjectAct, &QAction::triggered, this, &PatchWindow::delSelected);

    selectAllAct = new QAction(tr("Select all"), this);
    selectAllAct->setShortcut(tr("Ctrl+A"));

    selectAgainAct = new QAction(tr("Select again"), this);
    //selectAgainAct->setShortcut(tr("Ctrl+A"));

    editModeAct = new QAction(tr("Edit mode"), this);
    editModeAct->setShortcut(tr("Ctrl+E"));
    editModeAct->setCheckable(true);
    connect(editModeAct, &QAction::triggered, this, &PatchWindow::setEditMode);

    putObjectAct = new QAction(tr("Object"), this);
    putObjectAct->setShortcut(tr("Ctrl+1"));
    connect(putObjectAct, &QAction::triggered, this, &PatchWindow::newObjectBox);

    putMessageAct = new QAction(tr("Message"), this);
    putMessageAct->setShortcut(tr("Ctrl+2"));
    connect(putMessageAct, &QAction::triggered, this, &PatchWindow::newMessageBox);

    //        putSymbolAct = new QAction(tr("Symbol"), this);
    //        putSymbolAct->setShortcut(tr("Ctrl+4"));

    putCommentAct = new QAction(tr("Comment"), this);
    putCommentAct->setShortcut(tr("Ctrl+5"));
    connect(putCommentAct, &QAction::triggered, this, &PatchWindow::newCommentBox);

    putBangAct = new QAction(tr("Bang"), this);
    putBangAct->setShortcut(tr("Ctrl+Shift+B"));
    connect(putBangAct, &QAction::triggered, this, &PatchWindow::newBangBox);

    putToggleAct = new QAction(tr("Toggle"), this);
    putToggleAct->setShortcut(tr("Ctrl+Shift+T"));
    connect(putToggleAct, &QAction::triggered, this, &PatchWindow::newToggleBox);

    putNumberAct = new QAction(tr("Number"), this);
    putNumberAct->setShortcut(tr("Ctrl+3"));
    connect(putNumberAct, &QAction::triggered, this, &PatchWindow::newFloatBox);

    //

    putSliderAct = new QAction(tr("Slider"), this);
    putSliderAct->setShortcut(tr("Ctrl+Shift+V"));

    putRangeSliderAct = new QAction(tr("Range Slider"), this);

    putSlider2D = new QAction(tr("Slider2D"), this);

    putSlidersAct = new QAction(tr("Sliders"), this);

    putIncDecAct = new QAction(tr("Inc/Dec"), this);

    putKnobAct = new QAction(tr("Knob"), this);
    putKnobAct->setShortcut(tr("Ctrl+Shift+K"));

    putMatrixAct = new QAction(tr("Matrix buttons"), this);

    putRadioAct = new QAction(tr("Radio buttons"), this);
    putRadioAct->setShortcut(tr("Ctrl+Shift+D"));

    putDisplay = new QAction(tr("Display"), this);
    //putDisplay->setShortcut(tr("Ctrl+Shift+T"));

    putArray = new QAction(tr("Array"), this);
    putArray->setShortcut(tr("Ctrl+Shift+A"));
    connect(putArray, &QAction::triggered, this, &PatchWindow::newArrayBox);

    putKeyboard = new QAction(tr("Keyboard"), this);
    //putArray->setShortcut(tr("Ctrl+Shift+T"));

    putBPF = new QAction(tr("BPF"), this);
    //putArray->setShortcut(tr("Ctrl+Shift+T"));

    putScope = new QAction(tr("Scope"), this);
    //putArray->setShortcut(tr("Ctrl+Shift+T"));

    putSpectroscope = new QAction(tr("Spectroscope"), this);
    //putArray->setShortcut(tr("Ctrl+Shift+T"));

    putScriptAct = new QAction(tr("Script"), this);
    putScriptAct->setShortcut(tr("Ctrl+7"));
    connect(putScriptAct, &QAction::triggered, this, &PatchWindow::newScriptBox);

    putPdClass = new QAction(tr("Pd Class"), this);
    putPdClass->setShortcut(tr("Ctrl+8"));
    connect(putPdClass, &QAction::triggered, this, &PatchWindow::newPdClassBox);

    putPdInstance = new QAction(tr("Pd Instance"), this);
    putPdInstance->setShortcut(tr("Ctrl+9"));
    connect(putPdInstance, &QAction::triggered, this, &PatchWindow::newPdInstanceBox);

    showGridAct = new QAction(tr("Show grid"), this);
    showGridAct->setShortcut(tr("Ctrl+Shift+G"));
    showGridAct->setCheckable(true);
    showGridAct->setChecked(true);
    connect(showGridAct, &QAction::triggered, this, &PatchWindow::setGridVisible);

    snapToGridAct = new QAction(tr("Snap to grid"), this);
    snapToGridAct->setShortcut(tr("Alt+G"));
    snapToGridAct->setCheckable(true);
    snapToGridAct->setChecked(true);
    connect(snapToGridAct, &QAction::triggered, this, &PatchWindow::setGridSnap);

    // -------
    alignToGridAct = new QAction(tr("Align to grid"), this);

    //alignToGridAct->setEnabled(false);
    //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

    // ------------------------------

    alignLeftAct = new QAction(tr("Align left"), this);
    //alignLeftAct->setEnabled(false);
    //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

    alignCenterAct = new QAction(tr("Align center"), this);

    alignRightAct = new QAction(tr("Align right"), this);

    //alignRightAct->setEnabled(false);
    //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

    alignTopAct = new QAction(tr("Align top"), this);

    //alignTopAct->setEnabled(false);
    //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

    alignBottomAct = new QAction(tr("Align bottom"), this);

    //alignBottomAct->setEnabled(false);
    //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

    distHAct = new QAction(tr("Distribute objects horizontaly"), this);

    //distHAct->setEnabled(false);
    //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

    distVAct = new QAction(tr("Distribute objects verticaly"), this);

    //distVAct->setEnabled(false);
    //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

    tidyUpAct = new QAction(tr("Tidy up"), this);
    tidyUpAct->setEnabled(false);
    //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

    groupObjAct = new QAction(tr("Group objects"), this);
    groupObjAct->setEnabled(false);

    ungroupObjAct = new QAction(tr("Ungroup objects"), this);
    ungroupObjAct->setEnabled(false);

    zoomInAct = new QAction(tr("Zoom in"), this);
    zoomInAct->setShortcut(tr("Ctrl++"));
    connect(zoomInAct, &QAction::triggered, this, &PatchWindow::zoomIn);

    zoomOutAct = new QAction(tr("Zoom out"), this);
    zoomOutAct->setShortcut(tr("Ctrl+-"));
    connect(zoomOutAct, &QAction::triggered, this, &PatchWindow::zoomOut);
}

void PatchWindow::createMenus()
{

    editMenu->addSeparator();
    editMenu->addAction(selectAllAct);
    editMenu->addAction(selectAgainAct);
    editMenu->addSeparator();
    editMenu->addAction(delObjectAct);
    editMenu->addAction(editModeAct);

    putMenu->addAction(putObjectAct);
    putMenu->addAction(putMessageAct);
    //        putMenu->addAction(putNumberAct);
    //        putMenu->addAction(putSymbolAct);
    putMenu->addAction(putCommentAct);
    putMenu->addSeparator();
    putMenu->addAction(putBangAct);
    putMenu->addAction(putToggleAct);
    putMenu->addAction(putNumberAct);
    putMenu->addSeparator();
    putMenu->addAction(putSliderAct);
    putMenu->addAction(putKnobAct);
    putMenu->addAction(putSlider2D);
    putMenu->addAction(putRangeSliderAct);
    putMenu->addAction(putSlidersAct);
    putMenu->addAction(putMatrixAct);
    putMenu->addAction(putRadioAct);
    putMenu->addSeparator();
    putMenu->addAction(putArray);
    putMenu->addSeparator();
    putMenu->addAction(putKeyboard);
    putMenu->addAction(putBPF);
    putMenu->addAction(putDisplay);
    putMenu->addSeparator();
    putMenu->addAction(putScope);
    putMenu->addAction(putSpectroscope);
    putMenu->addSeparator();
    putMenu->addAction(putScriptAct);
    putMenu->addSeparator();
    putMenu->addAction(putPdClass);
    putMenu->addAction(putPdInstance);
    putMenu->addSeparator();

    arrangeMenu->addAction(showGridAct);
    arrangeMenu->addAction(snapToGridAct);
    arrangeMenu->addAction(alignToGridAct);
    arrangeMenu->addSeparator();

    arrangeMenu->addAction(alignLeftAct);
    arrangeMenu->addAction(alignCenterAct);
    arrangeMenu->addAction(alignRightAct);

    arrangeMenu->addAction(alignTopAct);
    arrangeMenu->addAction(alignBottomAct);
    arrangeMenu->addSeparator();
    arrangeMenu->addAction(distHAct);
    arrangeMenu->addAction(distVAct);
    arrangeMenu->addSeparator();
    arrangeMenu->addAction(tidyUpAct);
    arrangeMenu->addSeparator();
    arrangeMenu->addAction(groupObjAct);
    arrangeMenu->addAction(ungroupObjAct);
    arrangeMenu->addSeparator();
    arrangeMenu->addAction(zoomInAct);
    arrangeMenu->addAction(zoomOutAct);
}

//PatchWindow:: PatchWindow()
//{
//PatchWindow* this_;
//this_ = new PatchWindow();

// move to canvas

// TODO

//this_->_canvasView->setPdObject(cmp_newpatch());

//    if (!this_->_canvasView->pdObject()) {
//        qDebug("Failed to create canvas!");
//    }
//else

//return this_;
//}

//////
///// \brief constructor for the subpatches' windows
///// \param subpatch
/////
//PatchWindow* PatchWindow::newSubpatch(t_canvas* subpatch)
//{
//    PatchWindow* this_;
//    this_ = new PatchWindow;

//    ((QMainWindow*)this_)->setWindowTitle("<subpatch>");

////    this_->_canvasView->setPdObject(subpatch);

////    if (!this_->_canvasView->pdObject()) {
////        qDebug("Failed to create canvas!");
////    }
//    //    else
//    //        cmp_loadbang(this_->canvas->pdObject());

//    return this_;
//}

void PatchWindow::setController(PatchWindowController* c)
{
    _controller = c;

    if (!c) {
        qDebug() << "bad app controller pointer in patchwindow";
        return;
    }

    connect(saveAsAct, &QAction::triggered, _controller, &PatchWindowController::menuSaveAs);
    connect(saveAct, &QAction::triggered, _controller, &PatchWindowController::menuSave);

    connect(delObjectAct, &QAction::triggered, _controller, &PatchWindowController::menuDelete);

    connect(cutAct, &QAction::triggered, _controller, &PatchWindowController::menuCut);
    connect(copyAct, &QAction::triggered, _controller, &PatchWindowController::menuCopy);
    connect(pasteAct, &QAction::triggered, _controller, &PatchWindowController::menuPaste);
    connect(duplicateAct, &QAction::triggered, _controller, &PatchWindowController::menuDuplicate);

    connect(selectAllAct, &QAction::triggered, _controller, &PatchWindowController::menuSelectAll);

    //
    connect(alignLeftAct, &QAction::triggered, _controller, &PatchWindowController::slotAlignLeft);
    connect(alignCenterAct, &QAction::triggered, _controller, &PatchWindowController::slotAlignCenter);
    connect(alignRightAct, &QAction::triggered, _controller, &PatchWindowController::slotAlignRight);
    connect(alignTopAct, &QAction::triggered, _controller, &PatchWindowController::slotAlignTop);
    connect(alignBottomAct, &QAction::triggered, _controller, &PatchWindowController::slotAlignBottom);
    connect(distHAct, &QAction::triggered, _controller, &PatchWindowController::slotHDistribute);
    connect(distVAct, &QAction::triggered, _controller, &PatchWindowController::slotVDistribute);

    if (_canvasView)
        _canvasView->setController(_controller);
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

    // TODO
    //_canvasView->setFileName(fname);
    _controller->setFileName(fname);
    //

    QString file = fname.section("/", -1, -1);

    setWindowTitle(file);
    setWindowFilePath(fname);
}

// ----------

void PatchWindow::zoomIn()
{
    canvasView()->setZoom(1.1);
    qDebug() << "zoom" << canvasView()->getZoom();
}

void PatchWindow::zoomOut()
{
    canvasView()->setZoom(1 / 1.1);
    qDebug() << "zoom" << canvasView()->getZoom();
}

// ---------

void PatchWindow::keyPressEvent(QKeyEvent* event)
{

    if (event->modifiers() & Qt::ControlModifier) {
        if (canvasView()->getEditMode() != em_Locked)
            canvasView()->setEditMode(em_Temporary);
    }

    if (event->key() == Qt::Key_Escape) {
        canvasView()->objectMaker()->setText("");
        //objectMakerDone();
        canvasView()->objectMaker()->cancel();

        canvasView()->cancelPatchcord();
    }
}

void PatchWindow::keyReleaseEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Control) {
        if (canvasView()->getEditMode() == em_Temporary)
            canvasView()->setEditMode(em_Unlocked);
    }
}

////
/// \brief creates object TODO move to controller
/// \deprecated move to controller
void PatchWindow::objectMakerDone()
{
    QString obj_name = _canvasView->objectMaker()->text(); //.toStdString();

    if (obj_name != "") {

        //"ui.obj",

        if (_canvasView->replaceObject()) {

            UIObject* new_obj = _controller->createObject(obj_name.toStdString(), _canvasView->replaceObject()->pos().toPoint());

            UIObject* obj = _canvasView->replaceObject();
            patchcordVec cords = _controller->canvasData()->patchcordsForObject(obj);

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
                    _controller->patchcord(obj1, pc->outletIndex(), obj2, pc->inletIndex());
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

void PatchWindow::setEditMode()
{
    if (!((canvasView()->getEditMode()) == em_Locked))
        canvasView()->setEditMode(em_Locked);
    else
        canvasView()->setEditMode(em_Unlocked);
    editModeAct->setChecked(canvasView()->getEditMode() == em_Unlocked);
}

void PatchWindow::setGridVisible()
{
    showGridAct->setChecked(showGridAct->isChecked());
    canvasView()->setGridEnabled(showGridAct->isChecked());
    //canvasView()->viewport()->update();//canvasView()->sceneRect());
}

void PatchWindow::setGridSnap()
{
    snapToGridAct->setChecked(snapToGridAct->isChecked());
    canvasView()->setGridSnap(snapToGridAct->isChecked());
    //canvasView()-> viewport()->update();
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

void PatchWindow::newObjectBox()
{

    if (canvasView()->getEditMode() != em_Locked) {
        canvasView()->showNewObjectMaker();
    }

    //change later
    setWindowModified(true);
}

void PatchWindow::newMessageBox()
{

    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newMsg = _controller->createObject("ui.msg", QPoint(100, 100));

        canvasView()->setDragObject(newMsg);
        //todo
        canvasView()->update();
        //newMsg->show();
    }

    setWindowModified(true);
}

void PatchWindow::newFloatBox()
{

    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newFlo = _controller->createObject("ui.float 0", QPoint(100, 100));
        canvasView()->setDragObject(newFlo);

        //todo
        canvasView()->update();

        //newFlo->show();
    }

    setWindowModified(true);
}

void PatchWindow::newCommentBox()
{

    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newTxt = _controller->createObject("ui.text @Text comment", QPoint(100, 100));
        canvasView()->setDragObject(newTxt);

        //todo
        canvasView()->update();
        // newTxt->show();
    }

    setWindowModified(true);
}

void PatchWindow::newBangBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newBng = _controller->createObject("ui.bang", QPoint(100, 100));
        canvasView()->setDragObject(newBng);

        //todo
        canvasView()->update();
        //newBng->show();
    }

    setWindowModified(true);
}

void PatchWindow::newToggleBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newBng = _controller->createObject("ui.toggle", QPoint(100, 100));
        canvasView()->setDragObject(newBng);

        //todo
        canvasView()->update();
        //newBng->show();
    }

    setWindowModified(true);
}

void PatchWindow::newScriptBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newBng = _controller->createObject("ui.script", QPoint(100, 100));
        canvasView()->setDragObject(newBng);

        //todo
        canvasView()->update();
        //newBng->show();
    }

    setWindowModified(true);
}

void PatchWindow::newArrayBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newArr = _controller->createObject("ui.array", QPoint(100, 100));
        canvasView()->setDragObject(newArr);

        //todo
        canvasView()->update();
        //newArr->show();
    }

    setWindowModified(true);
}

void PatchWindow::newPdClassBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newArr = _controller->createObject("pdclass", QPoint(100, 100));
        canvasView()->setDragObject(newArr);

        //todo
        canvasView()->update();
        //newArr->show();
    }

    setWindowModified(true);
}

void PatchWindow::newPdInstanceBox()
{
    if (canvasView()->getEditMode() != em_Locked) {
        UIObject* newArr = _controller->createObject("pdinstance", QPoint(100, 100));
        canvasView()->setDragObject(newArr);

        //todo
        canvasView()->update();
        //newArr->show();
    }

    setWindowModified(true);
}
}
