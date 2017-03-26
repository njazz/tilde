// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_objectloader.h"

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

    addUIobject("ui.script", &UIScript::createObject);

    addUIobject("ui.array", &UIArray::createObject);
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
cmObjectConstructor ObjectLoader::getConstructorFor(std::string objName)
{
    if (hasUI(objName)) {
        return _objectConstructors[objName];
    }

    return _objectConstructors["ui.obj"];
}

UIObject* ObjectLoader::createObject(std::string objName, std::string objectData, t_canvas* pdCanvas, UIWidget* parent)
{

    cmObjectConstructor cmc = getConstructorFor(objName);

    if (cmc == getConstructorFor("ui.obj"))
        objectData = objName + " " + objectData;

    return cmc(objectData, pdCanvas, parent);
}
}
