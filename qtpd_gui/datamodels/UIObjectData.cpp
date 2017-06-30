#include "UIObjectData.h"

#include "PropertyList.h"
#include "Port.h"

namespace qtpd {
UIObjectData::UIObjectData(QObject* parent)
    : QObject(parent)
{
    // unused?
    _minimumBoxHeight = 20;
    _minimumBoxWidth = 20;

    //_pdObject = 0;
    _properties = new PropertyList();

    _errorBox = false;
}

void UIObjectData::setData(QString inputData) ///> set both properties and Pd object string
{

    _objectData = _properties->extractFromPdFileString(inputData);
}

void UIObjectData::setObjectSize(t_objectSize sizeMode, int minW, int minH) ///> sets all size constraints
{
    _objectSizeMode = sizeMode;
    _minimumBoxWidth = minW;
    _minimumBoxHeight = minH;
}

QString UIObjectData::objectData() { return _objectData; }
PropertyList* UIObjectData::properties() { return _properties; }

QString UIObjectData::fullHelpName() { return _fullHelpName; }
bool UIObjectData::errorBox() { return _errorBox; }
void UIObjectData::setFullHelpName(QString fullHelpName) { _fullHelpName = fullHelpName; }
void UIObjectData::setErrorBox(bool errorBox) { _errorBox = errorBox; }

int UIObjectData::minimumBoxWidth() { return _minimumBoxWidth; }
int UIObjectData::minimumBoxHeight() { return _minimumBoxHeight; }
t_objectSize UIObjectData::objectSizeMode() { return _objectSizeMode; }
}
