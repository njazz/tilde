// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIPatchcord.h"

namespace qtpd {
UIPatchcord::UIPatchcord(UIItem* obj1, UIItem* out1, UIItem* obj2, UIItem* in2)
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

void UIPatchcord::paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*)
{
    QColor b_pc_color = (_patchcordType == cm_pt_signal) ? QColor(128, 160, 192) : QColor(0, 0, 0);
    // cleanup
    QColor pc_color = (hover()) ? QColor(255, 192, 0) : b_pc_color;
    if (isSelected())
        pc_color = QColor(0, 192, 255);

    painter->setRenderHint(QPainter::HighQualityAntialiasing, true);
    painter->setPen(QPen(pc_color, 1 + (_patchcordType == cm_pt_signal), Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    //todo option

    QPainterPath path;
    // todo fix
    QPoint end = endPoint();
    QPoint start = startPoint();

    //qDebug() << "pc points" << start << end;

    QPoint b1 = QPoint(start.x() + (end.x() - start.x()) * .5, fabs(end.y() - start.y()) * .5 + start.y());
    QPoint b2 = QPoint(end.x() - (end.x() - start.x()) * .5, -fabs(end.y() - start.y()) * .5 + end.y());

    //TODO
    //spaghetti lol
    if (start.y() > end.y()) {
        if (b1.y() - start.y() > 80) {
            b1.setY(start.y() + 80);
        }

        if (b2.y() - end.y() < -80) {
            b2.setY(end.y() - 80);
        }
    }

    // TODO positive size

    path.moveTo(start);
    path.cubicTo(b1, b2, end);

    painter->drawPath(path);
    _path = path;
}

// ---------

QPoint UIPatchcord::startPoint()
{

    QPoint start = QPoint(0, 0);

    if (_obj1 && _out1)
        start = QPoint(_obj1->pos().x() + _out1->pos().x() + _out1->width() / 2,
            _obj1->pos().y() + _out1->pos().y() + _out1->height() / 2);

    setPos(start);

    return QPoint(0, 0);
}

QPoint UIPatchcord::endPoint()
{
    QPoint end = QPoint(0, 0);
    if (_obj2 && _in2)
        end = QPoint(_obj2->pos().x() + _in2->pos().x() + _in2->width() / 2,
            _obj2->pos().y() + _in2->pos().y() + _in2->height() / 2);

    //qDebug() << "set end" << end;

    //todo fix!
    setSize(end.x() - pos().x(), end.y() - pos().y());

    return QPoint(size().width(), size().height());
}
}
