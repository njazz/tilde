#include "UIObjectData.h"

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
}
