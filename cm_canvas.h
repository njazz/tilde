#ifndef CM_CANVAS_H
#define CM_CANVAS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets>
#include "cm_box.h"
#include "cm_patchcord.h"

#include "cm_objectmaker.h"




//typedef struct
//{
//    cm_box* obj1;
//    int outletIdx;
//    cm_box* obj2;
//    int inletIdx;

//    bool selected;
//    enum {cm_pt_anything, cm_pt_signal} patchcordType;

//} tPatchcord;


typedef struct
{
    bool active;
    QPoint start;
    QPoint end;

} tRectPlus;

class cm_canvas : public cm_widget
{
    //todo move this to data class
    std::vector<cm_box*> objectBoxes;
    std::vector<cm_patchcord*> patchcords;
    std::vector<cm_box*> selObjectBoxes;

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

        this->paintPatchcords();

    }
    void paintPatchcords()
    {
        for (int i=0; i< this->patchcords.size(); i++)
        {
            QPainter p(this);

            p.setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawLine(((cm_patchcord*)this->patchcords.at(i))->getStartPoint(), ((cm_patchcord*)this->patchcords.at(i))->getEndPoint());
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

        //selection frame
        if (this->selFrame.active)
        {
            for (int i=0; i< this->objectBoxes.size();i++)
            {
                QPoint pos = ((cm_box*)this->objectBoxes.at(i))->pos();
                QSize size = ((cm_box*)this->objectBoxes.at(i))->size();
                QRect r = QRect(pos, pos+QPoint(size.width(), size.height()) );

                QRect frame = QRect (this->selFrame.start, this->selFrame.start + this->selFrame.end );

                if (frame.contains(r,false))
                {
                    ((cm_box*)this->objectBoxes.at(i))->select();
                    this->selObjectBoxes.push_back(this->objectBoxes.at(i));
                }
                else
                {
                    ((cm_box*)this->objectBoxes.at(i))->deselect();

                    auto it = std::find(this->selObjectBoxes.begin(), this->selObjectBoxes.end(), this->objectBoxes.at(i));
                    if (it != this->selObjectBoxes.end()) { this->selObjectBoxes.erase(it); }


                }
            }

        }
    }

    void mousePressEvent(QMouseEvent* ev)
    {
        this->selFrame.active = true;
        this->selFrame.start = ev->pos();
        this->selFrame.end = ev->pos();

        deselectBoxes();

    }
    void mouseReleaseEvent(QMouseEvent*)
    {
        this->dragObject = 0;

        this->selFrame.active = false;
        this->newLine.active = false;

        this->repaint();
    }

    /////

    void deselectBoxes()
    {
        for (int i=0;i<this->selObjectBoxes.size();i++)
        {
            if (this->selObjectBoxes.at(i))
                ((cm_box*)this->selObjectBoxes.at(i))->deselect();

        }

        this->selObjectBoxes.clear();
    }

    //////////
    cm_box* createBox(std::string pdObjectName, QPoint pos, int ins, int outs)
    {
        cm_box *box = new cm_box(this);
        box->pdObjName = pdObjectName.c_str();
        for (int i=0;i<ins;i++)
            box->addInlet();
        for (int i=0;i<outs;i++)
            box->addOutlet();

        connect(box,&cm_box::selectBox, this, &cm_canvas::s_SelectBox);

        box->move(pos);

        this->objectBoxes.push_back(box);

        box->show();

        return box;

    }

    void patchcord(cm_box* obj1, int outlet, cm_box* obj2, int inlet)
    {
        cm_port* outport = obj1->getOutletAt(outlet);
        cm_port* inport = obj2->getInletAt(inlet);

        cm_patchcord* pc = new cm_patchcord(obj1,outport,obj2,inport);

        this->patchcords.push_back(pc);


    }

    //////////
    void deleteBox(cm_box* box)
    {
        box->close();
        //TODO
    }

    void delBoxes()
    {
        for (int i=0;i<this->selObjectBoxes.size(); i++)
        {
            this->deleteBox( ((cm_box*) this->selObjectBoxes.at(i))  );
        }

    }

signals:

public slots:

    void s_InMousePressed(cm_widget* obj, QMouseEvent* ev);
    void s_InMouseReleased(cm_widget* obj, QMouseEvent* ev);
    void s_OutMousePressed(cm_widget* obj, QMouseEvent* ev);
    void s_OutMouseReleased(cm_widget* obj, QMouseEvent* ev);

    void s_SelectBox(cm_box* box);

    //    void portMouseReleased();
    //    void portMouseEntered();
    //    void portMouseLeaved();

private:

};

#endif // CM_CANVAS_H
