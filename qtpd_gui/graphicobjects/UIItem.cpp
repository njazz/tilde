// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIItem.h"

#include <QDebug>

namespace qtpd {
UIItem::UIItem(QGraphicsObject* parent)
    : QGraphicsObject(parent)
{
    setParent(parent);

    _selected = false;
    setScale(1.);
    _editMode = 0;

    _hover = false;
    _size = QSize(0, 0);
    _pos = QPoint(0, 0);

    _bgColor = QColor(250, 250, 250);

    setAcceptHoverEvents(true);
}

//-------------------------------

void UIItem::select()
{
    _selected = true;
}

void UIItem::deselect()
{
    _selected = false;
}

bool UIItem::isSelected() { return _selected; }

void UIItem::setEditModeRef(t_editMode* canvasEditModeRef)
{

    _editMode = canvasEditModeRef;

    qDebug() << "editmode ref" << (long)_editMode;
}

t_editMode* UIItem::getEditModeRef()
{
    return _editMode;
}

t_editMode UIItem::getEditMode()
{

    return (_editMode) ? (*_editMode) : em_Unlocked;
}

void UIItem::setScale(float newScale)
{
    _scale = newScale;
}

float UIItem::scale()
{
    return _scale;
}
}
