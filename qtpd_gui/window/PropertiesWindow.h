#ifndef CM_PROPERTIESWINDOW_H
#define CM_PROPERTIESWINDOW_H

//#include <QtGui>
#include <QDockWidget>
#include <QLabel>
#include <QLineEdit>

#include "Preferences.h"
#include "PropertyList.h"

#include <QGridLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include <map>

namespace qtpd {
class PropertiesWindow : public QWidget {

private:
    std::map<QLineEdit*, QString> _propertyNames; //lookup table
    PropertyList* _propertyList;

public:
    PropertiesWindow(PropertyList* plist);

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
