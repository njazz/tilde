#ifndef CM_SIZEBOX_H
#define CM_SIZEBOX_H

#include "cm_widget.h"

#include <QPainter>
#include <QMouseEvent>
#include <QDebug>


namespace cm{
class SizeBox : public UIWidget
{
    Q_OBJECT;

private:
    int prevX;
public:
    //cm_sizebox();
    explicit SizeBox(UIWidget *parent = 0);


    void paintEvent(QPaintEvent*)   //QPaintEvent *pe
    {    QPainter p(this);

         //p.setRenderHint(QPainter::SmoothPixmapTransform,true);
         p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
          p.drawRect(0,0,this->width(),this->height());


    };


    void mousePressEvent(QMouseEvent *event)
    {
        this->setCursor(QCursor(Qt::SizeHorCursor));
        //emit resizeStart();

        event->accept();

        this-> prevX = 0;
    };

    void mouseReleaseEvent(QMouseEvent *event)
    {
        this->setCursor(QCursor(Qt::ArrowCursor));
        //emit resizeEnd();

        event->accept();
    };

    void mouseMoveEvent(QMouseEvent *ev)
    {
        qDebug() << "resize" << (ev->x() - prevX);
        emit this->resizeBoxEvent(ev->x() - this->prevX);

    }

signals:

    void resizeBoxEvent(int dx);



};

}

#endif // CM_SIZEBOX_H
