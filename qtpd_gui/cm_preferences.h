#ifndef CM_PREFERENCES_H
#define CM_PREFERENCES_H

#include <string.h>
#include <map>
#include <QString>

#include "cm_propertylist.h"

//#define cmp_font "Monaco"
//#define cmp_font "Source Code Pro"
//#define cmp_font "Bitstream Vera Sans Mono"

#define PREF_STRING(x) cm::Preferences::inst().getString(x)

namespace cm{

////
/// \brief preferences singleton
///
class Preferences : public UIPropertyList // TODO
{
public:
    static Preferences& inst()
    {
        static Preferences    instance;
        return instance;
    }

private:
    std::map<std::string, QString> data_;

    Preferences() {

        //temporary
        data_["Font"] = "Source Code Pro";
    }
//    cm_prefs(cm_prefs const&);
//    void operator=(cm_prefs const&);

public:
    Preferences(Preferences const&)        = delete;
    void operator=(Preferences const&)  = delete;

    //temporary
    QString getString(std::string key)
    {
        //check
        return data_[key];
    }
};

}

//ideas:
// -compatibility level for saving files

#endif // CM_PREFERENCES_H
