// (c) 2017 Alex Nadzharov
// License: GPL3

#include "fileparserconverter.h"
#include <QString>
#include <QStringList>

namespace tilde {
////
/// \brief unescapeString
/// \param input
/// \return
/// \deprecated needs cleanup - duplicate in PropertyList class
QString FileParserConverter::unescapeString(QString input)
{
    // todo regexp

    QString ret;

    ret = input.split("\\ ").join(" ");
    ret = ret.split("\\n").join("\n");
    ret = ret.split("\\,").join(",");
    ret = ret.split("\\.").join(".");
    //ret = ret.split("\;").join(";");
    return ret;
}

////
/// \brief escapeString
/// \param input
/// \return
/// \deprecated needs cleanup - duplicate in PropertyList class
QString FileParserConverter::escapeString(QString input)
{
    // todo regexp

    QString ret;

    ret = input.split(" ").join("\\ ");
    ret = ret.split("\n").join("\\n");
    ret = ret.split(",").join("\\,");
    ret = ret.split(".").join("\\.");
    //ret = ret.split(";").join("\\;");
    return ret;
}
}
