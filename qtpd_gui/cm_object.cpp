#include "cm_object.h"

namespace cm{

UIObject::UIObject(UIWidget *parent) : UIWidget(parent)
{
    this->errorBox_ = false;

    this->sizeBox = new SizeBox(this);
    this->sizeBox->hide();

    this->setAttribute(Qt::WA_Hover, true);

   connect(this->sizeBox, &SizeBox::resizeBoxEvent, this, &UIObject::resizeBox);

   this->initProperties();
}

void UIObject::resizeBox(int dx)
{
    this->setFixedWidth(this->width() + dx);
};

}
