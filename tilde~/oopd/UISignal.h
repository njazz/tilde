// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UI_SIGNAL_H
#define UI_SIGNAL_H

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "Port.h"

#include "UIObject.h"

#include "OOPDHeaders.h"

#include <QGraphicsView>

#include "Preferences.h"
#include "PropertyList.h"

#include "UIObjectData.h"

namespace tilde {

////
/// \brief gui object: oop signal box (pdsignal~)
///
class UISignal : public UIObject {

    Q_OBJECT

private:
    // for abstracions
    bool _isAbstraction;
    QString _abstractionPath;

    OPClass* _opClass;
    OPInstance* _opInstance;

    std::string _signalName;

    std::string _signalSendName;
    std::string _signalReceiveName;
    t_object* _pdsend_object;
    t_object* _pdreceive_object;

public:
    explicit UISignal(); //UIObject* parent = 0);
    //~UISignal();

    static UIObject* createObject(QString asQString, t_canvas* pdCanvas, QGraphicsView* parent = 0);

    ////
    /// \brief paint event
    ///
    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem*, QWidget*)
    {
        QBrush brush(bgColor());
        p->setBrush(brush);
        p->drawRect(boundingRect());
        p->setBrush(QBrush());

        //QPainter p(viewport());
        p->setRenderHint(QPainter::HighQualityAntialiasing, true);
        p->scale(scale(), scale());

        //remove this later
//        if (subpatchWindow()) {
//            p->setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
//            p->drawRect(0, 2, width(), height() - 4);
//        }

        QColor rectColor = (errorBox()) ? QColor(255, 0, 0) : properties()->get("BorderColor")->asQColor(); //QColor(128, 128, 128);
        p->setPen(QPen(rectColor, 1 + _isAbstraction, (errorBox()) ? Qt::DashLine : Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        p->drawRect(0, 0, width(), height());
        QTextOption* op = new QTextOption;
        op->setAlignment(Qt::AlignLeft);
        p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

        p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
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
    void mousePressEvent(QGraphicsSceneMouseEvent* ev)
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

        //open canvas for subpatch
//        if (getEditMode() != em_Unlocked) {
//            if (subpatchWindow()) {
//                subpatchWindow()->show();
//            }
//        }

        //abstraction opening. Fix
        //        if (getEditMode() != em_Unlocked) {
        //            if (_isAbstraction) {
        //                OpenFileProxy::openAbstraction(_abstractionPath);
        //            }
        //        }

        if ((getEditMode() == em_Unlocked) && isSelected()) {
            //            editor_->setText(QString(_objectDataModel.objectData()));
            //            editor_->show();

            emit signalEditObject(this);
            return;
        }

        emit selectBox(this, ev);
        dragOffset = ev->pos().toPoint();
    }

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*)
    {
        update();
    }

    ////
    /// \brief mouse move
    /// \param event
    ///
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();

        if ((getEditMode() != em_Unlocked)  ) {
            setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    void setPdMessage(QString message)
    {
        // XPD-TODO
        /*
        fromQString(message);
        autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objectData()->toQString())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setWidth(new_w);
        //editor_->setFixedWidth(width() - 5);

        //todo: del object and create new + patchcords

        //
        setInletsPos();
        setOutletsPos();
        */
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        // XPD-TODO
        /*
        UISignal* b = (UISignal*)uiobj;

        //qDebug() << "method out";

        if (b->_opInstance) {
            AtomList fullMsg(gensym(b->_signalName.c_str()));
            fullMsg.append(msg);
            b->_opInstance->multipleOutput(fullMsg);
        }

        emit b->updateUISignal();
        */
    }

signals:

    void mouseMoved();
    void rightClicked();

    void updateUISignal();

private slots:
    void updateUISlot()
    {
        update();
    }
};
}

#endif // CM_BOX_H
