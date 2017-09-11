// (c) 2017 Alex Nadzharov
// License: GPL3

#include "filepaths.h"

#include <QDirIterator>
#include <QStandardPaths>

#include <QDebug>

#include <QCoreApplication>

namespace tilde {

FilePaths::FilePaths()
{
    _docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last();
    _basePath = _docFolder + "/tilde~";

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

//QString FilePaths::classesDir()
//{
//    return basePath() + "/Classes";
//}

//QString FilePaths::externalsDir()
//{
//    return basePath() + "/Externals";
//}

//QString FilePaths::helpDir()
//{
//    return basePath() + "/Help";
//}

//QString FilePaths::librariesDir()
//{
//    return basePath() + "/Libraries";
//}

//QString FilePaths::patchesDir()
//{
//    return basePath() + "/Patches";
//}
// ----------
QStringList FilePaths::bundlesDirList()
{
    QStringList ret;

    ret << _basePath;

    QDirIterator* d = new QDirIterator(_basePath + "/Bundles/", QStringList() << "*", QDir::Dirs, QDirIterator::NoIteratorFlags);

    int maxCount = 256;

    while (d->hasNext() && maxCount) {

        QString file = d->next();

        if ((file.split("/").last() != ".") && (file.split("/").last() != ".."))
            ret.append(file);

        maxCount--;
    }

    QDir dir = QDir(QCoreApplication::applicationDirPath());
    dir.cdUp();
    dir.cd("Resources");
    ret << dir.absolutePath();

    //delete d;

    return ret;
}

// ----------

QStringList FilePaths::recursiveDirListFor(QStringList paths)
{
    QStringList ret;

    for (int i = 0; i < paths.size(); i++) {

        ret << paths.at(i);

        QDirIterator* d = new QDirIterator(paths.at(i) + "/", QStringList() << "*", QDir::Dirs, QDirIterator::Subdirectories);

        int maxCount = 256;

        while (d->hasNext() && maxCount) {

            QString file = d->next();

            if ((file.split("/").last() != ".") && (file.split("/").last() != ".."))
                ret.append(file);

            maxCount--;
        }

//        delete d;
    }
    return ret;
}

QStringList FilePaths::dirListFor(QString path)
{
    QStringList ret;
    ret.append(basePath() + "/" + path);

    QStringList bundles = bundlesDirList();

    QStringList paths;

    for (int i = 0; i < bundles.count(); i++) {
        paths.append(bundles.at(i) + "/" + path);
    }

    ret = recursiveDirListFor(paths);

    return ret;
}

QStringList FilePaths::classesDirList()
{
    return dirListFor("Classes");
}

QStringList FilePaths::externalsDirList()
{
    return dirListFor("Externals");
}

QStringList FilePaths::helpDirList()
{
    return dirListFor("Help");
}

QStringList FilePaths::librariesDirList()
{
    QStringList ret;

    //    QDir dir = QDir(QCoreApplication::applicationDirPath());
    //    dir.cdUp();
    //    dir.cd("Resources");
    //    dir.cd("Libraries");

    //    ret << dir.absolutePath();
    ret << dirListFor("Libraries");

    return ret;
}

QStringList FilePaths::patchesDirList()
{
    return dirListFor("Patches");
}

QStringList FilePaths::scriptsDirList()
{
    return dirListFor("Scripts");
}
// ----------

QStringList FilePaths::fileListFor(QStringList list, QString filter)
{
    QStringList ret;

    for (int i = 0; i < list.size(); i++) {

        QDirIterator* d = new QDirIterator(list.at(i) + "/", QStringList() << filter, QDir::Files, QDirIterator::Subdirectories);

        int maxCount = 256;

        while (d->hasNext() && maxCount) {

            QString file = d->next();
            ret.append(file);

            maxCount--;
        }

//        delete d;
    }

    return ret;
}

QStringList FilePaths::librariesFileList()
{
    return fileListFor(librariesDirList(), "*.pd_darwin") + fileListFor(librariesDirList(), "*.d_fat");
}

QStringList FilePaths::scriptsFileList()
{
    return fileListFor(scriptsDirList(), "*.py");
}
}
