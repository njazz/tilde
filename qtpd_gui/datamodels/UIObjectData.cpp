#include "UIObjectData.h"

namespace qtpd {
UIObjectData::UIObjectData(QObject* parent)
    : QObject(parent)
{
    _pdObject = 0;
    _properties = new PropertyList();

    _errorBox = false;

}
}
