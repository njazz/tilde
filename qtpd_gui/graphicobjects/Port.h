// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PORTG_H
#define CM_PORTG_H

#include <QWidget>

#include <QtGui>

#include "UIItem.h"

namespace qtpd {

////
/// \brief gui representation of t_inlet / t_outlet
///
class Port : public UIItem {
    Q_OBJECT

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

        if (_portClass)
            p->fillRect(0, 0, boundingRect().width(), boundingRect().height(), QColor(128, 160, 192));

        p->setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, boundingRect().width(), boundingRect().height());

        if (hover()) {
            p->setPen(QPen(QColor(255, 128, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
        }
    }

    void enterEvent(QEvent*)
    {
        if (getEditMode() == em_Unlocked) {
            setHover(true);

            emit mouseEntered();
        }
    }
    void leaveEvent(QEvent*)
    {
        if (getEditMode() == em_Unlocked) {
            setHover(false);

            emit mouseLeaved();
        }
    }

    void mousePressEvent(QMouseEvent* ev)
    {
        if (getEditMode() == em_Unlocked) {

            emit mousePressed(this, ev);
        }
    }

    void mouseReleaseEvent(QMouseEvent* ev)
    {
        if (getEditMode() == em_Unlocked) {
            emit mouseReleased(this, ev);
        }
    }

public slots:
};
}

#endif // CM_PORT_H
