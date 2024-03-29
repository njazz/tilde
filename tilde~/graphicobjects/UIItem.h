// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UIITEM_H
#define UIITEM_H

#include "CommonTypes.h"
#include <QGraphicsObject>

namespace tilde {

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
    QSize _minSize;

    QPoint _pos; //?
    QColor _bgColor;

public:
    QPoint dragOffset;

    explicit UIItem(QGraphicsObject* parent = 0);

    void setSize(QSize size) { _size = size; }
    void setSize(float w, float h) { _size = QSize(w, h); }
    void setWidth(float w) { _size.setWidth(w); }
    void setHeight(float h) { _size.setHeight(h); }
    void setMinWidth(float w) { _minSize.setWidth(w); }
    void setMinHeight(float h) { _minSize.setHeight(h); }

    float width() { return _size.width(); }
    float height() { return _size.height(); }
    float minWidth() { return _minSize.width(); }
    float minHeight() { return _minSize.height(); }

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

    virtual t_editMode* getEditModeRef(); ///> get edit mode pointer - for inlets/outlets

    t_editMode getEditMode(); ///> get edit mode flag value

    QRectF boundingRect() const { return QRectF(0, 0, _size.width(), _size.height()); }
    QPainterPath shape() const;

    virtual void move(float x, float y);
    virtual void move(QPoint pos);
    virtual void move(QPointF pos);

    void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget*){};

    virtual void resizeEvent() {}

signals:

    void mousePressed(UIItem* obj, QGraphicsSceneMouseEvent* ev);
    void mouseReleased(UIItem* obj, QGraphicsSceneMouseEvent* ev);

    void mouseEntered(UIItem* obj, QGraphicsSceneHoverEvent* ev);
    void mouseLeaved(UIItem* obj, QGraphicsSceneHoverEvent* ev);

    void selectBox(UIItem* box, QGraphicsSceneMouseEvent* event);
    void moveBox(UIItem* box, QGraphicsSceneMouseEvent* event);

public slots:
};
}

#endif //
