// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ObjectLoader.h"

namespace qtpd {

void ObjectLoader::loadObjects()
{
    //temporary
    addUIobject("ui.obj", &UIBox::createObject, &UIBox::createObj);
    addUIobject("ui.msg", &UIMessage::createObject, &UIMessage::createObj);
    addUIobject("ui.float", &UIFloat::createObject, &UIFloat::createObj);
    addUIobject("ui.text", &UIText::createObject, &UIText::createObj);

    addUIobject("ui.bang", &UIBang::createObject, &UIBang::createObj);
    addUIobject("ui.toggle", &UIToggle::createObject, &UIToggle::createObj);

    addUIobject("ui.slider", &UISlider::createObject, &UISlider::createObj);
    addUIobject("ui.matrix", &UIMatrix::createObject, &UIMatrix::createObj);

    addUIobject("ui.link", &UILink::createObject, &UILink::createObj);

    #ifdef WITH_PYTHON
    addUIobject("ui.script", &UIScript::createObject, &UIScript::createObj);
    addUIobject("ui.scriptbox", &UIScriptBox::createObject, &UIScriptBox::createObj);
    addUIobject("py", &UIScriptBox::createObject, &UIScriptBox::createObj);
    #endif

    addUIobject("ui.array", &UIArray::createObject, &UIArray::createObj);

    /*
    addUIobject("pdclass", &UIClass::createObject, &UIClass::createObj);
    addUIobject("pdinstance", &UIInstance::createObject, &UIInstance::createObj);
    addUIobject("method", &UIMethod::createObject, &UIMethod::createObj);
    addUIobject("property", &UIProperty::createObject, &UIProperty::createObj);
    addUIobject("pdsignal~", &UISignal::createObject, &UISignal::createObj);
    */

    addUIobject("ui.dsp", &UIDSP::createObject, &UIDSP::createObj);

    addUIobject("pds", &UISubCanvas::createObject, &UISubCanvas::createObj);


    // ---------------------------------------------


}

void ObjectLoader::addUIobject(std::string name, cmObjectConstructor constructor, UIObjectConstructor constructor2)
{
    _names.push_back(name);
    _objectConstructors[name] = constructor;
    _uiObjectConstructors[name] = constructor2;
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
cmObjectConstructor ObjectLoader::getConstructorFor(QString objName)
{
    // extra
    if (hasUI(objName.toStdString())) {
        return _objectConstructors[objName.toStdString()];
    }

    // now this is dummy
    return _objectConstructors["ui.obj"];
}

UIObjectConstructor ObjectLoader::getUIConstructorFor(QString objName)
{
    // extra
    if (hasUI(objName.toStdString())) {
        return _uiObjectConstructors[objName.toStdString()];
    }

    // now this is dummy
    return _uiObjectConstructors["ui.obj"];
}

UIObject* ObjectLoader::createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent)
{

    QString objectName = "";
    if (objectData != "")
        objectName = objectData.split(" ").at(0);

    if (hasUI(objectName.toStdString())) {

        cmObjectConstructor cmc = getConstructorFor(objectName);

        //        if (cmc == getConstructorFor("ui.obj"))
        //            objectData = objName + " " + objectData;

        return cmc(objectData, pdCanvas, parent);
    } else {
        cmObjectConstructor cmc = getConstructorFor("ui.obj");
        objectData = "ui.obj " + objectData; //+ objectName + " "

        return cmc(objectData, pdCanvas, parent);
    }
}


UIObject* ObjectLoader::createUIObject(QString objectData)//, ServerCanvas *canvas, PatchWindowController *controller)
{
    QString objectName = "";
    if (objectData != "")
    {
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
