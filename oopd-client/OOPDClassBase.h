// License: GPL3
//
//  OOPDClassBase.h
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#ifndef OOPDCLASSBASE_h
#define OOPDCLASSBASE_h

#include <map>
#include <sstream>
#include <vector>

using namespace std;

class ServerCanvas;

namespace tilde {

class PatchWindow;
class PatchWindowController;

}

using namespace tilde;

namespace oopd {
/// \brief base data structure for class and instance: name, canvas, symbol
class OOPDClassBase {
private:
    map<string, string> _methodNames;
    map<string, string> _propertySetterNames;
    map<string, string> _propertyGetterNames;
    map<string, string> _signalNames;

    string getFunctionName(string methodName)
    {
        stringstream r;
        r << (long)canvas;
        string ret = "_" + r.str() + "_" + methodName;
        return ret;
    }

public:
    string className;
    ServerCanvas* canvas;
    PatchWindowController* patchWindow;

    // -------------------
    void addMethod(string methodName);
    void freeMethod(string methodName);

    void addProperty(string propertyName);
    void freeProperty(string propertyName);

    void addSignal(string signalName);
    void freeSignal(string signalName);
    // -------------------
    stringstream getPropertyList();
    stringstream getMethodList();
    stringstream getSignalList();
    // --------------------
    map<string, string> getMethodNames();
    map<string, string> getPropertySetterNames();
    map<string, string> getPropertyGetterNames();
    map<string, string> getSignalNames();
    // ---------------------
    bool hasProperty(string propertyName);
    bool hasMethod(string methodName);
    bool hasSignal(string signalName);
    // ----------copying
    void setMethodNames(map<string, string> mNames);
    void setGetterNames(map<string, string> gNames);
    void setSetterNames(map<string, string> sNames);
    void setSignalNames(map<string, string> sigNames);

};
}

#endif /* OOPD_h */
