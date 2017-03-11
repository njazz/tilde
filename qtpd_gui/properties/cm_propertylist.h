#ifndef CM_PROPERTYLIST_H
#define CM_PROPERTYLIST_H

#include "cm_property.h"

#include <map>

#include <QDebug>

namespace cm
{

typedef std::map<std::string, UIProperty*> UIPropertyData;
typedef std::map<std::string, UIPropertyData*> UIPropertyGroups;

typedef std::map<std::string, UIProperty*>::iterator UIPropertyDataIterator;

////
/// \brief yet another property handling class for ui object. List
///
class UIPropertyList
{
private:
    UIPropertyData data_;
    UIPropertyGroups groups_;

public:
    UIPropertyList(){};

    UIPropertyData* fromGroup(std::string grpName)
    {
        UIPropertyData* ret;
        ret = this->groups_[grpName];
        return ret;
    }

    UIPropertyData* fromGroup(QString grpName)
    {
        UIPropertyData* ret;
        ret = this->groups_[grpName.toStdString()];
        return ret;
    }

    template <typename T>
    void create(std::string pName, std::string pGroup, std::string pVersion, T defaultData)
    {
        UIProperty *newP = new UIProperty;

        //newP->setGroup(pGroup);
        newP->setVersion(pVersion);
        newP->set(defaultData);
        newP->setDefault();

        data_[pName] = newP;
        //fix
        //groups_[pGroup][pName] = newP;

        qDebug("new property");
        qDebug() << data_[pName]->asQString();

    }

    // todo []

    template <typename U>
    void set(std::string pName, U value)
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


    //////////

    ////
    /// \brief returns string for saving in file
    /// \return
    ///
    std::string asPdString()
    {
        std::string ret;

        UIPropertyDataIterator it;
        for (it = this->data_.begin(); it != this->data_.end(); ++it)
        {
            //save only modified values
            if (it->second->data() != it->second->defaultData())
            {
                ret += "@" + it->first + " ";
                ret += it->second->asStdString()+" ";
            }

        }

        return ret;

    }

};
}

#endif // CM_PROPERTYLIST_H
