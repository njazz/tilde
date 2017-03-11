#ifndef CM_PROPERTYLIST_H
#define CM_PROPERTYLIST_H

#include "cm_property.h"

#include <map>

#include <QDebug>

namespace cm
{



////
/// \brief yet another property handling class for ui object. List
///
class UIPropertyList
{
private:
    std::map<std::string, UIProperty*> data_;

public:
    UIPropertyList(){};

    std::vector<UIProperty*> fromGroup(std::string grpName){ std::vector<UIProperty*> ret; return ret;}
    std::vector<UIProperty*> fromGroup(QString grpName){ std::vector<UIProperty*> ret; return ret;}

    void create(std::string pName, std::string pGroup, std::string pVersion, AtomList defaultData)
    {
        UIProperty *newP = new UIProperty;

        newP->setGroup(pGroup);
        newP->setVersion(pVersion);
        newP->set(defaultData);
        newP->setDefault(defaultData);

        data_[pName] = newP;

        qDebug("new property");
        qDebug() << data_[pName]->asQString();

    }

    // todo []

    // todo templates

    void set(std::string pName, std::string value)
    {
        this->data_[pName]->set(value);
    };

    UIProperty *get(std::string pName)
    {
        UIProperty *ret = 0;
        std::map<std::string, UIProperty*>::iterator it = data_.find(pName);
        if ( it != data_.end() )
            ret = this->data_[pName];
        return ret;
    };

};
}

#endif // CM_PROPERTYLIST_H
