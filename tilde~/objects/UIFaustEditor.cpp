// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIFaustEditor.h"

#include <QPushButton>

#include <QGraphicsProxyWidget>
#include <QPalette>

#include <QGraphicsScene>
#include <QGraphicsView>

#include "PropertyList.h"

#include "Preferences.h"

#include "ceammc_atomlist.h"

namespace tilde {

UIFaustEditor::UIFaustEditor()
{

    deselect();
    _clicked = false;

    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    _editor = new UITextEditor();

    connect(_editor, &UITextEditor::signalCompile, this, &UIFaustEditor::slotCompile);

    // TODO move
    //    _scriptCommon = new UIScriptCommon();
    //    _scriptCommon->setEditor(_editor);

    initProperties();

    setBgColor(QColor(255, 240, 224));

    setSize(60, 20);

    resizeEvent();

    _editor->textEdit()->setPlainText("process = _,_;");
}

void UIFaustEditor::editorChanged()
{
}

UIObject* UIFaustEditor::createObj(QString data)
{
    UIFaustEditor* ret = new UIFaustEditor();

    ret->fromQString(data);

    return ret;
}

void UIFaustEditor::initProperties()
{
    UIObject::initProperties();

    properties()->create("ScriptFile", "Data", "0.1", QString(""));
};

void UIFaustEditor::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
{
    p->setClipRect(option->exposedRect);

    QBrush brush(bgColor());
    p->setBrush(brush);
    p->drawRect(boundingRect());
    p->setBrush(QBrush());

    if (getEditMode() == em_Unlocked) {
        if (isSelected()) {
            p->setPen(QPen(QColor(0, 192, 255), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        } else if (_clicked) {
            p->setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        } else {
            p->setPen(QPen(QColor(128, 128, 128), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
        }

        p->drawRect(0, 0, width(), height());
    }

    p->setPen(QPen(QColor(0, 0, 0), 1, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
    p->setFont(QFont(PREF_QSTRING("Font"), properties()->get("FontSize")->asFontSize(), 0, false));
    p->drawText(2, 3, boundingRect().width() - 2, boundingRect().height() - 3, 0, "faust " + properties()->get("ScriptFile")->asQString(), 0);
}

// ------------------------

void UIFaustEditor::objectPressEvent(QGraphicsSceneMouseEvent* event)
{
    if (getEditMode() != em_Unlocked) {
        _editor->show();
    }
}

// ----------------------

void UIFaustEditor::setPdMessage(QString message)
{
    fromQString(message);

    setSize(300, 200);
}

void UIFaustEditor::sync()
{
    UIObject::sync();

    //_editor->textEdit()->document()->setPlainText("");
    //_editor->textEdit()->setContext(pyWrapper::inst().newContextWithPatchControllerServerObjectAndList(this->parentController(), serverObject(), &_scriptCommon->scriptData()->inputList));
}

void UIFaustEditor::updateUI(AtomList* list)
{

    //_scriptCommon->scriptData()->inputList = UIScriptCommon::AtomListToStringList(*list);
    //_scriptCommon->btnRun();
}

void UIFaustEditor::slotCompile()
{
    QString source = _editor->textEdit()->toPlainText();



    QString docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last() + "/tilde~";
    QString faustFolder = docFolder + "/FAUST/";
    QString dspFName = docFolder + "/FAUST/_tmp0001.dsp";

    QFile file1(dspFName);
    file1.open(QIODevice::WriteOnly);
    QTextStream qout(&file1);

    QString scriptName = faustFolder + "tilde-faust.sh";

    QStringList sourceList = source.split("\n");
    for (int i = 0; i < sourceList.size(); i++) {
        qout << sourceList.at(i);
    }

    file1.close();

    //

    QProcess process;
    QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
    env.insert("PATH",env.value("PATH")+":/usr/local/bin");
    env.insert("SCRIPT_DIR",faustFolder);

    qDebug() << env.toStringList();

    process.setProcessEnvironment(env);
    process.startDetached("/bin/bash", QStringList()<<scriptName << dspFName); //"cd " + faustFolder + " && /bin/bash echo converting... &&

}
}

