#ifndef CM_PDWINDOW_H
#define CM_PDWINDOW_H

#include "BaseWindow.h"

#include <QMainWindow>
#include <QtWidgets>

#include "PdLink.h"

#include "Preferences.h"

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

    PdWindow();

    ~PdWindow(){};

public:
    static PdWindow* inst()
    {
        static PdWindow* instance;
        //instance.setParent(0);

        if (!instance)
            instance = new PdWindow();

        return instance;
    }

    void cm_log(std::string text);
    void cm_post(std::string text);

    void resizeEvent();
};

//fix - normal singleton here
//static PdWindow* pdw;
}

#endif // CM_PDWINDOW_H
