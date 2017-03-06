#ifndef CM_MENU_H
#define CM_MENU_H

#include <QObject>

////
/// \brief Common menu. TODO cleanup
///
class cm_menu : public QObject
{
    Q_OBJECT
public:
    explicit cm_menu(QObject *parent = 0);

signals:

public slots:

    static void newFile();
    static void open();
    static void close(QObject *sender);
    static void save();
    static void saveAs();
    static void message();

    static void pdWindow();
};

#endif // CM_MENU_H
