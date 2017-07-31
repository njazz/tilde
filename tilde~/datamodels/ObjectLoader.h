// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECTLOADER_H
#define CM_OBJECTLOADER_H

#include <algorithm>
#include <map>
#include <string>
#include <vector>

using namespace std;

class QString;
class QGraphicsView;

namespace qtpd {

class UIObject;

typedef UIObject* (*UIObjectConstructor)(QString objectData);

////
/// \brief prototype for ui externals handling
/// \deprecated stub
class ObjectLoader {
public:
    static ObjectLoader& inst()
    {
        static ObjectLoader instance;
        return instance;
    }

private:
    std::vector<std::string> _names; ///> ui object names
    std::vector<std::string> _pdNames; ///> pd object names - for auto-completion

    //std::map<std::string, cmObjectConstructor> _objectConstructors;
    std::map<std::string, UIObjectConstructor> _uiObjectConstructors;

    ObjectLoader()
    {
    }

public:
    ObjectLoader(ObjectLoader const&) = delete;
    void operator=(ObjectLoader const&) = delete;

    void loadObjects(); ///> hardcoded internal UIObjects are loaded here

    void addUIobject(string name, UIObjectConstructor constructor);

    vector<string> getUINames();
    vector<string> getPDNames();

    bool hasUI(string objName);

    UIObjectConstructor getUIConstructorFor(QString objName);

    UIObject* createUIObject(QString objectData);
};
}

#endif // CM_OBJECTLOADER_H
