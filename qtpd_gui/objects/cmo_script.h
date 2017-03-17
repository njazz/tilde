#ifndef cmo_script_H
#define cmo_script_H

#include <QPlainTextEdit>

#include "cm_object.h"
#include "cm_port.h"

#include "PythonQt.h"

#include <QFileDialog>

//#include "cm_pdlink.h"

namespace qtpd
{

////
/// \brief gui object: comment box (ui.text)
///
class UIScript : public UIObject
{
    Q_OBJECT

private:
    bool clicked_;

    QPlainTextEdit* editor_;

public:
    explicit UIScript(UIObject *parent = 0);

    static UIObject* createObject(std::string objectData, t_canvas* pdCanvas, UIWidget *parent=0)
    {
        UIScript* b = new UIScript((UIObject*)parent);

        std::string data1 = b->properties()->extractFromPdFileString(objectData);
        b->setObjectData(data1);

        b->autoResize();

        // the zoo lol
        QString data = b->properties()->get("Script")->asQString().split("\\n").join("\n");
        b->editor_->document()->setPlainText(data);

        return (UIObject*) b;
    };

    void initProperties()
    {
        UIObject::initProperties();
        QStringList list;// = QString("#empty").split("-");    //lol

        this->properties()->create("Script","Data","0.1",list);
    };

    void paintEvent(QPaintEvent *)
    {    QPainter p(this);

         if (this->getEditMode() == em_Unlocked){
             if (this->isSelected() )
             {
                 p.setPen(QPen(QColor(0, 192, 255), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
             }
             else
                 if (this->clicked_)
                 {
                     p.setPen(QPen(QColor(0, 192, 255), 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
                 }
                 else
                 {
                     p.setPen(QPen(QColor(128, 128, 128), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));
                 }

             p.drawRect(0,0,this->width(),this->height());

         }


    }

    void resizeEvent(QResizeEvent *event)
    {
        UIObject::resizeEvent(event);
        editor_->setFixedWidth(width()-5);
        editor_->setFixedHeight(height()-25);
    }

    ///////////////////

    void mousePressEvent(QMouseEvent *ev)
    {

        if ( (this->getEditMode()==em_Unlocked) && this->isSelected())
        {

            this->editor_->document()->setPlainText(QString(this->objectData().c_str()));
            this->editor_->show();
            this->editor_->setFocus();
        }

        emit selectBox(this);
        this->dragOffset = ev->pos();

        if (!(this->getEditMode()==em_Unlocked))
        {
            this->clicked_ = true;
            this->repaint();

            //todo timer
        }

    }

    void mouseReleaseEvent(QMouseEvent *)
    {
        this->clicked_ = false;
        this->repaint();


    }

    void mouseMoveEvent(QMouseEvent *event)
    {
        if(event->buttons() & Qt::LeftButton)
        {
            emit moveBox(this, event);
        }
        event->ignore();

        //todo move!
        if (this->getEditMode() != em_Unlocked)
        {
            this->setCursor(QCursor(Qt::PointingHandCursor));
        }
        else
        {
            this->setCursor(QCursor(Qt::ArrowCursor));
        }

    }


    ///////

    void setPdMessage(std::string message)
    {
        this->setObjectData(message);

        setFixedSize(300,200);
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        //qDebug("update ui");
        UIScript *x = (UIScript*)uiobj;

        std::string obj_data;
        for (int i=0; i<msg.size();i++)
        {
            obj_data += msg.at(i).asString() + " ";
        }

        x->setObjectData(obj_data);
        //x->autoResize();

        x->repaint();
    }

    void* pdObject()
    {
        //later add 'ui.script' pd object for communication
        return 0;
    }

    QStringList getEditorData()
    {
        return editor_->document()->toPlainText().split(QRegExp("[\r\n]"),QString::SkipEmptyParts);
    }

signals:

private slots:
    void editorChanged();

    void btnRun(){

        //this code is from PythonQt

        PythonQtObjectPtr _context = PythonQt::self()->getMainModule();
        QString _stdOut = "";
        QString _stdErr = "";
        PythonQtObjectPtr p;
        PyObject* dict = NULL;
        if (PyModule_Check(_context)) {
            dict = PyModule_GetDict(_context);
        } else if (PyDict_Check(_context)) {
            dict = _context;
        }


        QStringList list = getEditorData();

        // while (true)
        for (QStringList::iterator it = list.begin(); it!= list.end(); ++it)
        {
            QString line = *it;
            if (line.isNull())
                break;


            if (dict) {
                p.setNewRef(PyRun_String(line.toLatin1().data(), Py_single_input, dict, dict));
                //qDebug() << editor_->document()->toPlainText().toLatin1().data();
            }

            if (!p) {
                PythonQt::self()->handleError();
            }

            if (_stdOut!="")
            {

                cmp_post((std::string)"Python: "+ _stdOut.toStdString());
            }
            if (_stdErr!="")
            {
                cmp_post((std::string)"Python error: "+ _stdOut.toStdString());
            }


        }
    }

    void btnLoad()
    {
        QString fname = QFileDialog::getOpenFileName(0,QString("Open Python script"), QString("~/"), QString("*.py"), 0, 0);
        if (fname!="")
        {
            QFile file(fname);

            file.open(QFile::ReadOnly | QFile::Text);

            QTextStream ReadFile(&file);
            editor_->document()->setPlainText(ReadFile.readAll());
            file.close();
        }

    }

    void btnSave()
    {
        QString fname = QFileDialog::getSaveFileName(0,QString("Save Python script"), QString("~/"), QString("*.py"), 0, 0);
        if (fname!="")
        {
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
