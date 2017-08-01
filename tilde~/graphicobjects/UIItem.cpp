// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIItem.h"

#include <QDebug>
#include <QWidget>

namespace tilde {
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

QPainterPath UIItem::shape() const
{
    QPainterPath path;
    path.addRect(boundingRect().toRect());
    return path;
}

void UIItem::move(float x, float y)
{
    _pos = QPoint(x, y);
    setPos(_pos.x(), _pos.y());
}
void UIItem::move(QPoint pos)
{
    _pos = QPoint(pos.x(), pos.y());
    setPos(_pos.x(), _pos.y());
}
void UIItem::move(QPointF pos)
{
    _pos = QPoint(pos.x(), pos.y());
    setPos(_pos.x(), _pos.y());
}
}
