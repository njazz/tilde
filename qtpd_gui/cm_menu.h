#ifndef CM_MENU_H
#define CM_MENU_H

#include <QObject>


namespace cm
{
////
/// \brief Common menu - creates new windows (patch, Pd)
/// \details this is used only to create new windows. all other items are now in basewindow - probably they should be moved here
///
class BaseMenu : public QObject
{
    Q_OBJECT
public:
    explicit BaseMenu(QObject *parent = 0);

signals:

public slots:

    static void newFile();
    static void open();

    static void pdWindow();
};
}

#endif // CM_MENU_H
