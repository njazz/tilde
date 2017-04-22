// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBox.h"

#include "FileParser.h"

namespace qtpd {
UIBox::UIBox()
{
    qDebug("constructor");

    setHeight(20);

    deselect();

    setBgColor(QColor(240, 240, 240));

    setErrorBox(false);

    setSubpatchWindow(0);

    //setMinimumBoxWidth(40);
    //setMinimumBoxHeight(20);

    //setObjectSizeMode(os_FixedHeight);

    _objectDataModel.setObjectSize(os_FixedHeight, 40,20);

    setAcceptHoverEvents(true);

    //sizeBox()->move(33, 13);
    resizeEvent();
}

////
/// \brief mouse down
/// \param ev
///
void UIBox::mousePressEvent(QGraphicsSceneMouseEvent* ev)
{
    qDebug("click");
    QGraphicsItem::mousePressEvent(ev);

    //context menu
    if (ev->button() == Qt::RightButton) {

        QPoint pos;

        if (scene()
            && !scene()->views().isEmpty()
            && scene()->views().first()
            && scene()->views().first()->viewport()) {

            QGraphicsView* v = scene()->views().first();
            pos = v->viewport()->mapToGlobal(ev->pos().toPoint() );

            // TODO
            showPopupMenu(pos + this->pos().toPoint());
            ev->accept();
        }

        return;
    }

    //open canvas for subpatch
    if (getEditMode() != em_Unlocked) {
        if (subpatchWindow()) {
            subpatchWindow()->show();
        }
    }

    //abstraction opening. Fix
    if (getEditMode() != em_Unlocked) {
        if (_isAbstraction) {
            FileParser::open(_abstractionPath);
            return;
        }
    }

//        if ((getEditMode() == em_Unlocked) && isSelected()) {
//            //ev->accept();
//            //emit editObject(this);
//            //            qDebug("edit box");
//            return;
//        }

    emit selectBox(this, ev);

    dragOffset = QPoint(ev->pos().x(), ev->pos().y());

    ev->accept();
}

}
