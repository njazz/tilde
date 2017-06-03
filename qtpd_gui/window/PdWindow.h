#ifndef CM_PDWINDOW_H
#define CM_PDWINDOW_H

#include "BaseWindow.h"

#include <QMainWindow>
#include <QtWidgets>

#include "PdLink.h"

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

public:
    PdWindow();
    //    static PdWindow* inst()
    //    {
    //        static PdWindow* instance;
    //        //instance.setParent(0);

    //        if (!instance) {
    //            instance = new PdWindow();
    //            qDebug() << "singleton lol";
    //        }

    //        return instance;
    //    }

    void cm_post(QString text);

signals:
    void cm_log_signal(QString text);
public slots:
    void cm_log(QString text);

    //    void resizeEvent();
};

//fix - normal singleton here
//static PdWindow* pdw;
}

#endif // CM_PDWINDOW_H
