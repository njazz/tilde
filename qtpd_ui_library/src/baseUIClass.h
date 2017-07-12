#ifndef BASE_UI_CLASS
#define BASE_UI_CLASS

#include "m_pd.h"
#include <ceammc_object.h>
#include <pdUpdate.hpp>

#include "qtpd_ui_library/qtpd_ui_library.h"

namespace ceammc {
class BaseUIObject : public BaseObject {

public:
    BaseUIObject(const PdArgs& a);

    virtual void updateUI();
};
}

#endif // QTPD_UI_LIBRARY_GLOBAL_H
