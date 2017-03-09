#include "cm_widget.h"

namespace cm
{
UIWidget::UIWidget(QWidget *parent) : QWidget(parent)
{
    this->selected_ = false;
    this->setScale(1.);
    this->editMode_ = 0;

}



void UIWidget::s_MousePressed()
{}
void UIWidget::s_MouseReleased()
{}
void UIWidget::s_MouseEntered()
{}
void UIWidget::s_MouseLeaved()
{}


void UIWidget::s_InMousePressed(UIWidget* obj, QMouseEvent* ev)
{}
void UIWidget::s_InMouseReleased(UIWidget* obj, QMouseEvent* ev)
{}
void UIWidget::s_InMouseEntered()
{}
void UIWidget::s_InMouseLeaved()
{}


void UIWidget::s_OutMousePressed(UIWidget* obj, QMouseEvent* ev)
{}
void UIWidget::s_OutMouseReleased(UIWidget* obj, QMouseEvent* ev)
{}
void UIWidget::s_OutMouseEntered()
{}
void UIWidget::s_OutMouseLeaved()
{}

}
