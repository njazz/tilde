// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CMO_TOGGLE_H
#define CMO_TOGGLE_H

#include <qlineedit.h>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

namespace tilde {

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

    void initProperties();

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);
    void resizeEvent();

    // ---------------------------------------------------------------

    void objectPressEvent(QGraphicsSceneMouseEvent* ev);

    // ---------------------------------------------------------------

    void setPdMessage(QString message);

    void updateUI(t_cpd_list* list);
};
}

#endif // CMO_MSG_H
