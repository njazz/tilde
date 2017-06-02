#ifndef PDSERVERPROTOTYPE_H
#define PDSERVERPROTOTYPE_H

//#include "PdLink.h"

#include <vector>
#include <string>

namespace ceammc {
class AtomList;
}

using namespace std;
using namespace ceammc;

typedef vector<string> ServerPath;

class Observer {
public:
    virtual void update();
};

class PropertyObserver {
public:
    virtual void update();
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
    void addObserver(PropertyObserver *p);
    void removeObserver(PropertyObserver *p);
};

enum ServerObjectType { typeObject,
    typeCanvas,
    typeArray } ;

//class t_pd;

class ServerObject {
private:
    void* _pdObject;

    ServerObject* _parent;
    ServerObjectType _type;
    ServerProperties* _properties;

public:
    ServerObject();
    ServerObject(ServerObject* parent, string text);

    virtual ServerObject* parent();

    void message(const AtomList& list);

    virtual int inletCount();
    virtual int outletCount();

    virtual void registerObserver(Observer* o);
    virtual void deleteObserver(Observer* o);

    ServerObjectType type();
    void setType(ServerObjectType type);

    ServerProperties* properties();
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


class ServerCanvas : ServerObject {
private:
    void* _canvas;

    vector<ServerObject*> _objects;
    vector<ServerPatchcord*> _patchcords;
    ServerPath _path;

public:
    ServerCanvas();

    ServerObject* createObject(string name); // Object* || Canvas*
    void deleteObject(ServerObject* o);

    void* canvasObject();

    ServerCanvas* createEmptySubCanvas();

    ServerArray* createArray();
    void deleteArray(ServerArray* a);

    ServerPatchcord* connect(ServerObject src, int srcIdx, ServerObject dest, int destIdx); //?
    void disconnect(ServerPatchcord* p); //??

    vector<ServerObject*> getObjectList();
    vector<ServerPatchcord*> getConnectionList();
    virtual void registerObserver(Observer* o);
    virtual void deleteObserver(Observer* o);
    ServerPath path();
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

public:
    ServerInstance();

    ServerCanvas* createCanvas();
    void deleteCanvas();

    void dspOn();
    void dspOff();

    void registerObserver(Observer* o);
    void deleteObserver(Observer* o);

    ServerPath* path();

    vector<string*> listRegisteredObjects();

    void loadLibrary();

    void post(string text);
    void error(string text);
    void verbose(int level, string text);

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
    ServerInstance* createInstance();
};

class LocalServer : TheServer {
};

#endif // PDSERVERPROTOTYPE_H
