#ifndef UIOBJECTDATA_H
#define UIOBJECTDATA_H

#include <QObject>

#include "CommonTypes.h"
#include "Port.h"
#include "PropertyList.h"

namespace qtpd {

typedef std::vector<Port*> portItemVec;

class UIObjectData : public QObject {
    Q_OBJECT

    void* _pdObject;

    QString _objectData;
    PropertyList* _properties;

    QString _fullHelpName;
    bool _errorBox;

    t_objectSize _objectSizeMode;
    int _minimumBoxWidth;
    int _minimumBoxHeight;

public:
    void setPdObject(void* pdObject) { _pdObject = pdObject; }
    void* pdObject() { return _pdObject; }

    void setData(QString inputData) ///> set both properties and Pd object string
    {
        if (_properties)
            delete _properties;
        _properties = new PropertyList();

        _objectData = _properties->extractFromPdFileString(inputData);
    }
    QString objectData() { return _objectData; }
    PropertyList* properties() { return _properties; }

    QString fullHelpName() { return _fullHelpName; }
    bool errorBox() { return _errorBox; }
    void setFullHelpName(QString fullHelpName) { _fullHelpName = fullHelpName; }
    void setErrorBox(bool errorBox) { _errorBox = errorBox; }

    void setObjectSize(t_objectSize sizeMode, int minW, int minH)   ///> sets all size constraints
    {
        _objectSizeMode = sizeMode;
        _minimumBoxWidth = minW;
        _minimumBoxHeight = minH;
    }

    explicit UIObjectData(QObject* parent = 0);

signals:

public slots:
};
}

#endif // UIOBJECTDATA_H
