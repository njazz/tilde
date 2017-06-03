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

//#include "BaseWindow.h"

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

#ifdef WITH_PYTHON
    PythonQtObjectPtr mainContext = PythonQt::self()->getMainModule();
    pythonConsole_ = new PythonQtScriptingConsole(NULL, mainContext);
    qDebug("pyConsole %lu", (long)pythonConsole_);
#endif
}

//BaseWindow::~BaseWindow()
//{
//    delete ui;
//}

// ---------

void BaseWindow::createActions()
{
    newAct = new QAction(tr("&New"), this);
    newAct->setShortcuts(QKeySequence::New);
    connect(newAct, &QAction::triggered, this, &BaseWindow::newFile);

    openAct = new QAction(tr("&Open..."), this);
    openAct->setShortcuts(QKeySequence::Open);
    connect(openAct, &QAction::triggered, this, &BaseWindow::openFileDialog);

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

    duplicateAct = new QAction(tr("Duplicate"), this);
    duplicateAct->setShortcut(tr("Ctrl+D"));

    pasteAct = new QAction(tr("&Paste"), this);
    pasteAct->setShortcuts(QKeySequence::Paste);
    //pasteAct->setStatusTip(tr("Paste the clipboard's contents into the current "
    //                         "selection"));
    //connect(pasteAct, &QAction::triggered, this, &cm_basewindow::paste);

    dspOnAct = new QAction(tr("DSP On"), this);
    dspOnAct->setShortcut(tr("Ctrl+/"));
    connect(dspOnAct, &QAction::triggered, this, &BaseWindow::dspOn);

    dspOffAct = new QAction(tr("DSP Off"), this);
    dspOffAct->setShortcut(tr("Ctrl+."));
    connect(dspOffAct, &QAction::triggered, this, &BaseWindow::dspOff);

    pdWindowAct = new QAction(tr("Pd Window"), this);
    pdWindowAct->setShortcut(tr("Ctrl+R"));
    connect(pdWindowAct, &QAction::triggered, this, &BaseWindow::pdWindow);

    pythonConsoleAct = new QAction(tr("Python Console"), this);
    pythonConsoleAct->setShortcut(tr("Ctrl+Alt+R"));
    connect(pythonConsoleAct, &QAction::triggered, this, &BaseWindow::pythonConsole);

    pdAudioSettingsAct = new QAction(tr("Audio / MIDI Settings..."), this);
    pdAudioSettingsAct->setShortcut(tr("Ctrl+Shift+,"));
    connect(pdAudioSettingsAct, &QAction::triggered, this, &BaseWindow::audioSettingsWindow);
    //pdAudioSettingsAct->setShortcut(tr("Ctrl+R"));

    //moves to app menu on mac
    pdPreferencesAct = new QAction(tr("Preferences..."), this);
    pdPreferencesAct->setShortcut(tr("Ctrl+,"));
    connect(pdPreferencesAct, &QAction::triggered, this, &BaseWindow::preferencesWindow);

    pdKeyBindingsAct = new QAction(tr("Key bindings..."), this);
    //pdKeyBindingsAct->setShortcut(tr("Ctrl+R"));

    //        QAction *pdAudioSettingsAct;
    //        QAction *pdPreferencesAct;
    //        QAction *pdKeyBindingsAct;

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
    // ?
    //cm_menu::close(this);

    ((QMainWindow*)this)->close();
}

//////////////////////////////////////

// TODO move to AppController

void BaseWindow::dspOn()
{
    cmp_switch_dsp(true);
    dspOnAct->setChecked(true);
}

void BaseWindow::dspOff()
{
    cmp_switch_dsp(false);
    dspOnAct->setChecked(false);
}


// TODO move to AppController

void BaseWindow::preferencesWindow()
{
    qDebug() << "preferences";
    PropertyList* l1 = &Preferences::inst();
    PropertiesWindow* p1 = new PropertiesWindow(l1);
    p1->setWindowTitle("Qtpd preferences");
    p1->move(30, 30);
    p1->show();
}

void BaseWindow::audioSettingsWindow()
{
    qDebug() << "audio settings";
    PropertyList* l1 = &AudioSettings::inst();
    PropertiesWindow* p1 = new PropertiesWindow(l1);
    p1->setWindowTitle("Audio settings");
    p1->move(30, 30);
    p1->show();
}

#ifdef WITH_PYTHON

PythonQtScriptingConsole* BaseWindow::pythonConsole_;

#endif

////
/// \brief new patch window
///
void BaseWindow::newFile()
{
    PatchWindow* newWindow = PatchWindow::newWindow();
    newWindow->show();

    // NEW 0517
    //_appController->newPatchWindowController();
}

////
/// \brief new patch window from file
///
void BaseWindow::openFileDialog()
{
    QString fname = QFileDialog::getOpenFileName(0, QString("Open patch"), QString("~/"), QString("*.pd"), 0, 0);
    if (fname != "")
        FileParser::open(fname);

    // NEW 0517
    //_appController->openFileDialog();
}

////
/// \brief show/hide Pd console
///
void BaseWindow::pdWindow()
{
    //PdWindow::inst()->setAppController(_appController);


//    if (PdWindow::inst()->isVisible())
//        PdWindow::inst()->hide();
//    else
//        PdWindow::inst()->show();

}

void BaseWindow::pythonConsole()
{

    //_appController->pythonConsole();


#ifdef WITH_PYTHON
    if (pythonConsole_) {
        if (pythonConsole_->isVisible())
            pythonConsole_->hide();
        else {
            pythonConsole_->show();
        }
    }

#else
    cmp_post("This build is compiled without Python!");
#endif

}
}
