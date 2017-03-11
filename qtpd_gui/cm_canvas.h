#ifndef CM_CANVAS_H
#define CM_CANVAS_H

#include <QWidget>
#include <QtGui>
#include <QtWidgets>

#include "cm_patchcord.h"

#include "cm_objectmaker.h"

#include "cm_objectloader.h"

//todo - move to window?
#include "cm_clipboard.h"



namespace cm
{

////
/// \brief structure for selection rectangle
typedef struct
{
    bool active;
    QPoint start;
    QPoint end;

} tRectPlus;

////
/// \brief canvas data - boxes and patchcords
/// \details todo: merge with clipboard class's types
typedef struct
{
    objectVec boxes;
    patchcordVec patchcords;
} tCanvasData;

////
/// \brief 't_canvas' counterpart. creates objects
///
class Canvas : public UIWidget
{
private:
    //todo move this to data class?
    objectVec objectBoxes;
    patchcordVec patchcords;
    objectVec selObjectBoxes;
    patchcordVec selPatchcords;

    //move here
    tCanvasData data;
    tCanvasData selData;


    tRectPlus selFrame;
    tRectPlus newLine;

    //
    UIObject *connObj1;
    UIObject *connOutlet;

    //
    QPoint newObjectPos;

    QPoint dragPrevPos;

    //
    t_editMode editMode;

    //
    bool gridEnabled;
    bool gridSnap;
    int gridStep;

    Q_OBJECT
public:
    //encapsulate
    QWidget *dragObject;
    QString fileName;

    //temp
    t_canvas* pdCanvas;

    explicit Canvas(UIWidget *parent = 0);
    explicit Canvas(QWidget *parent = 0);


