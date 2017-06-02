// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UIITEM_H
#define UIITEM_H

#include <QGraphicsObject>
#include <QWidget>

#include <QDebug>

// Widget extension
// check / fix

#include "CommonTypes.h"

namespace qtpd {

////
/// \brief UIItem QGraphicsObject class
/// \details parent class for all objects in the canvas
class UIItem : public QGraphicsObject {
    Q_OBJECT

private:
    bool _selected;
    bool _hover;

    t_editMode* _editMode;

    QSize _size;
    QPoint _pos; //?
    QColor _bgColor;

public:
    QPoint dragOffset;

    explicit UIItem(QGraphicsObject* parent = 0);

    void setSize(QSize size) { _size = size; }
    void setSize(float w, float h) { _size = QSize(w, h); }
    void setWidth(float w) { _size.setWidth(w); }
    void setHeight(float h) { _size.setHeight(h); }

    float width() { return _size.width(); }
    float height() { return _size.height(); }

    QSize size() { return _size; }

    QColor bgColor() { return _bgColor; }
    void setBgColor(QColor bgc) { _bgColor = bgc; }

    bool hover() { return _hover; }
    void setHover(bool h) { _hover = h; }

    void select(); ///> select object
    void deselect(); ///> deselect object
    bool isSelected(); ///> get object's selected flag

    ////
    /// \brief sets pointer to edit mode flag in parent canvas
    /// \details this is set by "constructor" (createObj etc) in canvas
    /// \deprecated needs fix
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

    QRectF boundingRect() const { return QRectF(0, 0, _size.width(), _size.height()); }
    QPainterPath shape() const;

    void move(float x, float y);
    void move(QPoint pos);
    void move(QPointF pos);

    void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*){};

    virtual void resizeEvent() {}

signals:

    void mousePressed(UIItem* obj, QGraphicsSceneMouseEvent* ev);
    void mouseReleased(UIItem* obj, QGraphicsSceneMouseEvent* ev);

    void selectBox(UIItem* box, QGraphicsSceneMouseEvent* event);
    void moveBox(UIItem* box, QGraphicsSceneMouseEvent* event);

public slots:
};
}

#endif // CM_WIDGET_H
