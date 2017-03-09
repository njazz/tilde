#ifndef CM_OBJECT_H
#define CM_OBJECT_H

#include "cm_widget.h"
#include "cm_port.h"

#include "cm_preferences.h"




////
/// \brief base class for all object boxes - standard and special
///
class cm_object : public cm_widget
{
private:
    //temporary?
    void* pdObject_;

    std::vector<cm_port*> inlets_;
    std::vector<cm_port*> outlets_;

    std::string objectData;     //name and arguments etc

    bool errorBox_;

    cm_object();
public:
    //cm_object();
    explicit cm_object(cm_widget *parent = 0);


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
        cm_port* new_in = new cm_port(this);
        new_in->port_type = cm_port::cm_pt_inlet;

        new_in->portIndex = inlets_.size();

        inlets_.push_back(new_in);
        connect(new_in, &cm_port::mousePressed, static_cast<cm_widget*>(this->parent()), &cm_widget::s_InMousePressed);
        connect(new_in, &cm_port::mouseReleased, static_cast<cm_widget*>(this->parent()), &cm_widget::s_InMouseReleased);


        this->setInletsPos();
    }

    ////
    /// \brief adds single outlet (cm_port)
    /// \param idx
    /// \return
    ///

    void addOutlet()
    {
        cm_port* new_out = new cm_port(this);
        new_out->port_type = cm_port::cm_pt_outlet;

        new_out->portIndex = outlets_.size();

        outlets_.push_back(new_out);
        connect(new_out, &cm_port::mousePressed, static_cast<cm_widget*>(this->parent()), &cm_widget::s_OutMousePressed);
        connect(new_out, &cm_port::mouseReleased, static_cast<cm_widget*>(this->parent()), &cm_widget::s_OutMouseReleased);

        this->setOutletsPos();
    }

    ////
    /// \brief gets inlet (cm_port) at specified index
    /// \param idx
    /// \return
    ///

    cm_port* getInletAt(int idx)
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

    cm_port* getOutletAt(int idx)
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
    /// \brief returns pointer to pd object
    /// \return
    ///
    void* getPdObject() {return this->pdObject_;}

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

};

#endif // CM_OBJECT_H
