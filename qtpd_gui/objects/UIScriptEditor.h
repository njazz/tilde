#ifndef UISCRIPTEDITOR_H
#define UISCRIPTEDITOR_H


#include "PythonQt.h"

#include <QPlainTextEdit>
#include <QAbstractItemView>
#include <QCompleter>
#include <QScrollBar>
#include <QTextCursor>

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

        //            int commandPromptPosition = commandPromptPosition();
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
}

#endif // UISCRIPTEDITOR_H
