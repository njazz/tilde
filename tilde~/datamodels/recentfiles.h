#ifndef RECENTFILES_H
#define RECENTFILES_H

class QStringList;
class QString;

namespace tilde {
class RecentFiles {
    QStringList* _list;

public:
    RecentFiles();
    ~RecentFiles();

    void addFile(QString fileName);
    QStringList* list();
};
}

#endif // RECENTFILES_H
