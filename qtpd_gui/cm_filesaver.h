#ifndef CM_FILESAVER_H
#define CM_FILESAVER_H

#include "cm_patchwindow.h"

////
/// \brief saves pd files on 'client' (GUI) side
///
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

        //save canvas
        //todo canvas is subpatch flag
        std::string out1;

        out1 = "#N canvas 0 0 400 300 10;\n\r";     //temporary
        file->write(out1.c_str(),out1.size());

        //objects
        std::vector<cm_object*> objects = canvas->getObjectBoxes();
        std::vector<cm_object*>::iterator it;

        for (it = objects.begin(); it!= objects.end(); ++it)
        {
            // check for subpatches
            out1 = "#X obj ";
            out1 += std::to_string(((cm_object*)*it)->x()) + " " + std::to_string(((cm_object*)*it)->y())+ " ";
            out1 += ((cm_object*)*it)->getSaveString();
            out1 +=";\n\r" ;

            file->write(out1.c_str(),out1.size());

        }

        //patchcords
        std::vector<cm_patchcord*> patchcords = canvas->getPatchcords();
        std::vector<cm_patchcord*>::iterator it2;

        for (it2 = patchcords.begin(); it2!= patchcords.end(); ++it2)
        {
            // check for subpatches
            out1 = "#X connect ";
            out1 += canvas->getPatchcordAsString(*it2);
            out1 +=";\n\r";

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
