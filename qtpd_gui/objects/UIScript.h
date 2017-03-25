// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef cmo_script_H
#define cmo_script_H

#include <QPlainTextEdit>

#include "cm_object.h"
#include "cm_port.h"

#include "PythonQt.h"

#include <QFileDialog>

#include <QAbstractItemView>
#include <QCompleter>
#include <QScrollBar>
#include <QTextCursor>

//#include "cm_pdlink.h"

#include "python/wrappers/py_wrappers.h"

namespace qtpd {

////
/// \brief The editor for UIScript.
/// \details contains parts of PythonQt
///
class UIScriptEditor : public QPlainTextEdit {
    Q_OBJECT

private:
    QCompleter* _completer;

    PythonQtObjectPtr _context;

public:
    explicit UIScriptEditor(QPlainTextEdit* parent = 0);

    void setContext(PythonQtObjectPtr ctx) { _context = ctx; }
    PythonQtObjectPtr context() { return _context; }

private slots:
    //-----------------------------------------------------------------------------
    // The code below is from PythonQt ScriptingConsole example, see header for all details
    void insertCompletion(const QString& completion)
    {
        QTextCursor tc = textCursor();
        tc.movePosition(QTextCursor::Left, QTextCursor::KeepAnchor);
        if (tc.selectedText() == ".") {
            tc.insertText(QString(".") + completion);
        } else {
            tc = textCursor();
            tc.movePosition(QTextCursor::StartOfWord, QTextCursor::MoveAnchor);
            tc.movePosition(QTextCursor::EndOfWord, QTextCursor::KeepAnchor);
            tc.insertText(completion);
            setTextCursor(tc);
        }
    }

    //-----------------------------------------------------------------------------

    void handleTabCompletion()
    {
        QTextCursor textCursor = this->textCursor();
        int pos = textCursor.position();
        textCursor.setPosition(0);
        textCursor.movePosition(QTextCursor::End, QTextCursor::KeepAnchor);
        int startPos = textCursor.selectionStart();

        int offset = pos - startPos;
        QString text = textCursor.selectedText();

        QString textToComplete;
        int cur = offset;
        while (cur--) {
            QChar c = text.at(cur);
            if (c.isLetterOrNumber() || c == '.' || c == '_') {
                textToComplete.prepend(c);
            } else {
                break;
            }
        }

        QString lookup;
        QString compareText = textToComplete;
        int dot = compareText.lastIndexOf('.');
        if (dot != -1) {
            lookup = compareText.mid(0, dot);
            compareText = compareText.mid(dot + 1, offset);
        }
        if (!lookup.isEmpty() || !compareText.isEmpty()) {
            compareText = compareText.toLower();
            QStringList found;
            QStringList l = PythonQt::self()->introspection(_context, lookup, PythonQt::Anything);
            Q_FOREACH (QString n, l) {
                if (n.toLower().startsWith(compareText)) {
                    found << n;
                }
            }

            if (!found.isEmpty()) {
                _completer->setCompletionPrefix(compareText);
                _completer->setCompletionMode(QCompleter::PopupCompletion);
                _completer->setModel(new QStringListModel(found, _completer));
                _completer->setCaseSensitivity(Qt::CaseInsensitive);
                QTextCursor c = this->textCursor();
                c.movePosition(QTextCursor::StartOfWord);
                QRect cr = cursorRect(c);
                cr.setWidth(_completer->popup()->sizeHintForColumn(0)
                    + _completer->popup()->verticalScrollBar()->sizeHint().width());
                cr.translate(0, 8);
                _completer->complete(cr);
            } else {
                _completer->popup()->hide();
            }
        } else {
            _completer->popup()->hide();
        }
    }

