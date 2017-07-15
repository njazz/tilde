// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIScriptCommon.h"

#include "pdServer.hpp"

#include "ceammc_atomlist.h"

namespace qtpd {

UIScriptCommon::UIScriptCommon(QObject* parent)
    : QObject(parent)
{

    _scriptData = new UIScriptData();

    connect(this, &UIScriptCommon::callRun, this, &UIScriptCommon::btnRun);


}

QStringList UIScriptCommon::getEditorData()
{
    return _editor->textEdit()->document()->toPlainText().split(QRegExp("[\r\n]"), QString::SkipEmptyParts);
}

UIScriptData* UIScriptCommon::scriptData() { return _scriptData; }

void UIScriptCommon::setEditor(UIScriptEditor* editor)
{
    _editor = editor;

    connect(_editor, &UIScriptEditor::btnRunSignal, this, &UIScriptCommon::btnRun);
    connect(_editor, &UIScriptEditor::btnLoadSignal, this, &UIScriptCommon::btnLoad);
    connect(_editor, &UIScriptEditor::btnSaveSignal, this, &UIScriptCommon::btnSave);
    connect(_editor, &UIScriptEditor::btnClearSignal, this, &UIScriptCommon::btnClear);
}

UIScriptEditor* UIScriptCommon::editor() { return _editor; }

// TODO
//    static void updateUI(void* uiobj, ceammc::AtomList msg)
//    {
//        qDebug("script << pd message");
//        qDebug() << (long)uiobj << msg.size();

//        //temporary
//        UIScriptCommon* x = (UIScriptCommon*)uiobj;

//        QStringList list;
//        for (size_t i = 0; i < msg.size(); i++) {
//            list.push_back(msg.at(i).asString().c_str());
//        }

//        x->_scriptData->inputList = list;
//        emit x->callRun();
//    }

void UIScriptCommon::btnRun()
{
    qDebug() << "btnRun";

    if (!_editor) {
        ServerInstance::post("UIScript editor error!");
        return;
    }
    //this code is from PythonQt
    PythonQtObjectPtr context = _editor->textEdit()->context(); //PythonQt::self()->getMainModule();
    QString _stdOut = "";
    QString _stdErr = "";
    PythonQtObjectPtr p;
    PyObject* dict = NULL;

    if (!_editor->textEdit()->context()) {
        ServerInstance::post("Bad Python context!");
        return;
    }

    if (PyModule_Check(context)) {
        dict = PyModule_GetDict(context);
    } else if (PyDict_Check(context)) {
        dict = context;
    }

    QStringList list = getEditorData();

    QString line = list.join("\r\n"); //*it;

    if (!line.isNull()) {

        if (dict) {
            context.evalScript(line);

            qDebug() << "line: " << line;
        }

        if (!p) {
            PythonQt::self()->handleError();
        }

        if (_stdOut != "") {
            // TODO
            //cmp_post((std::string) "Python: " + _stdOut.toStdString());
        }
        if (_stdErr != "") {
            // TODO
            //cmp_post((std::string) "Python error: " + _stdOut.toStdString());
        }
    }
}

void UIScriptCommon::btnLoad()
{
    QString fname = QFileDialog::getOpenFileName(0, QString("Open Python script"), QString("~/"), QString("*.py"), 0, 0);
    if (fname != "") {
        QFile file(fname);

        file.open(QFile::ReadOnly | QFile::Text);

        QTextStream ReadFile(&file);
        // TODO set data; 'editor->update'
        _editor->textEdit()->document()->setPlainText(ReadFile.readAll());
        file.close();
    }
}

void UIScriptCommon::btnSave()
{
    QString fname = QFileDialog::getSaveFileName(0, QString("Save Python script"), QString("~/"), QString("*.py"), 0, 0);
    if (fname != "") {
        QFile file(fname);

        file.open(QFile::WriteOnly | QFile::Text);

        QTextStream WriteFile(&file);
        // TODO get data
        WriteFile << _editor->textEdit()->document()->toPlainText();
        file.close();
    }
}

void UIScriptCommon::btnClear()
{
    // TODO set data; 'editor->update'
    _editor->textEdit()->clear();
}

QStringList UIScriptCommon::AtomListToStringList(AtomList list)
{
    QStringList ret;

    for (int i = 0; i < list.size(); i++) {
        ret.append(QString(list.at(i).asString().c_str()));
    }

    return ret;
}


}
