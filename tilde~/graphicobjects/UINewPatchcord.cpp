// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UINewPatchcord.h"

#include <QPainter>

namespace tilde {
UINewPatchcord::UINewPatchcord()
{

    _patchcordType = 0;
    _error = false;
}

void UINewPatchcord::paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*)
{
    if (_active) {

        painter->setPen(QPen(_error ? QColor(255, 0, 0) : QColor(128, 128, 128), 1 + (_patchcordType > 0), Qt::DashLine, Qt::SquareCap, Qt::BevelJoin));
        painter->drawLine(_start.x(), _start.y(), _end.x(), _end.y());
    }
}
}