    void keyPressEvent(QKeyEvent* event)
    {

        if (_completer && _completer->popup()->isVisible()) {
            // The following keys are forwarded by the completer to the widget
            switch (event->key()) {
            case Qt::Key_Return:
                if (!_completer->popup()->currentIndex().isValid()) {
                    insertCompletion(_completer->currentCompletion());
                    _completer->popup()->hide();
                    event->accept();
                }
                event->ignore();
                return;
                break;
            case Qt::Key_Enter:
            case Qt::Key_Escape:
            case Qt::Key_Tab:
            case Qt::Key_Backtab:

                event->ignore();
                return; // let the completer do default behavior
            default:
                break;
            }
        }

        // bool        eventHandled = false;
        QTextCursor textCursor = this->textCursor();

        //      int key = event->key();
        //      switch (key) {

        //      case Qt::Key_Left:

        //        // Moving the cursor left is limited to the position
        //        // of the command prompt.

        //        if (textCursor.position() <= commandPromptPosition()) {

        //          QApplication::beep();
        //          eventHandled = true;
        //        }
        //        break;

        //      case Qt::Key_Up:

        //        // Display the previous command in the history
        //        if (_historyPosition>0) {
        //          _historyPosition--;
        //          changeHistory();
        //        }

        //        eventHandled = true;
        //        break;

        //      case Qt::Key_Down:

        //        // Display the next command in the history
        //        if (_historyPosition+1<_history.count()) {
        //          _historyPosition++;
        //          changeHistory();
        //        }

        //        eventHandled = true;
        //        break;

        //      case Qt::Key_Return:

        //        executeLine(event->modifiers() & Qt::ShiftModifier);
        //        eventHandled = true;
        //        break;

        //      case Qt::Key_Backspace:

        //        if (textCursor.hasSelection()) {

        //          cut();
        //          eventHandled = true;

        //        } else {

        //          // Intercept backspace key event to check if
        //          // deleting a character is allowed. It is not
        //          // allowed, if the user wants to delete the
        //          // command prompt.

        //          if (textCursor.position() <= commandPromptPosition()) {

        //            QApplication::beep();
        //            eventHandled = true;
        //          }
        //        }
        //        break;

        //      case Qt::Key_Delete:

        //        cut();
        //        eventHandled = true;
        //        break;

        //      default:

        //        if (key >= Qt::Key_Space && key <= Qt::Key_division) {

        //          if (textCursor.hasSelection() && !verifySelectionBeforeDeletion()) {

        //            // The selection must not be deleted.
        //            eventHandled = true;

        //          } else {

        //            // The key is an input character, check if the cursor is
        //            // behind the last command prompt, else inserting the
        //            // character is not allowed.

        //            int commandPromptPosition = this->commandPromptPosition();
        //            if (textCursor.position() < commandPromptPosition) {

        //              textCursor.setPosition(commandPromptPosition);
        //              setTextCursor(textCursor);
        //            }
        //          }
        //        }
        //      }

        //        if (eventHandled) {

        //            _completer->popup()->hide();
        //            event->accept();

        //        } else
        {

            QPlainTextEdit::keyPressEvent(event);
            QString text = event->text();

            if (!text.isEmpty()) {
                handleTabCompletion();
            } else {
                _completer->popup()->hide();
            }
            //            eventHandled = true;
        }
        //
    }
};

//-------------------------------------------------------------------------------

////
/// \brief gui object: script editor box (ui.script)
///
class UIScript : public UIObject {
    Q_OBJECT

private:
    bool clicked_;

    UIScriptEditor* editor_;

    QStringList _inputList;

public:
    explicit UIScript(UIObject* parent = 0);

    static UIObject* createObject(std::string objectData, t_canvas* pdCanvas, UIWidget* parent = 0)
    {
        UIScript* b = new UIScript((UIObject*)parent);

        std::string data1 = b->properties()->extractFromPdFileString(objectData);
        //if (data1 != "")

        b->setObjectData("ui.script");

        //b->autoResize();

        // the zoo lol
        QString data = b->properties()->get("Script")->asQString().split("\\n ").join("\n");
        b->editor_->document()->setPlainText(data);

        // pd object
        std::string message = "ui.script";

        //temp
        t_object* new_obj = 0;
        if (!pdCanvas) {
            qDebug("bad pd canvas instance");
        } else {
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pdCanvas, message, pos.x(), pos.y());
        }

