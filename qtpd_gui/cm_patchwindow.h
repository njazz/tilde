#ifndef CM_PATCHWINDOW_H
#define CM_PATCHWINDOW_H

#include "cm_basewindow.h"
#include "cm_box.h"
#include "cm_canvas.h"

#include "cm_pdlink.h"

class cm_patchwindow : public cm_basewindow
{

private:
    QAction *delObjectAct;
    QAction *editModeAct;

    QAction *putObjectAct;
    QAction *putMessageAct;
    QAction *putNumberAct;
    QAction *putSymbolAct;
    QAction *putCommentAct;

    cm_objectmaker* objectMaker;

    t_canvas* pd_canvas;
public:
    cm_patchwindow();
    cm_canvas* canvas;


    void createActions()
    {

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

        putNumberAct = new QAction(tr("Number"), this);
        putNumberAct->setShortcut(tr("Ctrl+3"));

        putSymbolAct = new QAction(tr("Symbol"), this);
        putSymbolAct->setShortcut(tr("Ctrl+4"));

        putCommentAct = new QAction(tr("Comment"), this);
        putCommentAct->setShortcut(tr("Ctrl+5"));

    }

    void createMenus()
    {

        editMenu->addSeparator();
        editMenu->addAction(delObjectAct);
        editMenu->addAction(editModeAct);

        putMenu->addAction(putObjectAct);
        putMenu->addAction(putMessageAct);
        putMenu->addAction(putNumberAct);
        putMenu->addAction(putSymbolAct);
        putMenu->addAction(putCommentAct);
        putMenu->addSeparator();

    }

    void newObjectBox()
    {

        this->objectMaker->move(100,50);
        this->objectMaker->setFixedSize(60,30);
        this->objectMaker->setFocus();

        this->canvas->dragObject = this->objectMaker;
        this->objectMaker->show();

    }

    void newMessageBox()
    {

        const char * obj_name = this->objectMaker->text().toStdString().c_str();
        t_object* new_obj = 0 ;

        //temp
        if (!this->pd_canvas)
        {
            qDebug("bad pd canvas instance");
        }
        else
        {
            new_obj = cmp_create_object(this->pd_canvas,(char*)obj_name,50, 50);
        }

        if (new_obj)
        {

             qDebug ("created object %lu, new_obj");

//            in_c = cmp_get_inlet_count(new_obj);
//            out_c = cmp_get_outlet_count(new_obj);

            qDebug ("created msgbox %sptr %lu", obj_name, new_obj);

            //cm_box* newBox = this->canvas->createBox(this->objectMaker->text().toStdString(),this->objectMaker->pos(),in_c,out_c);
            //newBox->pdObject = new_obj;
            //newBox->show();
        }
        else
        {
            qDebug("Error: no such object %s", obj_name);
        }
        //
        cmo_msg *newMsg = this->canvas->createMsg("new",QPoint(100,100));
        this->canvas->dragObject = newMsg;
        newMsg->show();

    }

    void delSelected()
    {
        this->canvas->delBoxes();
        this->canvas->delSelectedPatchcords();

    }

    void objectMakerDone();

    void setEditMode()
    {
        this->canvas->setEditMode(!this->canvas->getEditMode());
        this->editModeAct->setChecked(this->canvas->getEditMode());
    }

};

#endif // CM_PATCHWINDOW_H