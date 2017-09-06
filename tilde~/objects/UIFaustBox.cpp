// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIFaustBox.h"

#include <QPushButton>

#include <QGraphicsProxyWidget>
#include <QPalette>

#include <QGraphicsScene>
#include <QGraphicsView>

#include "PropertyList.h"

#include "Preferences.h"

#include "ceammc_atomlist.h"

#include "ApplicationController.h"
#include "PatchWindowController.h"

namespace tilde {

int UIFaustBox::temporaryFileCounter;

UIFaustBox::UIFaustBox()
{

    deselect();
    _clicked = false;

    QFont font = QFont(PREF_QSTRING("Font"), 11, 0, false);

    _editor = new UITextEditor();

    connect(_editor, &UITextEditor::signalCompile, this, &UIFaustBox::slotCompile);
    connect(_editor, &UITextEditor::signalUpdate, this, &UIFaustBox::slotUpdate);

    // TODO move
    //    _scriptCommon = new UIScriptCommon();
    //    _scriptCommon->setEditor(_editor);

    initProperties();

    setBgColor(QColor(255, 240, 224));

    setSize(60, 20);

    resizeEvent();

    _editor->textEdit()->setPlainText("import(\"stdfaust.lib\");\nphasor(f)   = f/ma.SR : (+,1.0:fmod) ~ _ ;\nosc(f)      = phasor(f) * 6.28318530718 : sin;\nprocess     = osc(hslider(\"freq\", 440, 20, 20000, 1)) * hslider(\"level\", 0, 0, 1, 0.01);");

    _faustObjectName = "";
}

void UIFaustBox::editorChanged()
{
}

UIObject* UIFaustBox::createObj(QString data)
{
    UIFaustBox* ret = new UIFaustBox();

    ret->fromQString(data);

    return ret;
}

void UIFaustBox::initProperties()
{
    UIObject::initProperties();

    properties()->create("ScriptFile", "Data", "0.1", QString(""));
};

void UIFaustBox::paint(QPainter* p, const QStyleOptionGraphicsItem* option, QWidget*)
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

void UIFaustBox::objectPressEvent(QGraphicsSceneMouseEvent* event)
{
    if (getEditMode() != em_Unlocked) {
        _editor->show();
    }
}

// ----------------------

void UIFaustBox::setPdMessage(QString message)
{
    fromQString(message);

    setSize(300, 200);
}

void UIFaustBox::sync()
{
    UIObject::sync();



    //_editor->textEdit()->document()->setPlainText("");
    //_editor->textEdit()->setContext(pyWrapper::inst().newContextWithPatchControllerServerObjectAndList(this->parentController(), serverObject(), &_scriptCommon->scriptData()->inputList));
}

//void UIFaustBox::updateUI(AtomList* list)
//{

//    //_scriptCommon->scriptData()->inputList = UIScriptCommon::AtomListToStringList(*list);
//    //_scriptCommon->btnRun();
//}

void UIFaustBox::slotCompile()
{
    QString source = _editor->textEdit()->toPlainText();

    QString docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last() + "/tilde~";
    QString faustFolder = docFolder + "/FAUST/";
    QString dspFName = docFolder + "/FAUST/_tmp" + QString::number(UIFaustBox::temporaryFileCounter) + ".dsp";

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
    env.insert("PATH", env.value("PATH") + ":/usr/local/bin");
    env.insert("SCRIPT_DIR", faustFolder);
    qputenv("SCRIPT_DIR", faustFolder.toLocal8Bit());

    qDebug() << env.toStringList();

    process.setProcessEnvironment(env);
    process.start("/bin/bash", QStringList() << scriptName << dspFName); //"cd " + faustFolder + " && /bin/bash echo converting... &&
    process.waitForFinished(10000);

    if (process.exitCode() == 0) {
        removeXLets();

        //usleep(333);

        _faustObjectName = docFolder + "/FAUST/_tmp" + QString::number(UIFaustBox::temporaryFileCounter) + "~";
        _faustDiagramName = docFolder + "/FAUST/_tmp" + QString::number(UIFaustBox::temporaryFileCounter) + "-svg/process.svg";
        slotUpdate();
        UIFaustBox::temporaryFileCounter++;
    } else {
        QFile logFile(docFolder + "/FAUST/faust_log.txt") ;

        QTextStream textStream(&logFile);
        while (true) {
            QString line = QString(textStream.readLine());
            if (line.isNull())
                break;
            else
                ApplicationController::post("debug: " + line);
        }

        ApplicationController::post("error: FAUST: compilation error");
    }
}

void UIFaustBox::slotUpdate()
{
    QString docFolder = QStandardPaths::standardLocations(QStandardPaths::DocumentsLocation).last() + "/tilde~";
    QString objFName = _faustObjectName; //docFolder + "/FAUST/_tmp0001~";
    //parentController()->serverCanvas()->createObject(objFName.toStdString());

    //_parentController->createObject()
    qDebug() << "file:" << _faustObjectName.toStdString().c_str();
    // XPD-TODO
    ObjectId serverObject = parentController()->appController()->slotCreateObject(parentController()->serverCanvas(), objFName.toStdString().c_str());
    qDebug() << serverObject;

    setErrorBox(false);

    setServerObjectId(serverObject);

    sync();

    setInletsPos();
    setOutletsPos();

    _editor->updateDiagram(_faustDiagramName);
}
}
