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

    UIPropertyData* group(QString grpName)
    {
        UIPropertyData* ret;
        ret = this->_groups[grpName.toStdString()];
        return ret;
    }

    UIPropertyData* fromGroup(QString grpName)
    {
        UIPropertyData* ret;
        ret = this->_groups[grpName.toStdString()];
        return ret;
    }

    template <typename T>
    void create(std::string pName, std::string pGroup, std::string pVersion, T defaultData)
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

        //qDebug() << "new property" << data_[pName]->asQString();
    }

    // todo []

    template <typename U>
    void set(std::string pName, U value)
    {
        if (this->_data[pName]) {
            this->_data[pName]->set(value);
            emit propertyChangedSignal(QString(pName.c_str()));
        }
    };

    Property* get(std::string pName)
    {
        Property* ret = 0;
        std::map<std::string, Property*>::iterator it = _data.find(pName);
        if (it != _data.end())
            ret = this->_data[pName];
        return ret;
    };

    //////////

    ////
    /// \brief returns string for saving in file
    /// \return
    ///
    std::string asPdFileString()
    {
        std::string ret;

        UIPropertyDataIterator it;
        for (it = this->_data.begin(); it != this->_data.end(); ++it) {
            //save only modified values
            if (it->second) //?
                if (it->second->data() != it->second->defaultData()) {
                    ret += " @" + it->first + " ";
                    ret += it->second->asPdSaveString() + " ";
                }
        }

        return ret;
    }

    ////
    /// \brief list of all property names
    /// \return
    ///
    QStringList names()
    {
        QStringList ret;

        UIPropertyDataIterator it;
        for (it = this->_data.begin(); it != this->_data.end(); ++it) {
            //save only modified values
            ret.push_back(it->first.c_str());
        }

        return ret;
    }

    ////
    /// \brief list of all property names for specific propertyData
    /// \detais todo normal classes
    /// \return
    ///
    QStringList names(UIPropertyData* data1)
    {
        QStringList ret;

        UIPropertyDataIterator it;
        for (it = data1->begin(); it != data1->end(); ++it) {
            //save only modified values
            ret.push_back(it->first.c_str());
        }

        return ret;
    }

    ////
    /// \brief list of all group names
    /// \return
    ///
    QStringList groupNames()
    {
        QStringList ret;

        UIPropertyGroupIterator it;
        for (it = this->_groups.begin(); it != this->_groups.end(); ++it) {
            //save only modified values
            ret.push_back(it->first.c_str());
        }

        return ret;
    }

    ////
    /// \brief extract properties from string in pd file
    /// \details returns first part of the string before the first property
    /// \return
    ///
    std::string extractFromPdFileString(std::string input)
    {
        QStringList propertyList = QString(input.c_str()).split("@");

        qDebug() << "list" << propertyList;

        if (!propertyList.size())
            return "";

        QString ret = propertyList.at(0);
        if (ret.size())
            if (ret.at(ret.size() - 1) == " ")
                ret = ret.left(ret.size() - 1);

        if (propertyList.size() == 1)
            return ret.toStdString();

        propertyList.removeAt(0);

        for (QStringList::iterator it = propertyList.begin(); it != propertyList.end(); ++it) {
            QString s = *it;
            QStringList list = s.split(" ", QString::SkipEmptyParts);

            //if (list.size() > 1)
            //{
            QString pname = list.at(0);

            // lol. fix that later

            qDebug() << "load" << pname << list.join("_");

            if (_data[pname.toStdString()]) {
                list.removeAt(0);
                set(pname.toStdString(), list);
            } else
                ret.append("@" + s);
            //}

            // TODO! property type should be saved
        }

        return ret.toStdString();
    }

signals:
    void propertyChangedSignal(QString name);
};
}

#endif // CM_PROPERTYLIST_H
