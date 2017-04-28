// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_MATRIX_H
#define CMO_MATRIX_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include "PdLink.h"

#include <QGraphicsView>

namespace qtpd {

enum uiMatrixType {
    mt_HRadio,
    mt_VRadio,
    mt_MatrixToggle,
    mt_MatrixButton,
    mt_MatrixToggleMomentary,
    mt_MatrixButtonMomentary

};

////
/// \brief gui object: ui.matrix - substitute all objects with multiple buttons (hradio, vradio, ui.matrix)
///
class UIMatrix : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    bool _value;

public:
    explicit UIMatrix();

    static UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent = 0)
    {
        UIMatrix* b = new UIMatrix();
        b->setCanvas((void*)parent);

        QString data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData("ui.toggle");

        qDebug() << "obj data" << QString(data1);

        std::string message = "ui.matrix";

        //temp
        t_object* new_obj = 0;
        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
        } else {
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
        }

        if (new_obj) {
            qDebug("created ui.matrix %s | ptr %lu\n", message.c_str(), (long)new_obj);
            b->setPdObject(new_obj);
        } else {
            qDebug("Error: no such object %s", message.c_str());
        }

        b->addInlet();
        b->addOutlet();

        b->resizeEvent();

        return (UIObject*)b;
    };

    void initProperties()
    {
        UIObject::initProperties();

        properties()->create("Value", "Preset", "0.1", 0.);

        properties()->create("Rows", "Matrix", "0.1", 1);
        properties()->create("Columns", "Matrix", "0.1", 5);
        properties()->create("Radio", "Matrix", "0.1", true);
        properties()->create("Momentary", "Matrix", "0.1", false);
        properties()->create("SolidButtons", "Matrix", "0.1", false);

        properties()->create("Value", "Matrix", "0.1", QString("0")); ///> value property works depending on other settings
    }

    // ------------------------------------------

    void drawCross(QPainter* p, QPoint matrixPos)
    {
        QRect rect = rectFromMatrixPos(matrixPos);

        float lineWidth = 2; //+width()/20.;
        p->setPen(QPen(QColor(0, 192, 255), lineWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        p->drawLine(rect.x() + 2, rect.y() + 2, rect.x() + rect.width() - 2, rect.y() + rect.height() - 2);
        p->drawLine(rect.x() + rect.width() - 2, rect.y() + 2, rect.x() + 2, rect.y() + rect.height() - 2);
    }

    void drawBox(QPainter* p, QPoint matrixPos)
    {
        QRect rect = rectFromMatrixPos(matrixPos);
        rect.setX(rect.x() + 3);
        rect.setY(rect.y() + 3);
        rect.setWidth(rect.width() - 6);
        rect.setHeight(rect.height() - 6);

        p->setBrush(QColor(0, 192, 255));
        p->drawRect(rect);
    }

    // ---- move to private

    uiMatrixType matrixType()
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
#undef MTP(x)
    }

    QRect rectFromMatrixPos(QPoint matrixPos)
    {
        QRect ret;

        return ret;
    }

    void paintHRadio(QPainter* p)
    {
        //check
        int value = QString(properties()->get("Value")->asQStringList().at(0)).toInt();
        int columns = properties()->get("Columns")->asInt();

        if (value<0) value = 0;
        if (value>columns) value = columns;

        drawBox(p,QPoint(value,0));
    }

    void paintVRadio(QPainter* p)
    {
        //check
        int value = QString(properties()->get("Value")->asQStringList().at(0)).toInt();
        int rows = properties()->get("Rows")->asInt();

        if (value<0) value = 0;
        if (value>rows) value = rows;

        drawBox(p,QPoint(0,value));
    }

    void paintToggleMatrix(QPainter* p) ///> draws buttons as ui.toggle
    {
    }

    void paintButtonMatrix(QPainter* p) ///> draws buttons as boxes
    {
    }

    // ---- move to private

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
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

        // draw buttons

        if (matrixType() == mt_HRadio) paintHRadio(p);
        if (matrixType() == mt_VRadio) paintVRadio(p);
        if ((matrixType() == mt_MatrixButton) || (matrixType() == mt_MatrixButtonMomentary)) paintButtonMatrix(p);
        if ((matrixType() == mt_MatrixToggle) || (matrixType() == mt_MatrixToggleMomentary)) paintButtonMatrix(p);

        p->drawRect(0, 0, width(), height());
    }

    void resizeEvent()
    {

        setHeight(width());
        UIObject::resizeEvent();
    }

    // ---------------------------------------------------------------

    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
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

        if (getEditMode() != em_Unlocked) {

            if (!pdObject()) {
                qDebug("msg: bad pd object!");
            } else {
                cmp_sendstring((t_pd*)pdObject(), ((std::string) "bang").c_str());
            }
        }
    }

    void mouseReleaseEvent(QGraphicsSceneMouseEvent*) {}

    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
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

    ///////

    void setPdMessage(QString message)
    {
        setObjectData(message);
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        //qDebug("update ui");
        UIMatrix* x = (UIMatrix*)uiobj;

        if (msg.size() > 0) {
            if (msg.at(0).isFloat())
                x->_value = msg.at(0).asFloat() > 0;
        }

        emit x->callRepaint();
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);
        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UIMatrix::updateUI);
    }
};
}

#endif // CMO_MSG_H
