// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIWidget.h"

namespace qtpd {
UIWidget::UIWidget(QGraphicsView* parent)
    : QGraphicsView(parent)
{
    _selected = false;
    setScale(1.);
    _editMode = 0;

    setStyleSheet( "QGraphicsView { border-style: none; }" );
}

//-------------------------------

void UIWidget::select()
{
    _selected = true;
    if (scene()) scene()->update(sceneRect());
}

void UIWidget::deselect()
{
    _selected = false;
    if (scene()) scene()->update(sceneRect());
}

bool UIWidget::isSelected() { return _selected; }

void UIWidget::setEditModeRef(t_editMode* canvasEditMode)
{
    _editMode = canvasEditMode;
}

t_editMode* UIWidget::getEditModeRef()
{
    return _editMode;
}

t_editMode UIWidget::getEditMode()
{
    return (_editMode) ? (*_editMode) : em_Unlocked;
}

void UIWidget::setScale(float newScale)
{
    _scale = newScale;
}

float UIWidget::scale()
{
    return _scale;
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
