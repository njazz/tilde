#ifndef CM_OBJECTLOADER_H
#define CM_OBJECTLOADER_H

#include <vector>
#include <string>
#include <algorithm>
#include <map>


//temporary
#include "cmo_box.h"
#include "cmo_msg.h"
#include "cmo_float.h"
#include "cmo_text.h"

#include "cmo_bang.h"
#include "cmo_toggle.h"

#include "cmo_script.h"

namespace qtpd
{
typedef UIObject* (*cmObjectConstructor)(std::string objectData, t_canvas* pdCanvas, UIWidget *parent);

////
/// \brief prototype for ui externals handling. stub
///
class ObjectLoader
{
public:
    static ObjectLoader& inst()
    {
        static ObjectLoader    instance;
        return instance;
    }
private:
    std::vector<std::string> names_;    //ui object names
    std::vector<std::string> pdNames_;  //pd object names - for auto-completion

    std::map<std::string, cmObjectConstructor> objectConstructors_;

    ObjectLoader() {

    }


public:
    ObjectLoader(ObjectLoader const&) = delete;
    void operator=(ObjectLoader const&)  = delete;

    void loadObjects()
    {
        //temporary
        this->addUIobject("ui.obj", &UIBox::createObject);
        this->addUIobject("ui.msg", &UIMessage::createObject);
        this->addUIobject("ui.float", &UIFloat::createObject);
        this->addUIobject("ui.text", &UIText::createObject);

        this->addUIobject("ui.bang", &UIBang::createObject);
        this->addUIobject("ui.toggle", &UIToggle::createObject);

        this->addUIobject("ui.script", &UIScript::createObject);

        //TODO compatibility
        //this->addUIobject("msg", &cmo_msg::createObject);
        //this->addUIobject("floatatom", &cmo_msg::createObject);
        //this->addUIobject("symbolatom", &cmo_msg::createObject);
    }

    void addUIobject(std::string name, cmObjectConstructor constructor)
    {
        names_.push_back(name);
        objectConstructors_[name] = constructor;
    }

    std::vector<std::string> getUINames()
    {
        return this->names_;
    }

    std::vector<std::string> getPDNames()
    {
        return this->pdNames_;
    }

    bool hasUI(std::string objName)
    {
        return std::find(names_.begin(), names_.end(), objName) != names_.end();
    }

    // todo remove?
    cmObjectConstructor getConstructorFor(std::string objName)
    {
        if (this->hasUI(objName))
        {
            return objectConstructors_[objName];
        }

        return objectConstructors_["ui.obj"];

    }

    UIObject* createObject(std::string objName, std::string objectData, t_canvas* pdCanvas, UIWidget *parent)
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


};

}

#endif // CM_OBJECTLOADER_H
