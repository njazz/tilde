// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PREFERENCES_H
#define CM_PREFERENCES_H

#include <QString>
#include <map>
#include <string.h>

#include "PropertyList.h"

#include <QDebug>

//#include "PdLink.h"

//#define cmp_font "Source Code Pro"

#define PREF_QSTRING(x) qtpd::Preferences::inst().getQString(x)
//#define PREF_INT(x) qtpd::Preferences::inst().getInt()

//move
#define QTPD_APP_VERSION "0.1"
#define QTPD_PREF_INIT qtpd::Preferences::inst().init()

//move
//#define QTPD_PREF_STR(x) AtomList(gensym(x))

namespace qtpd {

////
/// \brief app Preferences singleton
///
class Preferences : public PropertyList // TODO
{
public:
    static Preferences& inst()
    {
        static Preferences instance;
        return instance;
    }

private:
    std::map<std::string, QString> _data;

    Preferences()
    {
    }

public:
    Preferences(Preferences const&) = delete;
    void operator=(Preferences const&) = delete;

    //temporary
    QString getQString(QString key)
    {
        if (get(key))
            return get(key)->asQString();

        return "";
    }

    void init()
    {
        create("appVersion", "System", QTPD_APP_VERSION, (std::string)(QTPD_APP_VERSION));
        create("Font", "UI", QTPD_APP_VERSION, (std::string)("Source Code Pro")); //

        qDebug("pref init");
        qDebug() << getQString("appVersion");
        qDebug() << getQString("Font");
    }

    //------------------------------------------
    // path handling  - probably move to separate class

    void addPath(QString newPath)
    {
        if (!get("Paths"))
            set("Paths", (QString) "");

        QStringList paths = get("Paths")->asQStringList();
        // TODO
        //cmp_add_searchpath(gensym(newPath.toStdString().c_str()));
        paths.append(newPath);
        set("Paths", paths);
    }

    QStringList paths()
    {
        QStringList ret;
        if (!get("Paths"))
            return ret;

        ret = get("Paths")->asQStringList();
        return ret;
    }
};
}

//ideas:
// -compatibility level for saving files

#endif // CM_PREFERENCES_H
