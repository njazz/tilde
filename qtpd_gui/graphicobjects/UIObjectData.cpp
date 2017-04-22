#include "UIObjectData.h"

namespace qtpd {
UIObjectData::UIObjectData(QObject* parent)
    : QObject(parent)
{
    _pdObject = 0;
    _properties = 0;

}
}
