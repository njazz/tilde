#ifndef CM_OBJECTLOADER_H
#define CM_OBJECTLOADER_H

#include <vector>
#include <string>
#include <algorithm>

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

    cm_objectloader() {

        //built in
        names_.push_back("ui.msg");
        names_.push_back("ui.float");
        names_.push_back("ui.text");

        // load externals here

    }


public:
    cm_objectloader(cm_objectloader const&)        = delete;
    void operator=(cm_objectloader const&)  = delete;

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

};

#endif // CM_OBJECTLOADER_H
