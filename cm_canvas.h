#ifndef CM_CANVAS_H
#define CM_CANVAS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets>
#include "cm_box.h"
#include "cm_objectmaker.h"


typedef struct
{
    bool active;
    QPoint start;
    QPoint end;

} tRectPlus;
class cm_canvas : public cm_widget
{
    tRectPlus selFrame;
    tRectPlus newLine;
    Q_OBJECT
public:
    //encapsulate
    QWidget *dragObject;

    explicit cm_canvas(cm_widget *parent = 0);
    cm_canvas(QWidget *parent = 0);

    void paintEvent(QPaintEvent *)

    {
        if (this->selFrame.active)
        {
            QPainter p(this);

            p.setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(this->selFrame.start.x(),this->selFrame.start.y(),this->selFrame.end.x(),this->selFrame.end.y());
        }

        if (this->newLine.active)
        {
            QPainter p(this);

            p.setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawLine(this->newLine.start, this->newLine.end);

        }

    }
    void mouseMoveEvent(QMouseEvent* ev)
    {
        this->selFrame.end = ev->pos() - this->selFrame.start;

        this->newLine.end = ev->pos();

        this->repaint();

        if (this->dragObject)
        {
            QPoint offset = QPoint(10,10);
            this->dragObject->move(mapToParent(ev->pos() - offset));

        }
    }

    void mousePressEvent(QMouseEvent* ev)
    {
        this->selFrame.active = true;
        this->selFrame.start = ev->pos();
        this->selFrame.end = ev->pos();

    }
    void mouseReleaseEvent(QMouseEvent*)
    {
        this->dragObject = 0;

        this->selFrame.active = false;
        this->newLine.active = false;

        this->repaint();
    }

    /////



signals:

public slots:

    void s_InMousePressed(cm_widget* obj, QMouseEvent* ev);
    void s_InMouseReleased(cm_widget* obj, QMouseEvent* ev);
    void s_OutMousePressed(cm_widget* obj, QMouseEvent* ev);
    void s_OutMouseReleased(cm_widget* obj, QMouseEvent* ev);

//    void portMouseReleased();
//    void portMouseEntered();
//    void portMouseLeaved();

private:

};

#endif // CM_CANVAS_H
