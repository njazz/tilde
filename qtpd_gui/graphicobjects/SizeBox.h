// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_SIZEBOXG_H
#define CM_SIZEBOXG_H

#include "UIItem.h"

namespace qtpd {

////
/// \brief SizeBox QGraphicsObject class
/// \details resize widget for all object boxes in the patch
///
class SizeBox : public UIItem {
    Q_OBJECT

private:
    QPoint _previousPosition;

    t_objectSize* _objectSizeType;

public:
    explicit SizeBox(UIItem* parent = 0);

    void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*);
    void mousePressEvent(QGraphicsSceneMouseEvent* ev);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* ev);

signals:

    void resizeBoxEvent(int dx, int dy);
};
}

#endif // CM_SIZEBOX_H
