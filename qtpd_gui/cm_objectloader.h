#ifndef CM_OBJECTLOADER_H
#define CM_OBJECTLOADER_H

#include <vector>
#include <string>
#include <algorithm>
#include <map>

//#include "cm_object.h"

//temporary
#include "cmo_box.h"
#include "cmo_msg.h"
#include "cmo_float.h"
#include "cmo_text.h"

typedef cm_object* (*cmObjectConstructor)(std::string objectData, cm_widget *parent);

////
/// \brief prototype for ui externals handling
///
class cm_objectloader
{
public:
    static cm_objectloader& inst()
    {
        static cm_objectloader    instance;
        return instance;
    }
private:
    std::vector<std::string> names_;    //ui object names
    std::vector<std::string> pdNames_;  //pd object names - for auto-completion

    std::map<std::string, cmObjectConstructor> objectConstructors_;

    cm_objectloader() {

    }


public:
    cm_objectloader(cm_objectloader const&) = delete;
    void operator=(cm_objectloader const&)  = delete;

    void loadObjects()
    {
        //temporary
        //this->addUIobject("ui.obj", &cmo_box::createObject);
        this->addUIobject("ui.msg", &cmo_msg::createObject);
        this->addUIobject("ui.float", &cmo_float::createObject);
        this->addUIobject("ui.text", &cmo_text::createObject);

        //compatibility
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

        return 0;

    }

    cm_object* createObject(std::string objName, std::string objectData, cm_widget *parent)
    {
        if (objName == "ui.obj")
        {
            objectData = objName + " " + objectData;

            return cmo_box::createObject(objectData, parent);
        }
        else
        {
            cmObjectConstructor cmc = this->getConstructorFor(objName);
            return cmc(objectData,parent);
        }
    }


};

#endif // CM_OBJECTLOADER_H
