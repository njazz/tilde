// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_SIZEBOXG_H
#define CM_SIZEBOXG_H

#include "UIItem_g.h"

#include <QDebug>
#include <QMouseEvent>
#include <QPainter>

#include <QObject>

namespace qtpd {



////
/// \brief resize widget for all object boxes in patch
///
class SizeBoxItem : public UIItem {
    Q_OBJECT

private:
    int _prevX;
    int _prevY;

    t_objectSize* _objectSizeType;

public:
    explicit SizeBoxItem(UIItem* parent = 0);

    void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget* widget)
    {
        p->setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
    };

    void mousePressEvent(QMouseEvent* event)
    {
        setCursor(QCursor(Qt::SizeHorCursor));

        event->accept();

        _prevX = 0;
        _prevY = 0;
    };

    void mouseReleaseEvent(QMouseEvent* event)
    {
        setCursor(QCursor(Qt::ArrowCursor));

        event->accept();
    };

    void mouseMoveEvent(QMouseEvent* ev)
    {
        //qDebug() << "resize" << (ev->x() - prevX);
        emit resizeBoxEvent(ev->x() - _prevX, ev->y() - _prevY);
    }

signals:

    void resizeBoxEvent(int dx, int dy);
};
}

#endif // CM_SIZEBOX_H
