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

typedef enum
{
    ptFloat,
    ptSymbol,
    ptList,
    ptString,
    ptVector

} UIPropertyType;

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

    UIPropertyType type_;

    bool applyToPd; //true if property value should be passed to pd object
public:
    void set(AtomList list)
    {
        data_ = list;
        type_ = ptList;
    }

    void set(QPoint point){}
    void set(QRect rect){}
    void set(QSize size){}

    void set(float val)
    {
        data_ = AtomList(val);
        type_ = ptFloat;
    }

    void set(t_symbol* s)
    {
        data_ = AtomList(s);
        type_ = ptSymbol;
    }

    void set(std::string string)
    {
        data_ = AtomList(gensym(string.c_str()));
        type_ = ptList;
    }

    void set(QString string)
    {
        data_ = AtomList(gensym(string.toStdString().c_str()));
        type_ = ptString;
    }

    void set(QStringList list){}

    //////////



    ////
    /// \brief copy current value to default value
    ///
    void setDefault()
    {
        this->defaultData_ = this->data_;
    }

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


    //////////

    UIPropertyType type() {return this->type_;};


    AtomList data()
    {
        return data_;
    }

    AtomList defaultData()
    {
        return defaultData_;
    }


    QStringList asQStringList()
    {
        QStringList ret; return ret;
    }

    std::string asStdString()
    {
        std::string ret="";
        if (data_.size())
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
