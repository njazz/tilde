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

namespace qtpd {
////
/// \brief Pd console window
///
class PdWindow : public BaseWindow {
    Q_OBJECT

private:
    Ui::cm_pdwindow* ui;

    ~PdWindow(){};

    Q_SLOT void logBoxChange(int index);

public:
    PdWindow();

signals:
    void postSignal(QString text);
public slots:
    void postSlot(QString text);
};

//fix - normal singleton here
//static PdWindow* pdw;
}

#endif // CM_PDWINDOW_H
