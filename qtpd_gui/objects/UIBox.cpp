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

    _objectDataModel.setObjectSize(os_FixedHeight, 40, 20);

    setAcceptHoverEvents(true);

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
    //TODO MOVE
    if (ev->button() == Qt::RightButton) {

        QPoint pos;

        if (scene()
            && !scene()->views().isEmpty()
            && scene()->views().first()
            && scene()->views().first()->viewport()) {

            QGraphicsView* v = scene()->views().first();
            pos = v->viewport()->mapToGlobal(ev->pos().toPoint());

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

// -------------------

UIObject* UIBox::createObj(QString data)
{
    UIBox* ret = new UIBox();

    // this is needed here
    QStringList l = data.split(" ");
    l.removeFirst();
    data = l.join(" ");
    ret->setObjectData(data);

    return ret;
}

UIObject* UIBox::createObject(QString, t_canvas*, QGraphicsView*) { return 0; }

////
/// \brief paint event
///
void UIBox::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    p->setRenderHint(QPainter::HighQualityAntialiasing, true);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    //remove this later

    if (subpatchWindow()) {
        p->setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 2, boundingRect().width(), boundingRect().height() - 4);
    }

    QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : properties()->get("BorderColor")->asQColor(); //QColor(128, 128, 128);
    p->setPen(QPen(rectColor, 1 + _isAbstraction, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
    QTextOption* op = new QTextOption;
    op->setAlignment(Qt::AlignLeft);
    p->setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
    //QStringList textList = _objectDataModel.objectData().split(" ");
    //textList.removeFirst();
    p->drawText(2, 3, boundingRect().width() - 2, boundingRect().height() - 3, 0, _objectDataModel.objectData(), 0);

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 2, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, boundingRect().width(), boundingRect().height());
    }
}

////
/// \brief mouse up
///
void UIBox::mouseReleaseEvent(QGraphicsSceneMouseEvent* ev)
{
    QGraphicsItem::mouseReleaseEvent(ev);
}

////
/// \brief mouse move
/// \param event
///
void UIBox::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    //qDebug("box move");

    if (event->buttons() & Qt::LeftButton) {
        emit moveBox(this, event);
    }
    //event->ignore();

    if ((getEditMode() != em_Unlocked) && (subpatchWindow())) {
        setCursor(QCursor(Qt::PointingHandCursor));
    } else {
        setCursor(QCursor(Qt::ArrowCursor));
    }

    QGraphicsItem::mouseMoveEvent(event);
}

void UIBox::setPdMessage(QString message)
{
    UIBox::setObjectData(message);
}

void UIBox::setObjectData(QString message)
{
    UIObject::setObjectData(message);

    autoResize();

    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(message) + 10;
    new_w = (new_w < 25) ? 25 : new_w;
    setWidth(new_w);

    //
    setInletsPos();
    setOutletsPos();

    //
    sizeBox()->move(boundingRect().width() - 7, boundingRect().height() - 7);
}

void UIBox::sync()
{
    UIObject::sync();

    _isAbstraction = serverObject()->type() == typeAbstraction;
    update();
}
}
