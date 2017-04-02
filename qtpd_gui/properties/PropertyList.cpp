// (c) 2017 Alex Nadzharov
// License: GPL3

#include "PropertyList.h"

namespace qtpd {

UIPropertyData* PropertyList::group(QString grpName)
{
    UIPropertyData* ret;
    ret = this->_groups[grpName.toStdString()];
    return ret;
}

UIPropertyData* PropertyList::fromGroup(QString grpName)
{
    UIPropertyData* ret;
    ret = this->_groups[grpName.toStdString()];
    return ret;
}

Property* PropertyList::get(std::string pName)
{
    Property* ret = 0;
    std::map<std::string, Property*>::iterator it = _data.find(pName);
    if (it != _data.end())
        ret = this->_data[pName];
    return ret;
};

// -----------------

std::string PropertyList::asPdFileString()
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

QStringList PropertyList::names()
{
    QStringList ret;

    UIPropertyDataIterator it;
    for (it = this->_data.begin(); it != this->_data.end(); ++it) {
        //save only modified values
        ret.push_back(it->first.c_str());
    }

    return ret;
}

QStringList PropertyList::names(UIPropertyData* data1)
{
    QStringList ret;

    UIPropertyDataIterator it;
    for (it = data1->begin(); it != data1->end(); ++it) {
        //save only modified values
        ret.push_back(it->first.c_str());
    }

    return ret;
}

QStringList PropertyList::groupNames()
{
    QStringList ret;

    UIPropertyGroupIterator it;
    for (it = this->_groups.begin(); it != this->_groups.end(); ++it) {
        //save only modified values
        ret.push_back(it->first.c_str());
    }

    return ret;
}

std::string PropertyList::extractFromPdFileString(std::string input)
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
}
