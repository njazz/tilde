#ifndef CM_PATCHWINDOW_H
#define CM_PATCHWINDOW_H

#include "cm_basewindow.h"
#include "cmo_box.h"
#include "cm_canvas.h"

#include "cm_pdlink.h"

#include "cm_filesaver.h"

namespace cm
{
////
/// \brief Patch window. Creates scroll view and cm_canvas; Creates menu commands, forwards them to cm_canvas
///
class PatchWindow : public BaseWindow
{

private:
    QScrollArea *scroll;

    ////

    QAction *selectAllAct;
    QAction *selectAgainAct;


    QAction *delObjectAct;
    QAction *editModeAct;

    QAction *putObjectAct;
    QAction *putMessageAct;

    //    QAction *putSymbolAct;
    QAction *putCommentAct;

    QAction *putBangAct;
    QAction *putToggleAct;
    QAction *putNumberAct;
    QAction *putSliderAct;
    QAction *putKnobAct;
    QAction *putRadioAct;
    QAction *putDisplay;

    QAction *putArray;

    QAction *putKeyboard;
    QAction *putSlider2D;
    QAction *putBPF;

    QAction *putScope;
    QAction *putSpectroscope;




    QAction *showGridAct;
    QAction *snapToGridAct;

    QAction *alignToGridAct;

    QAction *alignLeftAct;
    QAction *alignRightAct;
    QAction *alignTopAct;
    QAction *alignBottomAct;

    QAction *distHAct;
    QAction *distVAct;

    QAction *tidyUpAct;

    QAction *zoomInAct;
    QAction *zoomOutAct;



    ObjectMaker* objectMaker;

private slots:
    //void open();
    void save();
    void saveAs();

    PatchWindow();
public:
    static PatchWindow* newWindow();
    //    static cm_patchwindow* loadWindow(QStringList); //arguments
    static PatchWindow* newSubpatch(t_canvas *subpatch = 0);

    Canvas* canvas;


    void createActions()
    {
        //        connect(openAct, &QAction::triggered, this, &cm_patchwindow::open);
        connect(saveAsAct, &QAction::triggered, this, &PatchWindow::saveAs);
        connect(saveAct, &QAction::triggered, this, &PatchWindow::saveAs);

        delObjectAct = new QAction(tr("Delete object"), this);
        delObjectAct->setShortcut(tr("Backspace"));
        connect(delObjectAct, &QAction::triggered, this, &PatchWindow::delSelected);

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

        putToggleAct = new QAction(tr("Toggle"), this);
        putToggleAct->setShortcut(tr("Ctrl+Shift+T"));

        putNumberAct = new QAction(tr("Number"), this);
        putNumberAct->setShortcut(tr("Ctrl+3"));
        connect(putNumberAct, &QAction::triggered, this, &PatchWindow::newFloatBox);

        putSliderAct = new QAction(tr("Slider(s)..."), this);
        putSliderAct->setShortcut(tr("Ctrl+Shift+V"));

        putKnobAct = new QAction(tr("Knob"), this);
        putKnobAct->setShortcut(tr("Ctrl+Shift+K"));

        putRadioAct = new QAction(tr("Radio buttons..."), this);
        putRadioAct->setShortcut(tr("Ctrl+Shift+D"));

        putDisplay = new QAction(tr("Display"), this);
        //putDisplay->setShortcut(tr("Ctrl+Shift+T"));

        putArray = new QAction(tr("Array"), this);
        putArray->setShortcut(tr("Ctrl+Shift+A"));


        putKeyboard = new QAction(tr("Keyboard"), this);
        //putArray->setShortcut(tr("Ctrl+Shift+T"));

        putSlider2D = new QAction(tr("Slider2D"), this);
        //putArray->setShortcut(tr("Ctrl+Shift+T"));

        putBPF = new QAction(tr("BPF"), this);
        //putArray->setShortcut(tr("Ctrl+Shift+T"));


        putScope = new QAction(tr("Scope"), this);
        //putArray->setShortcut(tr("Ctrl+Shift+T"));

        putSpectroscope = new QAction(tr("Spectroscope"), this);
        //putArray->setShortcut(tr("Ctrl+Shift+T"));


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
        putMenu->addAction(putSliderAct);
        putMenu->addAction(putKnobAct);
        putMenu->addAction(putRadioAct);
        putMenu->addAction(putDisplay);
        putMenu->addSeparator();
        putMenu->addAction(putArray);
        putMenu->addSeparator();
        putMenu->addAction(putKeyboard);
        putMenu->addAction(putSlider2D);
        putMenu->addAction(putBPF);
        putMenu->addSeparator();
        putMenu->addAction(putScope);
        putMenu->addAction(putSpectroscope);

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
        arrangeMenu->addAction(zoomInAct);
        arrangeMenu->addAction(zoomOutAct);


    }

