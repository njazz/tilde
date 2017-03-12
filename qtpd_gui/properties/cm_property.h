#ifndef CM_PROPERTY_H
#define CM_PROPERTY_H

#include "../ceammc-lib/ceammc_atomlist.h"
#include <QRect>
#include <QPoint>
#include <QString>
#include <QStringList>
#include <QColor>

using namespace ceammc;

namespace cm
{

typedef enum
{
    ptFloat,
    ptSymbol,
    ptList,
    ptString,
    ptVector,
    ptColor

} UIPropertyType;

////
/// \brief yet another property handling class for ui object.
///
class Property
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

    template <typename T>
    void set(T val);

    ////
    /// \brief copy current value to default value
    ///
    void setDefault()
    {
        this->defaultData_ = this->data_;
    }

    void setVersion(std::string version)
    {
        this->version_ = version;
    }

    std::string version(){return version_;}

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
