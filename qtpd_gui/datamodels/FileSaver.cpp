
#include "FileSaver.h"

#include "CanvasData.h"

namespace qtpd {
void FileSaver::saveCanvas(CanvasData* canvasData, QFile* file)
{
    // this calls top 'canvas' and gets all data as QStringList
    // canvas saves contents recursively

    QStringList fileData = canvasData->asPdFileStrings();

    //todo check
    for (int i = 0; i < fileData.count(); i++) {
        QString str1 = fileData.at(i);
        file->write(str1.toStdString().c_str(), str1.size());
    }
};
}