    ////
    /// \brief main paint routine
    ///
    void paintEvent(QPaintEvent *)
    {
        //grid
        if (this->gridEnabled && (this->editMode != em_Locked) )
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

    ////
    /// \brief paint patchcords
    ///
    void paintPatchcords()
    {
        for (int i=0; i< (int)this->patchcords.size(); i++)
        {
            QPainter p(this);

            QColor b_pc_color = (((Patchcord*)this->patchcords.at(i))->patchcordType() == cm_pt_signal) ? QColor(128, 160, 192) : QColor(0, 0, 0);
            // cleanup
            QColor pc_color = ((Patchcord*)this->patchcords.at(i))->mouseover ? QColor(255, 192, 0) : b_pc_color;
            if (((Patchcord*)this->patchcords.at(i))->selected) pc_color = QColor(0,192,255);

            p.setRenderHint(QPainter::HighQualityAntialiasing, true);
            p.setPen(QPen(pc_color, 1 + (((Patchcord*)this->patchcords.at(i))->patchcordType() == cm_pt_signal) , Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

            //todo option
            //p.drawLine(((cm_patchcord*)this->patchcords.at(i))->getStartPoint(), ((cm_patchcord*)this->patchcords.at(i))->getEndPoint());

            QPainterPath path;
            QPoint start = ((Patchcord*)this->patchcords.at(i))->getStartPoint();
            QPoint end = ((Patchcord*)this->patchcords.at(i))->getEndPoint();

            QPoint b1 = QPoint(start.x() + (end.x() - start.x()) * .5, fabs(end.y() - start.y()) * .5 + start.y());
            QPoint b2 = QPoint(end.x() - (end.x() - start.x()) * .5, -fabs(end.y() - start.y()) * .5 + end.y());

            //TODO
            //spaghetti lol
            if (start.y()>end.y())
            {
                if (b1.y() - start.y() > 80)
                {
                    b1.setY(start.y() + 80);
                }

                if (b2.y() - end.y() < -80)
                {
                    b2.setY(end.y() - 80);
                }
            }

            //               if (b1.x() - start.x() < 20)
            //                {
            //                    b1.setX(start.x() + 20);
            //                }

            //                if (b2.x() - end.x() < -20)
            //                {
            //                    b2.setX(end.x() - 20);
            //                }

            //            }

            path.moveTo(start);
            path.cubicTo(b1, b2 , end);

            p.drawPath(path);
        }

    }

    ////
    /// \brief changes patchcords color when mouse is over
    /// \param pos
    /// \return true if mouse is over any of the patchcords
    ///
    bool hoverPatchcords(QPoint pos)
    {
        bool ret = false;
        for (int i=0; i< (int)this->patchcords.size(); i++)
        {
            ((Patchcord*)this->patchcords.at(i))->mouseover = ((Patchcord*)this->patchcords.at(i))->hover(pos);
            if (((Patchcord*)this->patchcords.at(i))->mouseover) ret=true;
        }
        return ret;
    }


    ////
    /// \brief resets all patchcords hover color flag
    ///
    void hoverPatchcordsOff()
    {
        //bool ret = false;
        for (int i=0; i< (int)this->patchcords.size(); i++)
        {
            ((Patchcord*)this->patchcords.at(i))->mouseover = false;// ((cm_patchcord*)this->patchcords.at(i))->hover(pos);

        }

    }

    ////
    /// \brief marks clicked patchcord
    /// \param pos
    /// \return true if there was a patchcord
    ///
    bool clickPatchcords(QPoint pos)
    {
        bool ret = false;
        for (int i=0; i< (int)this->patchcords.size(); i++)
        {
            ((Patchcord*)this->patchcords.at(i))->selected = ((Patchcord*)this->patchcords.at(i))->hover(pos);
            if (((Patchcord*)this->patchcords.at(i))->selected) ret=true;
        }
        return ret;
    }

    ////
    /// \brief mouse move handling
    /// \param ev
    ///
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

            QPoint newpos = mapToParent(ev->pos() - offset);
            if (this->gridSnap)
            {
                newpos.setX(floor(newpos.x()/this->gridStep)*this->gridStep);
                newpos.setY(floor(newpos.y()/this->gridStep)*this->gridStep);
            }

            this->dragObject->move(newpos);
        }

        //selection frame
        if (this->selFrame.active)
        {
            for (int i=0; i< (int)this->objectBoxes.size();i++)
            {
                QPoint pos = ((UIBox*)this->objectBoxes.at(i))->pos();
                QSize size = ((UIBox*)this->objectBoxes.at(i))->size();
                QRect r = QRect(pos, pos+QPoint(size.width(), size.height()) );

                QRect frame = QRect (this->selFrame.start, this->selFrame.start + this->selFrame.end );

                if (frame.contains(r,false))
                {
                    ((UIBox*)this->objectBoxes.at(i))->select();
                    this->selObjectBoxes.push_back(this->objectBoxes.at(i));
                }
                else
                {
                    ((UIBox*)this->objectBoxes.at(i))->deselect();

                    auto it = std::find(this->selObjectBoxes.begin(), this->selObjectBoxes.end(), this->objectBoxes.at(i));
                    if (it != this->selObjectBoxes.end()) { this->selObjectBoxes.erase(it); }


                }
            }

        }

        //patchcords
        if (this->editMode == em_Unlocked)
            if (this->hoverPatchcords(pos)) this->repaint();

        //remove patchcord selection if making frame
        if (this->selFrame.active)
            this->clickPatchcords(QPoint(-1,-1));

    }

    ////
    /// \brief mouse down handling
    /// \param ev
    ///
    void mousePressEvent(QMouseEvent* ev)
    {


        deselectBoxes();

        //deselect
        this->hoverPatchcordsOff();


        if (this->editMode == em_Unlocked)
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

    ////
    /// \brief mouse up handling
    ///
    void mouseReleaseEvent(QMouseEvent*)
    {
        this->dragObject = 0;

        this->selFrame.active = false;
        this->newLine.active = false;

        this->repaint();
    }



    ////
    /// \brief deselect all object boxes
    ///
    void deselectBoxes()
    {
        for (int i=0;i< (int)this->selObjectBoxes.size();i++)
        {
            if (this->selObjectBoxes.at(i))
                ((UIBox*)this->selObjectBoxes.at(i))->deselect();

        }

        this->selObjectBoxes.clear();
    }

    ////
    /// \brief restore "pd" object when loading from file
    /// \param pdObjectData
    /// \param pos
    /// \param canvas
    /// \return
    ///

    UIBox* restoreSubcanvas(std::string pdObjectName, QPoint pos, t_canvas* canvas)
    {
        UIBox *box = new UIBox((UIObject*)this);   //test?
        box->setObjectData(pdObjectName);

        connect(box,&UIBox::selectBox, this, &Canvas::s_SelectBox);
        connect(box,&UIBox::moveBox, this, &Canvas::s_MoveBox);

        box->setEditModeRef(&this->editMode);

        const char * obj_name = pdObjectName.c_str();

        t_object* new_obj = 0 ;
        int in_c=0, out_c=0;

        //temp
        if (!this->pdCanvas)
        {
            qDebug("bad pd canvas instance");
            box->setErrorBox(true);
        }
        else
        {
            new_obj = (t_object*)canvas;//cmp_create_object(this->pd_canvas,(char*)obj_name,pos.x(), pos.y());
        }

        if (new_obj)
        {

            // qDebug ("created object %lu, new_obj");

            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            qDebug ("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

            //cm_box* newBox = this->canvas->createBox(this->objectMaker->text().toStdString(),this->objectMaker->pos(),in_c,out_c);
            box->setPdObject(new_obj);

        }
        else
        {
            qDebug("Error: no such object %s", obj_name);
            box->setErrorBox(true);
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

//    ////
//    /// \brief create new object box
//    /// \param pdObjectName TODO rename. object name and arguments
//    /// \param pos
//    /// \return pointer to cm_box
//    ///
//    UIBox* createBox(std::string pdObjectName, QPoint pos)
//    {
//        UIBox *box = new UIBox((UIObject*)this);   //test?
//        box->setObjectData(pdObjectName);

//        connect(box,&UIBox::selectBox, this, &Canvas::s_SelectBox);
//        connect(box,&UIBox::moveBox, this, &Canvas::s_MoveBox);

//        box->setEditModeRef(&this->editMode);

//        const char * obj_name = pdObjectName.c_str();

//        t_object* new_obj = 0 ;
//        int in_c=0, out_c=0;

//        //temp
//        if (!this->pdCanvas)
//        {
//            qDebug("bad pd canvas instance");
//            box->setErrorBox(true);
//        }
//        else
//        {
//            new_obj = cmp_create_object(this->pdCanvas,(char*)obj_name,pos.x(), pos.y());
//        }

//        if (new_obj)
//        {

//            // qDebug ("created object %lu, new_obj");

//            in_c = cmp_get_inlet_count(new_obj);
//            out_c = cmp_get_outlet_count(new_obj);

//            qDebug ("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

//            //cm_box* newBox = this->canvas->createBox(this->objectMaker->text().toStdString(),this->objectMaker->pos(),in_c,out_c);
//            box->setPdObject(new_obj);

//        }
//        else
//        {
//            qDebug("Error: no such object %s", obj_name);
//            box->setErrorBox(true);
//            in_c = 1; out_c = 1;
//            //return 0;
//        }

//        for (int i=0;i<in_c;i++)
//            box->addInlet();
//        for (int i=0;i<out_c;i++)
//            box->addOutlet();

//        box->move(pos);

//        this->objectBoxes.push_back(box);

//        box->show();

//        return box;

//    }

//    ////
//    /// \brief create new message box (ui.msg now)
//    /// \param pdObjectName TODO rename. object name and arguments
//    /// \param pos
//    /// \return pointer to cm_box
//    ///
//    UIMessage* createMsg(std::string message, QPoint pos)
//    {
//        UIMessage *msg = new UIMessage((UIObject*)this);   //check
//        msg->setObjectData(message);

//        msg->addInlet();
//        msg->addOutlet();

//        connect(msg,&UIMessage::selectBox, this, &Canvas::s_SelectBox);
//        connect(msg,&UIMessage::moveBox, this, &Canvas::s_MoveBox);

//        msg->setEditModeRef(&this->editMode);

//        msg->move(pos);

//        this->objectBoxes.push_back(msg);

//        //temp
//        t_object* new_obj = 0 ;
//        if (!this->pdCanvas)
//        {qDebug("bad pd canvas instance");}
//        else
//        {
//            new_obj = cmp_create_message(this->pdCanvas, message, pos.x(), pos.y());
//        }

//        if (new_obj)
//        {
//            qDebug ("created msgbox %s | ptr %lu\n",  message.c_str(), (long)new_obj);
//            msg->setPdObject(new_obj);
//        }
//        else
//        {
//            qDebug("Error: no such object %s",  message.c_str());
//        }

//        msg->setPdMessage(message.c_str());

//        msg->show();

//        return msg;


//    }


//    ////
//    /// \brief create new float box (ui.msg yet)
//    /// \param pdObjectName TODO rename. object name and arguments
//    /// \param pos
//    /// \return pointer to cm_box
//    ///
//    UIFloat* createFloat(std::string message, QPoint pos)
//    {
//        UIFloat *flo = new UIFloat((UIObject*)this);   //check
//        flo->setObjectData(message);

//        flo->addInlet();
//        flo->addOutlet();

//        connect(flo,&UIFloat::selectBox, this, &Canvas::s_SelectBox);
//        connect(flo,&UIFloat::moveBox, this, &Canvas::s_MoveBox);

//        flo->setEditModeRef(&this->editMode);

//        flo->move(pos);

//        this->objectBoxes.push_back(flo);

//        //temp
//        t_object* new_obj = 0 ;
//        if (!this->pdCanvas)
//        {qDebug("bad pd canvas instance");}
//        else
//        {
//            new_obj = cmp_create_message(this->pdCanvas, message, pos.x(), pos.y());
//        }

//        if (new_obj)
//        {
//            qDebug ("created msgbox %s | ptr %lu\n",  message.c_str(), (long)new_obj);
//            flo->setPdObject(new_obj);
//        }
//        else
//        {
//            qDebug("Error: no such object %s",  message.c_str());
//        }

//        flo->setPdMessage(message.c_str());

//        flo->show();

//        return flo;


//    }

    ////
    /// \brief prototype for universal object 'constructor'
    /// \param message
    /// \param pos
    /// \return
    ///
    UIObject* createObject(std::string uiObjectName, std::string objectData, QPoint pos)
    {
        UIObject *obj = ObjectLoader::inst().createObject(uiObjectName, objectData, this->pdCanvas, (UIWidget*)this);

        connect(obj,&UIMessage::selectBox, this, &Canvas::s_SelectBox);
        connect(obj,&UIMessage::moveBox, this, &Canvas::s_MoveBox);
        obj->setEditModeRef(&this->editMode);
        obj->move(pos);
        this->objectBoxes.push_back(obj);

        obj->show();

        qDebug() << "create object: " << QString(uiObjectName.c_str()) << "@" << QString(std::to_string((long)this->pdCanvas).c_str());

        return obj;

        //cm_object *obj = new cmo_float((cm_object*)this);   //check

    }


//    ////
//    /// \brief create new comment box (ui only)
//    /// \param pdObjectName TODO rename. object name and arguments
//    /// \param pos
//    /// \return pointer to cm_box
//    ///
//    UIText* createText(std::string message, QPoint pos)
//    {
//        UIText *txt = new UIText((UIObject*)this);   //check
//        txt->setObjectData(message);

//        //msg->addInlet();
//        //msg->addOutlet();

//        connect(txt,&UIMessage::selectBox, this, &Canvas::s_SelectBox);
//        connect(txt,&UIMessage::moveBox, this, &Canvas::s_MoveBox);

//        txt->setEditModeRef(&this->editMode);

//        txt->move(pos);

//        this->objectBoxes.push_back(txt);

//        txt->setPdMessage(message.c_str());

//        txt->show();

//        return txt;


//    }

    ////
    /// \brief creates patchcord
    /// \param obj1
    /// \param outlet
    /// \param obj2
    /// \param inlet
    ///
    void patchcord(UIObject* obj1, int outlet, UIObject* obj2, int inlet)
    {
        if (obj1->pdObject() && obj2->pdObject())
        {
            if (((UIBox*)obj1)->errorBox())
            {
                //create dummy inlets / outlets
            };
            if (((UIBox*)obj2)->errorBox())
            {
                //create dummy inlets / outlets
            };

            Port* outport = obj1->outletAt(outlet);
            Port* inport = obj2->inletAt(inlet);

            Patchcord* pc = new Patchcord(obj1,outport,obj2,inport);

            if (obj1->outletType(outlet)) pc->setPatchcordType(cm_pt_signal);

            qDebug("pdlib patchcord");
            cmp_patchcord((t_object*)obj1->pdObject(),outlet,(t_object*)obj2->pdObject(),inlet);
            this->patchcords.push_back(pc);
        }
        else
            qDebug("canvas patchcord error");




    }

    ////
    /// \brief creates patchcord, uses pointers to inlets/outlets. TODO temporary?
    /// \param obj1
    /// \param outport
    /// \param obj2
    /// \param inport
    ///
    void patchcord(UIObject* obj1, UIWidget* outport, UIObject* obj2, UIWidget* inport)
    {

        //todo

        int n1 = ((Port*)outport)->portIndex;
        int n2 = ((Port*)inport)->portIndex;
        this->patchcord(obj1,n1,obj2,n2);

//        Patchcord* pc = new Patchcord(obj1,outport,obj2,inport);
//        cmp_patchcord((t_object*)obj1->getPdObject(),((Port*)outport)->portIndex,(t_object*)obj2->getPdObject(),((Port*)inport)->portIndex);
//        //qDebug("no connection");

//        this->patchcords.push_back(pc);

    }


    ////unused?
        void deletePatchcord(Patchcord* pc)
        {
            // no repaint

            //cleanup !!!
            patchcordVec::iterator it = std::find(this->patchcords.begin(), this->patchcords.end(), pc);

            if (it != this->patchcords.end()) { this->patchcords.erase(it); }

        }

    //cm_patchcord* pc = new cm_patchcord(obj1,outport,obj2,inport);

    ////
    /// \brief delete all patchcords for object
    /// \param obj
    ///
    void deletePatchcordsFor(UIWidget* obj)
    {
        //for //(int i=0;i<this->patchcords.size();i++)
        std::vector<Patchcord*>::iterator it;
        for (it=this->patchcords.begin(); it!= this->patchcords.end(); )
        {
            if ((*it)->connectsObject(obj))
                it =this->patchcords.erase(it);
            else
                ++it;

        }

        this->repaint();
    }

    ////
    /// \brief delete object box
    /// \param box
    ///
    void deleteBox(UIObject* box)
    {

        //TODO

        if (box->pdObject())
        {
            //NEEDS FIX
            if ((t_object*)(box->pdObject()))
                if (!box->errorBox())
                    cmp_deleteobject(this->pdCanvas, (t_object*)box->pdObject());
        }
        else
        {
            qDebug("didn't delete pd object");
        }

        this->deletePatchcordsFor(box);

        box->close();
    }

    ////
    /// \brief delete all selected object boxes
    ///
    void delBoxes()
    {
        objectVec::iterator it;
        for (it = selObjectBoxes.begin() ; it != selObjectBoxes.end(); ++it)
        {
            //((UIObject*) this->selObjectBoxes.at(i))
            this->deleteBox( *it  );
        }

        selObjectBoxes.clear();;

    }

    ////
    /// \brief delete all selected patchcords
    ///
    void delSelectedPatchcords()
    {
        //cleanup
        //for (int i=0;i<this->patchcords.size(); i++)
        std::vector<Patchcord*>::iterator it;
        for (it=this->patchcords.begin(); it!= this->patchcords.end(); )
        {
            if ( (*it) -> selected )
            {
                Patchcord*p = *it;

                t_object* obj1 =(t_object*) p->getObj1()->pdObject();
                t_object* obj2 =(t_object*) p->getObj2()->pdObject();

                int out1 = p->getOutIdx();
                int in2 = p->getInIdx();

                cmp_delete_patchcord(obj1,out1,obj2,in2);
                it = this->patchcords.erase(it);
            }
            else
                ++it;
        }

        this->repaint();
    }

    ////
    /// \brief change edit mode flag
    /// \param mode
    ///

    void setEditMode(t_editMode mode)
    {
        this->editMode = mode;

        QPalette Pal(palette());
        Pal.setColor(QPalette::Background, (mode != em_Locked)?QColor(255,255,255):QColor(245,245,245));
        this->setAutoFillBackground(true);
        this->setPalette(Pal);

        this->deselectBoxes();
        this->hoverPatchcordsOff();

        this->repaint();
    }


    ////
    /// \brief get edit mode flag
    /// \return
    ///
    t_editMode getEditMode(){return this->editMode;}

    ////
    /// \brief returns object by index - this is needed by parser
    /// \param idx
    /// \return cm_widget pointer
    ///
    UIObject* getObjectByIndex(int idx)
    {
        if ((idx< (int)this->objectBoxes.size()) && (idx>=0))
            return this->objectBoxes.at(idx);
        else
        {
            qDebug("object not found");
            return 0;
        }
    }


    ////
    /// \brief set the show/hide grid flag
    /// \param val
    ///
    void setGridEnabled(bool val)
    {this->gridEnabled = val;}


    ////
    /// \brief align to grid flag
    /// \param val
    ///
    void setGridSnap(bool val)
    {
        this->gridSnap = val;
    }


    ////
    /// \brief returns vector of all object boxes - needed by filesaver
    /// \return
    ///
    std::vector<UIObject*> getObjectBoxes()
    {
        return this->objectBoxes;
    }

    std::vector<Patchcord*>getPatchcords()
    {
        return this->patchcords;
    }


    ////
    /// \brief converts object pointers to their numbers in canvas and returns pd string for filesaver
    /// \param patchcord
    /// \return
    ///


    int findObjectIndex(UIObject * obj)
    {
        UIObject* obj1;
        std::vector<UIObject*>::iterator iter = std::find(this->objectBoxes.begin(), objectBoxes.end(), obj);
        size_t index = std::distance(this->objectBoxes.begin(), iter);
        if(index != this->objectBoxes.size())
        {
            return index;
        }
        return -1;

    }
    std::string getPatchcordAsString(Patchcord* patchcord)
    {
        //TODO


        int obj1i = this->findObjectIndex(patchcord->getObj1());
        int obj2i = this->findObjectIndex(patchcord->getObj2());

        if ((obj1i>=0) && (obj2i>=0))
        {
            std::string ret;

            ret += std::to_string(obj1i) + " ";
            ret += std::to_string(patchcord->getOutIdx()) + " ";

            ret += std::to_string(obj2i) + " ";
            ret += std::to_string(patchcord->getInIdx()) + " ";

            return ret;

        }
        else qDebug ("patchcord to string error");

        return "";

    }

signals:

public slots:

    void s_InMousePressed(UIWidget* obj, QMouseEvent* ev);
    void s_InMouseReleased(UIWidget*, QMouseEvent*);
    void s_OutMousePressed(UIWidget *obj, QMouseEvent*);
    void s_OutMouseReleased(UIWidget*, QMouseEvent*);

    ////
    /// \brief slot called by box when it is selected
    /// \param box
    ///
    void s_SelectBox(UIWidget* box);

    ////
    /// \brief TODO check. slot called by box when it starts moving
    /// \param box
    /// \param event
    ///
    void s_MoveBox(UIWidget* box, QMouseEvent* event);

    //    void portMouseReleased();
    //    void portMouseEntered();
    //    void portMouseLeaved();


    ////
    /// \brief cancels patchcord creation
    ///
    void cancelPatchcord()
    {
        this->newLine.active = false;
        this->repaint();
    }
private:

};

}

#endif // CM_CANVAS_H
