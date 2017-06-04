// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_FILEPARSER_H
#define CM_FILEPARSER_H

#include <QFile>
#include <QTextStream>

// todo non-static class

namespace qtpd {
class PatchWindow;
class CanvasData;
class CanvasView;
class UIObject;

////
/// \brief Parses pd files on 'client' (GUI) side
/// \details 'FileParser' and 'FileSaver' should be moved to separate library
class FileParser {
private:
    FileParser(){};

    static PatchWindow* _pdParserPrevWindow;
    static PatchWindow* _pdParserWindow;
    static PatchWindow* _pdParserFirstWindow;

    static CanvasData* _currentData;
    static CanvasData* _previousData;
    static CanvasData* _firstData;

public:
    // or t_canvas?

    static std::string pdParserFileName;

    static void setParserWindow(PatchWindow* wnd)
    {
        _pdParserPrevWindow = wnd;
        _pdParserWindow = wnd;
    }

    static void setParserWindows(PatchWindow* wnd, PatchWindow* prev, PatchWindow* first)
    {
        _pdParserWindow = wnd;
        _pdParserPrevWindow = prev;
        _pdParserFirstWindow = first;
    }

    static void setCurrentData(CanvasData* data)
    {
        _previousData = data;
        _currentData = data;
    }
    static void setCanvasData(CanvasData* data, CanvasData* prev, CanvasData* first)
    {
        _currentData = data;
        _previousData = prev;
        _firstData = first;
    }

    ////
    /// \brief returns first created window
    /// \details mostly used by OOP loader
    /// \return
    ///
    static PatchWindow* parserFirstWindow()
    {
        return _pdParserFirstWindow;
    }

    static PatchWindow* parserWindow()
    {
        return _pdParserWindow;
    }

    static PatchWindow* parserPrevWindow()
    {
        return _pdParserPrevWindow;
    }
    ////
    /// \brief [3.2] process legacy pd files
    /// \param list
    ///
    static bool legacyProcess(CanvasView* cmcanvas, QStringList list);

    ////
    /// \brief [3.1] subroutine - formats list and send it to canvas as a string
    /// \param cmcanvas
    /// \param list
    /// \returns uiobject - that may be needed by legacyProcess to add more properties after object is created
    ///
    static UIObject* sendStringToCanvas(CanvasView* cmcanvas, QStringList list);

    ////
    /// \brief [3] parses QStringLists of atoms to canvas - creates objects etc
    /// \details converts list, passes data to 'sendStringToCanvas'
    /// \param cmcanvas
    /// \param list
    ///
    static void parseStringListAtoms(CanvasView* cmcanvas, QStringList list);

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

    ////
    /// \brief new API open
    /// \param fname
    ///
    static void open(QString fname, CanvasData* CanvasData);

    ////
    /// \brief unescapeString
    /// \param input
    /// \return
    /// \deprecated needs cleanup - duplicate in PropertyList class
    static QString unescapeString(QString input)
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
    static QString escapeString(QString input)
    {
        // todo regexp

        QString ret;

        ret = input.split("\ ").join("\\ ");
        ret = ret.split("\n").join("\\n");
        ret = ret.split(",").join("\\,");
        ret = ret.split(".").join("\\.");
        //ret = ret.split(";").join("\\;");
        return ret;
    }
};
}

#endif // CM_FILEPARSER_H
