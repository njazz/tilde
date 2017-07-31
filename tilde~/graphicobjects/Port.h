// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PORTG_H
#define CM_PORTG_H

#include <QGraphicsSceneMouseEvent>
#include <QWidget>
#include <QtGui>

#include "UIItem.h"

namespace qtpd {

////
/// \brief Port QGraphicsItem class
/// \details gui representation of t_inlet / t_outlet
class Port : public UIItem {
    Q_OBJECT

private:
    UIPortType _portType;
    int _portClass;
    int _portIndex;

public:
    explicit Port(UIItem* parent = 0);

    UIPortType portType() { return _portType; }
    void setPortType(UIPortType pt) { _portType = pt; }

    int portClass() { return _portClass; }
    void setPortClass(int pc) { _portClass = pc; }

    int portIndex() { return _portIndex; }
    void setPortIndex(int pi) { _portIndex = pi; }

    void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*);

    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* ev);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* ev);

    void mousePressEvent(QGraphicsSceneMouseEvent* ev);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* ev);

public slots:
};
}

#endif // CM_PORT_H
