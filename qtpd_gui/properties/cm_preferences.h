#ifndef CM_PREFERENCES_H
#define CM_PREFERENCES_H

#include <string.h>
#include <map>
#include <QString>

#include "cm_propertylist.h"

#include <QDebug>

//#define cmp_font "Source Code Pro"

#define PREF_QSTRING(x) qtpd::Preferences::inst().getQString(x)


//move
#define QTPD_APP_VERSION "0.1"
#define QTPD_PREF_INIT qtpd::Preferences::inst().init( QTPD_APP_VERSION )

//move
//#define QTPD_PREF_STR(x) AtomList(gensym(x))

namespace qtpd{

////
/// \brief app preferences singleton
///
class Preferences : public PropertyList // TODO
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

    }

public:
    Preferences(Preferences const&) = delete;
    void operator=(Preferences const&) = delete;

    //temporary
    QString getQString(std::string key)
    {
        if (this->get(key))
            return this->get(key)->asQString();
    }

    void init(std::string appVersion)
    {
        this->create("appVersion", "System", QTPD_APP_VERSION, (std::string)(QTPD_APP_VERSION) );
        this->create("Font", "UI",  QTPD_APP_VERSION , (std::string)("Source Code Pro"));    //

        qDebug("pref init");
        qDebug() << this->getQString("appVersion");
        qDebug() << this->getQString("Font");

    }


};

}

//ideas:
// -compatibility level for saving files

#endif // CM_PREFERENCES_H
