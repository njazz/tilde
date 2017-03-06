#ifndef CM_PATCHWINDOW_H
#define CM_PATCHWINDOW_H

#include "cm_basewindow.h"
#include "cmo_box.h"
#include "cm_canvas.h"

#include "cm_pdlink.h"

////
/// \brief Patch window. Creates scroll view and cm_canvas; Creates menu commands, forwards them to cm_canvas
///
class cm_patchwindow : public cm_basewindow
{

private:

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



    cm_objectmaker* objectMaker;

private slots:
    //void open();
    void save();
    void saveAs();


public:
    cm_patchwindow();
    cm_patchwindow(QStringList ); //arguments
    cm_canvas* canvas;


    void createActions()
    {
        //        connect(openAct, &QAction::triggered, this, &cm_patchwindow::open);
        connect(saveAsAct, &QAction::triggered, this, &cm_patchwindow::saveAs);
        connect(saveAct, &QAction::triggered, this, &cm_patchwindow::saveAs);

        delObjectAct = new QAction(tr("Delete object"), this);
        delObjectAct->setShortcut(tr("Backspace"));
        connect(delObjectAct, &QAction::triggered, this, &cm_patchwindow::delSelected);

        editModeAct = new QAction(tr("Edit mode"), this);
        editModeAct->setShortcut(tr("Ctrl+E"));
        editModeAct->setCheckable(true);
        connect(editModeAct, &QAction::triggered, this, &cm_patchwindow::setEditMode);

        putObjectAct = new QAction(tr("Object"), this);
        putObjectAct->setShortcut(tr("Ctrl+1"));
        connect(putObjectAct, &QAction::triggered, this, &cm_patchwindow::newObjectBox);

        putMessageAct = new QAction(tr("Message"), this);
        putMessageAct->setShortcut(tr("Ctrl+2"));
        connect(putMessageAct, &QAction::triggered, this, &cm_patchwindow::newMessageBox);



        //        putSymbolAct = new QAction(tr("Symbol"), this);
        //        putSymbolAct->setShortcut(tr("Ctrl+4"));

        putCommentAct = new QAction(tr("Comment"), this);
        putCommentAct->setShortcut(tr("Ctrl+5"));



        putBangAct = new QAction(tr("Bang"), this);
        putBangAct->setShortcut(tr("Ctrl+Shift+B"));

        putToggleAct = new QAction(tr("Toggle"), this);
        putToggleAct->setShortcut(tr("Ctrl+Shift+T"));

        putNumberAct = new QAction(tr("Number"), this);
        putNumberAct->setShortcut(tr("Ctrl+3"));

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
        connect(showGridAct, &QAction::triggered, this, &cm_patchwindow::setGridVisible);


        snapToGridAct = new QAction(tr("Snap to grid"), this);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        alignToGridAct = new QAction(tr("Align to grid"), this);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        alignLeftAct = new QAction(tr("Align left"), this);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        alignRightAct = new QAction(tr("Align right"), this);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        alignTopAct = new QAction(tr("Align top"), this);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        alignBottomAct = new QAction(tr("Align bottom"), this);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        distHAct = new QAction(tr("Distribute objects horizontaly"), this);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        distVAct = new QAction(tr("Distribute objects verticaly"), this);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        tidyUpAct = new QAction(tr("Tidy up"), this);
        //showGridAct->setShortcut(tr("Ctrl+Shift+G"));

        zoomInAct = new QAction(tr("Zoom in"), this);
        zoomInAct->setShortcut(tr("Ctrl++"));

        zoomOutAct = new QAction(tr("Zoom out"), this);
        zoomOutAct->setShortcut(tr("Ctrl+-"));

    }

    void createMenus()
    {

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

    void newObjectBox()
    {

        if (this->canvas->getEditMode() != em_Locked)
        {
            this->objectMaker->move(100,50);
            this->objectMaker->setFixedSize(60,30);
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
            cmo_msg *newMsg = this->canvas->createMsg("",QPoint(100,100));
            this->canvas->dragObject = newMsg;
            newMsg->show();
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
//        if (! (( this->canvas->getEditMode()) == em_Locked ))
//            this->canvas->setEditMode(em_Locked);
//        else
//            this->canvas->setEditMode(em_Unlocked);


        this->showGridAct->setChecked(this->showGridAct->isChecked());
        this->canvas->setGridEnabled(this->showGridAct->isChecked());
        this->canvas->repaint();
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
        cmp_closepatch(this->canvas->pd_canvas);

        event->accept();
    }


    ////

    void setFileName(QString fname);

    ///////

    void keyPressEvent(QKeyEvent *event){
        if (event->modifiers() & Qt::ControlModifier)
        {
            if (this->canvas->getEditMode() != em_Locked)
                this->canvas->setEditMode(em_Temporary);
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

#endif // CM_PATCHWINDOW_H
