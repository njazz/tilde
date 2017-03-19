// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECTLOADER_H
#define CM_OBJECTLOADER_H

#include <algorithm>
#include <map>
#include <string>
#include <vector>

//temporary
#include "cmo_box.h"
#include "cmo_float.h"
#include "cmo_msg.h"
#include "cmo_text.h"

#include "cmo_bang.h"
#include "cmo_toggle.h"

#include "cmo_script.h"

namespace qtpd {
typedef UIObject* (*cmObjectConstructor)(std::string objectData, t_canvas* pdCanvas, UIWidget* parent);

////
/// \brief prototype for ui externals handling. stub
///
class ObjectLoader {
public:
    static ObjectLoader& inst()
    {
        static ObjectLoader instance;
        return instance;
    }

private:
    std::vector<std::string> names_; //ui object names
    std::vector<std::string> pdNames_; //pd object names - for auto-completion

    std::map<std::string, cmObjectConstructor> objectConstructors_;

    ObjectLoader()
    {
    }

public:
    ObjectLoader(ObjectLoader const&) = delete;
    void operator=(ObjectLoader const&) = delete;

    void loadObjects();

    void addUIobject(std::string name, cmObjectConstructor constructor);

    std::vector<std::string> getUINames();

    std::vector<std::string> getPDNames();

    bool hasUI(std::string objName);

    // todo remove?
    cmObjectConstructor getConstructorFor(std::string objName);

    UIObject* createObject(std::string objName, std::string objectData, t_canvas* pdCanvas, UIWidget* parent);
};
}

#endif // CM_OBJECTLOADER_H
