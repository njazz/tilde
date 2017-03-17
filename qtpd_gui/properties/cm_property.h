// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PROPERTY_H
#define CM_PROPERTY_H

#include "../ceammc-lib/ceammc_atomlist.h"
#include <QColor>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QStringList>

#include <QDebug>

using namespace ceammc;

namespace qtpd {

typedef enum {
    ptFloat,
    ptSymbol,
    ptList,
    ptString,
    ptVector,
    ptColor,
    ptText ///< multiline text for comments, script

} UIPropertyType;

////
/// \brief yet another property handling class for ui object.
///
class Property {
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

    std::string version() { return version_; }

    //////////

    UIPropertyType type() { return this->type_; };

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
        QStringList ret;

        for (int i = 0; i < data_.size(); i++) {

            ret.push_back(data_.at(i).asString().c_str());
        }

        return ret;
    }

    std::string asStdString()
    {
        std::string ret = "";

        if (data_.size() > 1) {
            for (int i = 0; i < data_.size(); i++) {

                // + "\\n" was removed, for multi-line text we need extra fix. whould be rewritten with type system
                ret += data_.at(i).asString() + " ";
            }

        } else if (data_.size() == 1)
            ret = data_.at(0).asString();

        //qDebug() << "stdstr " << data_.size() << QString(ret.c_str());
        return ret;
    }

    std::string asPdSaveString()
    {
        std::string ret = "";

        if (data_.size() > 1) {
            for (int i = 0; i < data_.size(); i++) {

                ret += data_.at(i).asString() + "\\n";
            }

        } else if (data_.size() == 1)
            ret = data_.at(0).asString();

        //qDebug() << "stdstr " << data_.size() << QString(ret.c_str());
        return ret;
    }

    QString asQString()
    {
        QString ret = "";

        //temporary
        ret = QString(asStdString().c_str());

        return ret;
    }
};
}

#endif // CM_PROPERTY_H
