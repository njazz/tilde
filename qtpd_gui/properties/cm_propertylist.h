#ifndef CM_PROPERTYLIST_H
#define CM_PROPERTYLIST_H

#include "cm_property.h"

////
/// \brief yet another property handling class for ui object. List
///
class cm_propertylist
{
private:
    std::vector<cm_property*> data_;

public:
    cm_propertylist();

    std::vector<cm_property*> fromGroup(std::string grpName){ std::vector<cm_property*> ret; return ret;}
    std::vector<cm_property*> fromGroup(QString grpName){ std::vector<cm_property*> ret; return ret;}


};

#endif // CM_PROPERTYLIST_H
