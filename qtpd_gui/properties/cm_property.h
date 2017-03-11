#ifndef CM_PROPERTY_H
#define CM_PROPERTY_H

#include "../ceammc-lib/ceammc_atomlist.h"
#include <QRect>
#include <QPoint>
#include <QString>
#include <QStringList>

using namespace ceammc;

namespace cm
{
////
/// \brief yet another property handling class for ui object.
///
class UIProperty
{
private:
    AtomList data_;
    AtomList defaultData_;

    //std::string name_;
    std::string group_;
    std::string version_;

    bool applyToPd; //true if property value should be passed to pd object
public:
    void set(AtomList list)
    {
        data_ = list;
    }

    void set(QPoint point){}
    void set(QRect rect){}

    void set(std::string string)
    {
        data_ = AtomList(gensym(string.c_str()));
    }

    void set(QString string)
    {
        data_ = AtomList(gensym(string.toStdString().c_str()));
    }

    void set(QStringList list){}

    void setDefault(AtomList list){}
    void setDefault(QPoint point){}
    void setDefault(QRect rect){}

//    void setName(std::string name){}
//    void setName(QString name){}

    void setGroup(std::string name){}
    void getGroup(QString name){}

    void setVersion(std::string version){}
    void getVersion(QString version){}

    std::string getNameAsString()
    {
        return data_.at(0).asString();
    }

    QString getNameAsQString()
    {
        return "";
    }




    AtomList asAtomList()
    {
        AtomList ret; return ret;
    }

    QStringList asQStringList()
    {
        QStringList ret; return ret;
    }

    std::string asStdString()
    {
        std::string ret;
        ret = data_.at(0).asString();
        return ret;
    }

    QString asQString()
    {
        QString ret = "";
        if (data_.size())
            ret = data_.at(0).asString().c_str();
        return ret;
    }

};
}

#endif // CM_PROPERTY_H
