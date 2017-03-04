#include "cmo_box.h"

cmo_box::cmo_box(cm_widget *parent) : cm_widget(parent)
{

    //this->setFixedSize(65,20);
    this->setFixedHeight(20);
    this->setMinimumWidth(22);
    this->setMouseTracking(true);

    this->deselect();// = false;

    //this->setAttribute(Qt::WA_NoMousePropagation);

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, QColor(240,240,240));
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->isErrorBox = false;

}

//cmo_box::cmo_box(cm_widget *parent, QStringList stringList) : cm_widget(parent)
//{

//}





///////////////////


//void cm_box::boxInMousePressed()
//{}
//void cm_box::boxInMouseReleased()
//{}
//void cm_box::boxInMouseEntered()
//{}
//void cm_box::boxInMouseLeaved()
//{}

//void cm_box::boxOutMousePressed()
//{}
//void cm_box::boxOutMouseReleased()
//{}
//void cm_box::boxOutMouseEntered()
//{}
//void cm_box::boxOutMouseLeaved()
//{}
