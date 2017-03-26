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
    int _prevX;
    int _prevY;

    t_objectSize* _objectSizeType;

public:
    explicit SizeBox(UIWidget* parent = 0);

    void paintEvent(QPaintEvent*) //QPaintEvent *pe
    {
        QPainter p(this);

        //p.setRenderHint(QPainter::SmoothPixmapTransform,true);
        p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, width(), height());
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
