#ifndef SERVERAPIPROTOTYPE_H
#define SERVERAPIPROTOTYPE_H

#include <vector>

using namespace std;

typedef vector<string> ServerPath;

class Observer {
public:
    virtual void update();
};

class ServerXLet {
public:
    enum type { XLetMessage,
        XLetSignal };
    int index;
};

class ServerOutlet : ServerXLet {
public:
};

class ServerInlet : ServerXLet {
public:
};

class ServerProperties {
    // ???
    // PROFIT
};

class AtomList;

class ServerObject {
public:
    virtual ServerObject* parent();
    void message(const AtomList& list);
    virtual int inletCount();
    virtual int outletCount();
    virtual void registerObserver(Observer* o);
    virtual void deleteObserver(Observer* o);
    enum type { Object_Object,
        Object_Canvas,
        Object_Array };
    ServerProperties* propertties;
};

class ServerArray : ServerObject {
public:
    int size;
    bool getData(float* dest, size_t n);
    virtual void registerObserver(Observer* o);
};

class ServerPatchcord {
public:
};

class ServerCanvas : ServerObject {
public:
    ServerObject* createObject(string name); // Object* || Canvas*
    void deleteObject(ServerObject* o);
    ServerCanvas* createEmptySubCanvas();
    ServerArray* createArray();
    void deleteArray(ServerArray* a);
    ServerPatchcord* connect(ServerObject src, int srcIdx, ServerObject dest, int destIdx); //?
    void disconnect(ServerPatchcord* p); //??
    vector<ServerObject*> getObjectList();
    vector<ServerPatchcord*> getConnectionList();
    virtual void registerObserver(Observer* o);
    virtual void deleteObserver(Observer* o);
    ServerPath* path();
};

class ServerAudioDevice {
public:
};
class ServerMIDIDevice {
public:
};

class ServerInstance // : Object ??
{
public:
    ServerCanvas* createCanvas();
    void deleteCanvas();
    void dspOn();
    void dspOff();
    void registerObserver(Observer* o); // print
    void deleteObserver(Observer* o);
    ServerPath* path();
    vector<ServerObject*> listRegisteredObjects();
    void loadLibrary();
    void post(string text);
    void error(string text);
    void verbose(int level, string text);
    ServerAudioDevice* audioDevice;
    ServerMIDIDevice* midiDevice;
};

class TheServer {
public:
    vector<ServerInstance*> instances;
};

class LocalServer : TheServer {
};

// TODO print

#endif // SERVERAPIPROTOTYPE_H
