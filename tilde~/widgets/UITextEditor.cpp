// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UITextEditor.h"

#include "Preferences.h"

#include <QPushButton>

#include <QSvgRenderer>

namespace tilde {

UITextEditor::UITextEditor(QWidget* parent)
    : QWidget(parent)
{
    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    _textEdit = new QPlainTextEdit();
    _textEdit->setFont(font);
    _textEdit->setAttribute(Qt::WA_MacShowFocusRect, 0);
    _textEdit->setCursorWidth(2);
    _textEdit->setParent(this);

    setBaseSize(300, 200);

    QPalette Pal; //palette());
    Pal.setColor(QPalette::Background, QColor(224, 240, 255));
    Pal.setColor(QPalette::Base, QColor(255, 248, 240));
    _textEdit->setPalette(Pal);

    //buttons
    QPushButton* b1 = new QPushButton("Compile");
    b1->setParent(this);
    b1->setFont(font);
    b1->move(10, 1);
    b1->setFixedSize(80, 20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UITextEditor::slotCompileBtn);

    b1 = new QPushButton("Update");
    b1->setParent(this);
    b1->setFont(font);
    b1->move(110, 1);
    b1->setFixedSize(80, 20);
    b1->show();
    connect(b1, &QPushButton::clicked, this, &UITextEditor::slotUpdateBtn);

    QGraphicsScene* scene = new QGraphicsScene(0, 0, 200, 200);
    _svgView = new QGraphicsView();
    _svgView->setScene(scene);
    _svgView->setParent(this);
    _svgView->show();
    //    QSvgRenderer *renderer;
    //   QGraphicsSvgItem *item;
}

void UITextEditor::resizeEvent(QResizeEvent*)
{
    _textEdit->move(2, 22);
    _textEdit->setFixedSize(width() * .5 - 5, height() - 25);

    if (_svgView) {

        //QGraphicsScene* scene = new QGraphicsScene(0, 0, width() * .33 - 10, height() - 25);
        //_svgView->setScene(scene);

        _svgView->move(width() * .5 + 2, 22);
        _svgView->setFixedSize(width() * .5 - 10, height() - 25);
    }
}

QPlainTextEdit* UITextEditor::textEdit() { return _textEdit; }
void UITextEditor::setTextEdit(QPlainTextEdit* textEdit) { _textEdit = textEdit; }

void UITextEditor::slotCompileBtn()
{
    emit signalCompile();
}

void UITextEditor::slotUpdateBtn()
{
    emit signalUpdate();

    QString docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last() + "/tilde~";
    QString objFName = docFolder + "/FAUST/_tmp0001-svg/process.svg";

    _renderer = new QSvgRenderer(objFName);
    QGraphicsSvgItem* item = new QGraphicsSvgItem();

    item->setSharedRenderer(_renderer);
    //item->setElementId(QStringLiteral("process"));

    if (!_svgView->scene())
        _svgView->setScene(new QGraphicsScene(0, 0, width(), height()));
    else
        _svgView->scene()->clear();
    _svgView->scene()->addItem(item);
}
}
