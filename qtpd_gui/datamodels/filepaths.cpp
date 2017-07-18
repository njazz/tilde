// (c) 2017 Alex Nadzharov
// License: GPL3

#include "filepaths.h"

#include <QDirIterator>
#include <QStandardPaths>

#include <QDebug>

namespace qtpd {

FilePaths::FilePaths()
{
    _docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last();
    _basePath = _docFolder + "/Qtpd";

    //            * Bundles
    //            Classes
    //            Externals
    //            Help
    //            Libraries
    //            Patches
    //            Scripts
    //            Settings
}

//void FilePaths::setBasePath(QString path)
//{
//    _basePath = path;

//    // todo check if path exists
//}

QString FilePaths::basePath()
{
    return _basePath;
}

// ----------

QString FilePaths::settings()
{
    return basePath() + "/Settings";
}

// ----------

QString FilePaths::classesDir()
{
    return basePath() + "/Classes";
}

QString FilePaths::externalsDir()
{
    return basePath() + "/Externals";
}

QString FilePaths::helpDir()
{
    return basePath() + "/Help";
}

QString FilePaths::librariesDir()
{
    return basePath() + "/Libraries";
}

QString FilePaths::patchesDir()
{
    return basePath() + "/Patches";
}

QStringList FilePaths::librariesList()
{
    QStringList ret;

    QDirIterator* d = new QDirIterator(librariesDir() + "/", QStringList() << "*.pd_darwin", QDir::Files, QDirIterator::Subdirectories);
    //QDirIterator* d = new QDirIterator(librariesDir());

    int maxCount = 256;

    while (d->hasNext() && maxCount) {

        QString file = d->next();
        //if (file.split(".", Qt::).last() == "pd_darwin")
        ret.append(file);

        //        qDebug() << "lib " << file;

        maxCount--;
    }

    //delete d;
    //    qDebug() << " ret" << ret;

    return ret;
}
}
