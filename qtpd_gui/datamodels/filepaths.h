#ifndef FILEPATHS_H
#define FILEPATHS_H

#include <QString>
#include <QStringList>

//            Classes
//            Externals
//            Help
//            Libraries
//            Patches
//            Scripts
//            Settings

namespace qtpd {

class FilePaths {
    QString _docFolder;
    QString _basePath;

public:
    FilePaths();

    //void setBasePath(QString path);   // cannot change?
    QString basePath();

    QString settings();

    QString classes();
    QString externals();
    QString help();
    QString libraries();
    QString patches();
};
}

#endif // FILEPATHS_H
