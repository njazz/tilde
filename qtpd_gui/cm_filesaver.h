#ifndef CM_FILESAVER_H
#define CM_FILESAVER_H

#include "cm_patchwindow.h"

namespace cm
{

////
/// \brief saves pd files on 'client' (GUI) side
///
class FileSaver
{
private:
    FileSaver(){};
public:

    ////
    /// \brief save canvas
    /// \param file
    /// \param canvas
    ///
    static void saveCanvas(Canvas* canvas, QFile* file)
    {

        //save canvas
        //todo canvas is subpatch flag
        std::string out1;

        out1 = canvas->asPdFileString(); //"#N canvas 0 0 400 300 10;\r\n";     //temporary
        file->write(out1.c_str(),out1.size());

        //objects
        std::vector<UIObject*> objects = canvas->getObjectBoxes();
        std::vector<UIObject*>::iterator it;

        for (it = objects.begin(); it!= objects.end(); ++it)
        {
            // check for subpatches
            out1 = "#X obj ";
            out1 += std::to_string(((UIObject*)*it)->x()) + " " + std::to_string(((UIObject*)*it)->y())+ " ";
            out1 += ((UIObject*)*it)->asPdFileString();
            out1 +=";\r\n" ;

            file->write(out1.c_str(),out1.size());

        }

        //patchcords
        std::vector<Patchcord*> patchcords = canvas->getPatchcords();
        std::vector<Patchcord*>::iterator it2;

        for (it2 = patchcords.begin(); it2!= patchcords.end(); ++it2)
        {
            // check for subpatches
            out1 = "#X connect ";
            out1 += canvas->getPatchcordAsString(*it2);
            out1 +=";\r\n";

            file->write(out1.c_str(),out1.size());

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
