// (c) 2017 Alex Nadzharov
// License: GPL3

#include "BaseWindow.h"
#include "ui_cm_basewindow.h"
#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QtGui>

#include "CanvasView.h"
#include <UIBox.h>

#include "AudioSettings.h"
#include "Preferences.h"
#include "PropertiesWindow.h"

#include "FileParser.h"
#include "PatchWindow.h" //weird
#include "PdWindow.h"

#include "ApplicationController.h"

namespace qtpd {
BaseWindow::BaseWindow(QWidget* parent)
    :

    QMainWindow(parent)
    , ui(new Ui::cm_basewindow)
{
    ui->setupUi(this);

    createActions();
    createMenus();

    _appController = 0;
}

//BaseWindow::~BaseWindow()
//{
//    delete ui;
//}

void BaseWindow::setAppController(ApplicationController* appController)
{
    _appController = appController;

    if (!appController) {
        qDebug() << "bad app controller pointer";
        return;
    }

    connect(newAct, &QAction::triggered, _appController, &ApplicationController::newPatchWindowController);
    connect(openAct, &QAction::triggered, _appController, &ApplicationController::openFileDialog);
    connect(pdWindowAct, &QAction::triggered, _appController, &ApplicationController::pdWindow);
    connect(pythonConsoleAct, &QAction::triggered, _appController, &ApplicationController::pythonConsole);
    connect(pdAudioSettingsAct, &QAction::triggered, _appController, &ApplicationController::audioSettingsWindow);
    connect(pdPreferencesAct, &QAction::triggered, _appController, &ApplicationController::preferencesWindow);

    connect(dspOnAct, &QAction::triggered, _appController, &ApplicationController::dspOn);
    connect(dspOffAct, &QAction::triggered, _appController, &ApplicationController::dspOff);
}

// ---------

void BaseWindow::createActions()
{
    newAct = new QAction(tr("&New"), this);
    newAct->setShortcuts(QKeySequence::New);

    openAct = new QAction(tr("&Open..."), this);
    openAct->setShortcuts(QKeySequence::Open);

    saveAct = new QAction(tr("&Save"), this);
    saveAct->setShortcuts(QKeySequence::Save);

    saveAsAct = new QAction(tr("&Save As..."), this);
    saveAsAct->setShortcuts(QKeySequence::SaveAs);

    closeAct = new QAction(tr("Close"), this);
    closeAct->setShortcut(tr("Ctrl+W"));
    connect(closeAct, &QAction::triggered, this, &BaseWindow::close);

    messageAct = new QAction(tr("Message..."), this);
    messageAct->setShortcut(tr("Ctrl+Shift+M"));

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

    redoAct = new QAction(tr("&Redo"), this);
    redoAct->setShortcuts(QKeySequence::Redo);
    //redoAct->setStatusTip(tr("Redo the last operation"));

    cutAct = new QAction(tr("Cu&t"), this);
    cutAct->setShortcuts(QKeySequence::Cut);
    //cutAct->setStatusTip(tr("Cut the current selection's contents to the "

    copyAct = new QAction(tr("&Copy"), this);
    copyAct->setShortcuts(QKeySequence::Copy);
    //copyAct->setStatusTip(tr("Copy the current selection's contents to the "

    duplicateAct = new QAction(tr("Duplicate"), this);
    duplicateAct->setShortcut(tr("Ctrl+D"));

    pasteAct = new QAction(tr("&Paste"), this);
    pasteAct->setShortcuts(QKeySequence::Paste);
    //pasteAct->setStatusTip(tr("Paste the clipboard's contents into the current "

    dspOnAct = new QAction(tr("DSP On"), this);
    dspOnAct->setShortcut(tr("Ctrl+/"));

    dspOffAct = new QAction(tr("DSP Off"), this);
    dspOffAct->setShortcut(tr("Ctrl+."));

    pdWindowAct = new QAction(tr("Pd Window"), this);
    pdWindowAct->setShortcut(tr("Ctrl+R"));

    pythonConsoleAct = new QAction(tr("Python Console"), this);
    pythonConsoleAct->setShortcut(tr("Ctrl+Alt+R"));

    pdAudioSettingsAct = new QAction(tr("Audio / MIDI Settings..."), this);
    pdAudioSettingsAct->setShortcut(tr("Ctrl+Shift+,"));

    //moves to app menu on mac
    pdPreferencesAct = new QAction(tr("Preferences..."), this);
    pdPreferencesAct->setShortcut(tr("Ctrl+,"));

    pdKeyBindingsAct = new QAction(tr("Key bindings..."), this);

    pdHelpAct = new QAction(tr("Pd help"), this);
}

////
/// \brief create all menus
///
void BaseWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);
    //QMenu *recent =
    fileMenu->addMenu(tr("Open Recent"));
    fileMenu->addSeparator();
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
    editMenu->addAction(duplicateAct);
    editMenu->addAction(pasteAct);
    editMenu->addSeparator();

    putMenu = menuBar()->addMenu(tr("&Put"));

    arrangeMenu = menuBar()->addMenu(tr("&Arrange"));

    findMenu = menuBar()->addMenu(tr("&Find"));
    findMenu->addSeparator();

    mediaMenu = menuBar()->addMenu(tr("&Media"));
    mediaMenu->addAction(dspOnAct);
    mediaMenu->addAction(dspOffAct);
    //mediaMenu->addSeparator();

    windowMenu = menuBar()->addMenu(tr("&Window"));
    windowMenu->addAction(pdWindowAct);
    windowMenu->addAction(pythonConsoleAct);
    windowMenu->addSeparator();
    windowMenu->addAction(pdAudioSettingsAct);
    windowMenu->addAction(pdPreferencesAct);
    windowMenu->addAction(pdKeyBindingsAct);
    windowMenu->addSeparator();

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(pdHelpAct);
}

//////////////////////////////////////

void BaseWindow::close()
{
    ((QMainWindow*)this)->close();
}
}
