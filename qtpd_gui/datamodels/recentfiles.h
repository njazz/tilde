#ifndef RECENTFILES_H
#define RECENTFILES_H

class QStringList;
class QString;

namespace qtpd{
class RecentFiles
{
    QStringList* _list;
public:
    RecentFiles();

    void addFile(QString fileName);
    QStringList* list();
};
}

#endif // RECENTFILES_H
