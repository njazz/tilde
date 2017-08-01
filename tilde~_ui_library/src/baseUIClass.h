#ifndef BASE_UI_CLASS
#define BASE_UI_CLASS

#include "m_pd.h"
#include <ceammc_object.h>
#include <pdUpdate.hpp>

#include "tilde~_ui_library/tilde~_ui_library.h"

namespace ceammc {
class BaseUIObject : public BaseObject {

public:
    BaseUIObject(const PdArgs& a);

    virtual void updateUI();
};
}

#endif
