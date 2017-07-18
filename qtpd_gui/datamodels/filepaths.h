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

//    QString classesDir();
//    QString externalsDir();
//    QString helpDir();
//    QString librariesDir();
//    QString patchesDir();

    QStringList bundlesDirList();

    QStringList dirListFor(QString path);
    QStringList recursiveDirListFor(QStringList paths);
    QStringList fileListFor(QStringList list, QString filter);

    QStringList classesDirList();
    QStringList externalsDirList();
    QStringList helpDirList();
    QStringList librariesDirList();
    QStringList patchesDirList();

    QStringList librariesFileList();
};
}

#endif // FILEPATHS_H
