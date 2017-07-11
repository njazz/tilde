#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

namespace Ui {
class cm_basewindow;
}

namespace qtpd {

class ApplicationController;

////
/// \brief Base class for windows (patch, pd)
///
class BaseWindow : public QMainWindow {
    Q_OBJECT

    ApplicationController* _appController;

    QMenu* _recentMenu;

public:
    explicit BaseWindow(QWidget* parent = 0);

    void setAppController(ApplicationController* appController);

    ////
    /// \brief create menu actions (File, Edit)
    ///
    void createActions();

    ////
    /// \brief create all menus
    ///
    void createMenus();

    void setRecentMenu(QMenu* menu);

private:
    Ui::cm_basewindow* _ui;

    QMenu* _findMenu;
    QMenu* _mediaMenu;
    QMenu* _windowMenu;

    QAction* _newAct;

    QAction* _exitAct;

    QAction* _dspOnAct;
    QAction* _dspOffAct;

    QAction* _pdWindowAct;
    QAction* _pythonConsoleAct;
    QAction* _pdAudioSettingsAct;
    QAction* _pdPreferencesAct;
    QAction* _pdKeyBindingsAct;

    QAction* _pdHelpAct;

public:
    QAction* messageAct;

    QAction* openAct;

    QAction* saveAct;
    QAction* saveAsAct;

    QAction* closeAct;

    QAction* cutAct;
    QAction* copyAct;
    QAction* duplicateAct;
    QAction* pasteAct;

    QAction* undoAct;
    QAction* redoAct;

    QMenu* fileMenu;
    QMenu* editMenu;
    QMenu* putMenu;
    QMenu* arrangeMenu;

    QMenu* helpMenu;

private slots:

    void close();
};
}

#endif // MAINWINDOW_H
