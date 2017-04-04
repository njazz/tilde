#ifndef CM_PATCHWINDOW_H
#define CM_PATCHWINDOW_H

#include "BaseWindow.h"
#include "Canvas.h"
#include "UIBox.h"

#include "PdLink.h"

#include "FileSaver.h"

namespace qtpd {
////
/// \brief Patch window. Creates scroll view and cm_canvas; Creates menu commands, forwards them to cm_canvas
///
class PatchWindow : public BaseWindow {

private:
    QScrollArea* scroll;

    ////

    QAction* selectAllAct;
    QAction* selectAgainAct;

    QAction* delObjectAct;
    QAction* editModeAct;

    QAction* putObjectAct;
    QAction* putMessageAct;

    //    QAction *putSymbolAct;
    QAction* putCommentAct;

    QAction* putBangAct;
    QAction* putToggleAct;
    QAction* putNumberAct;
    QAction* putSliderAct;
    QAction* putKnobAct;
    QAction* putRadioAct;
    QAction* putDisplay;

    QAction* putArray;

    QAction* putKeyboard;
    QAction* putSlider2D;
    QAction* putBPF;

    QAction* putRangeSliderAct;
    QAction* putSlidersAct;
    QAction* putIncDecAct;
    QAction* putMatrixAct;

    QAction* putScope;
    QAction* putSpectroscope;

    QAction* putScriptAct;

    QAction* putPdClass;
    QAction* putPdInstance;

    QAction* showGridAct;
    QAction* snapToGridAct;

    QAction* alignToGridAct;

    QAction* alignLeftAct;
    QAction* alignRightAct;
    QAction* alignTopAct;
    QAction* alignBottomAct;

    QAction* distHAct;
    QAction* distVAct;

    QAction* tidyUpAct;

    QAction* groupObjAct;
    QAction* ungroupObjAct;

    QAction* zoomInAct;
    QAction* zoomOutAct;

    //ObjectMaker* objectMaker;

    void doSave(QString fname);

private slots:
    //void open();
    void save();
    void saveAs();

    // this is hidden, use "newWindow"
    PatchWindow();

public:
    static PatchWindow* newWindow();
    //    static cm_patchwindow* loadWindow(QStringList); //arguments
    static PatchWindow* newSubpatch(t_canvas* subpatch = 0);

    //todo encapsulate!
    Canvas* canvas;

    void createActions()
    {
        //        connect(openAct, &QAction::triggered, this, &cm_patchwindow::open);
        connect(saveAsAct, &QAction::triggered, this, &PatchWindow::saveAs);
        connect(saveAct, &QAction::triggered, this, &PatchWindow::save);

        delObjectAct = new QAction(tr("Delete object"), this);
        delObjectAct->setShortcut(tr("Backspace"));
        connect(delObjectAct, &QAction::triggered, this, &PatchWindow::delSelected);

        selectAllAct = new QAction(tr("Select all"), this);
        selectAllAct->setShortcut(tr("Ctrl+A"));
        connect(selectAllAct, &QAction::triggered, this, &PatchWindow::selectAll);

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

        alignToGridAct = new QAction(tr("Align to grid"), this);
        alignToGridAct->setEnabled(false);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        alignLeftAct = new QAction(tr("Align left"), this);
        alignLeftAct->setEnabled(false);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        alignRightAct = new QAction(tr("Align right"), this);
        alignRightAct->setEnabled(false);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        alignTopAct = new QAction(tr("Align top"), this);
        alignTopAct->setEnabled(false);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        alignBottomAct = new QAction(tr("Align bottom"), this);
        alignBottomAct->setEnabled(false);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        distHAct = new QAction(tr("Distribute objects horizontaly"), this);
        distHAct->setEnabled(false);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        distVAct = new QAction(tr("Distribute objects verticaly"), this);
        distVAct->setEnabled(false);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        tidyUpAct = new QAction(tr("Tidy up"), this);
        tidyUpAct->setEnabled(false);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        groupObjAct = new QAction(tr("Group objects"), this);

        ungroupObjAct = new QAction(tr("Ungroup objects"), this);
        ungroupObjAct->setEnabled(false);

        zoomInAct = new QAction(tr("Zoom in"), this);
        zoomInAct->setShortcut(tr("Ctrl++"));

        zoomOutAct = new QAction(tr("Zoom out"), this);
        zoomOutAct->setShortcut(tr("Ctrl+-"));
    }

    void createMenus()
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
        arrangeMenu->addSeparator();
        arrangeMenu->addAction(alignToGridAct);
        arrangeMenu->addAction(alignLeftAct);
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

    ///////

    void resizeEvent(QResizeEvent* event)
    {
        //fix later
        canvas->setMinimumSize(QSize(width() - canvas->x(), height() - canvas->y()));

        canvas->setWindowSize(size());
    }

    //----------------------------------------------------------------------------------------

    // todo less spaghetti

    void newObjectBox()
    {

        if (canvas->getEditMode() != em_Locked) {
            canvas->showNewObjectMaker();
        }
    }

