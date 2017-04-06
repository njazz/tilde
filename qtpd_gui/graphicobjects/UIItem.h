// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UIITEM_H
#define UIITEM_H

#include <QGraphicsObject>
#include <QWidget>

#include <QDebug>

// Widget extension
// check / fix

#include "common_types.h"

namespace qtpd {

////
/// \brief parent class for all objects in the canvas
///
class UIItem : public QGraphicsObject {
    Q_OBJECT

private:
    bool _selected;
    bool _hover;

    t_editMode* _editMode;
    float _scale;

    // ---
    QSize _size;
    QPoint _pos; //?
    QColor _bgColor;

public:
    QPoint dragOffset;

    explicit UIItem(QGraphicsObject* parent = 0);

    ////
    /// \brief select object
    ///
    void select();

    ////
    /// \brief deselect object
    ///
    void deselect();

    ////
    /// \brief get object's selected flag
    /// \return
    ///
    bool isSelected();

    ////
    /// \brief sets pointer to edit mode flag in parent canvas
    /// \details this is set by "constructor" (createObj etc) in canvas
    /// \param canvasEditMode
    ///
    virtual void setEditModeRef(t_editMode* canvasEditModeRef);

    ////
    /// \brief get edit mode pointer - for inlets/outlets
    /// \return
    ///
    virtual t_editMode* getEditModeRef();

    ////
    /// \brief get edit mode flag value
    /// \return
    ///
    t_editMode getEditMode();

    ////
    /// \brief temporary. scale value for zoom
    /// \param scale_
    ///
    void setScale(float newScale);

    ////
    /// \brief temporary. scale value for zoom
    ///
    float scale();

    // ---------

    void setSize(QSize size) { _size = size; }
    void setSize(float w, float h) { _size = QSize(w, h); }
    void setWidth(float w) { _size.setWidth(w); }
    void setHeight(float h) { _size.setHeight(h); }

    void move(float x, float y)
    {
        _pos = QPoint(x, y);
        setPos(_pos.x(), _pos.y());
    }
    void move(QPoint pos)
    {
        _pos = QPoint(pos.x(), pos.y());
        setPos(_pos.x(), _pos.y());
    }
    void move(QPointF pos)
    {
        _pos = QPoint(pos.x(), pos.y());
        setPos(_pos.x(), _pos.y());
    }

    float width() { return _size.width(); }
    float height() { return _size.height(); }

    QSize size() { return _size; }

    QRectF boundingRect() const
    {
        return QRectF(0, 0, _size.width(), _size.height());
    }

    QPainterPath shape() const
    {
        QPainterPath path;
        path.addRect(boundingRect().toRect());
        return path;
    }

    void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*){};

    QColor bgColor() { return _bgColor; }
    void setBgColor(QColor bgc) { _bgColor = bgc; }

    bool hover() { return _hover; }
    void setHover(bool h) { _hover = h; }

    virtual void resizeEvent() {}

signals:

    void mousePressed(UIItem* obj, QGraphicsSceneMouseEvent* ev);
    void mouseReleased(UIItem* obj, QGraphicsSceneMouseEvent* ev);
    //    void mouseEntered();
    //    void mouseLeaved();

    void selectBox(UIItem* box, QGraphicsSceneMouseEvent* event);
    void moveBox(UIItem* box, QGraphicsSceneMouseEvent* event);

public slots:
};
}

#endif // CM_WIDGET_H
