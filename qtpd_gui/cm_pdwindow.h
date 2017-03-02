#ifndef CM_PDWINDOW_H
#define CM_PDWINDOW_H

#include "cm_basewindow.h"

#include <QMainWindow>
#include <QtWidgets>

#include "cm_pdlink.h"

//temporary


namespace Ui {
class cm_pdwindow;
}


class cm_pdwindow : public cm_basewindow
{
    Q_OBJECT

private:
    Ui::cm_pdwindow *ui;

public:
    cm_pdwindow();

    void cm_log(std::string text);


};

//fix - normal singleton here
static cm_pdwindow* pdw;



#endif // CM_PDWINDOW_H
