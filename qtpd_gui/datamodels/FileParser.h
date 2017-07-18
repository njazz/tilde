// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_FILEPARSER_H
#define CM_FILEPARSER_H

#include <string>
#include <vector>

// todo non-static class ?

using namespace std;

class QStringList;
class QString;

namespace qtpd {
class PatchWindow;
class CanvasData;
class CanvasView;
class UIObject;

class ApplicationController;
class PatchWindowController;

class PatchWindowControllerStack {
    vector<PatchWindowController*> _stack;

public:
    void push(PatchWindowController* c) { _stack.push_back(c); };
    PatchWindowController* pop()
    {
        PatchWindowController* ret = last();
        _stack.pop_back();
        return ret;
    };
    PatchWindowController* last()
    {
        if (_stack.size() == 0)
            return 0;
        return _stack.at(_stack.size()-1);
    }
    void clear() { _stack.clear(); }
};

////
/// \brief Parses pd files on 'client' (GUI) side
/// \details 'FileParser' and 'FileSaver' should probably be moved to separate library
class FileParser {
private:
    FileParser(){};

    //static PatchWindowController* _pdParserPrevWindowController;
    static PatchWindowControllerStack _stack;
    static PatchWindowController* _pdParserWindowController;
    static PatchWindowController* _pdParserFirstWindowController;

    static ApplicationController* _appController;

public:
    static string pdParserFileName;
    static string legacyCanvasCoords; ///> used for #X coords

    static void setAppController(ApplicationController* appController);
    static void setParserWindowController(PatchWindowController* wnd);
    static void setParserWindowControllers(PatchWindowController* wnd, PatchWindowController* prev, PatchWindowController* first);

    ////
    /// \brief returns first created window
    /// \details mostly used by OOP loader
    /// \return
    ///
    static PatchWindowController* parserFirstWindowController();
    static PatchWindowController* parserWindowController();
    //static PatchWindowController* parserPrevWindowController();
    ////
    /// \brief [3.2] process legacy pd files
    /// \param list
    ///
    static bool legacyProcess(PatchWindowController* controller, QStringList list);

    ////
    /// \brief [3.1] subroutine - formats list and send it to canvas as a string
    /// \param cmcanvas
    /// \param list
    /// \returns uiobject - that may be needed by legacyProcess to add more properties after object is created
    ///
    static UIObject* sendStringToCanvas(PatchWindowController* controller, QStringList list);

    ////
    /// \brief [3] parses QStringLists of atoms to canvas - creates objects etc
    /// \details converts list, passes data to 'sendStringToCanvas'
    /// \param cmcanvas
    /// \param list
    ///
    static void parseStringListAtoms(PatchWindowController* controller, QStringList list);

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
