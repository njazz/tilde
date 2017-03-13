#ifndef CM_PDWINDOW_H
#define CM_PDWINDOW_H

#include "cm_basewindow.h"

#include <QMainWindow>
#include <QtWidgets>

#include "cm_pdlink.h"

#include "cm_preferences.h"

//temporary

namespace Ui {
class cm_pdwindow;
}

namespace qtpd
{
////
/// \brief Pd console window
///
class PdWindow : public BaseWindow
{
    Q_OBJECT

private:
    Ui::cm_pdwindow *ui;

public:
    PdWindow();

    void cm_log(std::string text);
    void cm_post(std::string text);


};

//fix - normal singleton here
static PdWindow* pdw;

}

#endif // CM_PDWINDOW_H
