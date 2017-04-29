// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef UISCRIPTCOMMON_H
#define UISCRIPTCOMMON_H

#include <QObject>

#include "UIScriptEditor.h"

#include <QFileDialog>

#include <QStringList>

namespace qtpd {

////
/// \brief Basic data model for scripteditor
/// \deprecated it's a string list now - probably should be removed
class UIScriptData {
public:
    QStringList inputList;
};

////
/// \brief Sort of view controller for UIScript/UISCriptBox
/// \deprecated TODO test that later
class UIScriptCommon : public QObject {
    Q_OBJECT

private:
    UIScriptData* _scriptData;

    QStringList getEditorData()
    {
        return _editor->textEdit()->document()->toPlainText().split(QRegExp("[\r\n]"), QString::SkipEmptyParts);
    }

    UIScriptEditor* _editor;

public:
    explicit UIScriptCommon(QObject* parent = 0);

    UIScriptData* scriptData() { return _scriptData; }

    void setEditor(UIScriptEditor* editor)
    {
        _editor = editor;

        connect(_editor, &UIScriptEditor::btnRunSignal, this, &UIScriptCommon::btnRun);
        connect(_editor, &UIScriptEditor::btnLoadSignal, this, &UIScriptCommon::btnLoad);
        connect(_editor, &UIScriptEditor::btnSaveSignal, this, &UIScriptCommon::btnSave);
        connect(_editor, &UIScriptEditor::btnClearSignal, this, &UIScriptCommon::btnClear);
    }
    UIScriptEditor* editor() { return _editor; }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        qDebug("script << pd message");
        qDebug() << (long)uiobj << msg.size();

        //temporary
        UIScriptCommon* x = (UIScriptCommon*)uiobj;

        QStringList list;
        for (size_t i = 0; i < msg.size(); i++) {
            list.push_back(msg.at(i).asString().c_str());
        }

        x->_scriptData->inputList = list;
        emit x->callRun();
    }
signals:
    void callRun();

public slots:

    void btnRun()
    {
        qDebug() << "btnRun";

        //this code is from PythonQt
        PythonQtObjectPtr context = _editor->textEdit()->context(); //PythonQt::self()->getMainModule();
        QString _stdOut = "";
        QString _stdErr = "";
        PythonQtObjectPtr p;
        PyObject* dict = NULL;
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
                cmp_post((std::string) "Python: " + _stdOut.toStdString());
            }
            if (_stdErr != "") {
                cmp_post((std::string) "Python error: " + _stdOut.toStdString());
            }
        }
    }

    void btnLoad()
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

    void btnSave()
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

    void btnClear()
    {
        // TODO set data; 'editor->update'
        _editor->textEdit()->clear();
    }
};
}

#endif // UISCRIPTCOMMON_H
