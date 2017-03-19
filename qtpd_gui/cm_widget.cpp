// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_widget.h"

namespace qtpd {
UIWidget::UIWidget(QWidget* parent)
    : QWidget(parent)
{
    this->selected_ = false;
    this->setScale(1.);
    this->editMode_ = 0;
}

//-------------------------------

void UIWidget::select()
{
    this->selected_ = true;
    this->repaint();
}

void UIWidget::deselect()
{
    this->selected_ = false;
    this->repaint();
}

bool UIWidget::isSelected() { return this->selected_; }

void UIWidget::setEditModeRef(t_editMode* canvasEditMode)
{
    this->editMode_ = canvasEditMode;
}

t_editMode* UIWidget::getEditModeRef()
{
    return this->editMode_;
}

t_editMode UIWidget::getEditMode()
{
    return (this->editMode_) ? (*this->editMode_) : em_Unlocked;
}

void UIWidget::setScale(float newScale)
{
    this->scale_ = newScale;
}

float UIWidget::scale()
{
    return this->scale_;
}

//--------------------------------------------

void UIWidget::s_InMousePressed(UIWidget* obj, QMouseEvent* ev)
{
}
void UIWidget::s_InMouseReleased(UIWidget* obj, QMouseEvent* ev)
{
}
//void UIWidget::s_InMouseEntered()
//{}
//void UIWidget::s_InMouseLeaved()
//{}

void UIWidget::s_OutMousePressed(UIWidget* obj, QMouseEvent* ev)
{
}
void UIWidget::s_OutMouseReleased(UIWidget* obj, QMouseEvent* ev)
{
}
//void UIWidget::s_OutMouseEntered()
//{}
//void UIWidget::s_OutMouseLeaved()
//{}
}
