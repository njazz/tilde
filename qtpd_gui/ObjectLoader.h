// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_OBJECTLOADER_H
#define CM_OBJECTLOADER_H

#include <algorithm>
#include <map>
#include <string>
#include <vector>

//temporary
#include "UIBox.h"
#include "UIFloat.h"
#include "UIMessage.h"
#include "UIText.h"

#include "UIBang.h"
#include "UIToggle.h"

//#include "UIArray.h"

//#include "UIScript.h"

//#include "oopd/UIClass.h"
//#include "oopd/UIInstance.h"
//#include "oopd/UIMethod.h"
//#include "oopd/UIProperty.h"

//#include "UIDSP.h"

namespace qtpd {

////
/// \brief 'constructor' method for each ui object derived from UIObject
/// \details todo: proper way for constructors in UI* objects
///
typedef UIObject* (*cmObjectConstructor)(std::string objectData, t_canvas* pdCanvas, QGraphicsView* parent);

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
    std::vector<std::string> _names; ///> ui object names
    std::vector<std::string> _pdNames; ///> pd object names - for auto-completion

    std::map<std::string, cmObjectConstructor> _objectConstructors;

    ObjectLoader()
    {
    }

public:
    ObjectLoader(ObjectLoader const&) = delete;
    void operator=(ObjectLoader const&) = delete;

    ////
    /// \brief hardcoded internal UIObjects are loaded here
    ///
    void loadObjects();

    void addUIobject(std::string name, cmObjectConstructor constructor);

    std::vector<std::string> getUINames();

    std::vector<std::string> getPDNames();

    bool hasUI(std::string objName);

    // todo remove?
    cmObjectConstructor getConstructorFor(QString objName);

    UIObject* createObject(QString objectData, t_canvas* pdCanvas, QGraphicsView *parent);
};
}

#endif // CM_OBJECTLOADER_H
