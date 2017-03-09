#include "cm_object.h"


cm_object::cm_object(cm_widget *parent) : cm_widget(parent)
{
    this->errorBox_ = false;

    this->sizeBox = new cm_sizebox(this);
    this->sizeBox->show();
}
