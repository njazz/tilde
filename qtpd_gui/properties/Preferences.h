// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_PREFERENCES_H
#define CM_PREFERENCES_H

#include <QString>
#include <map>
#include <string.h>

#include "PropertyList.h"

#include <QDebug>
#include <QFile>
#include <QStandardPaths>

#define PREF_QSTRING(x) qtpd::Preferences::inst().getQString(x)

//move
#define QTPD_APP_VERSION "0.1"
#define QTPD_PREF_INIT qtpd::Preferences::inst().init()

namespace qtpd {

/// \brief app Preferences singleton
class Preferences : public PropertyList {
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

    //    temporary
    QString getQString(QString key)
    {
        if (get(key))
            return get(key)->asQString();

        saveToTextFile();

        return "";
    }

    void init()
    {
        create("appVersion", "System", QTPD_APP_VERSION, (std::string)(QTPD_APP_VERSION));
        create("Font", "UI", QTPD_APP_VERSION, (std::string)("Source Code Pro")); //

        //        qDebug("pref init");
        //        qDebug() << getQString("appVersion");
        //        qDebug() << getQString("Font");
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

    void readFromTextFile()
    {
        QFile textFile(QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).at(0) + "/Qtpd/Settings/Preferences.txt");

        if (!textFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            qDebug() << textFile.errorString();
        }

        QStringList prefList;

        QTextStream textStream(&textFile);
        while (true) {
            QString line = textStream.readLine();
            if (line.isNull())
                break;
            else
                prefList.append(line);
        }

        if (prefList.size() > 0)
            extractFromPdFileString(prefList.at(0));

        textFile.close();
    }

    void saveToTextFile()
    {
        QFile textFile(QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).at(0) + "/Qtpd/Settings/Preferences.txt");

        if (!textFile.open(QIODevice::WriteOnly)) {
            //check and mkpath here
            qDebug() << textFile.errorString();
        }

        QStringList prefList;

        prefList.append(asPdFileString().c_str());

        textFile.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream logStream(&textFile);
        for (int i = 0; i < prefList.size(); i++) {
            logStream << prefList.at(i) << "\n";
        }

        textFile.close();
    }
};
}

#endif // CM_PREFERENCES_H
