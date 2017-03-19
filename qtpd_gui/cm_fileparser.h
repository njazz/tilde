// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_FILEPARSER_H
#define CM_FILEPARSER_H

#include <QFile>
#include <QTextStream>

#include "cm_patchwindow.h"

namespace qtpd {
////
/// \brief Parses pd files on 'client' (GUI) side
///
class FileParser {
private:
    FileParser(){};

public:
    // or t_canvas?
    static PatchWindow* pdParserPrevWindow;
    static PatchWindow* pdParserWindow;
    static PatchWindow* pdParserFirstWindow;
    static std::string pdParserFileName;

    ////
    /// \brief converts string from pd file - creates new object
    /// \param cmcanvas
    /// \param list
    ///
    static void objFromString(Canvas* cmcanvas, QStringList list);

    ////
    /// \brief parses QStringLists of atoms to canvas - creates objects etc
    /// \details converts list, passes data to 'objFromString'
    /// \param cmcanvas
    /// \param list
    ///
    static void stringToCanvas(Canvas* cmcanvas, QStringList list);

    ////
    /// \brief checks first atoms ("#N", "#X" etc) and sends QStringList
    /// \param line
    ///
    static void parseString(QString line);

    ////
    /// \brief opens file, converts to QStrings, calls 'parseString'
    /// \param fname
    ///
    static void open(QString fname);
};
}

#endif // CM_FILEPARSER_H
