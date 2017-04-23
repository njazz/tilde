// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UISignal.h"

#include "Canvas.h"

namespace qtpd {
UISignal::UISignal() //UIObject* parent)
//: UIObject(parent)
{

    setHeight(20);
    deselect(); // = false;

    //setErrorBox(false);

    setSubpatchWindow(0);

    _objectDataModel.setObjectSize(os_FixedHeight, 40, 20);
}

UIObject* UISignal::createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent)
{
    //TODO fix all constructors
    //t_canvas* pd_Canvas;

    if (objectData == "")
        objectData = "pdsignal~";

    UISignal* b = new UISignal(); //(UIObject*)parent);
    b->setCanvas((void*)parent);

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
        cmp_post("missing argument: signal name");
        b->setErrorBox(true);
        return (UIObject*)b;
    } else {
        b->_signalName = ((QString)list.at(1)).toStdString();
    }

    t_object* new_obj = 0;
    int in_c = 0, out_c = 0;

    b->setPdObject(0);
    b->setHelpName("pdsignal~-help.pd");

    b->addInlet(1);
    b->addOutlet(1);

    // OOPD

    // not very clean
    t_canvas* cnv = ((Canvas*)parent)->pdObject();

    if (OOPD::inst()->canvasIsPatch(cnv)) {
        cmp_post("method in basic patch");

        QString cnvName = QString::number((long)cnv);
        b->_signalSendName = "s" + cnvName.toStdString() + b->_signalName;
        b->_signalReceiveName = "r" + cnvName.toStdString()+ b->_signalName;
    }
    else
    {
        b->_signalSendName = "s_error"+ b->_signalName;
        b->_signalReceiveName = "r_error"+ b->_signalName;

    }

    b->_opClass = OOPD::inst()->classByCanvas(cnv);
    b->_opInstance = OOPD::inst()->instanceByCanvas(cnv);

    qDebug() << "this canvas: " << (long)cnv;
    qDebug() << "class: " << (long)b->_opClass << "inst:" << (long)b->_opInstance;

    if (b->_opClass) {

        qDebug("method in class");

        b->_opClass->addSignal(b->_signalName, "");
    }

    if (b->_opInstance) {
        qDebug("method in instance");

        //        t_outlet* out1 = cmp_get_outlet((t_object*)b->pdObject(), 0);
        //        if (out1)
        //            b->_opInstance->addMethodOutlet(gensym(b->_signalName.c_str()), out1);
        //        else
        //            cmp_post("method pd object outlet error");
    }

    if (!pdCanvas) {
        qDebug("bad pd canvas instance");
        b->setErrorBox(true);
    } else {

        b->_pdsend_object = cmp_create_object(pdCanvas, "send~ " + b->_signalSendName, 0, 0);
        b->_pdreceive_object = cmp_create_object(pdCanvas, "send~ " + b->_signalReceiveName, 0, 0);
    }

    connect(b, &UISignal::updateUISignal, b, &UISignal::updateUISlot);

    return (UIObject*)b;
};
}
