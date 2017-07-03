// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_DSP_H
#define CMO_DSP_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>
#include <QStyleOptionGraphicsItem>

#include "Preferences.h"

namespace qtpd {

////
/// \brief gui object: dsp switch box (ui.dsp)
///
class UIDSP : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    bool _value;

    QGraphicsView* _widget;

public:
    explicit UIDSP();

    static UIObject* createObj(QString data);
    void objectPressEvent(QGraphicsSceneMouseEvent*);

    QGraphicsView* widget();
    void initProperties();

    // ---------------

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

};
}

#endif // CMO_MSG_H
