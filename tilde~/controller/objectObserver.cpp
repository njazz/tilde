// (c) 2017 Alex Nadzharov
// License: GPL3

#include "objectObserver.h"
#include "UIObject.h"

namespace tilde {

void ObjectObserver::setObject(UIObject* o)
{
    _object = o;
}

void ObjectObserver::update()
{
    if (_object) {
        _object->updateUI(data());
    }
};
}
