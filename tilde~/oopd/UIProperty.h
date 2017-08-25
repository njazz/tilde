// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UI_PROPERTY
#define UI_PROPERTY

#include <QLineEdit>
#include <QMainWindow>
#include <QtGui>

#include "Port.h"

#include "UIBox.h"
#include "UIObject.h"

//#include "cm_pdlink.h"

#include "OOPDHeaders.h"

#include <QGraphicsView>

#include "PatchWindow.h"
#include "PatchWindowController.h"

#include "Preferences.h"
#include "PropertyList.h"

#include "UIObjectData.h"

namespace tilde {

////
/// \brief gui object: oop property box (property)
///
class UIProperty : public UIBox {

    Q_OBJECT

private:
    // for abstracions
    bool _isAbstraction;
    QString _abstractionPath;

    OPClass* _opClass;
    OPInstance* _opInstance;

    std::string _propertyName;

public:
    explicit UIProperty(); //UIObject* parent = 0);
    //~UIProperty();

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

        p->setRenderHint(QPainter::HighQualityAntialiasing, true);
        p->scale(scale(), scale());

        //remove this later
        if (subpatchController()) {
            p->setPen(QPen(QColor(192, 192, 192), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            p->drawRect(0, 2, width(), height() - 4);
        }

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
        if (getEditMode() != em_Unlocked) {
            if (subpatchController()) {
                subpatchController()->mainWindow()->show();
            }
        }

        if ((getEditMode() == em_Unlocked) && isSelected()) {

            emit signalEditObject(this);
            return;
        }

        emit selectBox(this, ev);
        dragOffset = ev->pos().toPoint();
    }

    ////
    /// \brief mouse up
    ///
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*) {}

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

        if ((getEditMode() != em_Unlocked) && (subpatchController())) {
            setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    void setPdMessage(QString message)
    {
        //XPD-TODO
        /*
        fromQString(message);
        autoResize();

        QFont myFont(PREF_QSTRING("Font"), 11);
        QFontMetrics fm(myFont);
        int new_w = fm.width(QString(objectData()->toQString())) + 10;
        new_w = (new_w < 25) ? 25 : new_w;
        setWidth(new_w);
        //editor_->setFixedWidth(width() - 5);

        //
        setInletsPos();
        setOutletsPos();
*/
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        //XPD-TODO
        /*

        UIProperty* b = (UIProperty*)uiobj;

        //qDebug() << "method out";

        if (b->_opInstance) {
            if (msg.at(0).asSymbol() == gensym("bang")) {
                ///* TODO * / //cmp_post("bang!");

                AtomList _prop = b->_opInstance->getPdArgumentsProperty(gensym(b->_propertyName.c_str()));
                QStringList list1;
                for (size_t i = 0; i < _prop.size(); i++) {
                    list1.append(_prop.at(i).asString().c_str());
                }

                // TODO-PD_OBJECT
//                cmp_sendstring((t_pd*)b->pdObject(), (std::string) "__output " + list1.join(" ").toStdString());

            } else if (msg.at(0).asSymbol() == gensym("set")) {
                // TODO
                // /* TODO * / //cmp_post("set!");

                //AtomList msg2 = msg;
                //msg2.at(0) = gensym(b->_propertyName.c_str());
                b->_opInstance->setPdArgumentsProperty(gensym(b->_propertyName.c_str()), msg); //.subList(1,msg.size()-1));
                //b->_opInstance->callSetter(msg2);

            } else {
                AtomList fullMsg(gensym(b->_propertyName.c_str()));
                fullMsg.append(msg);
                b->_opInstance->multipleOutput(fullMsg);
            }
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
