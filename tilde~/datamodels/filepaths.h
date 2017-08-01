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

namespace tilde {

class FilePaths {
    QString _docFolder;
    QString _basePath;

public:
    FilePaths();

    //void setBasePath(QString path);   // cannot change?
    QString basePath();

    QString settings();

    QStringList bundlesDirList();

    QStringList dirListFor(QString path);
    QStringList recursiveDirListFor(QStringList paths);
    QStringList fileListFor(QStringList list, QString filter);

    QStringList classesDirList();
    QStringList externalsDirList();
    QStringList helpDirList();
    QStringList librariesDirList();
    QStringList patchesDirList();
    QStringList scriptsDirList();

    QStringList librariesFileList();
    QStringList scriptsFileList();
};
}

#endif // FILEPATHS_H
