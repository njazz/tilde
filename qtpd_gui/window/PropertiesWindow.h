#ifndef CM_PROPERTIESWINDOW_H
#define CM_PROPERTIESWINDOW_H

//#include <QtGui>
#include <QDockWidget>
#include <QLabel>
#include <QLineEdit>

#include "Preferences.h"
#include "PropertyList.h"

#include <map>

namespace qtpd {

////
/// \brief Properties window class
///
class PropertiesWindow : public QWidget {

private:
    std::map<QLineEdit*, QString> _propertyNames; //lookup table
    PropertyList* _propertyList;

public:
    PropertiesWindow(PropertyList* plist);

public slots:
    void editedProperty();
};
}

#endif // CM_PROPERTIESWINDOW_H
