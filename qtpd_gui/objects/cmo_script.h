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
             //p.drawPolygon(poly);
         }

//         QTextOption *op = new QTextOption;
//          op->setAlignment(Qt::AlignLeft);
//           p.setPen(QPen(QColor(0, 0, 0), 2, Qt::SolidLine, Qt::SquareCap, Qt::BevelJoin));

//            p.setFont(QFont(PREF_QSTRING("Font"),11,0,false));
//             p.drawText(2,3,this->width()-2,this->height()-3,0,this->objectData().c_str(),0);


    }

    void resizeEvent(QResizeEvent *event)
    {
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
        //this->selected_ = false;

        //if (!this->getEditMode())
        {
            this->clicked_ = false;
            this->repaint();
        }

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
        //        this->autoResize();

        //        QFont myFont(PREF_QSTRING("Font"), 11);
        //        QFontMetrics fm(myFont);
        //        QString text = QString(this->editor_->document()->toPlainText());
        //        int new_w = fm.width(text) + 20;
        //        new_w = (new_w<25) ? 25 : new_w;

        //        int new_h = fm.boundingRect(QRect(0,0,new_w,100), 0, text).height() + 7 ;

        //        new_h = (new_h<25) ? 25 : new_h;

        //        this->setFixedWidth(new_w);
        //        this->setFixedHeight(new_h);

        //        this->editor_->setFixedWidth(this->width()-1);
        //        this->editor_->setFixedHeight(this->height()-2);

        //        this->editor_->hide();

        setFixedSize(300,200);
    }

    static void updateUI(void* uiobj, ceammc::AtomList msg)
    {
        qDebug("update ui");
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

    //    void setPdObject(void *obj)
    //    {
    //        cm_object::setPdObject(obj);
    //        //cmp_connectUI((t_pd*)this->getPdObject(), (void*)this, &cmo_text::updateUI);
    //    }


    //    std::string asPdFileString()
    //    {return "ui.text "+ this->objectData();}

    void* pdObject()
    {
        return 0;
    }

//    bool eventFilter(QObject *watched, QEvent *event)
//    {
//        if (event->type() == QEvent::KeyPress) {

//            QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);

//            if  ( (keyEvent->key() == Qt::Key_Return) && (keyEvent->modifiers() == Qt::ShiftModifier) )
//            {
//                //this->editorDone();
//                return true;
//            }
//        }

//        return false;

//    }

    QStringList getEditorData()
    {
        return editor_->document()->toPlainText().split(QRegExp("[\r\n]"),QString::SkipEmptyParts);
    }

signals:

private slots:
//    void editorDone();
    void editorChanged();

    void btnRun(){
        //PythonQt

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

            //QTextStream ReadFile(&file);
            //editor_->setText(ReadFile.readAll());
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
