// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_SIZEBOX_H
#define CM_SIZEBOX_H

#include "cm_widget.h"

#include <QDebug>
#include <QMouseEvent>
#include <QPainter>

#include <QObject>

namespace qtpd {

////
/// \brief object box size constraints
///
typedef enum {
    os_Fixed,
    os_FixedHeight,
    os_Free
} t_objectSize;

////
/// \brief resize widget for all object boxes in patch
///
class SizeBox : public UIWidget {
    Q_OBJECT

private:
    int prevX;
    int prevY;

    t_objectSize* objectSizeType;

public:
    explicit SizeBox(UIWidget* parent = 0);

    void paintEvent(QPaintEvent*) //QPaintEvent *pe
    {
        QPainter p(this);

        //p.setRenderHint(QPainter::SmoothPixmapTransform,true);
        p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, this->width(), this->height());
    };

    void mousePressEvent(QMouseEvent* event)
    {
        this->setCursor(QCursor(Qt::SizeHorCursor));

        event->accept();

        this->prevX = 0;
        this->prevY = 0;
    };

    void mouseReleaseEvent(QMouseEvent* event)
    {
        this->setCursor(QCursor(Qt::ArrowCursor));

        event->accept();
    };

    void mouseMoveEvent(QMouseEvent* ev)
    {
        //qDebug() << "resize" << (ev->x() - prevX);
        emit resizeBoxEvent(ev->x() - this->prevX, ev->y() - this->prevY);
    }

signals:

    void resizeBoxEvent(int dx, int dy);
};
}

#endif // CM_SIZEBOX_H
