#ifndef CM_CANVAS_H
#define CM_CANVAS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets>
#include "cm_box.h"

class cm_canvas : public QWidget
{
    Q_OBJECT
public:
    //encapsulate
    cm_box *dragObject;

    explicit cm_canvas(QWidget *parent = 0);

    void mouseMoveEvent(QMouseEvent* event)
    {
        //printf("mousemove\n");
        if (this->dragObject)
        {

            QPoint offset = QPoint(10,10);

            this->dragObject->move(mapToParent(event->pos() - offset));

        }
    }

    void mouseReleaseEvent(QMouseEvent*)
    {
        this->dragObject = 0;

    }

signals:

public slots:

private:

};

#endif // CM_CANVAS_H
