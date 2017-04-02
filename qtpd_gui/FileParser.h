// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_FILEPARSER_H
#define CM_FILEPARSER_H

#include <QFile>
#include <QTextStream>

#include "PatchWindow.h"

namespace qtpd {
////
/// \brief Parses pd files on 'client' (GUI) side
///
class FileParser {
private:
    FileParser(){};

    static PatchWindow* _pdParserPrevWindow;
    static PatchWindow* _pdParserWindow;
    static PatchWindow* _pdParserFirstWindow;

public:
    // or t_canvas?

    static std::string pdParserFileName;

    static void setParserWindow(PatchWindow* wnd)
    {
        _pdParserPrevWindow = wnd;
        _pdParserWindow = wnd;
    }

    ////
    /// \brief returns first created window
    /// \details mostly used by OOP loader
    /// \return
    ///
    static PatchWindow* parserFirstWinfow()
    {
        return _pdParserFirstWindow;
    }
    ////
    /// \brief [3.2] process legacy pd files
    /// \param list
    ///
    static bool legacyProcess(Canvas* cmcanvas, QStringList list);

    ////
    /// \brief [3.1] subroutine - formats list and send it to canvas as a string
    /// \param cmcanvas
    /// \param list
    /// \returns uiobject - that may be needed by legacyProcess to add more properties after object is created
    ///
    static UIObject* sendStringToCanvas(Canvas* cmcanvas, QStringList list);

    ////
    /// \brief [3] parses QStringLists of atoms to canvas - creates objects etc
    /// \details converts list, passes data to 'sendStringToCanvas'
    /// \param cmcanvas
    /// \param list
    ///
    static void parseStringListAtoms(Canvas* cmcanvas, QStringList list);

    ////
    /// \brief [2] checks first atoms ("#N", "#X" etc) and sends QStringList of contents to canvas
    /// \param line
    ///
    static void parseQString(QString line);

    ////
    /// \brief [1] opens file, converts to QStrings, calls 'parseString'
    /// \param fname
    ///
    static void open(QString fname);
};
}

#endif // CM_FILEPARSER_H
