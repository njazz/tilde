#ifndef CM_MENU_H
#define CM_MENU_H

#include <QObject>

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

    static void undo();
    static void redo();
    static void cut();
    static void copy();
    static void paste();

    static void putObject();
    static void putMessage();
    static void putNumber();
    static void putSymbol();
    static void putComment();

//    static void dspOn();
//    static void dspOff();

    static void pdWindow();
};

#endif // CM_MENU_H
