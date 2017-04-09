#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

//#include "BaseMenu.h"

#include "PdLink.h"

#ifdef WITH_PYTHON

#include "python/PythonQtScriptingConsole.h"

#endif

namespace Ui {
class cm_basewindow;
}

namespace qtpd {
////
/// \brief Base class for windows (patch, pd)
///
class BaseWindow : public QMainWindow {
    Q_OBJECT

private:

    static PythonQtScriptingConsole* pythonConsole_;

public:
    explicit BaseWindow(QWidget* parent = 0);
    //~BaseWindow();

    ////
    /// \brief create menu actions (File, Edit)
    ///
    void createActions();

    ////
    /// \brief create all menus
    ///
    void createMenus();



private:
    Ui::cm_basewindow* ui;

    QMenu* findMenu;
    QMenu* mediaMenu;
    QMenu* windowMenu;

    QAction* newAct;

    QAction* closeAct;
    QAction* messageAct;

    QAction* exitAct;

    QAction* undoAct;
    QAction* redoAct;

    QAction* dspOnAct;
    QAction* dspOffAct;

    QAction* pdWindowAct;
    QAction* pythonConsoleAct;
    QAction* pdAudioSettingsAct;
    QAction* pdPreferencesAct;
    QAction* pdKeyBindingsAct;

    QAction* pdHelpAct;

public:
    QAction* openAct;

    QAction* saveAct;
    QAction* saveAsAct;

    QAction* cutAct;
    QAction* copyAct;
    QAction* duplicateAct;
    QAction* pasteAct;

    QMenu* fileMenu;
    QMenu* editMenu;
    QMenu* putMenu;
    QMenu* arrangeMenu;

    QMenu* helpMenu;

private slots:

    void close();

    void dspOn();
    void dspOff();



    void preferencesWindow();
    void audioSettingsWindow();

    static void newFile();
    static void open();

    static void pdWindow();
    static void pythonConsole();
};
}

#endif // MAINWINDOW_H
