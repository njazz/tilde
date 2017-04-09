#include "LinkLine.h"

namespace qtpd{


void LinkLine::paint(QPainter* painter, const QStyleOptionGraphicsItem*, QWidget*)
    {
    // TODO

//        QColor b_pc_color = (_patchcordType == cm_pt_signal) ? QColor(128, 160, 192) : QColor(0, 0, 0);
//        // cleanup
//        QColor pc_color = (hover()) ? QColor(255, 192, 0) : b_pc_color;
//        if (isSelected())
//            pc_color = QColor(0, 192, 255);

//        painter->setRenderHint(QPainter::HighQualityAntialiasing, true);
//        painter->setPen(QPen(pc_color, 1 + (_patchcordType == cm_pt_signal), Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

//        //todo option

//        QPainterPath path;
//        // todo fix
//        QPoint end = endPoint();
//        QPoint start = startPoint();

//        qDebug() << "pc points" << start << end;

//        QPoint b1 = QPoint(start.x() + (end.x() - start.x()) * .5, fabs(end.y() - start.y()) * .5 + start.y());
//        QPoint b2 = QPoint(end.x() - (end.x() - start.x()) * .5, -fabs(end.y() - start.y()) * .5 + end.y());

//        //TODO
//        //spaghetti lol
//        if (start.y() > end.y()) {
//            if (b1.y() - start.y() > 80) {
//                b1.setY(start.y() + 80);
//            }

//            if (b2.y() - end.y() < -80) {
//                b2.setY(end.y() - 80);
//            }
//        }

//        //               if (b1.x() - start.x() < 20)
//        //                {
//        //                    b1.setX(start.x() + 20);
//        //                }

//        //                if (b2.x() - end.x() < -20)
//        //                {
//        //                    b2.setX(end.x() - 20);
//        //                }

//        path.moveTo(start);
//        path.cubicTo(b1, b2, end);

//        painter->drawPath(path);
//        _path = path;
//    }
}
}
