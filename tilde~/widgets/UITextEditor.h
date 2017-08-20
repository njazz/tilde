// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UITEXTEDITOR_H
#define UITEXTEDITOR_H

#include <QWidget>

#include <QAbstractItemView>
#include <QCompleter>
#include <QPlainTextEdit>
#include <QScrollBar>
#include <QTextCursor>

#include <QGraphicsSvgItem>
#include <QGraphicsView>

#include <QStringListModel>

namespace tilde {
////
/// \brief Stub for generic text editor
/// \deprecated TODO: merge / unify with uiscripteditor
/// \details test branch: FAUST code editor
class UITextEditor : public QWidget {
    Q_OBJECT

    QPlainTextEdit* _textEdit;

    QGraphicsView* _svgView;
    QSvgRenderer* _renderer;
    QGraphicsSvgItem* _item;

public:
    explicit UITextEditor(QWidget* parent = 0);

    void resizeEvent(QResizeEvent*);

    QPlainTextEdit* textEdit();
    void setTextEdit(QPlainTextEdit* textEdit);

    void enableStandalone();

signals:
    void signalCompile();
    void signalUpdate();
private slots:
    void slotCompileBtn();
    void slotUpdateBtn();
};
}

#endif // UITEXTEDITOR_H
