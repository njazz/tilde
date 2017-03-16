#ifndef CM_OBJECT_H
#define CM_OBJECT_H

#include "cm_widget.h"
#include "cm_port.h"
#include "cm_sizebox.h"

#include "cm_preferences.h"

#include "cm_pdlink.h"

#include <QMainWindow>
#include <QObject>

namespace qtpd
{

typedef std::vector<Port*> portVec;

////
/// \brief base class for all object boxes - standard and special
///
class UIObject : public UIWidget
{
    //broken, check that
    Q_OBJECT

private:
    //temporary?
    void* pdObject_;

    portVec* inlets_;
    portVec*  outlets_;

    std::string pdObjectName_;  //not to be confused with QObject objectName
    std::string objectData_;     //name and arguments etc

    bool errorBox_;

    t_objectSize objectSizeMode;
    int minimumBoxWidth_;

    SizeBox* sizeBox;

    PropertyList properties_;

    QMainWindow *SubpatchWindow_;



public:
    //cm_object();
    explicit UIObject(UIWidget *parent = 0);

    //cm_object(std::string objectData, cm_widget *parent=0) {};
    // static cm_object* createObject(std::string objectData, cm_widget *parent=0) {};

    ////
    /// \brief init properties for the class - called from constructor
    ///
    virtual void initProperties()
    {
        this->properties()->create("Size","Box","0.1",this->size());
        this->properties()->create("Position","Box","0.1",this->pos());
        this->properties()->create("FontSize","Box","0.1",11.);

        this->properties()->create("PresetName","Preset","0.1",gensym(""));
        this->properties()->create("SendSymbol","Preset","0.1",gensym(""));
        this->properties()->create("ReceiveSymbol","Preset","0.1",gensym(""));

        this->properties()->create("BorderColor","Color","0.1",QColor(224,224,224,255));

    }

    PropertyList* properties()
    {
        return &this->properties_;
    }

    ////
    /// \brief sets inlet position (cm_port)
    /// \details this is reserved for more versatile UI
    /// \param idx
    /// \return
    ///
    ///

    void setInletsPos()
    {
        float w = this->width() - 10;
        //w = (w < 40) ? 40 : w;

        float s = (inlets_->size()<2)?inlets_->size():(inlets_->size()-1);

        for (int i = 0; i < (int)inlets_->size(); i++) {
            float x = (w) / s * (float)i;
            float y = 0;

            inlets_->at(i)->move(x, y);
            inlets_->at(i)->repaint();
        }
    }

    ////
    /// \brief sets outlet position (cm_port)
    /// \details this is reserved for more versatile UI
    /// \param idx
    /// \return
    ///
    ///
    void setOutletsPos()
    {
        float w = this->width() - 10;
        //w = (w < 40) ? 40 : w;

        float s = (outlets_->size()<2)?outlets_->size():(outlets_->size()-1);

        for (int i = 0; i < (int)outlets_->size(); i++) {
            float x = (w) / s * (float)i;
            float y = this->height() - 3;

            outlets_->at(i)->move(x, y);
            outlets_->at(i)->repaint();
        }
    }

    ////
    /// \brief adds single inlet (cm_port)
    /// \details overriden by canvas to hide ports in canvas view
    /// \param idx
    /// \return
    ///
    ///
    virtual void addInlet()
    {
        Port* new_in = new Port(this);
        new_in->portType = Port::portInlet;
        new_in->portIndex = inlets_->size();

        if (this->pdObject_)
        {
            new_in->portClass = cmp_get_inlet_type((t_object*)this->pdObject_, new_in->portIndex);
        }
        else
            new_in->portClass = 0;


        new_in->setEditModeRef(this->getEditModeRef());

        inlets_->push_back(new_in);
        connect(new_in, &Port::mousePressed, static_cast<UIWidget*>(this->parent()), &UIWidget::s_InMousePressed);
        connect(new_in, &Port::mouseReleased, static_cast<UIWidget*>(this->parent()), &UIWidget::s_InMouseReleased);

        new_in->show();

        this->setInletsPos();
    }

    ////
    /// \brief adds single outlet (cm_port)
    /// \param idx
    /// \return
    ///

    virtual void addOutlet()
    {
        Port* new_out = new Port(this);
        new_out->portType = Port::portOutlet;
        new_out->portIndex = outlets_->size();

        if (this->pdObject_)
        {
            new_out->portClass = cmp_get_outlet_type((t_object*)this->pdObject_, new_out->portIndex);
        }
        else
            new_out->portClass = 0;



        new_out->setEditModeRef(this->getEditModeRef());

        outlets_->push_back(new_out);
        connect(new_out, &Port::mousePressed, static_cast<UIWidget*>(this->parent()), &UIWidget::s_OutMousePressed);
        connect(new_out, &Port::mouseReleased, static_cast<UIWidget*>(this->parent()), &UIWidget::s_OutMouseReleased);

        new_out->show();

        this->setOutletsPos();
    }


    ////
    /// \brief gets inlet (cm_port) at specified index
    /// \param idx
    /// \return
    ///

    Port* inletAt(int idx)
    {
        if (idx<((int)this->inlets_->size()))
            return this->inlets_->at(idx);
        else
            return 0;
    }

    ////
    /// \brief gets outlet (cm_port) at specified index
    /// \param idx
    /// \return
    ///

    Port* outletAt(int idx)
    {
        if (idx<((int)this->outlets_->size()))
            return this->outlets_->at(idx);
        else
            return 0;
    }

