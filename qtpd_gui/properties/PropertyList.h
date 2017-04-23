// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PROPERTYLIST_H
#define CM_PROPERTYLIST_H

#include "Property.h"

#include <map>

#include <QDebug>

namespace qtpd {

typedef std::map<std::string, Property*> UIPropertyData;
typedef std::map<std::string, UIPropertyData*> UIPropertyGroups;

typedef std::map<std::string, Property*>::iterator UIPropertyDataIterator;
typedef std::map<std::string, UIPropertyData*>::iterator UIPropertyGroupIterator;

typedef void (*t_PropertyListener)(void) ;

////
/// \brief yet another property handling class for ui object. List
///
class PropertyList : public QObject {
    Q_OBJECT

private:
    UIPropertyData _data;
    UIPropertyGroups _groups;

public:
    PropertyList(){};

    UIPropertyData* group(QString grpName);
    UIPropertyData* fromGroup(QString grpName);

    template <typename T>
    void create(std::string pName, std::string pGroup, QString pVersion, T defaultData)
    {
        Property* newP = new Property;

        //newP->setGroup(pGroup);
        newP->setVersion(pVersion);
        newP->set(defaultData);
        newP->setDefault();

        _data[pName] = newP;
        //fix

        UIPropertyData* grp = _groups[pGroup];
        if (!grp)
            grp = new UIPropertyData();
        (*grp)[pName] = newP;
        _groups[pGroup] = grp;
    }

    // ----------

    template <typename U>
    void set(std::string pName, U value)
    {
        if (this->_data[pName]) {
            this->_data[pName]->set(value);
            emit propertyChangedSignal(QString(pName.c_str()));
        }
    };

    Property* get(QString pName);

    //todo

//    Property* operator[](QString pName)
//    {
//        return get(pName);
//    }

//    Property* operator[](QString pName) const
//    {
//        return get(pName);
//    }

    // ------------

    ////
    /// \brief returns string for saving in file
    /// \return
    ///
    std::string asPdFileString();

    ////
    /// \brief list of all property names
    /// \return
    ///
    QStringList names();

    ////
    /// \brief list of all property names for specific propertyData
    /// \detais todo normal classes
    /// \return
    ///
    QStringList names(UIPropertyData* data1);

    ////
    /// \brief list of all group names
    /// \return
    ///
    QStringList groupNames();

    ////
    /// \brief extract properties from string in pd file
    /// \details returns first part of the string before the first property
    /// \return
    ///
    QString extractFromPdFileString(QString input);

    void addListener(QString name, QObject *obj, t_PropertyListener func)
    {
        Property *prop = get(name);

        if (prop)
        {
            connect(prop, &Property::changed, obj, func);

        }

    }
signals:
    void propertyChangedSignal(QString name);
};
}

#endif // CM_PROPERTYLIST_H