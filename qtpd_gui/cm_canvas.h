#ifndef CM_CANVAS_H
#define CM_CANVAS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets>
#include "cm_box.h"
#include "cm_patchcord.h"
#include "cmo_msg.h"

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
    std::vector<cm_widget*> objectBoxes;
    std::vector<cm_patchcord*> patchcords;
    std::vector<cm_widget*> selObjectBoxes;

    tRectPlus selFrame;
    tRectPlus newLine;

    //
    cm_widget *conn_obj1;
    cm_widget *conn_out;

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
        for (int i=0; i< (int)this->patchcords.size(); i++)
        {
            QPainter p(this);

            // cleanup
            QColor pc_color = ((cm_patchcord*)this->patchcords.at(i))->mouseover ? QColor(255, 192, 0) : QColor(0, 0, 0);
            if (((cm_patchcord*)this->patchcords.at(i))->selected) pc_color = QColor(0,192,255);

            p.setPen(QPen(pc_color, 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawLine(((cm_patchcord*)this->patchcords.at(i))->getStartPoint(), ((cm_patchcord*)this->patchcords.at(i))->getEndPoint());
        }

    }

    bool hoverPatchcords(QPoint pos)
    {
        bool ret = false;
        for (int i=0; i< (int)this->patchcords.size(); i++)
        {
            ((cm_patchcord*)this->patchcords.at(i))->mouseover = ((cm_patchcord*)this->patchcords.at(i))->hover(pos);
            if (((cm_patchcord*)this->patchcords.at(i))->mouseover) ret=true;
        }
        return ret;
    }


    void hoverPatchcordsOff()
    {
        //bool ret = false;
        for (int i=0; i< (int)this->patchcords.size(); i++)
        {
            ((cm_patchcord*)this->patchcords.at(i))->mouseover = false;// ((cm_patchcord*)this->patchcords.at(i))->hover(pos);
            //if (((cm_patchcord*)this->patchcords.at(i))->mouseover) ret=true;
        }
        //return ret;
    }

    bool clickPatchcords(QPoint pos)
    {
        bool ret = false;
        for (int i=0; i< (int)this->patchcords.size(); i++)
        {
            ((cm_patchcord*)this->patchcords.at(i))->selected = ((cm_patchcord*)this->patchcords.at(i))->hover(pos);
            if (((cm_patchcord*)this->patchcords.at(i))->selected) ret=true;
        }
        return ret;
    }

    void mouseMoveEvent(QMouseEvent* ev)
    {
        QPoint pos =  ev->pos();

        this->selFrame.end = pos - this->selFrame.start;

        this->newLine.end = pos;

        this->repaint();

        if (this->dragObject)
        {
            QPoint offset = QPoint(10,10);
            this->dragObject->move(mapToParent(ev->pos() - offset));

        }

        //selection frame
        if (this->selFrame.active)
        {
            for (int i=0; i< (int)this->objectBoxes.size();i++)
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

        //patchcords
        if (this->hoverPatchcords(pos)) this->repaint();

        //remove patchcord selection if making frame
        if (this->selFrame.active)
            this->clickPatchcords(QPoint(-1,-1));

    }

    void mousePressEvent(QMouseEvent* ev)
    {
        this->selFrame.active = true;
        this->selFrame.start = ev->pos();
        this->selFrame.end = QPoint(0,0);

        deselectBoxes();

        //deselect
        this->hoverPatchcordsOff();

        this->clickPatchcords(ev->pos());
        this->repaint();

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
        for (int i=0;i< (int)this->selObjectBoxes.size();i++)
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

    cmo_msg* createMsg(std::string message, QPoint pos)
    {
            cmo_msg *msg = new cmo_msg(this);
            msg->pdObjName = message.c_str();
            msg->addInlet();
            msg->addOutlet();

            msg->move(pos);

            this->objectBoxes.push_back(msg);

            msg->show();

            return msg;


    }

    void patchcord(cm_box* obj1, int outlet, cm_box* obj2, int inlet)
    {
        cm_port* outport = obj1->getOutletAt(outlet);
        cm_port* inport = obj2->getInletAt(inlet);

        cm_patchcord* pc = new cm_patchcord(obj1,outport,obj2,inport);

        this->patchcords.push_back(pc);


    }

    //temporary?
    void patchcord(cm_widget* obj1, cm_widget* outport, cm_widget* obj2, cm_widget* inport)
    {

        cm_patchcord* pc = new cm_patchcord(obj1,outport,obj2,inport);

        this->patchcords.push_back(pc);


    }

//    void deletePatchcord(cm_patchcord* pc)
//    {
//        // no repaint

//        //cleanup !!!
//        auto it = std::find(this->patchcords.begin(), this->patchcords.end(), pc);

//        if (it != this->patchcords.end()) { this->patchcords.erase(it); }

//    }

    void deletePatchcordsFor(cm_box* obj)
    {
        //for //(int i=0;i<this->patchcords.size();i++)
        std::vector<cm_patchcord*>::iterator it;
        for (it=this->patchcords.begin(); it!= this->patchcords.end(); )
        {
            if ((*it)->connectsObject(obj))
                it =this->patchcords.erase(it);
            else
                ++it;

        }

        this->repaint();
    }

    //////////
    void deleteBox(cm_box* box)
    {
        box->close();
        //TODO

        this->deletePatchcordsFor(box);
    }

    void delBoxes()
    {
        for (int i=0;i< (int)this->selObjectBoxes.size(); i++)
        {
            this->deleteBox( ((cm_box*) this->selObjectBoxes.at(i))  );
        }

    }

    void delSelectedPatchcords()
    {
        //cleanup
        //for (int i=0;i<this->patchcords.size(); i++)
        std::vector<cm_patchcord*>::iterator it;
        for (it=this->patchcords.begin(); it!= this->patchcords.end(); )
        {
            if ( (*it) -> selected )
                //it = this->deletePatchcord(*it);
                it = this->patchcords.erase(it);
            else
                ++it;
        }

        this->repaint();
    }

signals:

public slots:

    void s_InMousePressed(cm_widget* obj, QMouseEvent* ev);
    void s_InMouseReleased(cm_widget*, QMouseEvent*);
    void s_OutMousePressed(cm_widget* obj, QMouseEvent*);
    void s_OutMouseReleased(cm_widget*, QMouseEvent*);

    void s_SelectBox(cm_box* box);

    //    void portMouseReleased();
    //    void portMouseEntered();
    //    void portMouseLeaved();

private:

};

#endif // CM_CANVAS_H
