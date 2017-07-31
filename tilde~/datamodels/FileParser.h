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
        return _stack.at(_stack.size() - 1);
    }
    void clear() { _stack.clear(); }
};

////
/// \brief Parses pd files on 'client' (GUI) side
/// \details 'FileParser' and 'FileSaver' should probably be moved to separate library
class FileParser {
private:
    FileParser(){};

    static PatchWindowControllerStack _stack;
    static PatchWindowController* _pdParserWindowController;
    static PatchWindowController* _pdParserFirstWindowController;

    static ApplicationController* _appController;

public:
    static string pdParserFileName;
    static string legacyCanvasCoords; ///> used for #X coords

    static void setAppController(ApplicationController* appController);
    static void setParserWindowController(PatchWindowController* wnd);
    static void setParserWindowControllers(PatchWindowController* wnd, PatchWindowController*, PatchWindowController* first);

    ////
    /// \brief returns first created window
    /// \details mostly used by OOP loader
    static PatchWindowController* parserFirstWindowController();
    static PatchWindowController* parserWindowController();

    static void open(QString fname); ///> [1] opens file, converts to QStrings, calls 'parseString'
    static void parseQString(QString line); ///> [2] checks first atoms ("#N", "#X" etc) and sends QStringList of contents to canvas
    static void parseStringListAtoms(PatchWindowController* controller, QStringList list); ///> [3] parses QStringLists of atoms to canvas - creates objects etc, converts list, passes data to 'sendStringToCanvas'

    static UIObject* sendStringToCanvas(PatchWindowController* controller, QStringList list); ///> [3.1] subroutine - formats list and send it to canvas as a string
    static bool legacyProcess(PatchWindowController* controller, QStringList list); ///> [3.2] process legacy pd files
};
}

#endif // CM_FILEPARSER_H
