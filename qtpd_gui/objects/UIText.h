// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_text_H
#define cmo_text_H

#include <QPlainTextEdit>

#include "Port.h"
#include "UIObject.h"

#include <QGraphicsView>

#include "PropertyList.h"

#include <QStyleOptionGraphicsItem>

#include "Preferences.h"

namespace qtpd {

////
/// \brief gui object: comment box (ui.text)
///
class UIText : public UIObject {
    Q_OBJECT

private:
    bool _clicked;
    QPlainTextEdit* _editor;

    QStringList getEditorData();

public:
    explicit UIText();

    static UIObject* createObj(QString data);
    virtual void paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*);

    // ------------------

    void initProperties();

    // ------------------

    void objectPressEvent(QGraphicsSceneMouseEvent* ev);
    void autoResize();

    // ---------------------------

    virtual void fromQString(QString objData);

    bool eventFilter(QObject*, QEvent* event);

    virtual void sync();

signals:

private slots:
    void editorDone();
    void editorChanged();

    void textPropertyChanged();
    void colorPropertyChanged();

    virtual void propertyFontSize();

    void propertyAutoResize();
};
}
#endif // cmo_text_H
