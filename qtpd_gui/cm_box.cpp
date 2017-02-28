#include "cm_box.h"

cm_box::cm_box(cm_widget *parent) : cm_widget(parent)
{

    this->setFixedSize(65,20);
    this->setMouseTracking(true);

    this->selected_ = false;

}




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
