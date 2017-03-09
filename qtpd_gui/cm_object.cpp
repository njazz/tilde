#include "cm_object.h"

namespace cm{

UIObject::UIObject(UIWidget *parent) : UIWidget(parent)
{
    this->errorBox_ = false;

    this->sizeBox = new SizeBox(this);
    this->sizeBox->show();
}

}
