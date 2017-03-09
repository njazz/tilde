#include "cm_widget.h"

cm_widget::cm_widget(QWidget *parent) : QWidget(parent)
{
    this->selected_ = false;
    this->setScale(1.);
    this->editMode_ = 0;

}



void cm_widget::s_MousePressed()
{}
void cm_widget::s_MouseReleased()
{}
void cm_widget::s_MouseEntered()
{}
void cm_widget::s_MouseLeaved()
{}


void cm_widget::s_InMousePressed(cm_widget* obj, QMouseEvent* ev)
{}
void cm_widget::s_InMouseReleased(cm_widget* obj, QMouseEvent* ev)
{}
void cm_widget::s_InMouseEntered()
{}
void cm_widget::s_InMouseLeaved()
{}


void cm_widget::s_OutMousePressed(cm_widget* obj, QMouseEvent* ev)
{}
void cm_widget::s_OutMouseReleased(cm_widget* obj, QMouseEvent* ev)
{}
void cm_widget::s_OutMouseEntered()
{}
void cm_widget::s_OutMouseLeaved()
{}
