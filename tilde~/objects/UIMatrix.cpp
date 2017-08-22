// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIMatrix.h"

#include "PropertyList.h"

#include <QStyleOptionGraphicsItem>

#include "UIObjectData.h"

#include "ceammc_atomlist.h"

namespace tilde {

UIMatrix::UIMatrix()
{
    setSize(20, 20);

    objectData()->setObjectSize(os_FixedHeight, 100, 20);

    deselect();
    _clicked = false;

    initProperties();

    resizeEvent();
}



 UIObject* UIMatrix::createObj(QString data)
{
    UIMatrix* ret = new UIMatrix();

    //        QStringList l = data.split(" ");l.removeFirst();
    //        data = l.join(" ");

    ret->fromQString(data);

    return ret;
}
// UIObject* UIMatrix::createObject(QString , t_canvas* , QGraphicsView*)
//{
//    return 0;
//}

void UIMatrix::initProperties()
{
    UIObject::initProperties();

    properties()->create("Value", "Preset", "0.1", 0.);

    properties()->create("Rows", "Matrix", "0.1", 1);
    properties()->create("Columns", "Matrix", "0.1", 5);
    properties()->create("Radio", "Matrix", "0.1", true);
    properties()->create("Momentary", "Matrix", "0.1", false);
    properties()->create("SolidButtons", "Matrix", "0.1", false);

    properties()->create("Value", "Matrix", "0.1", QString("3")); ///> value property works depending on other settings

    PROPERTY_LISTENER("Value", &UIMatrix::propertyUpdate);
    PROPERTY_LISTENER("Rows", &UIMatrix::propertyMatrixSize);
    PROPERTY_LISTENER("Columns", &UIMatrix::propertyMatrixSize);
}

Q_SLOT void UIMatrix::propertyUpdate()
{
    update();
}

Q_SLOT void UIMatrix::propertyMatrixSize()
{
    if (matrixType() == mt_HRadio) {
        int count = properties()->get("Columns")->asInt();
        if (count < 1)
            count = 1;
        int bwidth = width() / count;
        if (bwidth < 20)
            bwidth = 20;

        objectData()->setObjectSize(os_FixedHeight, bwidth * count, bwidth);
    }

    if (matrixType() == mt_VRadio) {
        int count = properties()->get("Rows")->asInt();
        if (count < 1)
            count = 1;
        int bheight = height() / count;
        if (bheight < 20)
            bheight = 20;

        objectData()->setObjectSize(os_FixedWidth, bheight, bheight * count);
    }
}
// ------------------------------------------

void UIMatrix::drawCross(QPainter* p, QPoint matrixPos)
{
    QRect rect = rectFromMatrixPos(matrixPos);

    float lineWidth = 2; //+width()/20.;
    p->setPen(QPen(QColor(0, 192, 255), lineWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    p->drawLine(rect.x() + 2, rect.y() + 2, rect.x() + rect.width() - 2, rect.y() + rect.height() - 2);
    p->drawLine(rect.x() + rect.width() - 2, rect.y() + 2, rect.x() + 2, rect.y() + rect.height() - 2);
}

void UIMatrix::drawBox(QPainter* p, QPoint matrixPos)
{
    QRect boxRect = rectFromMatrixPos(matrixPos);
    boxRect.setX(boxRect.x() + 3);
    boxRect.setY(boxRect.y() + 3);
    boxRect.setWidth(boxRect.width() - 3);
    boxRect.setHeight(boxRect.height() - 3);

    QBrush oldBrush = p->brush();
    p->setBrush(QColor(0, 192, 255));
    p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    p->drawRect(boxRect);
    p->setBrush(oldBrush);
}

// ---- move to private

uiMatrixType UIMatrix::matrixType()
{
//spaghetti time
#define MTP(x) properties()->get(x)->asInt()

    if (MTP("Rows") == 1) {
        if (MTP("Columns") > 1) {

            if (MTP("Radio")) {
                return mt_HRadio;
            }
        }
    }
    if (MTP("Columns") == 1) {
        if (MTP("Rows") > 1) {

            if (MTP("Radio")) {
                return mt_VRadio;
            }
        }
    }

    if (MTP("Momentary")) {
        if (MTP("SolidButtons"))
            return mt_MatrixButtonMomentary;
        else
            return mt_MatrixToggleMomentary;
    } else {
        if (MTP("SolidButtons"))
            return mt_MatrixButton;
        else
            return mt_MatrixToggle;
    }
#undef MTP
}

int UIMatrix::radioSize()
{
    if (matrixType() == mt_HRadio) {
        return properties()->get("Columns")->asInt();
    }
    if (matrixType() == mt_VRadio) {
        return properties()->get("Rows")->asInt();
    }
    return -1;
}

QRect UIMatrix::rectFromMatrixPos(QPoint matrixPos)
{
    int btnCount = properties()->get("Columns")->asInt();
    if (btnCount < 1)
        btnCount = 1;
    float btnSize = width() / btnCount;
    if (btnSize < 20)
        btnSize = 20;
    QRect ret;

    ret.setX(matrixPos.x() * btnSize);
    ret.setY(matrixPos.y() * btnSize);
    ret.setWidth(btnSize);
    ret.setHeight(btnSize);

    return ret;
}

void UIMatrix::paintHRadio(QPainter* p)
{
    //check
    int value = QString(properties()->get("Value")->asQStringList().at(0)).toInt();
    int columns = properties()->get("Columns")->asInt();

    if (value < 0)
        value = 0;
    if (value > columns)
        value = columns;

    drawBox(p, QPoint(value, 0));
}

void UIMatrix::paintVRadio(QPainter* p)
{
    //check
    int value = QString(properties()->get("Value")->asQStringList().at(0)).toInt();
    int rows = properties()->get("Rows")->asInt();

    if (value < 0)
        value = 0;
    if (value > rows)
        value = rows;

    drawBox(p, QPoint(0, value));
}

void UIMatrix::paintToggleMatrix(QPainter* p) ///> draws buttons as ui.toggle
{
}

void UIMatrix::paintButtonMatrix(QPainter* p) ///> draws buttons as boxes
{
}

// ---- move to private

 void UIMatrix::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    if (isSelected()) {
        p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    } else {
        p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    }

    // ----------------------------------

    // draw button borders

    p->setPen(QPen(QColor(208, 208, 208), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

    for (int x = 0; x < properties()->get("Columns")->asInt(); x++) {
        float posX = rectFromMatrixPos(QPoint(x, 0)).x();
        p->drawLine(posX, 0, posX, height());
    }
    for (int y = 0; y < properties()->get("Rows")->asInt(); y++) {
        float posY = rectFromMatrixPos(QPoint(0, y)).y();
        p->drawLine(0, posY, width(), posY);
    }

    // draw buttons

    if (matrixType() == mt_HRadio)
        paintHRadio(p);
    if (matrixType() == mt_VRadio)
        paintVRadio(p);
    if ((matrixType() == mt_MatrixButton) || (matrixType() == mt_MatrixButtonMomentary))
        paintButtonMatrix(p);
    if ((matrixType() == mt_MatrixToggle) || (matrixType() == mt_MatrixToggleMomentary))
        paintButtonMatrix(p);

    p->drawRect(0, 0, width(), height());
}

void UIMatrix::resizeEvent()
{
    // TODO

    UIObject::resizeEvent();
}

// ---------------------------------------------------------------

void UIMatrix::mousePressEvent(QGraphicsSceneMouseEvent* ev)
{

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

    if (getEditMode() == em_Unlocked)
        emit selectBox(this, ev);

    dragOffset = ev->pos().toPoint();

    // main mouse action
    if (getEditMode() != em_Unlocked) {
        if (matrixType() == mt_HRadio) {
            int count = properties()->get("Columns")->asInt();
            if (count < 1)
                count = 1;
            int v = floor(ev->pos().x() / width() * count);

            PROPERTY_SET("Value", v);

            std::string val_str = "set " + std::to_string(v);


            // XPD-TODO
            // emit signalSendMessage(this->serverObject(), QString(val_str.c_str()));
            // emit signalSendMessage(this->serverObject(), QString("bang "));
        }

        if (matrixType() == mt_VRadio) {
            int count = properties()->get("Rows")->asInt();
            if (count < 1)
                count = 1;
            int v = floor(ev->pos().y() / height() * count);

            PROPERTY_SET("Value", v);

            std::string val_str = "set " + std::to_string(v);

            // XPD-TODO
            // emit signalSendMessage(this->serverObject(), QString(val_str.c_str()));
            // emit signalSendMessage(this->serverObject(), QString("bang "));
        }

        // TODO-PD_OBJECT
        //            if (!pdObject()) {
        //                qDebug("msg: bad pd object!");
        //            } else {
        //                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
        //            }

        if (serverObject()) {

            // XPD-TODO
            // emit signalSendMessage(this->serverObject(), QString("bang "));
        }
    }
}

void UIMatrix::mouseReleaseEvent(QGraphicsSceneMouseEvent*) {}

void UIMatrix:: mouseMoveEvent(QGraphicsSceneMouseEvent* event)
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

// ----------


void UIMatrix::updateUI(AtomList* msg)
{
    if ((matrixType() == mt_HRadio) || (matrixType() == mt_VRadio))
        if (msg->size() > 0) {
            if (msg->at(0).isFloat()) {
                int v = msg->at(0).asInt();
                if (v > (radioSize() - 1))
                    v = radioSize() - 1;

                PROPERTY_SET("Value", v);
            }
        }

    emit signalCallRepaint();
}

}
