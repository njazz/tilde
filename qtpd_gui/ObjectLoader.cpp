// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ObjectLoader.h"


#include "UIBox.h"
#include "UIFloat.h"
#include "UIMessage.h"
#include "UIText.h"
#include "UISubpatch.h"
#include "UIBang.h"
#include "UIToggle.h"
#include "UISlider.h"
#include "UIMatrix.h"
#include "UISubCanvas.h"
#include "UILink.h"
#include "UIArray.h"


#ifdef WITH_PYTHON
#include "UIScript.h"
#include "UIScriptBox.h"
#endif

#include "oopd/UIClass.h"
#include "oopd/UIInstance.h"
#include "oopd/UIMethod.h"
#include "oopd/UIProperty.h"
#include "oopd/UISignal.h"

#include "UIDSP.h"


namespace qtpd {

void ObjectLoader::loadObjects()
{
    //temporary
    addUIobject("ui.obj", &UIBox::createObj);
    addUIobject("ui.msg", &UIMessage::createObj);
    addUIobject("ui.float", &UIFloat::createObj);
    addUIobject("ui.text", &UIText::createObj);

    addUIobject("ui.bang", &UIBang::createObj);
    addUIobject("ui.toggle", &UIToggle::createObj);

    addUIobject("ui.slider", &UISlider::createObj);
    addUIobject("ui.matrix", &UIMatrix::createObj);

    addUIobject("ui.link", &UILink::createObj);

#ifdef WITH_PYTHON
    addUIobject("ui.script", &UIScript::createObj);
    addUIobject("ui.scriptbox", &UIScriptBox::createObj);
    addUIobject("py", &UIScriptBox::createObj);
#endif

    addUIobject("ui.array", &UIArray::createObj);

    /*
    addUIobject("pdclass", &UIClass::createObject, &UIClass::createObj);
    addUIobject("pdinstance", &UIInstance::createObject, &UIInstance::createObj);
    addUIobject("method", &UIMethod::createObject, &UIMethod::createObj);
    addUIobject("property", &UIProperty::createObject, &UIProperty::createObj);
    addUIobject("pdsignal~", &UISignal::createObject, &UISignal::createObj);
    */

    addUIobject("ui.dsp", &UIDSP::createObj);

    addUIobject("pds", &UISubCanvas::createObj);

    // ---------------------------------------------
}

void ObjectLoader::addUIobject(std::string name, UIObjectConstructor constructor)
{
    _names.push_back(name);
    //_objectConstructors[name] = constructor;
    _uiObjectConstructors[name] = constructor;
}

std::vector<std::string> ObjectLoader::getUINames()
{
    return _names;
}

std::vector<std::string> ObjectLoader::getPDNames()
{
    return _pdNames;
}

bool ObjectLoader::hasUI(std::string objName)
{
    return std::find(_names.begin(), _names.end(), objName) != _names.end();
}

// todo remove?
//cmObjectConstructor ObjectLoader::getConstructorFor(QString objName)
//{
//    // extra
//    if (hasUI(objName.toStdString())) {
//        return _objectConstructors[objName.toStdString()];
//    }

//    // now this is dummy
//    return _objectConstructors["ui.obj"];
//}

UIObjectConstructor ObjectLoader::getUIConstructorFor(QString objName)
{
    // extra
    if (hasUI(objName.toStdString())) {
        return _uiObjectConstructors[objName.toStdString()];
    } else
        return _uiObjectConstructors["ui.obj"];
}

//UIObject* ObjectLoader::createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent)
//{

//    QString objectName = "";
//    if (objectData != "")
//        objectName = objectData.split(" ").at(0);

//    if (hasUI(objectName.toStdString())) {

//        //cmObjectConstructor cmc = getConstructorFor(objectName);

//        //        if (cmc == getConstructorFor("ui.obj"))
//        //            objectData = objName + " " + objectData;

//        return cmc(objectData, pdCanvas, parent);
//    } else {
//        cmObjectConstructor cmc = getConstructorFor("ui.obj");
//        objectData = "ui.obj " + objectData; //+ objectName + " "

//        return cmc(objectData, pdCanvas, parent);
//    }
//}

UIObject* ObjectLoader::createUIObject(QString objectData) //, ServerCanvas *canvas, PatchWindowController *controller)
{
    QString objectName = "";
    if (objectData != "") {
        objectData = objectData.split("@").at(0);

        objectName = objectData.split(" ").at(0);
    }

    if (hasUI(objectName.toStdString())) {

        UIObjectConstructor cmc = getUIConstructorFor(objectName);

        return cmc(objectData);
    } else {
        UIObjectConstructor cmc = getUIConstructorFor("ui.obj");
        objectData = "ui.obj " + objectData;

        return cmc(objectData);
    }
}
}
