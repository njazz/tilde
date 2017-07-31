// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_BANG_H
#define CMO_BANG_H

#include <QLineEdit>
#include <QTimer>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

namespace qtpd {

////
/// \brief gui object: message box (ui.msg)
///
class UIBang : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    QTimer* _timer;

    void timerStart();

public:
    explicit UIBang();

    static UIObject* createObj(QString data);

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);
    virtual void resizeEvent();

    // -------------------

    void objectPressEvent(QGraphicsSceneMouseEvent* ev);

    // -------------------------

    void updateUI(AtomList*);

signals:
    void setBangTimer(int msec);

    void signalBang();

private slots:
    void timerAction();

    void slotBang();
};
}

#endif // CMO_MSG_H
