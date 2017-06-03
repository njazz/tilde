

#include "../API_prototype/serverAPIPrototype.h"

#include "PdLink.h"

//class AtomList;

using namespace std;

void Observer::update(){};

void PropertyObserver::update(){};

// -------------------------------

void ServerProperties::addObserver(PropertyObserver* p){};
void ServerProperties::removeObserver(PropertyObserver* p){};

// ---------------------------------------
ServerObject::ServerObject() {}

ServerObject::ServerObject(ServerObject* parent, string text)
{

    if (parent->type() == typeCanvas) {
        t_canvas* canvas = reinterpret_cast<t_canvas*>(reinterpret_cast<ServerCanvas*>(parent)->canvasObject());
        _pdObject = cmp_create_object(canvas, text, 0, 0);
    }

    setType(typeObject);
}

//void ServerObject::setParent(ServerObject* parent) { _parent = parent; };
ServerObject* ServerObject::parent() { return _parent; };

void ServerObject::message(const AtomList& list)
{
    string msg;

    if (_pdObject)
        cmp_sendstring(reinterpret_cast<t_pd*>(_pdObject), msg);
};

int ServerObject::inletCount()
{
    if (_pdObject)
        return cmp_get_inlet_count(reinterpret_cast<t_object*>(_pdObject));
    else
        return -1;
};
int ServerObject::outletCount()
{
    if (_pdObject)
        return cmp_get_outlet_count(reinterpret_cast<t_object*>(_pdObject));
    else
        return -1;
};

void ServerObject::registerObserver(Observer* o){};
void ServerObject::deleteObserver(Observer* o){};

ServerObjectType ServerObject::type() { return _type; };
void ServerObject::setType(ServerObjectType type) { _type = type; }

ServerProperties* ServerObject::properties() { return _properties; };

// ----------------------------------------
ServerArray::ServerArray()
{
}
int ServerArray::size()
{
}
void ServerArray::setSize(int size)
{
}

bool ServerArray::getData(float* dest, size_t n){};
void ServerArray::registerObserver(Observer* o){};

// ----------------------------------------
ServerCanvas::ServerCanvas()
{
    _canvas = cmp_newpatch();
    setType(typeCanvas);
}

ServerObject* ServerCanvas::createObject(string name)
{
    ServerCanvas* ret = new ServerCanvas();
    _objects.push_back(ret);
    return ret;
};

void ServerCanvas::deleteObject(ServerObject* o){
    // TODO
};

void* ServerCanvas::canvasObject()
{
    return _canvas;
}

ServerCanvas* ServerCanvas::createEmptySubCanvas(){};

ServerArray* ServerCanvas::createArray(){};
void ServerCanvas::deleteArray(ServerArray* a){};

ServerPatchcord* ServerCanvas::connect(ServerObject src, int srcIdx, ServerObject dest, int destIdx){}; //?
void ServerCanvas::disconnect(ServerPatchcord* p){}; //??

vector<ServerObject*> ServerCanvas::getObjectList()
{
    return _objects;
};
vector<ServerPatchcord*> ServerCanvas::getConnectionList()
{
    return _patchcords;
};

void ServerCanvas::registerObserver(Observer* o){};
void ServerCanvas::deleteObserver(Observer* o){};

ServerPath ServerCanvas::path()
{
    return _path;
};

// --------
class printHook {
private:
    static vector<ConsoleObserver*> _consoleObservers;

public:
    static void addObserver(ConsoleObserver* c) { _consoleObservers.push_back(c); };
    static void deleteObserver(ConsoleObserver* c){ /*todo*/ };

    static void hookFunction(const char* str)
    {
        vector<ConsoleObserver*>::iterator it;
        for (it = _consoleObservers.begin(); it != _consoleObservers.end(); ++it) {
            ConsoleObserver* c = *it;
            c->setText(str);
            c->update();
        }
    }
};

vector<ConsoleObserver*> printHook::_consoleObservers;

// ----------------------------------------
ServerInstance::ServerInstance()
{
    cmp_pdinit();
    cmp_setprinthook(&printHook::hookFunction);
}

ServerCanvas* ServerInstance::createCanvas()
{
    ServerCanvas* ret = new ServerCanvas();
    _canvases.push_back(ret);
    return ret;
};

void ServerInstance::deleteCanvas(){
    // TODO
};

void ServerInstance::dspOn() { cmp_switch_dsp(true); };
void ServerInstance::dspOff() { cmp_switch_dsp(false); };

void ServerInstance::registerObserver(Observer* o){};
void ServerInstance::deleteObserver(Observer* o){};

void ServerInstance::setConsoleObserver(ConsoleObserver* o)
{
    _consoleObserver = o;

    printHook::addObserver(o);
};

ServerPath* ServerInstance::path() { return _path; };

vector<string*> ServerInstance::listRegisteredObjects(){};

void ServerInstance::loadLibrary(){};

void ServerInstance::post(string text) { cmp_post(text); };
void ServerInstance::error(string text) { cmp_post(text); };
void ServerInstance::verbose(int level, string text) { cmp_post(text); };

ServerAudioDevice* ServerInstance::audioDevice() { return _audioDevice; };
ServerMIDIDevice* ServerInstance::midiDevice() { return _midiDevice; };

// ----------------------------------------

TheServer::TheServer() {}

vector<ServerInstance*> TheServer::instances() { return _instances; };

ServerInstance* TheServer::createInstance()
{
    ServerInstance* ret = new ServerInstance();
    _instances.push_back(ret);
    return ret;
}
