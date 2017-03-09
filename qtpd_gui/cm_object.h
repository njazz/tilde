#ifndef CM_OBJECT_H
#define CM_OBJECT_H

#include "cm_widget.h"
#include "cm_port.h"
#include "cm_sizebox.h"

#include "cm_preferences.h"

namespace cm
{

////
/// \brief object box size constraints
///
typedef enum
{
    os_Fixed,
    os_FixedHeight,
    os_Free
} t_objectSize;

////
/// \brief base class for all object boxes - standard and special
///
class UIObject : public UIWidget
{
private:
    //temporary?
    void* pdObject_;

    std::vector<Port*> inlets_;
    std::vector<Port*> outlets_;

    std::string objectData;     //name and arguments etc

    bool errorBox_;

    t_objectSize objectSizeMode;

    SizeBox* sizeBox;

    UIObject();
public:
    //cm_object();
    explicit UIObject(UIWidget *parent = 0);

    //cm_object(std::string objectData, cm_widget *parent=0) {};


   // static cm_object* createObject(std::string objectData, cm_widget *parent=0) {};

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

        float s = (inlets_.size()<2)?inlets_.size():(inlets_.size()-1);

        for (int i = 0; i < (int)inlets_.size(); i++) {
            float x = (w) / s * (float)i;
            float y = 0;

            inlets_.at(i)->move(x, y);
            inlets_.at(i)->repaint();
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

        float s = (outlets_.size()<2)?outlets_.size():(outlets_.size()-1);

        for (int i = 0; i < (int)outlets_.size(); i++) {
            float x = (w) / s * (float)i;
            float y = this->height() - 3;

            outlets_.at(i)->move(x, y);
            outlets_.at(i)->repaint();
        }
    }

    ////
    /// \brief adds single inlet (cm_port)
    /// \param idx
    /// \return
    ///
    ///
    void addInlet()
    {
        Port* new_in = new Port(this);
        new_in->portType = Port::portInlet;

        new_in->portIndex = inlets_.size();

        new_in->setEditModeRef(this->getEditModeRef());

        inlets_.push_back(new_in);
        connect(new_in, &Port::mousePressed, static_cast<UIWidget*>(this->parent()), &UIWidget::s_InMousePressed);
        connect(new_in, &Port::mouseReleased, static_cast<UIWidget*>(this->parent()), &UIWidget::s_InMouseReleased);


        this->setInletsPos();
    }

    ////
    /// \brief adds single outlet (cm_port)
    /// \param idx
    /// \return
    ///

    void addOutlet()
    {
        Port* new_out = new Port(this);
        new_out->portType = Port::portOutlet;

        new_out->portIndex = outlets_.size();

        new_out->setEditModeRef(this->getEditModeRef());

        outlets_.push_back(new_out);
        connect(new_out, &Port::mousePressed, static_cast<UIWidget*>(this->parent()), &UIWidget::s_OutMousePressed);
        connect(new_out, &Port::mouseReleased, static_cast<UIWidget*>(this->parent()), &UIWidget::s_OutMouseReleased);

        this->setOutletsPos();
    }

    ////
    /// \brief gets inlet (cm_port) at specified index
    /// \param idx
    /// \return
    ///

    Port* getInletAt(int idx)
    {
        if (idx<((int)this->inlets_.size()))
            return this->inlets_.at(idx);
        else
            return 0;
    }

    ////
    /// \brief gets outlet (cm_port) at specified index
    /// \param idx
    /// \return
    ///

    Port* getOutletAt(int idx)
    {
        if (idx<((int)this->outlets_.size()))
            return this->outlets_.at(idx);
        else
            return 0;
    }

    ////////

    ////
    /// \brief sets object text data /usually overriden by ui objects/
    /// \return
    ///

    void setObjectData(std::string objData)
    {
        this->objectData = objData;
        QFont myFont(PREF_STRING("Font"), 11);
        QFontMetrics fm(myFont);

        this->setFixedWidth((int)fm.width(QString(this->objectData.c_str())) + 5);
        if (this->width()<40) this->setFixedWidth(40);
    }

    ////
    /// \brief gets object text data /usually overriden by ui objects/
    /// \return
    ///
    std::string getObjectData()
    {return this->objectData;}

    ////
    /// \brief returns pointer to pd object.
    /// \details gui-only objects can ovverride it with function that returns 0
    /// \return
    ///
    virtual void* getPdObject() {return this->pdObject_;}

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
    bool isErrorBox() {return this->errorBox_;}

    ////
    /// \brief sets object box error flag
    /// \param val
    ///
    void setErrorBox(bool val) {this->errorBox_ = val;}

    ////
    /// \brief returns object's text for client-based file saving
    /// \return
    ///
    virtual std::string getSaveString()
    {return this->objectData;}


    void setEditModeRef(t_editMode *canvasEditMode)
    {
        UIWidget::setEditModeRef(canvasEditMode);

        // todo
        for (int i=0;i<this->inlets_.size();i++)
        {
            this->getInletAt(i)->setEditModeRef(canvasEditMode);
        }

        for (int i=0;i<this->outlets_.size();i++)
        {
            this->getOutletAt(i)->setEditModeRef(canvasEditMode);
        }
    }

    void resizeEvent(QResizeEvent *event)
    {
        this->sizeBox->move(this->width()-5, this->height()-5);
    }
};

}

#endif // CM_OBJECT_H
