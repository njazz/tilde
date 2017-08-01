// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIBang.h"

#include <QPainter>
#include <QStyleOptionGraphicsItem>
#include <QWidget>

#include "UIObjectData.h"

namespace tilde {
UIBang::UIBang()
{
    setSize(20, 20);
    objectData()->setObjectSize(os_Square, 20, 20);

    deselect();
    _clicked = false;

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

    ret->fromQString(data);

    connect(ret, &UIBang::signalBang, ret, &UIBang::slotBang);

    return ret;
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

void UIBang::objectPressEvent(QGraphicsSceneMouseEvent* ev)
{

    //move ?
    if (getEditMode() != em_Unlocked) {
        if (!serverObject()) {
            qDebug("msg: bad pd object!");
        } else {

            emit signalBang();
        }
    }
}

// -------------------------

void UIBang::updateUI(AtomList*)
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
    emit signalCallRepaint();
}

void UIBang::slotBang()
{
    emit signalSendMessage(this->serverObject(), QString("bang"));
}
}
