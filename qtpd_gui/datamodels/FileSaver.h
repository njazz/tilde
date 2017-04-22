// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_FILESAVER_H
#define CM_FILESAVER_H

#include "PatchWindow.h"

namespace qtpd {

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
    static void saveCanvas(Canvas* canvas, QFile* file)
    {

        // this calls top 'canvas' and gets all data as QStringList
        // canvas saves contents recursively

        QStringList fileData = canvas->canvasAsPdStrings();

        //todo check
        for (int i = 0; i < fileData.count(); i++) {
            QString str1 = fileData.at(i);
            file->write(str1.toStdString().c_str(), str1.size());
        }
    };

    ////
    /// \brief save file to disk; runs 'savecanvas' recursively
    /// \param fname
    /// \param canvas
    ///
    static void save(QString fname, Canvas* canvas)
    {
        QFile f(fname);
        f.open(QIODevice::WriteOnly);

        FileSaver::saveCanvas(canvas, &f);

        f.close();
    }
};
}

#endif // CM_FILESAVER_H
