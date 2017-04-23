#ifndef UISCRIPTCOMMON_H
#define UISCRIPTCOMMON_H

#include <QObject>

#include "UIScriptEditor.h"

#include <QFileDialog>

////
/// \brief Sort of view controller for UIScript/UISCriptBox - test that later
///
class UIScriptCommon : public QObject
{
    Q_OBJECT

private:
    QStringList getEditorData()
    {
        return _editor->textEdit()->document()->toPlainText().split(QRegExp("[\r\n]"), QString::SkipEmptyParts);
    }

public:
    explicit UIScriptCommon(QObject *parent = 0);

    UIScriptEditor *_editor;

signals:

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
            WriteFile << _editor->textEdit()->document()->toPlainText();
            file.close();
        }
    }

    void btnClear()
    {
        _editor->textEdit()->clear();
    }
};

#endif // UISCRIPTCOMMON_H
