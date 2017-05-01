#ifndef UISUBCANVAS_H
#define UISUBCANVAS_H

#include <QGraphicsView>

#include "CanvasData.h"
#include "UIItem.h"

namespace qtpd {
class UISubCanvas : public UIObject {
private:
    canvasData* _canvasData;
//    QGraphicsView _view;
//    QGraphicsProxyWidget _viewProxy;
//    QWidget _viewWidget;

    bool _isAbstraction;
    QString _abstractionPath;

public:
    explicit UISubCanvas();

    static UIObject* createObject(QString objectData, t_canvas* pd_Canvas, QGraphicsView* parent = 0)
    {
        //TODO fix all constructors

        qDebug() << "<< ui.box";

        UISubCanvas* b = new UISubCanvas(); //(UIObjectItem*)parent);

        b->setCanvas((void*)parent);

        //truncate "ui.obj". todo cleanup
        QStringList list = QString(objectData).split(" ");
        list.removeAt(0);
        QString list_s = list.join(" ");
        const char* obj_name = list_s.toStdString().c_str();
        QString data1 = b->properties()->extractFromPdFileString(obj_name); //test

        // todo cleanup
        const char* obj_name2 = data1.toStdString().c_str();

        // fix size changes
        b->setObjectData(data1);
        b->autoResize();

        //temp
        b->setSize(400,300);

        t_object* new_obj = 0;
        int in_c = 0, out_c = 0;

        if (!pd_Canvas) {
            qDebug("bad pd canvas instance");
            b->setErrorBox(true);
        } else {
            //temp pos = 0;
            QPoint pos = QPoint(0, 0);
            new_obj = cmp_create_object(pd_Canvas, (char*)obj_name2, pos.x(), pos.y());
        }

        if (new_obj) {
            in_c = cmp_get_inlet_count(new_obj);
            out_c = cmp_get_outlet_count(new_obj);

            qDebug("created object %s ins %i outs %i ptr %lu", obj_name, in_c, out_c, (long)new_obj);

            b->setPdObject(new_obj);

            b->_isAbstraction = cmp_is_abstraction(new_obj);
            //qDebug() << "*** is abstraction: " << b->_isAbstraction;

            // todo different help symbols
            b->setHelpName(list.at(0) + "-help.pd");

            if (b->_isAbstraction) {

                t_symbol* s = cmp_get_path((t_canvas*)new_obj);

                // todo
                QStringList l = QString(objectData).split(" ");
                QString pdName = l.at(1); //assuming there always is a name when abstraction is created

                // todo windows
                b->_abstractionPath = QString(s->s_name) + "/" + pdName + ".pd";

                //qDebug() << b->_abstractionPath;
            }

        } else {
            qDebug("Error: no such object %s", obj_name);
            b->setErrorBox(true);
            in_c = 1;
            out_c = 1;
        }

        for (int i = 0; i < in_c; i++)
            b->addInlet();
        for (int i = 0; i < out_c; i++)
            b->addOutlet();

        b->resizeEvent();

        return (UIObject*)b;
    };

    void setCanvasData(canvasData* data)
    {
        _canvasData = data;

        objectVec::iterator it;

        for (it = data->boxes()->begin(); it != data->boxes()->end(); ++it) {
            scene()->addItem(*it);
        }
    }

    void resizeEvent()
    {

    }


};
}
#endif // UISUBCANVAS_H
