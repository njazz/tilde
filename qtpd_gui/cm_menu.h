#ifndef CM_MENU_H
#define CM_MENU_H

#include <QObject>


namespace cm
{
////
/// \brief Common menu - creates new windows (patch, Pd)
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
