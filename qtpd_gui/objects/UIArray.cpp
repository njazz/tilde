// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIArray.h"

#include "SizeBox.h"

#include "Preferences.h"
#include "PropertyList.h"

#include "UIObjectData.h"

namespace qtpd {
UIArray::UIArray()
{
    setHeight(20);

    deselect();
    setErrorBox(false);

    objectData()->setObjectSize(os_FixedHeight, 40, 20);
    initProperties();
    resizeEvent();

    _array = 0;
}

UIObject* UIArray::createObj(QString data)
{
    UIArray* ret = new UIArray();

    ret->fromQString(data);
    return ret;
}

void UIArray::createServerArray()
{

    ServerObject* o = serverObject();

    if (!o) {
        qDebug() << "server object error!";
        return;
    }

    ServerCanvas* c = serverObject()->parent();
    if (!c) {
        qDebug() << "server canvas error!";
        return;
    }

    qDebug() << "object / canvas :" << o << c;

    _array = c->createArray(_arrayName.toStdString(), _arraySize);

    _editor.setServerArray(_array);
}

void UIArray::initProperties()
{
    UIObject::initProperties();
    properties()->create("ArraySize", "Array", "0.1", 100);
}

// ----------------------------------

void UIArray::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    p->setRenderHint(QPainter::HighQualityAntialiasing, true);
    p->scale(scale(), scale());

    p->setPen(QPen(QColor(192, 255, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p->drawRect(0, 1, width(), height() - 2);

    //remove this later
    //    if (subpatchWindow()) {
    //        p->setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    //        p->drawRect(0, 2, width(), height() - 4);
    //    }

    QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : QColor(128, 128, 128);
    p->setPen(QPen(rectColor, 1, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p->drawRect(0, 0, width(), height());
    QTextOption* op = new QTextOption;
    op->setAlignment(Qt::AlignLeft);
    p->setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    p->setFont(QFont(PREF_QSTRING("Font"), 11, 0, false));
    p->drawText(2, 3, width() - 2, height() - 3, 0, objectData()->toQString(), 0);

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 1, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, width(), height());
    }
}

////
/// \brief mouse down
/// \param ev
///
void UIArray::mousePressEvent(QGraphicsSceneMouseEvent* ev)
{
    //context menu
    if (ev->button() == Qt::RightButton) {
        if (scene()
            && !scene()->views().isEmpty()
            && scene()->views().first()
            && scene()->views().first()->viewport()) {

            QGraphicsView* v = scene()->views().first();
            QPoint pos = v->viewport()->mapToGlobal(ev->pos().toPoint());

            // TODO
            showPopupMenu(pos + this->pos().toPoint());
            ev->accept();
        }

        return;
    }

    if ((getEditMode() == em_Unlocked) && isSelected()) {

        emit signalEditObject(this);
        return;
    }

    if ((getEditMode() != em_Unlocked)) {
        if (!errorBox())
            _editor.show();
    }

    emit selectBox(this, ev);
    dragOffset = ev->pos().toPoint();
}

////
/// \brief mouse up
///
void UIArray::mouseReleaseEvent(QGraphicsSceneMouseEvent*) {}

////
/// \brief mouse move
/// \param event
///
void UIArray::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    if (event->buttons() & Qt::LeftButton) {
        emit moveBox(this, event);
    }
    event->ignore();

    if ((getEditMode() != em_Unlocked)) {
        setCursor(QCursor(Qt::PointingHandCursor));
    } else {
        setCursor(QCursor(Qt::ArrowCursor));
    }
}

//void UIArray::setPdMessage(QString message)
//{
//    UIArray::setObjectData(message);
//}

void UIArray::fromQString(QString message)
{
    UIObject::fromQString(message);

    autoResize();

    QFont myFont(PREF_QSTRING("Font"), 11);
    QFontMetrics fm(myFont);
    int new_w = fm.width(message) + 10;
    new_w = (new_w < 25) ? 25 : new_w;
    setWidth(new_w);

    //
    QStringList list = message.split((" "));

    // TODO workaround
    if (list.at(0) == "")
        list.removeAt(0);
    if (list.at(0) == "ui.array")
        list.removeAt(0);

    autoResize();

    if (list.size() < 1) {
        ServerInstance::error("array: bad arguments!");
        setErrorBox(true);
        return;
    }

    _arrayName = list.at(0);
    if (list.size() > 1) {
        _arraySize = list.at(1).toFloat();
    } else {
        _arraySize = 256;
    }

    qDebug() << "array name / size : " << _arrayName << _arraySize;

    //
    setInletsPos();
    setOutletsPos();

    //
    sizeBox()->move(boundingRect().width() - 7, boundingRect().height() - 7);
}

void UIArray::sync()
{
    //UIObject::sync();

    if (serverObject()->errorBox()) {
        setErrorBox(true);
        return;
    }

    if (!_array)
        createServerArray();
}
}
