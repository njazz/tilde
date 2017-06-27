// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBang.h"

namespace qtpd {
UIBang::UIBang()
{
    setSize(20, 20);

    _objectDataModel.setObjectSize(os_Square, 20, 20);

    deselect();
    _clicked = false;

    setWidth(20);
    setHeight(20);

    _timer = new QTimer;
    _timer->setSingleShot(true);
    _timer->setInterval(33); //default 100

    connect(_timer, &QTimer::timeout, this, &UIBang::timerAction);
    connect(this, SIGNAL(setBangTimer(int)), _timer, SLOT(start(int)));

    resizeEvent();
}

// -------------------------------

UIObject* UIBang::createObj(QString data)
{
    UIBang* ret = new UIBang();

    ret->setObjectData(data);

    connect(ret, &UIBang::signalBang, ret, &UIBang::slotBang);

    return ret;
}

UIObject* UIBang::createObject(QString , t_canvas* , QGraphicsView* )
{
    return 0;
}

void UIBang::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    if (_clicked) {
        float lw = 1 + width() / 20.;
        p->setPen(QPen(QColor(0, 192, 255), lw, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        p->drawEllipse(QRect(1 + lw / 2, 1 + lw / 2, width() - 2 - lw, height() - 2 - lw));

    } else {
        p->setPen(QPen(QColor(220, 220, 220), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawEllipse(QRect(1, 1, width() - 2, height() - 2));
    }

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    } else {
        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    }

    p->drawRect(0, 0, width(), height());
}

void UIBang::resizeEvent()
{
    setHeight(width());
    UIObject::resizeEvent();
}

// -------------------

void UIBang::mousePressEvent(QGraphicsSceneMouseEvent* ev)
{

    emit selectBox(this, ev);

    dragOffset = ev->pos().toPoint();

    if (!(getEditMode() == em_Unlocked)) {
        _clicked = true;
        update();

        timerStart();
    }

    //qDebug() << "err";

    //move ?
    if (getEditMode() != em_Unlocked) {
        if (!serverObject()) {
            qDebug("msg: bad pd object!");
        } else {
            //cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());

            emit signalBang();
        }
    }

    //emit signalBang();
}

void UIBang::mouseReleaseEvent(QGraphicsSceneMouseEvent*)
{
}

void UIBang::mouseMoveEvent(QGraphicsSceneMouseEvent* event)
{
    if (event->buttons() & Qt::LeftButton) {
        emit moveBox(this, event);
    }
    event->ignore();

    //todo move!
    if (getEditMode() != em_Unlocked) {
        setCursor(QCursor(Qt::PointingHandCursor));
    } else {
        setCursor(QCursor(Qt::ArrowCursor));
    }
}

// -------------------------

void UIBang::updateUI(AtomList)
{
    if (!_clicked) {
        timerStart();
        _clicked = true;
        update();
    }
}

void UIBang::timerStart()
{
    emit setBangTimer(50);
}

// -------------------------

void UIBang::timerAction()
{
    _clicked = false;
    emit callRepaint();
}

void UIBang::slotBang()
{
    emit sendMessage(this->serverObject(), QString("bang"));
}
}
