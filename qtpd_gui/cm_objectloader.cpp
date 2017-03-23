// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_objectloader.h"


namespace qtpd {

void ObjectLoader::loadObjects()
{
    //temporary
    this->addUIobject("ui.obj", &UIBox::createObject);
    this->addUIobject("ui.msg", &UIMessage::createObject);
    this->addUIobject("ui.float", &UIFloat::createObject);
    this->addUIobject("ui.text", &UIText::createObject);

    this->addUIobject("ui.bang", &UIBang::createObject);
    this->addUIobject("ui.toggle", &UIToggle::createObject);

    this->addUIobject("ui.script", &UIScript::createObject);

    this->addUIobject("ui.array", &UIArray::createObject);

    //TODO compatibility
    //this->addUIobject("msg", &cmo_msg::createObject);
    //this->addUIobject("floatatom", &cmo_msg::createObject);
    //this->addUIobject("symbolatom", &cmo_msg::createObject);
}

void ObjectLoader::addUIobject(std::string name, cmObjectConstructor constructor)
{
    names_.push_back(name);
    objectConstructors_[name] = constructor;
}

std::vector<std::string> ObjectLoader::getUINames()
{
    return this->names_;
}

std::vector<std::string> ObjectLoader::getPDNames()
{
    return this->pdNames_;
}

bool ObjectLoader::hasUI(std::string objName)
{
    return std::find(names_.begin(), names_.end(), objName) != names_.end();
}

// todo remove?
cmObjectConstructor ObjectLoader::getConstructorFor(std::string objName)
{
    if (this->hasUI(objName)) {
        return objectConstructors_[objName];
    }

    return objectConstructors_["ui.obj"];
}

UIObject* ObjectLoader::createObject(std::string objName, std::string objectData, t_canvas* pdCanvas, UIWidget* parent)
{
    //        if (objName == "ui.obj")
    //        {
    //            objectData = objName + " " + objectData;

    //            return UIBox::createObject(objectData, pdCanvas,  parent);
    //        }
    //        else
    {
        cmObjectConstructor cmc = this->getConstructorFor(objName);

        if (cmc == getConstructorFor("ui.obj"))
            objectData = objName + " " + objectData;

        return cmc(objectData, pdCanvas, parent);
    }
}




}
