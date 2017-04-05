// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PORTG_H
#define CM_PORTG_H

#include <QWidget>

#include <QtGui>

#include "UIItem.h"

#include <QGraphicsSceneMouseEvent>

namespace qtpd {

////
/// \brief gui representation of t_inlet / t_outlet
///
class Port : public UIItem {
    Q_OBJECT
protected:
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*)
    {
        if (getEditMode() == em_Unlocked) {
            setHover(true);
            update();
        }
    }

    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*)
    {
        if (getEditMode() == em_Unlocked) {
            setHover(false);
            update();
        }
    }

private:
    UIPortType _portType;
    int _portClass;
    int _portIndex;

public:
    explicit Port(UIItem* parent = 0);

    // -----
    UIPortType portType() { return _portType; }
    void setPortType(UIPortType pt) { _portType = pt; }
    int portClass() { return _portClass; }
    void setPortClass(int pc) { _portClass = pc; }
    int portIndex() { return _portIndex; }
    void setPortIndex(int pi) { _portIndex = pi; }

    // -----

    void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget* widget)
    {

        p->setRenderHint(QPainter::HighQualityAntialiasing, true);

        QBrush brush(bgColor());
        p->setBrush(brush);
        p->drawRect(boundingRect());

        if (_portClass)
            p->fillRect(0, 0, boundingRect().width(), boundingRect().height(), QColor(128, 160, 192));

        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, boundingRect().width(), boundingRect().height());

        if (hover()) {
            p->setPen(QPen(QColor(255, 128, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
        }
    }

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
    {
        qDebug("click port");
        if (getEditMode() == em_Unlocked) {

            ev->accept();

            emit mousePressed(this, ev);
        }
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent* ev)
    {
        if (getEditMode() == em_Unlocked) {

            ev->accept();

            emit mouseReleased(this, ev);
        }
    }

public slots:
};
}

#endif // CM_PORT_H
