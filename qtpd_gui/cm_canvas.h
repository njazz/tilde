#ifndef CM_CANVAS_H
#define CM_CANVAS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets>
#include "cmo_box.h"
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
private:
    //todo move this to data class
    std::vector<cm_widget*> objectBoxes;
    std::vector<cm_patchcord*> patchcords;
    std::vector<cm_widget*> selObjectBoxes;

    tRectPlus selFrame;
    tRectPlus newLine;

    //
    cm_widget *conn_obj1;
    cm_widget *conn_out;

    //
    QPoint newObjectPos;

    QPoint dragPrevPos;

    //
    bool editMode;

    //
    bool gridEnabled;
    int gridStep;

    Q_OBJECT
public:
    //encapsulate
    QWidget *dragObject;
    QString fileName;

    //temp
    t_canvas* pd_canvas;

    explicit cm_canvas(cm_widget *parent = 0);
    cm_canvas(QWidget *parent = 0);

    void paintEvent(QPaintEvent *)

    {
        //grid
        if (this->gridEnabled && this->editMode)
        {
            QPainter p(this);

            p.setPen(QPen(QColor(224, 224, 224), 1, Qt::DotLine, Qt::SquareCap, Qt::BevelJoin));
            for (int x=0; x<this->width();x+= this->gridStep)
            {
                p.drawLine(x,0,x,this->height());
            }
            for (int y=0; y<this->height();y+= this->gridStep)
            {
                p.drawLine(0,y,this->width(),y);
            }

        }
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
        if (!ev) return;

        QPoint pos =  ev->pos();

        this->selFrame.end = pos - this->selFrame.start;
        this->newLine.end = pos;

        this->repaint();

        // move new object
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
                QPoint pos = ((cmo_box*)this->objectBoxes.at(i))->pos();
                QSize size = ((cmo_box*)this->objectBoxes.at(i))->size();
                QRect r = QRect(pos, pos+QPoint(size.width(), size.height()) );

                QRect frame = QRect (this->selFrame.start, this->selFrame.start + this->selFrame.end );

                if (frame.contains(r,false))
                {
                    ((cmo_box*)this->objectBoxes.at(i))->select();
                    this->selObjectBoxes.push_back(this->objectBoxes.at(i));
                }
                else
                {
                    ((cmo_box*)this->objectBoxes.at(i))->deselect();

                    auto it = std::find(this->selObjectBoxes.begin(), this->selObjectBoxes.end(), this->objectBoxes.at(i));
                    if (it != this->selObjectBoxes.end()) { this->selObjectBoxes.erase(it); }


                }
            }

        }

        //patchcords
        if (this->editMode)
            if (this->hoverPatchcords(pos)) this->repaint();

        //remove patchcord selection if making frame
        if (this->selFrame.active)
            this->clickPatchcords(QPoint(-1,-1));

    }

    void mousePressEvent(QMouseEvent* ev)
    {


        deselectBoxes();

        //deselect
        this->hoverPatchcordsOff();


        if (this->editMode)
        {
            //sel frame
            this->selFrame.active = true;
            this->selFrame.start = ev->pos();
            this->selFrame.end = QPoint(0,0);

            //click patchcords
            this->clickPatchcords(ev->pos());
            this->repaint();
        }

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
                ((cmo_box*)this->selObjectBoxes.at(i))->deselect();

        }

        this->selObjectBoxes.clear();
    }

    //////////

    cmo_box* createBox(std::string pdObjectName, QPoint pos)
    {
        cmo_box *box = new cmo_box(this);
        box->setPdObjName(pdObjectName);

        connect(box,&cmo_box::selectBox, this, &cm_canvas::s_SelectBox);
        connect(box,&cmo_box::moveBox, this, &cm_canvas::s_MoveBox);
        box->setEditModeRef(&this->editMode);

        const char * obj_name = pdObjectName.c_str();

        t_object* new_obj = 0 ;
        int in_c=0, out_c=0;

        //temp
        if (!this->pd_canvas)
        {
            qDebug("bad pd canvas instance");
        }
        else
        {
            new_obj = cmp_create_object(this->pd_canvas,(char*)obj_name,pos.x(), pos.y());
        }

        if (new_obj)
        {

            // qDebug ("created object %lu, new_obj");

            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            qDebug ("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, new_obj);

            //cm_box* newBox = this->canvas->createBox(this->objectMaker->text().toStdString(),this->objectMaker->pos(),in_c,out_c);
            box->setPdObject(new_obj);

        }
        else
        {
            qDebug("Error: no such object %s", obj_name);
            box->isErrorBox = true;
            in_c = 0; out_c = 0;
            //return 0;
        }

        for (int i=0;i<in_c;i++)
            box->addInlet();
        for (int i=0;i<out_c;i++)
            box->addOutlet();

        box->move(pos);

        this->objectBoxes.push_back(box);

        box->show();

        return box;

    }

    cmo_msg* createMsg(std::string message, QPoint pos)
    {
            cmo_msg *msg = new cmo_msg(this);
            msg->addInlet();
            msg->addOutlet();

            connect(msg,&cmo_msg::selectBox, this, &cm_canvas::s_SelectBox);
            connect(msg,&cmo_msg::moveBox, this, &cm_canvas::s_MoveBox);
            msg->setEditModeRef(&this->editMode);

            msg->move(pos);

            this->objectBoxes.push_back(msg);

            //temp
            t_object* new_obj = 0 ;
            if (!this->pd_canvas)
                {qDebug("bad pd canvas instance");}
            else
            {
                new_obj = cmp_create_message(this->pd_canvas, message, pos.x(), pos.y());
            }

            if (new_obj)
            {
                qDebug ("created msgbox %s | ptr %lu\n",  message.c_str(), new_obj);
                msg->setPdObject(new_obj);
            }
            else
            {
                qDebug("Error: no such object %s",  message.c_str());
            }

            msg->setPdMessage(message.c_str());

            msg->show();

            return msg;


    }

    void patchcord(cmo_box* obj1, int outlet, cmo_box* obj2, int inlet)
    {
        cm_port* outport = obj1->getOutletAt(outlet);
        cm_port* inport = obj2->getInletAt(inlet);

        cm_patchcord* pc = new cm_patchcord(obj1,outport,obj2,inport);
        cmp_patchcord((t_object*)obj1->getPdObject(),outlet,(t_object*)obj2->getPdObject(),inlet);

        this->patchcords.push_back(pc);


    }

    //temporary?
    void patchcord(cm_widget* obj1, cm_widget* outport, cm_widget* obj2, cm_widget* inport)
    {


        cm_patchcord* pc = new cm_patchcord(obj1,outport,obj2,inport);
        cmp_patchcord((t_object*)obj1->getPdObject(),((cm_port*)outport)->portIndex,(t_object*)obj2->getPdObject(),((cm_port*)inport)->portIndex);
        //qDebug("no connection");

        this->patchcords.push_back(pc);


    }

//    void deletePatchcord(cm_patchcord* pc)
//    {
//        // no repaint

//        //cleanup !!!
//        auto it = std::find(this->patchcords.begin(), this->patchcords.end(), pc);

//        if (it != this->patchcords.end()) { this->patchcords.erase(it); }

//    }

    //cm_patchcord* pc = new cm_patchcord(obj1,outport,obj2,inport);


    void deletePatchcordsFor(cmo_box* obj)
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
    void deleteBox(cmo_box* box)
    {
        box->close();
        //TODO

        if (box->getPdObject())
        {
            cmp_deleteobject(this->pd_canvas, (t_object*)box->getPdObject());
        }

        this->deletePatchcordsFor(box);
    }

    void delBoxes()
    {
        for (int i=0;i< (int)this->selObjectBoxes.size(); i++)
        {
            this->deleteBox( ((cmo_box*) this->selObjectBoxes.at(i))  );
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

    ////////

    void setEditMode(bool mode)
    {
        this->editMode = mode;

        QPalette Pal(palette());
        Pal.setColor(QPalette::Background, (mode)?QColor(255,255,255):QColor(245,245,245));
        this->setAutoFillBackground(true);
        this->setPalette(Pal);

        this->deselectBoxes();
        this->hoverPatchcordsOff();

        this->repaint();
    }

    bool getEditMode(){return this->editMode;}

signals:

public slots:

    void s_InMousePressed(cm_widget* obj, QMouseEvent* ev);
    void s_InMouseReleased(cm_widget*, QMouseEvent*);
    void s_OutMousePressed(cm_widget* obj, QMouseEvent*);
    void s_OutMouseReleased(cm_widget*, QMouseEvent*);

    void s_SelectBox(cm_widget* box);
    void s_MoveBox(cm_widget* box, QMouseEvent* event);

    //    void portMouseReleased();
    //    void portMouseEntered();
    //    void portMouseLeaved();

private:

};

#endif // CM_CANVAS_H
