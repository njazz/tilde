#ifndef CM_PROPERTY_H
#define CM_PROPERTY_H

#include "../ceammc-lib/ceammc_atomlist.h"
#include <QRect>
#include <QPoint>
#include <QString>

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

    std::string name_;
    std::string group_;

    bool applyToPd; //true if property value should be passed to pd object
public:
    UIProperty(){};

    void setData(AtomList list){}
    void setData(QPoint point){}
    void setData(QRect rect){}

    void setName(std::string name){}
    void setName(QString name){}

    void setGroup(std::string name){}
    void getGroup(QString name){}

    std::string getNameAsString(){return "";}
    QString getNameAsQString(){return "";}


};
}

#endif // CM_PROPERTY_H
