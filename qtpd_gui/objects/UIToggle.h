// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_TOGGLE_H
#define CMO_TOGGLE_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

namespace qtpd {

////
/// \brief gui object: toggle (ui.toggle)
///
class UIToggle : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    bool _value;

public:
    explicit UIToggle();

    static UIObject* createObj(QString data);
    static UIObject* createObject(QString, t_canvas*, QGraphicsView* );

    void initProperties();

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);
    void resizeEvent();

    // ---------------------------------------------------------------

    void objectPressEvent(QGraphicsSceneMouseEvent* ev);

    // ---------------------------------------------------------------

    void setPdMessage(QString message);

    static void updateUI(void* uiobj, ceammc::AtomList msg);
    void updateUI(AtomList list);

};
}

#endif // CMO_MSG_H
