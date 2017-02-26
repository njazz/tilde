#ifndef CM_PATCHWINDOW_H
#define CM_PATCHWINDOW_H

#include "cm_basewindow.h"
#include "cm_box.h"
#include "cm_canvas.h"

class cm_patchwindow : public cm_basewindow
{

private:
    QAction *putObjectAct;
    QAction *putMessageAct;
    QAction *putNumberAct;
    QAction *putSymbolAct;
    QAction *putCommentAct;

public:
    cm_patchwindow();
    cm_canvas* canvas;

    void createActions()
    {

        putObjectAct = new QAction(tr("Object"), this);
        putObjectAct->setShortcut(tr("Ctrl+1"));
        connect(putObjectAct, &QAction::triggered, this, &cm_patchwindow::newObjectBox);

        putMessageAct = new QAction(tr("Message"), this);
        putMessageAct->setShortcut(tr("Ctrl+2"));

        putNumberAct = new QAction(tr("Number"), this);
        putNumberAct->setShortcut(tr("Ctrl+3"));

        putSymbolAct = new QAction(tr("Symbol"), this);
        putSymbolAct->setShortcut(tr("Ctrl+4"));

        putCommentAct = new QAction(tr("Comment"), this);
        putCommentAct->setShortcut(tr("Ctrl+5"));

    }

    void createMenus()
    {

        putMenu->addAction(putObjectAct);
        putMenu->addAction(putMessageAct);
        putMenu->addAction(putNumberAct);
        putMenu->addAction(putSymbolAct);
        putMenu->addAction(putCommentAct);
        putMenu->addSeparator();

    }

    void newObjectBox()
    {
        cm_box* newBox = new cm_box(this);
        newBox->move(50,50);
        newBox->show();

        //this->canvas->dragObject = newBox;
    }



};

#endif // CM_PATCHWINDOW_H
