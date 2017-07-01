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
    , _ui(new Ui::cm_basewindow)
{
    _ui->setupUi(this);

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

    connect(_newAct, &QAction::triggered, _appController, &ApplicationController::newPatchWindowController);
    connect(openAct, &QAction::triggered, _appController, &ApplicationController::openFileDialog);
    connect(_pdWindowAct, &QAction::triggered, _appController, &ApplicationController::pdWindow);
    connect(_pythonConsoleAct, &QAction::triggered, _appController, &ApplicationController::pythonConsole);
    connect(_pdAudioSettingsAct, &QAction::triggered, _appController, &ApplicationController::audioSettingsWindow);
    connect(_pdPreferencesAct, &QAction::triggered, _appController, &ApplicationController::preferencesWindow);

    connect(_dspOnAct, &QAction::triggered, _appController, &ApplicationController::dspOn);
    connect(_dspOffAct, &QAction::triggered, _appController, &ApplicationController::dspOff);
}

// ---------

void BaseWindow::createActions()
{
    _newAct = new QAction(tr("&New"), this);
    _newAct->setShortcuts(QKeySequence::New);

    openAct = new QAction(tr("&Open..."), this);
    openAct->setShortcuts(QKeySequence::Open);

    saveAct = new QAction(tr("&Save"), this);
    saveAct->setShortcuts(QKeySequence::Save);

    saveAsAct = new QAction(tr("&Save As..."), this);
    saveAsAct->setShortcuts(QKeySequence::SaveAs);

    _closeAct = new QAction(tr("Close"), this);
    _closeAct->setShortcut(tr("Ctrl+W"));
    connect(_closeAct, &QAction::triggered, this, &BaseWindow::close);

    _messageAct = new QAction(tr("Message..."), this);
    _messageAct->setShortcut(tr("Ctrl+Shift+M"));

    //printAct = new QAction(tr("&Print..."), this);
    //printAct->setShortcuts(QKeySequence::Print);
    //printAct->setStatusTip(tr("Print the document"));
    //connect(printAct, &QAction::triggered, this, &cm_basewindow::print);

    _exitAct = new QAction(tr("E&xit"), this);
    _exitAct->setShortcuts(QKeySequence::Quit);
    connect(_exitAct, &QAction::triggered, this, &QApplication::quit);

    _undoAct = new QAction(tr("&Undo"), this);
    _undoAct->setShortcuts(QKeySequence::Undo);
    //undoAct->setStatusTip(tr("Undo the last operation"));

    _redoAct = new QAction(tr("&Redo"), this);
    _redoAct->setShortcuts(QKeySequence::Redo);
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

    _dspOnAct = new QAction(tr("DSP On"), this);
    _dspOnAct->setShortcut(tr("Ctrl+/"));

    _dspOffAct = new QAction(tr("DSP Off"), this);
    _dspOffAct->setShortcut(tr("Ctrl+."));

    _pdWindowAct = new QAction(tr("Pd Window"), this);
    _pdWindowAct->setShortcut(tr("Ctrl+R"));

    _pythonConsoleAct = new QAction(tr("Python Console"), this);
    _pythonConsoleAct->setShortcut(tr("Ctrl+Alt+R"));

    _pdAudioSettingsAct = new QAction(tr("Audio / MIDI Settings..."), this);
    _pdAudioSettingsAct->setShortcut(tr("Ctrl+Shift+,"));

    //moves to app menu on mac
    _pdPreferencesAct = new QAction(tr("Preferences..."), this);
    _pdPreferencesAct->setShortcut(tr("Ctrl+,"));

    _pdKeyBindingsAct = new QAction(tr("Key bindings..."), this);

    _pdHelpAct = new QAction(tr("Pd help"), this);
}

////
/// \brief create all menus
///
void BaseWindow::createMenus()
{
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(_newAct);
    fileMenu->addAction(openAct);
    //QMenu *recent =
    fileMenu->addMenu(tr("Open Recent"));
    fileMenu->addSeparator();
    fileMenu->addAction(_closeAct);
    fileMenu->addSeparator();
    fileMenu->addAction(saveAct);
    fileMenu->addAction(saveAsAct);
    fileMenu->addSeparator();
    fileMenu->addAction(_exitAct);

    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(_undoAct);
    editMenu->addAction(_redoAct);
    editMenu->addSeparator();
    editMenu->addAction(cutAct);
    editMenu->addAction(copyAct);
    editMenu->addAction(duplicateAct);
    editMenu->addAction(pasteAct);
    editMenu->addSeparator();

    putMenu = menuBar()->addMenu(tr("&Put"));

    arrangeMenu = menuBar()->addMenu(tr("&Arrange"));

    _findMenu = menuBar()->addMenu(tr("&Find"));
    _findMenu->addSeparator();

    _mediaMenu = menuBar()->addMenu(tr("&Media"));
    _mediaMenu->addAction(_dspOnAct);
    _mediaMenu->addAction(_dspOffAct);
    //mediaMenu->addSeparator();

    _windowMenu = menuBar()->addMenu(tr("&Window"));
    _windowMenu->addAction(_pdWindowAct);
    _windowMenu->addAction(_pythonConsoleAct);
    _windowMenu->addSeparator();
    _windowMenu->addAction(_pdAudioSettingsAct);
    _windowMenu->addAction(_pdPreferencesAct);
    _windowMenu->addAction(_pdKeyBindingsAct);
    _windowMenu->addSeparator();

    helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(_pdHelpAct);
}

//////////////////////////////////////

void BaseWindow::close()
{
    ((QMainWindow*)this)->close();
}
}
