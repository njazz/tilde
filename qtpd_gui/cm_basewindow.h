#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

//#include "cm_gui.h"

#include "cm_menu.h"

#include "cm_pdlink.h"

namespace Ui {
class cm_basewindow;
}

class cm_basewindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit cm_basewindow(QWidget *parent = 0);
    ~cm_basewindow();

    void createActions()
    {
        newAct = new QAction(tr("&New"), this);
        newAct->setShortcuts(QKeySequence::New);
        connect(newAct, &QAction::triggered, this, &cm_menu::newFile);

        openAct = new QAction(tr("&Open..."), this);
        openAct->setShortcuts(QKeySequence::Open);

        saveAct = new QAction(tr("&Save"), this);
        saveAct->setShortcuts(QKeySequence::Save);

        saveAsAct = new QAction(tr("&Save As..."), this);
        saveAsAct->setShortcuts(QKeySequence::SaveAs);



        closeAct = new QAction(tr("Close"), this);
        closeAct->setShortcut(tr("Ctrl+W"));
        connect(closeAct, &QAction::triggered, this, &cm_basewindow::close);

        //printAct = new QAction(tr("&Print..."), this);
        //printAct->setShortcuts(QKeySequence::Print);
        //printAct->setStatusTip(tr("Print the document"));
        //connect(printAct, &QAction::triggered, this, &cm_basewindow::print);

        exitAct = new QAction(tr("E&xit"), this);
        exitAct->setShortcuts(QKeySequence::Quit);
        connect(exitAct, &QAction::triggered, this, &QApplication::quit);

        undoAct = new QAction(tr("&Undo"), this);
        undoAct->setShortcuts(QKeySequence::Undo);
        //undoAct->setStatusTip(tr("Undo the last operation"));
        //connect(undoAct, &QAction::triggered, this, &cm_basewindow::undo);

        redoAct = new QAction(tr("&Redo"), this);
        redoAct->setShortcuts(QKeySequence::Redo);
        //redoAct->setStatusTip(tr("Redo the last operation"));
        //connect(redoAct, &QAction::triggered, this, &cm_basewindow::redo);

        cutAct = new QAction(tr("Cu&t"), this);
        cutAct->setShortcuts(QKeySequence::Cut);
        //cutAct->setStatusTip(tr("Cut the current selection's contents to the "
        //                        "clipboard"));
        //connect(cutAct, &QAction::triggered, this, &cm_basewindow::cut);

        copyAct = new QAction(tr("&Copy"), this);
        copyAct->setShortcuts(QKeySequence::Copy);
        //copyAct->setStatusTip(tr("Copy the current selection's contents to the "
        //                        "clipboard"));
        //connect(copyAct, &QAction::triggered, this, &cm_basewindow::copy);

        pasteAct = new QAction(tr("&Paste"), this);
        pasteAct->setShortcuts(QKeySequence::Paste);
        //pasteAct->setStatusTip(tr("Paste the clipboard's contents into the current "
        //                         "selection"));
        //connect(pasteAct, &QAction::triggered, this, &cm_basewindow::paste);

        pasteAct = new QAction(tr("&Paste"), this);
        pasteAct->setShortcuts(QKeySequence::Paste);

        dspOnAct = new QAction(tr("DSP On"), this);
        dspOnAct->setShortcut(tr("Ctrl+/"));
        connect(dspOnAct, &QAction::triggered, this, &cm_basewindow::dspOn);

        dspOffAct = new QAction(tr("DSP Off"), this);
        dspOffAct->setShortcut(tr("Ctrl+."));
        connect(dspOffAct, &QAction::triggered, this, &cm_basewindow::dspOff);

        pdWindowAct = new QAction(tr("Pd Window"), this);
        pdWindowAct->setShortcut(tr("Ctrl+R"));
        connect(pdWindowAct, &QAction::triggered, this, &cm_menu::pdWindow);

    }



    void createMenus()
    {
        fileMenu = menuBar()->addMenu(tr("&File"));
        fileMenu->addAction(newAct);
        fileMenu->addAction(openAct);
        //QMenu *recent =
        fileMenu->addMenu(tr("Open Recent"));

        fileMenu->addAction(closeAct);
        fileMenu->addSeparator();
        fileMenu->addAction(saveAct);
        fileMenu->addAction(saveAsAct);
        fileMenu->addSeparator();
        fileMenu->addAction(exitAct);



        editMenu = menuBar()->addMenu(tr("&Edit"));
        editMenu->addAction(undoAct);
        editMenu->addAction(redoAct);
        editMenu->addSeparator();
        editMenu->addAction(cutAct);
        editMenu->addAction(copyAct);
        editMenu->addAction(pasteAct);
        editMenu->addSeparator();

        putMenu = menuBar()->addMenu(tr("&Put"));

        findMenu = menuBar()->addMenu(tr("&Find"));
        findMenu->addSeparator();

        mediaMenu = menuBar()->addMenu(tr("&Media"));
        mediaMenu->addAction(dspOnAct);
        mediaMenu->addAction(dspOffAct);
        mediaMenu->addSeparator();

        windowMenu = menuBar()->addMenu(tr("&Window"));
        windowMenu->addAction(pdWindowAct);
        windowMenu->addSeparator();


    }

private:
    Ui::cm_basewindow *ui;




    QMenu *findMenu;
    QMenu *mediaMenu;
    QMenu *windowMenu;

    QAction *newAct;
    QAction *openAct;
    QAction *closeAct;
    QAction *messageAct;

    QAction *exitAct;
    QAction *undoAct;
    QAction *redoAct;
    QAction *cutAct;
    QAction *copyAct;
    QAction *pasteAct;



    QAction *dspOnAct;
    QAction *dspOffAct;

    QAction *pdWindowAct;
public:


    QAction *saveAct;
    QAction *saveAsAct;


    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *putMenu;

private slots:

    void close();

    void dspOn();
    void dspOff();

    void pdWindow();


};

#endif // MAINWINDOW_H
