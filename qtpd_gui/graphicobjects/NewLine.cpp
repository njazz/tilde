#include "UINewPatchcord.h"

namespace qtpd {
UINewPatchcord::UINewPatchcord() {}

void UINewPatchcord::paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*)
{
    if (_active) {

        painter->setPen(QPen(QColor(128, 128, 128), 1, Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
        painter->drawLine(_start.x(), _start.y(), _end.x(), _end.y());
    }
}
}
