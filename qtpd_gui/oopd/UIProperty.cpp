// (c) 2017 Alex Nadzharov
// License: GPL3

#include "UIProperty.h"

#include "Canvas.h"

namespace qtpd {
UIProperty::UIProperty() //UIObject* parent)
//: UIObject(parent)
{

    setHeight(20);
    //setMouseTracking(true);

    deselect(); // = false;

    //    QPalette Pal(palette());
    //    Pal.setColor(QPalette::Background, QColor(240, 240, 240));
    //    setAutoFillBackground(true);
    //    setPalette(Pal);

    setErrorBox(false);

    setSubpatchWindow(0);

//    setMinimumBoxWidth(40);
//    setMinimumBoxHeight(20);

//    setObjectSizeMode(os_FixedHeight);

    _objectDataModel.setObjectSize(os_FixedHeight, 40,20);
}

UIObject* UIProperty::createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent)
{
    //TODO fix all constructors
    //t_canvas* pd_Canvas;

    if (objectData == "")
        objectData = "property";

    UIProperty* b = new UIProperty(); //(UIObject*)parent);
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
        cmp_post("missing argument: method name");
        b->setErrorBox(true);
        return (UIObject*)b;

    } else {
        b->_propertyName = ((QString)list.at(1)).toStdString();
    }

    t_object* new_obj = 0;
    int in_c = 0, out_c = 0;

    if (!pdCanvas) {
        qDebug("bad pd canvas instance");
        b->setErrorBox(true);
    } else {
        //temp pos = 0;
        QPoint pos = QPoint(0, 0);
        new_obj = cmp_create_object(pdCanvas, "pdproperty", pos.x(), pos.y());
    }

    if (new_obj) {
        in_c = cmp_get_inlet_count(new_obj);
        out_c = cmp_get_outlet_count(new_obj);

        b->setPdObject(new_obj);

        cmp_connectUI((t_pd*)new_obj, (void*)b, &UIProperty::updateUI);

        b->setHelpName("property-help.pd");

    } else {
        qDebug("Error: no such object 'pdproperty'");
        b->setErrorBox(true);
        in_c = 1;
        out_c = 1;
    }

    qDebug() << "inc outc" << in_c << out_c;

    for (int i = 0; i < in_c; i++)
        b->addInlet();
    for (int i = 0; i < out_c; i++)
        b->addOutlet();

    // OOPD

    t_canvas* cnv = ((Canvas*)parent)->pdObject();

    if (OOPD::inst()->canvasIsPatch(cnv)) {
        //fix that
        cmp_post("property in basic patch");
    }

    b->_opClass = OOPD::inst()->classByCanvas(cnv);
    b->_opInstance = OOPD::inst()->instanceByCanvas(cnv);

    qDebug() << "this canvas: " << (long)cnv;
    qDebug() << "class: " << (long)b->_opClass << "inst:" << (long)b->_opInstance;

    if (b->_opClass) {

        qDebug("property in class");

        b->_opClass->addProperty(b->_propertyName, "");
    }

    if (b->_opInstance) {
        qDebug("property in instance");

        t_outlet* out1 = cmp_get_outlet((t_object*)b->pdObject(), 1);
        t_outlet* out2 = cmp_get_outlet((t_object*)b->pdObject(), 2);
        if (out1 && out2) {

            b->_opInstance->addProperty(gensym(b->_propertyName.c_str()), out1, out2);
        } else
            cmp_post("property pd object outlet error");
    }

    connect(b, &UIProperty::updateUISignal, b, &UIProperty::updateUISlot);

    return (UIObject*)b;
};
}