        if (new_obj) {
            qDebug("created toggle %s | ptr %lu\n", message.c_str(), (long)new_obj);
            b->setPdObject(new_obj);

            b->editor_->setContext(pyWrapper::inst().withCanvasPdObjectAndInput((UIObject*)parent, new_obj, &b->_inputList));

            b->addInlet();
            b->addOutlet();

        } else {
            qDebug("Error: no such object %s", message.c_str());
        }

        return (UIObject*)b;
    };

    void initProperties()
    {
        UIObject::initProperties();
        QStringList list; // = QString("#empty").split("-");    //lol

        this->properties()->create("Script", "Data", "0.1", list);
    };

    void paintEvent(QPaintEvent*)
    {
        QPainter p(this);

        if (this->getEditMode() == em_Unlocked) {
            if (this->isSelected()) {
                p.setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            } else if (this->clicked_) {
                p.setPen(QPen(QColor(0, 192, 255), 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            } else {
                p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
            }

            p.drawRect(0, 0, this->width(), this->height());
        }
    }

    void resizeEvent(QResizeEvent* event)
    {
        UIObject::resizeEvent(event);
        editor_->setFixedWidth(width() - 5);
        editor_->setFixedHeight(height() - 25);

        properties()->set("Size", size());
    }

    ///////////////////

    void mousePressEvent(QMouseEvent* ev)
    {

        emit selectBox(this);
        this->dragOffset = ev->pos();
    }

    void mouseReleaseEvent(QMouseEvent*)
    {
    }

    void mouseMoveEvent(QMouseEvent* event)
    {
        if (event->buttons() & Qt::LeftButton) {
            emit moveBox(this, event);
        }
        event->ignore();

        //todo move!
        if (this->getEditMode() != em_Unlocked) {
            this->setCursor(QCursor(Qt::PointingHandCursor));
        } else {
            this->setCursor(QCursor(Qt::ArrowCursor));
        }
    }

    ///////

    void setPdMessage(std::string message)
    {
        this->setObjectData(message);

        setFixedSize(300, 200);
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        qDebug("script << pd message");
        qDebug() << (long)uiobj << msg.size();

        UIScript* x = (UIScript*)uiobj;
        if (x) {
            //todo atomlist to qstringlist; atom as qstring
            QStringList list;
            for (int i = 0; i < msg.size(); i++) {
                list.push_back(msg.at(i).asString().c_str());
            }

            x->_inputList = list;
            emit x->callRun();
        }
    }

    QStringList getEditorData()
    {
        return editor_->document()->toPlainText().split(QRegExp("[\r\n]"), QString::SkipEmptyParts);
    }

    void setPdObject(void* obj)
    {
        UIObject::setPdObject(obj);
        connect(this, &UIScript::callRun, this, &UIScript::btnRun);
        cmp_connectUI((t_pd*)pdObject(), (void*)this, &UIScript::updateUI);

        //cmp_connectUI("ui.script", (void*)this, &UIScript::updateUI);

        qDebug() << "connect ui: uiobj " << (long)this << " pdobj " << (long)pdObject();
    }
signals:
    void callRun();

public slots:
    void btnRun()
    {
        qDebug() << "btnRun";

        //this code is from PythonQt

        PythonQtObjectPtr context = editor_->context(); //PythonQt::self()->getMainModule();
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

                //qDebug() << editor_->document()->toPlainText().toLatin1().data();
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

private slots:
    void editorChanged();

    void btnLoad()
    {
        QString fname = QFileDialog::getOpenFileName(0, QString("Open Python script"), QString("~/"), QString("*.py"), 0, 0);
        if (fname != "") {
            QFile file(fname);

            file.open(QFile::ReadOnly | QFile::Text);

            QTextStream ReadFile(&file);
            editor_->document()->setPlainText(ReadFile.readAll());
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
            WriteFile << editor_->document()->toPlainText();
            file.close();
        }
    }

    void btnClear()
    {
        editor_->clear();
    }
};
}
#endif // cmo_text_H
