#ifndef PDSERVERPROTOTYPE_H
#define PDSERVERPROTOTYPE_H

#include <string>
#include <vector>

namespace ceammc {
class AtomList;
}

using namespace std;
using namespace ceammc;

typedef void (*t_updateUI)(void* uiobj, AtomList msg);

typedef vector<string> ServerPath;

class Observer {
public:
    virtual void update();
};

class PropertyObserver {
public:
    virtual void update();
};

class ConsoleObserver : public Observer {
private:
    string _text;

public:
    void setText(string text) { _text = text; };
    string text() { return _text; };
};

typedef enum { XLetMessage,
    XLetSignal } XLetType;

class ServerXLet {
public:
    XLetType type;
    int index;
};

class ServerOutlet : ServerXLet {
public:
};

class ServerInlet : ServerXLet {
public:
};

// -------------------------------

class ServerProperties {
    vector<PropertyObserver*> _observers;

public:
    void addObserver(PropertyObserver* p);
    void removeObserver(PropertyObserver* p);
};

enum ServerObjectType { typeObject,
    typeCanvas,
    typeArray };

//class t_pd;

class ServerObject {
private:
    ServerObject* _parent;
    ServerObjectType _type;
    ServerProperties* _properties;

    bool _errorBox;

public:
    // temporary
    void* _pdObject;

    bool errorBox(){return _errorBox;}

    ServerObject();

    explicit ServerObject(ServerObject* parent, string text);

    virtual ServerObject* parent();

    //void message(const AtomList& list);
    void message(string str);

    virtual int inletCount();
    virtual int outletCount();

    virtual void registerObserver(Observer* o);
    virtual void deleteObserver(Observer* o);

    ServerObjectType type();
    void setType(ServerObjectType type);

    ServerProperties* properties();

    //TEMPORARY
    void connectUI(void* uiObject, t_updateUI uiFunction);
};

class ServerArray : ServerObject {
    int _size;

public:
    ServerArray();

    int size();
    void setSize(int size);

    bool getData(float* dest, size_t n);
    virtual void registerObserver(Observer* o);
};

class ServerPatchcord {
public:
};

// ----------------------------------------

class ServerInstance;

class ServerCanvas : ServerObject {
private:
    void* _canvas;

    vector<ServerObject*> _objects;
    vector<ServerPatchcord*> _patchcords;
    ServerPath _path;

    ServerInstance* _parentInstance;

public:
    ServerCanvas();

    void setParentInstance(ServerInstance* p) { _parentInstance = p; }
    ServerInstance* parentInstance() { return _parentInstance; }

    ServerObject* createObject(string name); // Object* || Canvas*
    void deleteObject(ServerObject* o);

    void* canvasObject();

    ServerCanvas* createEmptySubCanvas();

    ServerArray* createArray();
    void deleteArray(ServerArray* a);

    ServerPatchcord* patchcord(ServerObject* src, int srcIdx, ServerObject* dest, int destIdx); //?
    void disconnect(ServerPatchcord* p); //??

    vector<ServerObject*> getObjectList();
    vector<ServerPatchcord*> getConnectionList();
    virtual void registerObserver(Observer* o);
    virtual void deleteObserver(Observer* o);
    ServerPath path();

    void loadbang();
};

class ServerAudioDevice {
public:
};
class ServerMIDIDevice {
public:
};

// ----------------------------------------

class ServerInstance // : Object ??
{
private:
    vector<ServerCanvas*> _canvases;
    vector<Observer*> _observers;
    ServerPath* _path;
    ServerAudioDevice* _audioDevice;
    ServerMIDIDevice* _midiDevice;
    ConsoleObserver* _consoleObserver;

public:
    ServerInstance();

    ServerCanvas* createCanvas();
    void deleteCanvas();

    void dspOn();
    void dspOff();
    void dspSwitch(bool value);

    void registerObserver(Observer* o);
    void deleteObserver(Observer* o);

    void setConsoleObserver(ConsoleObserver* o);

    ServerPath* path();

    vector<string*> listRegisteredObjects();

    void loadLibrary();

    static void post(string text);
    static void error(string text);
    static void verbose(int level, string text);

    ServerAudioDevice* audioDevice();
    ServerMIDIDevice* midiDevice();
};

// ----------------------------------------

class TheServer {
private:
    vector<ServerInstance*> _instances;

public:
    TheServer();

    vector<ServerInstance*> instances();
    ServerInstance* firstInstance();

    ServerInstance* createInstance();
};

class LocalServer : public TheServer {
};

#endif // PDSERVERPROTOTYPE_H
