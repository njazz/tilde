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

//#include "cm_canvas_types.h"



namespace qtpd
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
/// \brief draw canvas as patch, box or pd "G-O-P" / patch in patch
typedef enum {ds_Canvas, ds_Box, ds_CanvasInBox} canvasDrawStyle;

////
/// \brief 't_canvas' counterpart. creates objects
///
class Canvas : public UIObject
{
private:
    //todo move this to data class?
    //    objectVec objectBoxes;
    //    patchcordVec patchcords;
    //    objectVec selectionData_.boxes;
    //    patchcordVec selPatchcords;

    //move here. these are global for all draw types (Canvas, Box)
    tCanvasDataPlus data_;
    tCanvasData selectionData_;

    //
    // local !Box
    tRectPlus selFrame;
    tRectPlus newLine;

    // local, !Box
    UIObject *connObj1;
    UIObject *connOutlet;
    //
    UIObject *replaceObject_;

    // local, !Box
    QPoint newObjectPos;
    QPoint dragPrevPos;

    // TODO use widget's standard and create in constructor
    // local, !Box
    t_editMode editMode;

    // local, !Box
    bool gridEnabled;
    bool gridSnap;
    int gridStep;

    //
    canvasDrawStyle drawStyle_;
    // if the canvas is the box, it can have this. Check this later
    // !Canvas
    //QMainWindow *SubcanvasWindow_;
    UIObject *Subcanvas_;

    // !Canvas
    //    QLineEdit* editor_; //remove that

    ObjectMaker *objectMaker_;

    Q_OBJECT

public:

    //encapsulate
    QWidget *dragObject;
    QString fileName;

    //temp
    // todo replace with pd object!
    // t_canvas* pdCanvas;

    explicit Canvas(UIObject *parent = 0);

    ////
    /// \brief creates new view of existing canvas. check this
    /// \param srcCanvas
    /// \param parentCanvas
    /// \param dStyle draw style - Canvas, Box, CanvasInBox
    /// \return
    ///
    static Canvas* newView(Canvas* srcCanvas, UIObject* parentCanvas, canvasDrawStyle dStyle)
    {
        Canvas* ret = new Canvas(parentCanvas);

        //copy here
        //ret->setPdObject(srcCanvas->pdObject());
        //ret->pdCanvas = srcCanvas->pdCanvas;

        ret->setPdObject(srcCanvas->pdObject());

        ret->setDrawStyle(dStyle);

        ret->setMinimumWidth(40);

        qDebug () << " *** src canvas: " << (long)srcCanvas;
        qDebug(" *** port count: %i %i", srcCanvas->inletCount(), srcCanvas->outletCount());

        int ci = cmp_get_inlet_count((t_object*)srcCanvas->pdObject());
        int co = cmp_get_outlet_count((t_object*)srcCanvas->pdObject());

        qDebug(" *** port count @pd: %i %i", ci, co);


        //copying. later fix that with separate data class etc
        for (int i =0; i<srcCanvas->inletCount(); i++)
            ret->addInlet();
        for (int i =0; i<srcCanvas->outletCount(); i++)
            ret->addOutlet();


        //        ret->setInletRef(srcCanvas->inletRef());
        //        ret->setOutletRef(srcCanvas->outletRef());

        //ret->addInlet();//test
        //ret->objectMaker()->hide();

        connect(srcCanvas, &Canvas::updatePortCount, ret, &Canvas::portCountUpdated);

        return ret;

    }

    void addInlet()
    {
        UIObject::addInlet();
        Port*last = inletAt(inletCount()-1);
        if (this->drawStyle()==ds_Canvas)
            last->hide();
    }

    void addOutlet()
    {
        UIObject::addOutlet();
        Port*last = inletAt(inletCount()-1);
        if (this->drawStyle()==ds_Canvas)
            last->hide();
    }

    ////
    /// \brief set draw style
    /// \param ds
    ///
    void setDrawStyle(canvasDrawStyle ds)
    {
        this->drawStyle_ = ds;
    }

    ////
    /// \brief get draw style
    /// \param ds
    ///
    canvasDrawStyle drawStyle()
    {
        return this->drawStyle_;
    }

