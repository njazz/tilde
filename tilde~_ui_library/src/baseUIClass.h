#ifndef BASE_UI_CLASS
#define BASE_UI_CLASS

#include "m_pd.h"
#include <ceammc_object.h>
// #include <pdUpdate.hpp>

#include "tilde~_ui_library/tilde~_ui_library.h"

using namespace ceammc;

// XPD-TODO
// extern void UIUpdate (long objectId, AtomList list);;

namespace ceammc {
class BaseUIObject : public BaseObject {

public:
    BaseUIObject(const PdArgs& a);

    virtual void updateUI();
};
}

#endif
