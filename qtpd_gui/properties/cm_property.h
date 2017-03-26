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
    AtomList _data;
    AtomList _defaultData;

    std::string _group;
    std::string _version;

    UIPropertyType _type;

    bool _applyToPd; ///> true if property value should be passed to pd object
public:
    template <typename T>
    void set(T val);

    ////
    /// \brief copy current value to default value
    ///
    void setDefault()
    {
        _defaultData = _data;
    }

    void setVersion(std::string version)
    {
        _version = version;
    }

    std::string version() { return _version; }

    //////////

    UIPropertyType type() { return _type; };

    AtomList data()
    {
        return _data;
    }

    AtomList defaultData()
    {
        return _defaultData;
    }

    QSize asQSize()
    {
        QSize ret = QSize(40, 20);

        if (_data.size() < 2)
            return ret;
        if (!(_data.at(0).isFloat()) && !(_data.at(1).isFloat()))
            return ret;

        ret.setWidth(_data.at(0).asFloat());
        ret.setHeight(_data.at(1).asFloat());

        if (ret.width() < 20)
            ret.setWidth(20);
        if (ret.height() < 20)
            ret.setHeight(20);

        return ret;
    }

    float asFloat()
    {

        if (!_data.size())
            return 0;

        return _data.at(0).asFloat();
    }

    float asFontSize()
    {
        return (asFloat() < 8) ? 8 : asFloat();
    }

    QColor asQColor()
    {
        QColor ret = QColor(128,128,128,255);   //sefault gray


        if (_data.size() < 4)
            return ret;
        if (!(_data.at(0).isFloat()) && !(_data.at(1).isFloat()) && !(_data.at(2).isFloat()) && !(_data.at(3).isFloat()))
            return ret;

        ret = QColor( _data.at(0).asFloat(),
                      _data.at(1).asFloat(),
                      _data.at(2).asFloat(),
                      _data.at(3).asFloat());

        return ret;

    }

    QStringList asQStringList()
    {
        QStringList ret;

        for (int i = 0; i < _data.size(); i++) {

            ret.push_back(_data.at(i).asString().c_str());
        }

        return ret;
    }

    std::string asStdString()
    {
        std::string ret = "";

        if (_data.size() > 1) {
            for (int i = 0; i < _data.size(); i++) {

                // + "\\n" was removed, for multi-line text we need extra fix. whould be rewritten with type system
                ret += _data.at(i).asString() + " ";
            }

        } else if (_data.size() == 1)
            ret = _data.at(0).asString();

        //qDebug() << "stdstr " << data_.size() << QString(ret.c_str());
        return ret;
    }

    std::string asPdSaveString()
    {
        std::string ret = "";

        if (_data.size() > 1) {
            for (int i = 0; i < _data.size(); i++) {

                ret += _data.at(i).asString() + " ";  //\\n removed
            }

        } else if (_data.size() == 1)
            ret = _data.at(0).asString();

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
