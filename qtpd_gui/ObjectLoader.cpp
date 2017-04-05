// (c) 2017 Alex Nadzharov
// License: GPL3

#include "ObjectLoader.h"

namespace qtpd {

void ObjectLoader::loadObjects()
{
    //temporary
    addUIobject("ui.obj", &UIBox::createObject);
    addUIobject("ui.msg", &UIMessage::createObject);
    addUIobject("ui.float", &UIFloat::createObject);
    addUIobject("ui.text", &UIText::createObject);

    addUIobject("ui.bang", &UIBang::createObject);
    addUIobject("ui.toggle", &UIToggle::createObject);

//    addUIobject("ui.script", &UIScript::createObject);

//    addUIobject("ui.array", &UIArray::createObject);

//    addUIobject("pdclass", &UIClass::createObject);
//    addUIobject("pdinstance", &UIInstance::createObject);
//    addUIobject("method", &UIMethod::createObject);
//    addUIobject("property", &UIProperty::createObject);

//    addUIobject("ui.dsp", &UIDSP::createObject);


}

void ObjectLoader::addUIobject(std::string name, cmObjectConstructor constructor)
{
    _names.push_back(name);
    _objectConstructors[name] = constructor;
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

UIObject* ObjectLoader::createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView* parent)
{

    QString objectName = "";
    if (objectData != "")
        objectName = objectData.split(" ").at(0);

    if (hasUI(objectName.toStdString())) {

        cmObjectConstructor cmc = getConstructorFor(objectName);

        //        if (cmc == getConstructorFor("ui.obj"))
        //            objectData = objName + " " + objectData;

        return cmc(objectData.toStdString(), pdCanvas, parent);
    } else {
        cmObjectConstructor cmc = getConstructorFor("ui.obj");
        objectData = "ui.obj " + objectData; //+ objectName + " "

        return cmc(objectData.toStdString(), pdCanvas, parent);
    }
}
}
