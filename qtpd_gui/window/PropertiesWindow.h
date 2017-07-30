#ifndef CM_PROPERTIESWINDOW_H
#define CM_PROPERTIESWINDOW_H

//#include <QtGui>
#include <QDockWidget>
#include <QLabel>
#include <QLineEdit>

#include "Preferences.h"
#include "PropertyList.h"

#include <map>

class QTableWidget;

namespace qtpd {

class PatchWindowController;

////
/// \brief Properties window class
///
class PropertiesWindow : public QWidget {

    Q_OBJECT

private:
    std::map<QObject*, QString> _propertyNames; //lookup table
    PropertyList* _propertyList;

    void loadTableWidget(QString pName, QTableWidget* tv);

    PatchWindowController* _patchController;

public:
    PropertiesWindow(){};
    explicit PropertiesWindow(PropertyList* plist);

    void setWindowController(PatchWindowController* c);

public slots:
    // spaghetti time
    void editedText();
    void editedColor();
    void editedBool();
    void editedInt(int);
    void editedFloat(double);
    void editedStringList(int index, int);
    void editedEnum(int idx);
};
}

#endif // CM_PROPERTIESWINDOW_H
