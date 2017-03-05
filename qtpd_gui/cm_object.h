#ifndef CM_OBJECT_H
#define CM_OBJECT_H

#include "cm_widget.h"
#include "cm_port.h"

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

public:
    //cm_object();
    explicit cm_object(cm_widget *parent = 0);


    void setInletsPos()
    {
        float w = this->width() - 10;
        w = (w < 22) ? 22 : w;

        float s = (inlets_.size()<2)?inlets_.size():(inlets_.size()-1);

        for (int i = 0; i < (int)inlets_.size(); i++) {
            float x = (w) / s * (float)i;
            float y = 0;

            inlets_.at(i)->move(x, y);
            inlets_.at(i)->repaint();
        }
    }

    void setOutletsPos()
    {
        float w = this->width() - 10;
        w = (w < 22) ? 22 : w;

        float s = (outlets_.size()<2)?outlets_.size():(outlets_.size()-1);

        for (int i = 0; i < (int)outlets_.size(); i++) {
            float x = (w) / s * (float)i;
            float y = this->height() - 3;

            outlets_.at(i)->move(x, y);
            outlets_.at(i)->repaint();
        }
    }

    void addInlet()
    {
        cm_port* new_in = new cm_port(this);
        new_in->port_type = cm_port::cm_pt_inlet;

        new_in->portIndex = inlets_.size();

        inlets_.push_back(new_in);
        connect(new_in, &cm_port::mousePressed, (cm_widget*)this->parent(), &cm_widget::s_InMousePressed);
        connect(new_in, &cm_port::mouseReleased, (cm_widget*)this->parent(), &cm_widget::s_InMouseReleased);


        this->setInletsPos();
    }

    void addOutlet()
    {
        cm_port* new_out = new cm_port(this);
        new_out->port_type = cm_port::cm_pt_outlet;

        new_out->portIndex = outlets_.size();

        outlets_.push_back(new_out);
        connect(new_out, &cm_port::mousePressed, (cm_widget*)this->parent(), &cm_widget::s_OutMousePressed);
        connect(new_out, &cm_port::mouseReleased, (cm_widget*)this->parent(), &cm_widget::s_OutMouseReleased);

        this->setOutletsPos();
    }

    /////

    cm_port* getInletAt(int idx)
    {
        //check range!
        return this->inlets_.at(idx);
    }

    cm_port* getOutletAt(int idx)
    {
        //check range!
        return this->outlets_.at(idx);
    }

    ///////

    void setObjectData(std::string objData)
    {
        this->objectData = objData;
        QFont myFont("Monaco", 11);
        QFontMetrics fm(myFont);

        this->setFixedWidth((int)fm.width(QString(this->objectData.c_str())) + 5);
    }

    std::string getObjectData()
    {return this->objectData;}

    void* getPdObject() {return this->pdObject_;}
    void setPdObject(void*obj) {this->pdObject_ = obj;}

    bool isErrorBox() {return this->errorBox_;}
    void setErrorBox(bool val) {this->errorBox_ = val;}

};

#endif // CM_OBJECT_H
