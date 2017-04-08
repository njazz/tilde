// (c) 2017 Alex Nadzharov
// License: GPL3

#include "Patchcord.h"

namespace qtpd {
Patchcord::Patchcord(UIItem* obj1, UIItem* out1, UIItem* obj2, UIItem* in2)
{
    _obj1 = obj1;
    _out1 = out1;
    _obj2 = obj2;
    _in2 = in2;

    _patchcordType = cm_pt_anything;

    setAcceptHoverEvents(true);

    //
    endPoint();
    startPoint();
}

QPoint Patchcord::startPoint()
{

    QPoint start = QPoint(0, 0);

    if (_obj1 && _out1)
        start = QPoint(_obj1->pos().x() + _out1->pos().x() + _out1->width() / 2,
            _obj1->pos().y() + _out1->pos().y() + _out1->height() / 2);

    setPos(start);

    return QPoint(0, 0);
}

QPoint Patchcord::endPoint()
{
    QPoint end = QPoint(0, 0);
    if (_obj2 && _in2)
        end = QPoint(_obj2->pos().x() + _in2->pos().x() + _in2->width() / 2,
            _obj2->pos().y() + _in2->pos().y() + _in2->height() / 2);

    qDebug() << "set end" << end;

    //todo fix!
    setSize(end.x() - pos().x(), end.y() - pos().y());

    return QPoint(size().width(), size().height());
}
}
