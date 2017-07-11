#include "recentfiles.h"

#include <QDebug>
#include <QFile>
#include <QStandardPaths>
#include <QTextStream>

namespace qtpd {

RecentFiles::RecentFiles()
{
    _list = new QStringList();

    QFile textFile(QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).at(0) + "/Qtpd/Settings/recentFiles.txt");

    if (!textFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << textFile.errorString();
    }

    QTextStream textStream(&textFile);
    while (true) {
        QString line = textStream.readLine();
        if (line.isNull())
            break;
        else
            _list->append(line);
    }

    textFile.close();

    //_list->append("recent files");
}

void RecentFiles::addFile(QString fileName)
{
    _list->append(fileName);

    QFile textFile(QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).at(0) + "/Qtpd/Settings/recentFiles.txt");

    if (!textFile.open(QIODevice::WriteOnly)) {
        //check and mkpath here
        qDebug() << textFile.errorString();
    }

    textFile.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream logStream(&textFile);
    for (int i = 0; i < _list->size(); i++) {
        logStream << _list->at(i) << "\n";
    }
    textFile.close();
}

QStringList* RecentFiles::list()
{
    return _list;
}
}
