// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_object.h"

namespace qtpd {

UIObject::UIObject(UIWidget* parent)
    : UIWidget(parent)
{
    this->errorBox_ = false;

    this->setPdObject(0);

    this->inlets_ = new portVec;
    this->outlets_ = new portVec;

    this->sizeBox = new SizeBox(this);
    this->sizeBox->hide();

    this->setAttribute(Qt::WA_Hover, true);

    connect(this->sizeBox, &SizeBox::resizeBoxEvent, this, &UIObject::resizeBox);

    // repaint, handling for threads
    connect(this, &UIObject::callRepaint, this, &UIObject::s_repaint);

    this->initProperties();
}

void UIObject::resizeBox(int dx)
{
    this->setFixedWidth(this->width() + dx);
};
}
