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

private:
    Ui::cm_basewindow* _ui;

    QMenu* _findMenu;
    QMenu* _mediaMenu;
    QMenu* _windowMenu;

    QAction* _newAct;

    QAction* _closeAct;
    QAction* _messageAct;

    QAction* _exitAct;

    QAction* _undoAct;
    QAction* _redoAct;

    QAction* _dspOnAct;
    QAction* _dspOffAct;

    QAction* _pdWindowAct;
    QAction* _pythonConsoleAct;
    QAction* _pdAudioSettingsAct;
    QAction* _pdPreferencesAct;
    QAction* _pdKeyBindingsAct;

    QAction* _pdHelpAct;

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
};
}

#endif // MAINWINDOW_H
