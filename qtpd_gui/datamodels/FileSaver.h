// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_FILESAVER_H
#define CM_FILESAVER_H

#include "PatchWindow.h"

namespace qtpd {

class CanvasData;

////
/// \brief saves pd files on 'client' (GUI) side
///
class FileSaver {
private:
    FileSaver(){};

public:
    ////
    /// \brief save canvas TODO move parts to canvas
    /// \param file
    /// \param canvas
    ///
    static void saveCanvas(CanvasView* canvas, QFile* file);

    ////
    /// \brief new API saveCanvas
    /// \param canvas
    /// \param file
    ///
    static void saveCanvas(CanvasData* CanvasData, QFile* file);

    ////
    /// \brief save file to disk; runs 'savecanvas' recursively
    /// \param fname
    /// \param canvas
    ///
    static void save(QString fname, CanvasView* canvas);
    static void save(QString fname, CanvasData* canvasData);

};
}

#endif // CM_FILESAVER_H