    ////
    /// \brief main paint routine
    ///
    void paintEvent(QPaintEvent *)
    {
        if (this->drawStyle_ == ds_Canvas)
            this->drawCanvas();
        if (this->drawStyle_ == ds_Box)
            this->drawObjectBox();
    }

    ////
    /// \brief draws canvas contents
    ///
    void drawCanvas()
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
    /// \brief draw object box for the canvas
    ///
    void drawObjectBox()
    {
        QPainter p(this);
        p.setRenderHint(QPainter::HighQualityAntialiasing, true);

        {
            p.setPen(QPen(QColor(192, 192, 192), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 1, this->width(), this->height()-2);
        }

        QColor rectColor = (this->errorBox())? QColor(255, 0, 0) : QColor(128, 128, 128);
        p.setPen(QPen(rectColor, 2,(this->errorBox())? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p.drawRect(0, 0, this->width(), this->height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p.setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
        p.drawText(2, 3, this->width() - 2, this->height() - 3, 0, this->objectData().c_str(), 0);

        if (this->isSelected()) {
            p.setPen(QPen(QColor(0, 192, 255), 2,(this->errorBox())? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p.drawRect(0, 0, this->width(), this->height());
        }
    }

    ////
    /// \brief paint patchcords
    ///
    void paintPatchcords()
    {
        for (int i=0; i< (int)this->data_.patchcords_.size(); i++)
        {
            QPainter p(this);

            QColor b_pc_color = (((Patchcord*)this->data_.patchcords_.at(i))->patchcordType() == cm_pt_signal) ? QColor(128, 160, 192) : QColor(0, 0, 0);
            // cleanup
            QColor pc_color = ((Patchcord*)this->data_.patchcords_.at(i))->mouseover ? QColor(255, 192, 0) : b_pc_color;
            if (((Patchcord*)this->data_.patchcords_.at(i))->selected) pc_color = QColor(0,192,255);

            p.setRenderHint(QPainter::HighQualityAntialiasing, true);
            p.setPen(QPen(pc_color, 1 + (((Patchcord*)this->data_.patchcords_.at(i))->patchcordType() == cm_pt_signal) , Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

            //todo option
            //p.drawLine(((cm_patchcord*)this->data_.patchcords.at(i))->getStartPoint(), ((cm_patchcord*)this->data_.patchcords.at(i))->getEndPoint());

            QPainterPath path;
            QPoint start = ((Patchcord*)this->data_.patchcords_.at(i))->startPoint();
            QPoint end = ((Patchcord*)this->data_.patchcords_.at(i))->endPoint();

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
        for (int i=0; i< (int)this->data_.patchcords_.size(); i++)
        {
            ((Patchcord*)this->data_.patchcords_.at(i))->mouseover = ((Patchcord*)this->data_.patchcords_.at(i))->hover(pos);
            if (((Patchcord*)this->data_.patchcords_.at(i))->mouseover) ret=true;
        }
        return ret;
    }


    ////
    /// \brief resets all patchcords hover color flag
    ///
    void hoverPatchcordsOff()
    {
        //bool ret = false;
        for (int i=0; i< (int)this->data_.patchcords_.size(); i++)
        {
            ((Patchcord*)this->data_.patchcords_.at(i))->mouseover = false;// ((cm_patchcord*)this->data_.patchcords.at(i))->hover(pos);

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
        for (int i=0; i< (int)this->data_.patchcords_.size(); i++)
        {
            ((Patchcord*)this->data_.patchcords_.at(i))->selected = ((Patchcord*)this->data_.patchcords_.at(i))->hover(pos);
            if (((Patchcord*)this->data_.patchcords_.at(i))->selected) ret=true;
        }
        return ret;
    }

    ////
    /// \brief route mouse move handling for different vis types
    /// \param ev
    ///
    void mouseMoveEvent(QMouseEvent* ev)
    {
        if (this->drawStyle() == ds_Canvas)
            this->mouseMoveEventForCanvas(ev);
        if (this->drawStyle() == ds_Box)
            this->mouseMoveEventForBox(ev);
    }

    ////
    /// \brief route mouse press handling for different vis types
    /// \param ev
    ///
    void mousePressEvent(QMouseEvent* ev)
    {
        if (this->drawStyle() == ds_Canvas)
            this->mousePressEventForCanvas(ev);
        if (this->drawStyle() == ds_Box)
            this->mousePressEventForBox(ev);
    }

    ////
    /// \brief route mouse release handling for different vis types
    /// \param ev
    ///
    void mouseReleaseEvent(QMouseEvent* ev)
    {
        if (this->drawStyle() == ds_Canvas)
            this->mouseReleaseEventForCanvas(ev);
        if (this->drawStyle() == ds_Box)
            this->mouseReleaseEventForBox(ev);
    }

    /////////

    ////
    /// \brief mouse move handling
    /// \param ev
    ///
    void mouseMoveEventForCanvas(QMouseEvent *ev)
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
            for (int i=0; i< (int)this->data_.boxes.size();i++)
            {
                QPoint pos = ((UIBox*)this->data_.boxes.at(i))->pos();
                QSize size = ((UIBox*)this->data_.boxes.at(i))->size();
                QRect r = QRect(pos, pos+QPoint(size.width(), size.height()) );

                QRect frame = QRect (this->selFrame.start, this->selFrame.start + this->selFrame.end );

                if (frame.contains(r,false))
                {
                    ((UIBox*)this->data_.boxes.at(i))->select();
                    this->selectionData_.boxes.push_back(this->data_.boxes.at(i));
                }
                else
                {
                    ((UIBox*)this->data_.boxes.at(i))->deselect();

                    auto it = std::find(this->selectionData_.boxes.begin(), this->selectionData_.boxes.end(), this->data_.boxes.at(i));
                    if (it != this->selectionData_.boxes.end()) { this->selectionData_.boxes.erase(it); }


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
    /// \brief mouse down handling for Canvas
    /// \param ev
    ///
    void mousePressEventForCanvas(QMouseEvent* ev)
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
    void mouseReleaseEventForCanvas(QMouseEvent*)
    {
        this->dragObject = 0;

        this->selFrame.active = false;
        this->newLine.active = false;

        this->repaint();
    }


    /////////

    ////
    /// \brief mouse down ForBox
    /// \param ev
    ///
    void mousePressEventForBox(QMouseEvent* ev)
    {
        //open canvas for subpatch
        if (this->getEditMode() != em_Unlocked)
        {
            if (this->Subcanvas_)
            {
                this->Subcanvas_->show();
            }
        }

        //        if ( (this->getEditMode()==em_Unlocked) && this->isSelected())
        //        {
        //            this->editor_->setText(QString(this->objectData().c_str()));
        //            this->editor_->show();
        //            this->editor_->setFocus();
        //        }

        emit selectBox(this);
        this->dragOffset = ev->pos();
    }

    ////
    /// \brief mouse up ForBox
    ///
    void mouseReleaseEventForBox(QMouseEvent*)
    {
        this->repaint();
    }

    ////
    /// \brief mouse move ForBox
    /// \param event
    ///
    void mouseMoveEventForBox(QMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();


        if ( (this->getEditMode() != em_Unlocked) && (this->Subcanvas_) )
        {
            this->setCursor(QCursor(Qt::PointingHandCursor));
        }
        else
        {
            this->setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    /////////

    ////
    /// \brief deselect all object boxes
    ///
    void deselectBoxes()
    {
        for (int i=0;i< (int)this->selectionData_.boxes.size();i++)
        {
            if (this->selectionData_.boxes.at(i))
                ((UIBox*)this->selectionData_.boxes.at(i))->deselect();

        }

        this->selectionData_.boxes.clear();
    }

    ////
    /// \brief restore "pd" object when loading from file
    /// \details this is probably useless -
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
        if (!this->pdObject())
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

        this->data_.boxes.push_back(box);

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

    //        this->data_.boxes.push_back(box);

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

    //        this->data_.boxes.push_back(msg);

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

    //        this->data_.boxes.push_back(flo);

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
    UIObject* createObject(std::string uiObjectName, std::string objectData1, QPoint pos)
    {

        qDebug("!!!");

        QStringList atoms = QString(objectData1.c_str()).split( " " );

        //this is moved here to have all checks for special objects in one place
        //(later - inlets/outlets)

        if (atoms.count())
        {
            if(atoms.at(0) == "pd")
            {
                //lol
                std::pair<QMainWindow*, UIObject*> newPatch;

                newPatch = emit createSubpatchWindow();

                QMainWindow* subPatch = newPatch.first;
                Canvas* newCanvas = (Canvas*)newPatch.second;

                // crazy here
                UIObject *b = this->createBoxForCanvas(newCanvas, objectData1, pos);
                ((UIBox*)b)->setSubpatchWindow ((QMainWindow*)subPatch);
                ((Canvas*)b)->setSubcanvas(newCanvas);

                //                this->dragObject = 0;
                //                this->objectMaker()->close();

                qDebug("subpatch>>");

                subPatch->show();
                return b;
            }

            if (atoms.at(0) == "restore")
            {
                return 0;
            }


        }

        UIObject *obj = ObjectLoader::inst().createObject(uiObjectName, objectData1, (t_canvas*)this->pdObject(), (UIWidget*)this);

        connect(obj,&UIMessage::selectBox, this, &Canvas::s_SelectBox);
        connect(obj,&UIMessage::moveBox, this, &Canvas::s_MoveBox);
        obj->setEditModeRef(&this->editMode);
        obj->move(pos);
        this->data_.boxes.push_back(obj);

        obj->show();

        qDebug() << "created object: [" << QString(uiObjectName.c_str()) << "]" << objectData1.c_str() << ":" << atoms.count() << "@" << QString(std::to_string((long)this->pdObject()).c_str());

        if (atoms.count())
        {
            if(
                    (atoms.at(0) == "inlet") ||
                    (atoms.at(0) == "inlet~") ||
                    (atoms.at(0) == "outlet") ||
                    (atoms.at(0) == "outlet~") )
            {
                qDebug("ports");
                emit updatePortCount();
                //

                portLocalCountUpdated();
            }
        }

        connect(obj,&UIObject::editObject,this,&Canvas::objectStartsEdit);

        return obj;
    }

    ////
    /// \brief TODO check. creates object box for subcanvas
    /// \param canvas
    /// \param objectData
    /// \param pos
    /// \return
    ///
    UIObject* createBoxForCanvas(Canvas* newCanvas, std::string objectData, QPoint pos)
    {

        //cleanup
        UIObject *obj = (UIObject*) Canvas::newView(newCanvas, (UIObject*)this, ds_Box);

        //test
        //obj->setFixedWidth(40);

        obj->setObjectData(objectData);

        connect(obj,&UIMessage::selectBox, this, &Canvas::s_SelectBox);
        connect(obj,&UIMessage::moveBox, this, &Canvas::s_MoveBox);

        obj->setEditModeRef(&this->editMode);
        obj->move(pos);
        this->data_.boxes.push_back(obj);

        QPalette Pal(palette());
        Pal.setColor(QPalette::Background, QColor(240,240,240));
        obj->setAutoFillBackground(true);
        obj->setPalette(Pal);


        obj->show();

        qDebug() << "create subcanvas @" << QString(std::to_string((long)this->pdObject()).c_str());

        return obj;

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

    //        this->data_.boxes.push_back(txt);

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
            this->data_.patchcords_.push_back(pc);
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

        //        this->data_.patchcords.push_back(pc);

    }


    //    ////unused?
    //    void deletePatchcord(Patchcord* pc)
    //    {
    //        // no repaint

    //        //cleanup !!!
    //        patchcordVec::iterator it = std::find(this->data_.patchcords.begin(), this->data_.patchcords.end(), pc);

    //        if (it != this->data_.patchcords.end()) { this->data_.patchcords.erase(it); }

    //    }


    ////
    /// \brief delete all patchcords for object
    /// \param obj
    ///
    void deletePatchcordsFor(UIWidget* obj)
    {
        //for //(int i=0;i<this->data_.patchcords.size();i++)
        std::vector<Patchcord*>::iterator it;
        for (it=this->data_.patchcords_.begin(); it!= this->data_.patchcords_.end(); )
        {
            if ((*it)->connectsObject(obj))
                it =this->data_.patchcords_.erase(it);
            else
                ++it;

        }

        this->repaint();
    }

    //    ////
    //    /// \brief delete object box
    //    /// \param box
    //    ///
    //    void deleteBox(UIObject* box)
    //    {

    //        //TODO
    //        qDebug("delete %lu | %lu", (long)box, (long) box->pdObject());

    //        if (box->pdObject())
    //        {
    //            //NEEDS FIX
    //            if ((t_object*)(box->pdObject()))
    //                if (!box->errorBox())
    //                    cmp_deleteobject(this->pdCanvas, (t_object*)box->pdObject());
    //        }
    //        else
    //        {
    //            qDebug("didn't delete pd object");
    //        }

    //        this->deletePatchcordsFor(box);

    //        box->close();
    //    }

    ////
    /// \brief delete single box
    ///
    void deleteBox(UIObject*box)
    {
        deselectBoxes();
        selectionData_.boxes.push_back(box);
        delBoxes();
    }

    ////
    /// \brief delete all selected object boxes
    ///
    void delBoxes()
    {
        objectVec::iterator it;
        for (it = selectionData_.boxes.begin() ; it != selectionData_.boxes.end(); ++it)

        {
            //
            UIObject* box = *it;
            qDebug("delete %lu | %lu", (long)box, (long) box->pdObject());

            if (box->pdObject())
            {
                //NEEDS FIX
                if ((t_object*)(box->pdObject()))
                {
                    if (!box->errorBox())
                        cmp_deleteobject((t_canvas*)this->pdObject(), (t_object*)box->pdObject());
                    box->setPdObject(0);
                }
            }
            else
            {
                qDebug("didn't delete pd object");
            }

            this->deletePatchcordsFor(box);

            box->close();

            data_.boxes.erase(std::remove(data_.boxes.begin(), data_.boxes.end(), *it), data_.boxes.end());
            //selectionData_.boxes.erase(std::remove(selectionData_.boxes.begin(), selectionData_.boxes.end(), *it), selectionData_.boxes.end());

        }

        selectionData_.boxes.clear();;

    }

    ////
    /// \brief delete all selected patchcords
    ///
    void delSelectedPatchcords()
    {
        //cleanup
        //for (int i=0;i<this->data_.patchcords.size(); i++)
        std::vector<Patchcord*>::iterator it;
        for (it=this->data_.patchcords_.begin(); it!= this->data_.patchcords_.end(); )
        {
            if ( (*it) -> selected )
            {
                Patchcord*p = *it;

                t_object* obj1 =(t_object*) p->obj1()->pdObject();
                t_object* obj2 =(t_object*) p->obj2()->pdObject();

                if (obj1 && obj2)
                {
                    int out1 = p->outletIndex();
                    int in2 = p->inletIndex();

                    if ( (out1>=0) && (in2>=0) )
                        cmp_delete_patchcord(obj1,out1,obj2,in2);
                    else
                        qDebug("object error. didn't delete pd patchcord");
                }
                else
                    qDebug("object error. didn't delete pd patchcord");

                it = this->data_.patchcords_.erase(it);
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
        if ((idx< (int)this->data_.boxes.size()) && (idx>=0))
            return this->data_.boxes.at(idx);
        else
        {
            qDebug("object not found");
            return 0;
        }
    }

    ////
    /// \brief set object value - mostly for canvas as box
    /// \param objData
    ///
    void setObjectData(std::string objData)
    {
        if (this->drawStyle() == ds_Box)
        {
            UIObject::setObjectData(objData);

            QFont myFont(PREF_QSTRING("Font"), 11);
            QFontMetrics fm(myFont);
            int new_w = fm.width(QString(objData.c_str())) + 10;
            new_w = (new_w<25) ? 25 : new_w;
            this->setFixedWidth(new_w);
            this->setFixedHeight(20);

            qDebug("obj width %i", new_w);
            //
            this->setInletsPos();
            this->setOutletsPos();
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
    objectVec getObjectBoxes()
    {
        return this->data_.boxes;
    }

    ////
    /// \brief returns vector of all patchcords - needed by filesaver
    /// \return
    ///
    patchcordVec patchcords()
    {
        return this->data_.patchcords_;
    }


    ////
    /// \brief returns patchcords that are connected to specific object
    /// \param obj
    /// \return
    ///
    patchcordVec patchcordsForObject(UIObject* obj)
    {
        patchcordVec ret;

        patchcordVec::iterator it;
        for (it = data_.patchcords_.begin(); it != data_.patchcords_.end(); ++it)
        {
            if (
                    (((Patchcord*)*it)->obj1() == obj)
                    ||
                    (((Patchcord*)*it)->obj2() == obj)
                    )
            {
                ret.push_back(*it);
            }
        }

        return ret;

    }
    //    //
    //    / \brief converts object pointers to their numbers in canvas and returns pd string for filesaver
    //    / \param patchcord
    //    / \return
    //    /


    ////
    /// \brief find object index in list
    /// \details this may be different from object index inside pd canvas
    /// \param obj
    /// \return
    ///
    int findObjectIndex(UIObject * obj)
    {
        //UIObject* obj1;
        std::vector<UIObject*>::iterator iter = std::find(this->data_.boxes.begin(), data_.boxes.end(), obj);
        size_t index = std::distance(this->data_.boxes.begin(), iter);
        if(index != this->data_.boxes.size())
        {
            return index;
        }
        return -1;

    }


    void setSubcanvas(UIObject* obj){Subcanvas_ = obj;}
    //UIObject* subcanvas(){return Subcanvas_;}

    //lol
    //QStringList canvasAsPdStrings();

    ////
    /// \brief this returns "restore ..." for canvas as box or calls filesaver for canvas
    /// \return
    ///
    virtual std::string asPdFileString()
    {
        if (this->drawStyle() == ds_Canvas)
        {

            // todo cleanup

            std::string ret;

            ret = "#N canvas ";
            ret += std::to_string(this->x()) + " ";
            ret += std::to_string(this->y()) + " ";
            ret += std::to_string(this->width()) + "  ";
            ret += std::to_string(this->height()) + " ";
            ret += "10; \r\n";


            return ret;


        }

        if (this->drawStyle() == ds_Box)
        {
            std::string ret;

            if (this->Subcanvas_)
            {
                QStringList patchList = ((Canvas*)this->Subcanvas_)->canvasAsPdStrings();

                ret += patchList.join("\r\n").toStdString();
            }
            else
            {
                qDebug() << "missing subcanvas data";
            }


            ret += "#X restore ";
            ret += std::to_string(this->x()) + " " + std::to_string(this->y())+ " ";
            //ret += this->pdObjectName_+ this->objectData_ + this->properties_.asPdFileString();
            ret += objectData();

            return ret;

        }

        return "";
    }



    ///////
    ///
    /////
    /// \brief returns patchcord as pd string
    /// \details move this later
    /// \param patchcord
    /// \return
    ///
    std::string patchcordAsPdFileString(Patchcord* pcord)
    {
        //TODO


        int obj1i = this->findObjectIndex(pcord->obj1());
        int obj2i = this->findObjectIndex(pcord->obj2());

        if ((obj1i>=0) && (obj2i>=0))
        {
            std::string ret;

            ret += std::to_string(obj1i) + " ";
            ret += std::to_string(pcord->outletIndex()) + " ";

            ret += std::to_string(obj2i) + " ";
            ret += std::to_string(pcord->inletIndex()) + " ";

            return ret;

        }
        else qDebug ("patchcord to string error");

        return "";

    }

    structPatchcordNumbers patchcordAsNumbers(Patchcord* pcord)
    {
        //TODO

        structPatchcordNumbers ret;

        int obj1i = this->findObjectIndex(pcord->obj1());
        int obj2i = this->findObjectIndex(pcord->obj2());

        if ((obj1i>=0) && (obj2i>=0))
        {
            //std::string ret;

            ret.obj1 = (obj1i);
            ret.out1 =pcord->outletIndex();

            ret.obj2 = (obj2i) ;
            ret.in2 = pcord->inletIndex();



        }
        else
        {
            qDebug ("patchcord to string error");
            ret.obj1 = 0;
            ret.obj2 = 0;
            ret.out1 = 0;
            ret.in2 = 0;

        }

        return ret;

    }


    ////
    /// \brief selects single box. mostly used by replace object routine in objectmaker
    /// \param obj
    ///
    void selectObject(UIObject* obj)
    {
        selectionData_.boxes.push_back(obj);
    }

    ////
    /// \brief change size to fit all objects
    ///
    void resizeToObjects()
    {


    }

    QStringList canvasAsPdStrings()
    {

        QStringList ret;

        //save canvas
        //todo canvas is subpatch flag
        std::string out1;

        out1 = this->asPdFileString(); //"#N canvas 0 0 400 300 10;\r\n";     //temporary
        //file->write(out1.c_str(),out1.size());

        ret.append(out1.c_str());

        //objects
        std::vector<UIObject*> objects = this->getObjectBoxes();
        std::vector<UIObject*>::iterator it;

        for (it = objects.begin(); it!= objects.end(); ++it)
        {
            // !check for subpatches
            //            out1 = "#X obj ";
            //            out1 += std::to_string(((UIObject*)*it)->x()) + " " + std::to_string(((UIObject*)*it)->y())+ " ";

            out1 = ((UIObject*)*it)->asPdFileString();
            out1 +=";\r\n" ;

            ret.append(out1.c_str());

        }

        //patchcords
        std::vector<Patchcord*> patchcords = this->patchcords();
        std::vector<Patchcord*>::iterator it2;

        for (it2 = patchcords.begin(); it2!= patchcords.end(); ++it2)
        {
            // check for subpatches
            out1 = "#X connect ";
            out1 += this->patchcordAsPdFileString(*it2);
            out1 +=";\r\n";

            ret.append(out1.c_str());

        }

        return ret;
    }



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

    ObjectMaker* objectMaker(){return objectMaker_;}



    void portLocalCountUpdated()
    {
        qDebug("port local count update");

        if (this->pdObject())
        {
            qDebug("setting ports");

            int in_c = cmp_get_inlet_count((t_object*)this->pdObject());
            int out_c = cmp_get_outlet_count((t_object*)this->pdObject());

            int obj_in = this->inletCount();
            int obj_out = this->outletCount();

            if (in_c>obj_in)
            {
                this->addInlet();
                qDebug("add inlet");
            }

            if (out_c>obj_out)
            {
                this->addOutlet();
                qDebug("add outlet");
            }

            qDebug () << " ** canvas: " << (long)this;

            qDebug(" ** port count: %i %i", this->inletCount(), this->outletCount());

            int ci = cmp_get_inlet_count((t_object*)this->pdObject());
            int co = cmp_get_outlet_count((t_object*)this->pdObject());

            qDebug(" ** port count @pd: %i %i", ci, co);

            //            qDebug () << ((drawStyle()==ds_Box)?"this is box canvas":"this is canvas");
            //            qDebug () << "size" << this->size();

            //this->repaint();

        }


    };

    void setReplaceObject(UIObject* obj){replaceObject_ = obj;}
    UIObject* replaceObject(){return replaceObject_;}


private:

private slots:
    //    void editorDone();
    //    void editorChanged();

    ////
    /// \brief slot in Box-style canvas for handling new ins/outs
    ///
    void portCountUpdated()
    {
        qDebug("port count update");

        if (this->pdObject())
        {
            qDebug("setting ports");

            int in_c = cmp_get_inlet_count((t_object*)this->pdObject());
            int out_c = cmp_get_outlet_count((t_object*)this->pdObject());

            int obj_in = this->inletCount();
            int obj_out = this->outletCount();

            if (in_c>obj_in)
            {
                this->addInlet();
                qDebug("add inlet");
            }

            if (out_c>obj_out)
            {
                this->addOutlet();
                qDebug("add outlet");

            }

            qDebug () << ((drawStyle()==ds_Box)?"this is box canvas":"this is canvas");
            qDebug () << "size" << this->size();

            this->repaint();

        }


    };



    void objectStartsEdit(void* obj)
    {
        deselectBoxes();

        qDebug("edit box>>");

        replaceObject_ = (UIObject*)obj;



        objectMaker()->move(replaceObject_->pos());
        objectMaker()->setFixedSize(replaceObject_->size());
        objectMaker()->setText(QString(replaceObject_->objectData().c_str()));
        objectMaker()->setFocus();
        //replaceObject_->hide();
        objectMaker()->show();
        objectMaker()->raise();

    }

signals:
    std::pair<QMainWindow*,qtpd::UIObject*> createSubpatchWindow();
    void updatePortCount();

};

}

#endif // CM_CANVAS_H
