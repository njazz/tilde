#ifndef CM_PROPERTIESWINDOW_H
#define CM_PROPERTIESWINDOW_H

//#include <QtGui>
#include <QDockWidget>
#include <QLabel>
#include <QLineEdit>

#include "cm_propertylist.h"
#include "cm_preferences.h"

namespace qtpd{
class PropertiesWindow : public QDockWidget
{
public:
    PropertiesWindow(PropertyList* plist)
    {
        QStringList list = plist->names();

        //qDebug() << "properties:" << plist->names();

        setMinimumWidth(240);
        setBaseSize(200,list.size()*20 + 30);
        setMinimumHeight(list.size()*20 + 30);

        setWindowTitle("Properties");

        for (int i=0;i<list.size();i++)
        {
            int y = i*20;
            int x1 = 10; int x2 = 100;

            QLabel *l1 = new QLabel(this);
            QFont myFont(PREF_QSTRING("Font"), 11);
            l1->setFont(myFont);
            l1->setText(list.at(i));
            l1->setFixedSize(100,20);
            l1->move(x1,y);
            l1->show();

            QLineEdit *le = new QLineEdit(this);
            le->setFont(myFont);
            le->setText(plist->get(list.at(i).toStdString())->asQString());
            le->setFixedSize(140,20);
            le->move(x2,y);
            le->show();


        }
    }
};
}

#endif // CM_PROPERTIESWINDOW_H
