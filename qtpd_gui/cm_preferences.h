#ifndef CM_PREFERENCES_H
#define CM_PREFERENCES_H

#include <string.h>
#include <map>
#include <QString>

#include "cm_propertylist.h"

//#define cmp_font "Monaco"
//#define cmp_font "Source Code Pro"
//#define cmp_font "Bitstream Vera Sans Mono"

#define PREF_STRING(x) cm_prefs::inst().getString(x)

////
/// \brief preferences singleton
///
class cm_prefs : public cm_propertylist // TODO
{
public:
    static cm_prefs& inst()
    {
        static cm_prefs    instance;
        return instance;
    }

private:
    std::map<std::string, QString> data_;

    cm_prefs() {

        //temporary
        data_["Font"] = "Source Code Pro";
    }
//    cm_prefs(cm_prefs const&);
//    void operator=(cm_prefs const&);

public:
    cm_prefs(cm_prefs const&)        = delete;
    void operator=(cm_prefs const&)  = delete;

    //temporary
    QString getString(std::string key)
    {
        //check
        return data_[key];
    }
};


//ideas:
// -compatibility level for saving files

#endif // CM_PREFERENCES_H