    void newMessageBox()
    {

        if (canvas->getEditMode() != em_Locked) {
            UIObject* newMsg = canvas->createObject("ui.msg", QPoint(100, 100));
            canvas->dragObject = newMsg;
            newMsg->show();
        }
    }

    void newFloatBox()
    {

        if (canvas->getEditMode() != em_Locked) {
            UIObject* newFlo = canvas->createObject("ui.float 0", QPoint(100, 100));
            canvas->dragObject = newFlo;
            newFlo->show();
        }
    }

    void newCommentBox()
    {

        if (canvas->getEditMode() != em_Locked) {
            UIObject* newTxt = canvas->createObject("ui.text", QPoint(100, 100));
            canvas->dragObject = newTxt;
            newTxt->show();
        }
    }

    void newBangBox()
    {
        if (canvas->getEditMode() != em_Locked) {
            UIObject* newBng = canvas->createObject("ui.bang", QPoint(100, 100));
            canvas->dragObject = newBng;
            newBng->show();
        }
    }

    void newToggleBox()
    {
        if (canvas->getEditMode() != em_Locked) {
            UIObject* newBng = canvas->createObject("ui.toggle", QPoint(100, 100));
            canvas->dragObject = newBng;
            newBng->show();
        }
    }

    void newScriptBox()
    {
        if (canvas->getEditMode() != em_Locked) {
            UIObject* newBng = canvas->createObject("ui.script", QPoint(100, 100));
            canvas->dragObject = newBng;
            newBng->show();
        }
    }

    void newArrayBox()
    {
        if (canvas->getEditMode() != em_Locked) {
            UIObject* newArr = canvas->createObject("ui.array", QPoint(100, 100));
            canvas->dragObject = newArr;
            newArr->show();
        }
    }

    void newPdClassBox()
    {
        if (canvas->getEditMode() != em_Locked) {
            UIObject* newArr = canvas->createObject("pdclass", QPoint(100, 100));
            canvas->dragObject = newArr;
            newArr->show();
        }
    }

    void newPdInstanceBox()
    {
        if (canvas->getEditMode() != em_Locked) {
            UIObject* newArr = canvas->createObject("pdinstance", QPoint(100, 100));
            canvas->dragObject = newArr;
            newArr->show();
        }
    }

    // ----------------------------------------------------

    void delSelected()
    {
        canvas->deleteSelectedBoxes();
        canvas->delSelectedPatchcords();
    }

    void selectAll()
    {
        // todo direct slot connection
        canvas->selectAll();
    }

    void objectMakerDone();

    void setEditMode()
    {
        if (!((canvas->getEditMode()) == em_Locked))
            canvas->setEditMode(em_Locked);
        else
            canvas->setEditMode(em_Unlocked);
        editModeAct->setChecked(canvas->getEditMode() == em_Unlocked);
    }

    void setGridVisible()
    {
        showGridAct->setChecked(showGridAct->isChecked());
        canvas->setGridEnabled(showGridAct->isChecked());
        canvas->viewport()->update();//canvas->sceneRect());
    }

    void setGridSnap()
    {
        snapToGridAct->setChecked(snapToGridAct->isChecked());
        canvas->setGridSnap(snapToGridAct->isChecked());
        //canvas-> viewport()->update();
    }

    /////

    //    void keyPressEvent(QKeyEvent *event)
    //    {
    //        if (event->modifiers() & Qt::ControlModifier)
    //        {
    //            canvas->setEditMode(false);
    //        }
    //        else
    //            canvas->setEditMode(true);
    //    }

    void closeEvent(QCloseEvent* event)
    {
        if (!canvas->keepPdObject())
            cmp_closepatch((t_canvas*)canvas->pdObject());

        event->accept();
    }

    ////

    void setFileName(QString fname);

    ////
    /// \brief keys: ctrl for temporary lock; esc to stop editing actions
    /// \param event
    ///
    void keyPressEvent(QKeyEvent* event)
    {
        if (event->modifiers() & Qt::ControlModifier) {
            if (canvas->getEditMode() != em_Locked)
                canvas->setEditMode(em_Temporary);
        }

        if (event->key() == Qt::Key_Escape) {
            canvas->objectMaker()->setText("");
            objectMakerDone();

            canvas->cancelPatchcord();
        }
    }

    void keyReleaseEvent(QKeyEvent* event)
    {
        if (event->key() == Qt::Key_Control) {
            if (canvas->getEditMode() == em_Temporary)
                canvas->setEditMode(em_Unlocked);
        }
    }

    // ==============================

    void cut();
    void copy();
    void duplicate();
    void paste();

public slots:
    std::pair<QMainWindow*, qtpd::UIObject*> s_createSubpatchWindow()
    {
        t_canvas* newPdCanvas = cmp_newpatch();

        PatchWindow* subPatch = PatchWindow::newSubpatch((t_canvas*)newPdCanvas);
        Canvas* newCanvas = subPatch->canvas;

        return std::pair<QMainWindow*, qtpd::UIObject*>(subPatch, (qtpd::UIObject*)newCanvas);
    };
};
}

#endif // CM_PATCHWINDOW_H
