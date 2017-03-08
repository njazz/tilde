#ifndef CM_FILESAVER_H
#define CM_FILESAVER_H

#include "cm_patchwindow.h"

class cm_filesaver
{
private:
    cm_filesaver(){};
public:

    ////
    /// \brief save canvas
    /// \param file
    /// \param canvas
    ///
    static void saveCanvas(cm_canvas* canvas, QFile* file)
    {
        std::vector<cm_object*> objects = canvas->getObjectBoxes();

        //save canvas
        //todo canvas is subpatch flag
        std::string out1;

        out1 = "#N canvas 0 0 400 300 10;";     //temporary
        file->write(out1.c_str(),out1.size());

        std::vector<cm_object*>::iterator it;

        for (it = objects.begin(); it!= objects.end(); ++it)
        {
            // check for subpatches
            out1 = "#X object";
            out1 += ((cm_object*)*it)->getObjectData();
            out1 +=";";

            file->write(out1.c_str(),out1.size());

        }
    };

    ////
    /// \brief save file to disk; runs 'savecanvas' recursively
    /// \param fname
    /// \param canvas
    ///
    static void save(QString fname, cm_canvas* canvas)
    {
        QFile f(fname);
        f.open(QIODevice::WriteOnly);

        cm_filesaver::saveCanvas(canvas, &f);


        f.close();

    }
};

#endif // CM_FILESAVER_H
