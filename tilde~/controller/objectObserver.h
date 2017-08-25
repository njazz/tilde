// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef OBJECTOBSERVER
#define OBJECTOBSERVER

//#include "pdServer.hpp"

#include "xpd-transition/xpd-headers.h"

#include <memory.h>

using namespace xpd;

namespace tilde {

class UIObject;

////
/// \brief The object observer class
/// \details used for UI objects to update ui from pd(server) object
class ObjectObserver : public xpd::PdObjectObserver {
private:
    UIObject* _object;

public:
    void setObject(UIObject* o);
    virtual void update();
};

typedef std::shared_ptr<ObjectObserver> ObjectObserverPtr;

}

#endif // CM_PDLINK_H
