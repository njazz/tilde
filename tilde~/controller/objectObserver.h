// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef OBJECTOBSERVER
#define OBJECTOBSERVER

#include "pdServer.hpp"

namespace tilde {

class UIObject;

////
/// \brief The object observer class
/// \details used for UI objects to update ui from pd(server) object
class ObjectObserver : public Observer {
private:
    UIObject* _object;

public:
    void setObject(UIObject* o);
    virtual void update();
};
}

#endif // CM_PDLINK_H
