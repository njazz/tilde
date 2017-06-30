// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PORTG_H
#define CM_PORTG_H

#include <QWidget>
#include <QtGui>
#include <QGraphicsSceneMouseEvent>

#include "UIItem.h"



namespace qtpd {

////
/// \brief Port QGraphicsItem class
/// \details gui representation of t_inlet / t_outlet
///
class Port : public UIItem {
    Q_OBJECT

private:
    UIPortType _portType;
    int _portClass;
    int _portIndex;

public:
    explicit Port(UIItem* parent = 0);

    ////
    /// \group prop Properties
    /// @{
    UIPortType portType() { return _portType; }
    void setPortType(UIPortType pt) { _portType = pt; }
    int portClass() { return _portClass; }
    void setPortClass(int pc) { _portClass = pc; }
    int portIndex() { return _portIndex; }
    void setPortIndex(int pi) { _portIndex = pi; }

    /** @}*/

    void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*);

    ////
    /// \group mouse Mouse
    /// @{
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

    /** @}*/

public slots:
};
}

#endif // CM_PORT_H