    ///////

    void newObjectBox()
    {

        if (this->canvas->getEditMode() != em_Locked)
        {
            this->objectMaker->move(100,50);
            this->objectMaker->setFixedSize(60,20);
            this->objectMaker->setFocus();

            this->canvas->dragObject = this->objectMaker;
            this->objectMaker->setText(QString(""));
            this->objectMaker->show();
        }

    }

    void newMessageBox()
    {

        //const char * obj_name = this->objectMaker->text().toStdString().c_str();
        //

        if (this->canvas->getEditMode() != em_Locked)
        {
            UIMessage *newMsg = this->canvas->createMsg("",QPoint(100,100));
            this->canvas->dragObject = newMsg;
            newMsg->show();
        }

    }


    void newFloatBox()
    {

        //const char * obj_name = this->objectMaker->text().toStdString().c_str();
        //

        if (this->canvas->getEditMode() != em_Locked)
        {
            UIFloat *newFlo = this->canvas->createFloat("0",QPoint(100,100));
            this->canvas->dragObject = newFlo;
            newFlo->show();
        }

    }

    void newCommentBox()
    {

        //const char * obj_name = this->objectMaker->text().toStdString().c_str();
        //

        if (this->canvas->getEditMode() != em_Locked)
        {
            UIText *newTxt = this->canvas->createText("comment",QPoint(100,100));
            this->canvas->dragObject = newTxt;
            newTxt->show();
        }

    }

    void delSelected()
    {
        this->canvas->delBoxes();
        this->canvas->delSelectedPatchcords();

    }

    void objectMakerDone();

    void setEditMode()
    {
        if (! (( this->canvas->getEditMode()) == em_Locked ))
            this->canvas->setEditMode(em_Locked);
        else
            this->canvas->setEditMode(em_Unlocked);
        this->editModeAct->setChecked(this->canvas->getEditMode() == em_Unlocked);
    }

    void setGridVisible()
    {
        this->showGridAct->setChecked(this->showGridAct->isChecked());
        this->canvas->setGridEnabled(this->showGridAct->isChecked());
        this->canvas->repaint();
    }

    void setGridSnap()
    {
        this->snapToGridAct->setChecked(this->snapToGridAct->isChecked());
        this->canvas->setGridSnap(this->snapToGridAct->isChecked());
        //this->canvas->repaint();
    }


    /////

    //    void keyPressEvent(QKeyEvent *event)
    //    {
    //        if (event->modifiers() & Qt::ControlModifier)
    //        {
    //            this->canvas->setEditMode(false);
    //        }
    //        else
    //            this->canvas->setEditMode(true);
    //    }


    void closeEvent(QCloseEvent *event)
    {
        cmp_closepatch(this->canvas->pdCanvas);

        event->accept();
    }


    ////

    void setFileName(QString fname);


    ////
    /// \brief keys: ctrl for temporary lock; esc to stop editing actions
    /// \param event
    ///
    void keyPressEvent(QKeyEvent *event){
        if (event->modifiers() & Qt::ControlModifier)
        {
            if (this->canvas->getEditMode() != em_Locked)
                this->canvas->setEditMode(em_Temporary);
        }

        if (event->key() == Qt::Key_Escape)
        {
            this->objectMaker->setText("");
            this->objectMakerDone();

            this->canvas->cancelPatchcord();
        }
    }

    void keyReleaseEvent(QKeyEvent *event){
        if (event->key() == Qt::Key_Control)
        {
            if (this->canvas->getEditMode() == em_Temporary)
                this->canvas->setEditMode(em_Unlocked);
        }
    }


};
}

#endif // CM_PATCHWINDOW_H
