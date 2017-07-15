#include "filepaths.h"

#include <QStandardPaths>

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

QString FilePaths::classes()
{
    return basePath() + "/Classes";
}

QString FilePaths::externals()
{
    return basePath() + "/Externals";
}

QString FilePaths::help()
{
    return basePath() + "/Help";
}

QString FilePaths::libraries()
{
    return basePath() + "/Libraries";
}

QString FilePaths::patches()
{
    return basePath() + "/Patches";
}
}
