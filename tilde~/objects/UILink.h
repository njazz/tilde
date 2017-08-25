// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_link_H
#define cmo_link_H

#include <QPlainTextEdit>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

#include "Preferences.h"

#include <QStyleOptionGraphicsItem>

#include "UIObjectData.h"

#include "ceammc_atomlist.h"

namespace tilde {

////
/// \brief gui object: comment box (ui.text)
class UILink : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    QString _objectText;

public:
    explicit UILink();

    static UIObject* createObj(QString data);

    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    // -------

    void initProperties();

    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent*);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent*);

    void objectPressEvent(QGraphicsSceneMouseEvent* ev);
    void objectReleaseEvent(QGraphicsSceneMouseEvent*);

    void autoResize();

    // -------

    void fromQString(QString objData);
    virtual void updateUI(t_cpd_list* msg);

    void* pdObject();

signals:
};
}
#endif // cmo_text_H