    ////
    /// \brief returns 1 if signal~
    /// \param idx
    /// \return
    ///
    int inletType(int idx)
    {
        if ((t_object*)this->pdObject_)
            return cmp_get_inlet_type((t_object*)this->pdObject_, idx);
        else
            return 0;
    }

    ////
    /// \brief inlet count
    /// \return
    ///
    int inletCount()
    {return inlets_->size();}

    ////
    /// \brief returns 1 if signal~
    /// \param idx
    /// \return
    ///
    int outletType(int idx)
    {
        if ((t_object*)this->pdObject_)
            return cmp_get_outlet_type((t_object*)this->pdObject_, idx);
        else
            return 0;
    }

    ////
    /// \brief outlet count
    /// \return
    ///
    int outletCount()
    {return outlets_->size();}

    ///////

    //    portVec *inletRef()
    //    {
    //        return inlets_;
    //    }

    //    portVec *outletRef()
    //    {
    //        return outlets_;
    //    }

    //    void setInletRef(portVec* ins)
    //    {
    //        if (inlets_) delete inlets_;
    //        inlets_ = ins;
    //    }

    //    void setOutletRef(portVec* outs)
    //    {
    //        if (outlets_) delete outlets_;
    //        outlets_ = outs;
    //    }




    ////////

    ////
    /// \brief sets object text data
    /// \return
    ///

    virtual void setObjectData(std::string objData)
    {
        this->objectData_ = objData;

    }

    ////
    /// \brief call this after setting object data
    ///
    virtual void autoResize()
    {
        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);

        this->setFixedWidth((int)fm.width(QString(this->objectData_.c_str())) + 5);
        if (this->width()<this->minimumBoxWidth()) this->setFixedWidth(this->minimumBoxWidth());

    }

    ////
    /// \brief gets object text data /usually overriden by ui objects/
    /// \return
    ///
    std::string objectData()
    {return this->objectData_;}

    ////
    /// \brief returns pointer to pd object.
    /// \details gui-only objects can ovverride it with function that returns 0
    /// \return
    ///
    virtual void* pdObject() {return this->pdObject_;}

    ////
    /// \brief sets pointer to pd object
    /// \details overriden by ui objects to be able to connect to pd objects
    /// \param obj
    ///
    virtual void setPdObject(void*obj) {this->pdObject_ = obj;}

    ////
    /// \brief returns true if object doesn't exist
    /// \details
    /// \return
    ///
    bool errorBox() {return this->errorBox_;}

    ////
    /// \brief sets object box error flag
    /// \param val
    ///
    void setErrorBox(bool val) {this->errorBox_ = val;}

    ////
    /// \brief returns object's text for client-based file saving
    /// \return
    ///
    virtual std::string asPdFileString()
    {
        std::string ret;

        ret = "#X obj ";
        ret += std::to_string(this->x()) + " " + std::to_string(this->y())+ " ";
        ret += this->pdObjectName_+ " "+ this->objectData_ + this->properties_.asPdFileString();

        return ret;
    }

    void setPdObjectName(std::string name)
    {
        pdObjectName_ = name;
    }

    ////
    /// \brief temporary - remove later
    /// \details nonzero pointer for different drawing
    ///
    QMainWindow* subpatchWindow(){return SubpatchWindow_;}
    void setSubpatchWindow(QMainWindow* cwindow){ SubpatchWindow_ = cwindow;}


    ////
    /// \brief sets pointer to edit mode flag value in parent canvas
    /// \param canvasEditMode
    ///
    void setEditModeRef(t_editMode *canvasEditMode)
    {
        UIWidget::setEditModeRef(canvasEditMode);

        // todo
        for (int i=0;i<this->inlets_->size();i++)
        {
            this->inletAt(i)->setEditModeRef(canvasEditMode);
        }

        for (int i=0;i<this->outlets_->size();i++)
        {
            this->outletAt(i)->setEditModeRef(canvasEditMode);
        }
    }

    //////////

    void resizeEvent(QResizeEvent *event)
    {

        this->sizeBox->move(this->width()-7, this->height()-7);

        //todo fixed width
        if (this->width()<this->minimumBoxWidth()) this->setFixedWidth(this->minimumBoxWidth());

        this->setInletsPos();
        this->setOutletsPos();

    }


    void enterEvent(QEvent*)
    {
        if (this->getEditMode() ==  em_Unlocked)
            this->sizeBox->show();
    }

    void leaveEvent(QEvent*)
    {
        if (this->getEditMode() ==  em_Unlocked)
            this->sizeBox->hide();
    };

    ////
    /// \brief set secondary 'minimum width' value - used for object box resize
    /// \param w
    ///
    void setMinimumBoxWidth(int w)
    {
        this->minimumBoxWidth_ = w;
    }

    ////
    /// \brief get secondary 'minimum width' value - used for object box resize
    /// \param w
    ///
    int minimumBoxWidth()
    {
        return this->minimumBoxWidth_;
    }

    // ??
    void hide()
    {


        if (this->subpatchWindow())
        {
            qDebug("hide subcanvas window");

            this->subpatchWindow()->hide();
            delete this->SubpatchWindow_;
        }
    }

    void hideSizeBox()
    {
        sizeBox->hide();
    }

    //    virtual ~UIObject()
    //    {
    //        if (this->subpatchWindow())
    //        {
    //            this->subpatchWindow()->hide();
    //            delete this->SubpatchWindow_;
    //        }
    //    }

signals:
    void editObject(void* box);

public slots:
    void resizeBox(int dx);

};

}

#endif // CM_OBJECT_H
