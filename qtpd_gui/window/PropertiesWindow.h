#ifndef CM_PROPERTIESWINDOW_H
#define CM_PROPERTIESWINDOW_H

//#include <QtGui>
#include <QDockWidget>
#include <QLabel>
#include <QLineEdit>

#include "cm_preferences.h"
#include "cm_propertylist.h"

#include <map>

namespace qtpd {
class PropertiesWindow : public QDockWidget {

private:
    std::map<QLineEdit*, QString> _propertyNames; //lookup table
    PropertyList* _propertyList;

public:
    PropertiesWindow(PropertyList* plist)
    {
        _propertyList = plist;

        QStringList grpList = plist->groupNames();

        setWindowTitle("Properties");

        setMinimumWidth(240);

        int y0 = 0;
        int x1 = 10;
        int x2 = 100;
        int y = 0;

        for (int j = 0; j < grpList.size(); j++) {

            UIPropertyData* groupData = plist->group(grpList.at(j));
            QStringList list = plist->names(groupData);

            y = y0;

            QLabel* l1 = new QLabel(this);
            QFont myFont(PREF_QSTRING("Font"), 11);
            myFont.setBold(true);
            l1->setFont(myFont);
            l1->setText(grpList.at(j));
            l1->setFixedSize(100, 20);
            l1->move(x1 / 2, y);
            l1->show();

            y0 += 20;

            for (int i = 0; i < list.size(); i++) {
                y = i * 20 + y0;

                QLabel* l1 = new QLabel(this);
                QFont myFont(PREF_QSTRING("Font"), 11);
                l1->setFont(myFont);
                l1->setText(list.at(i));
                l1->setFixedSize(100, 20);
                l1->move(x1, y);
                l1->show();

                QLineEdit* le = new QLineEdit(this);
                le->setFont(myFont);
                le->setText(plist->get(list.at(i).toStdString())->asQString());
                le->setFixedSize(140, 20);
                le->move(x2, y);
                le->show();

                connect(le, &QLineEdit::returnPressed, this, &PropertiesWindow::editedProperty);

                _propertyNames[le] = list.at(i);
            }

            y0 += list.size() * 20 + 10;
        }

        setBaseSize(200, y0 + 30);
        setMinimumHeight(y0 + 30);
    }

public slots:
    void editedProperty()
    {
        qDebug() << "edited";

        QLineEdit* sender = (QLineEdit*)QObject::sender();
        QString pname = _propertyNames[sender];
        _propertyList->set(pname.toStdString(), sender->text().split(" "));

        qDebug() << pname << sender->text();
    }
};
}

#endif // CM_PROPERTIESWINDOW_H
