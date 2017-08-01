#ifndef CM_PDWINDOW_H
#define CM_PDWINDOW_H

#include "BaseWindow.h"

#include <QMainWindow>
#include <QtWidgets>

#include "Preferences.h"

#include "UIDSP.h"

//temporary

namespace Ui {
class cm_pdwindow;
}

namespace tilde {
////
/// \brief Pd console window
///
class PdWindow : public BaseWindow {
    Q_OBJECT

private:
    Ui::cm_pdwindow* _ui;

    ~PdWindow(){};

    QAction* _clearConsoleAct;

    Q_SLOT void logBoxChange(int index);
    Q_SLOT void sendMessageChanged();
    Q_SLOT void focusOnSendMessage();
    Q_SLOT void editSendMessage(QString);

    QCompleter* _sendMessageCompleter;
    QStringListModel* _sendMessageCompleterModel;

public:
    PdWindow();

signals:
    void postSignal(QString text);

public slots:
    void postSlot(QString text);
    void clearConsoleSlot();
};
}

#endif // CM_PDWINDOW_H
