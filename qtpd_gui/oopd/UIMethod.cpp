// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIMethod.h"

#include "CanvasView.h"

namespace qtpd {
UIMethod::UIMethod()
{
    _opInstance = 0;
    _opClass = 0;

    setHeight(20);
    deselect(); // = false;
    setErrorBox(false);
    //setSubpatchWindow(0);

    _objectDataModel.setObjectSize(os_FixedHeight, 40, 20);
}

UIObject* UIMethod::createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent)
{return 0;} /*

{
    //TODO fix all constructors
    //t_canvas* pd_Canvas;

    if (objectData == "")
        objectData = "method";

    UIMethod* b = new UIMethod(); //(UIObject*)parent);
    //b->setCanvas((void*)parent);

    //truncate "ui.obj". todo cleanup
    QStringList list = QString(objectData).split(" ");

    const char* obj_name = objectData.toStdString().c_str();
    QString data1 = b->properties()->extractFromPdFileString(obj_name); //test
    //const char* obj_name2 = data1.c_str();

    // fix size changes
    b->setObjectData(data1);
    b->autoResize();

    //std::string methodName;
    if (list.size() < 2) {
        // TODO
 //cmp_post("missing argument: method name");
        b->setErrorBox(true);
        return (UIObject*)b;
    } else {
        b->_methodName = ((QString)list.at(1)).toStdString();
    }

    t_object* new_obj = 0;
    int in_c = 0, out_c = 0;

    if (!pdCanvas) {
        qDebug("bad pd canvas instance");
        b->setErrorBox(true);
    } else {
        //temp pos = 0;
        QPoint pos = QPoint(0, 0);
        new_obj = cmp_create_object(pdCanvas, "pdmethod", pos.x(), pos.y());
    }

    if (new_obj) {
        in_c = cmp_get_inlet_count(new_obj);
        out_c = cmp_get_outlet_count(new_obj);

        //b->setPdObject(new_obj);

        cmp_connectUI((t_pd*)new_obj, (void*)b, &UIMethod::updateUI);

        b->setHelpName("method-help.pd");

    } else {
        qDebug("Error: no such object 'pdmethod'");
        b->setErrorBox(true);
        in_c = 1;
        out_c = 1;
    }

    b->addInlet();
    b->addOutlet();

    // OOPD

    // not very clean

    // TODO
    //t_canvas* cnv = ((CanvasView*)parent)->pdObject();
    t_canvas *cnv = 0;

    if (OOPD::inst()->canvasIsPatch(cnv)) {
        //fix that
        // TODO  //cmp_post("method in basic patch");
        //b->setErrorBox(true);
    }

    b->_opClass = OOPD::inst()->classByCanvas(cnv);
    b->_opInstance = OOPD::inst()->instanceByCanvas(cnv);

    qDebug() << "this canvas: " << (long)cnv;
    qDebug() << "class: " << (long)b->_opClass << "inst:" << (long)b->_opInstance;

    if (b->_opClass) {

        qDebug("method in class");

        b->_opClass->addMethod(b->_methodName, "");
    }

    if (b->_opInstance) {
        qDebug("method in instance");

        // TODO-PD_OBJECT
//        t_outlet* out1 = cmp_get_outlet((t_object*)b->pdObject(), 0);
//        if (out1)
//            b->_opInstance->addMethodOutlet(gensym(b->_methodName.c_str()), out1);
//        else
//            // TODO
            //cmp_post("method pd object outlet error");
    }

    connect(b, &UIMethod::updateUISignal, b, &UIMethod::updateUISlot);

    return (UIObject*)b;
};
*/
    }
