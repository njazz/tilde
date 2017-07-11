#include "recentfiles.h"

#include <QFile>
#include <QTextStream>

namespace qtpd {

RecentFiles::RecentFiles()
{
    _list = new QStringList();

    QFile textFile("~/Qtpd/Settings/recentFiles.txt");

    QTextStream textStream(&textFile);
    while (true) {
        QString line = textStream.readLine();
        if (line.isNull())
            break;
        else
            _list->append(line);
    }

    _list->append("recent files");
}

void RecentFiles::addFile(QString fileName)
{
    _list->append(fileName);
}

QStringList* RecentFiles::list()
{
    return _list;
}
}
