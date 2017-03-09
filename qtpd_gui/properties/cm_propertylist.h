#ifndef CM_PROPERTYLIST_H
#define CM_PROPERTYLIST_H

#include "cm_property.h"

namespace cm
{
////
/// \brief yet another property handling class for ui object. List
///
class UIPropertyList
{
private:
    std::vector<UIProperty*> data_;

public:
    UIPropertyList(){};

    std::vector<UIProperty*> fromGroup(std::string grpName){ std::vector<UIProperty*> ret; return ret;}
    std::vector<UIProperty*> fromGroup(QString grpName){ std::vector<UIProperty*> ret; return ret;}


};
}

#endif // CM_PROPERTYLIST_H
