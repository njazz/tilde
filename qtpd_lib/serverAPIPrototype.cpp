

#include "../API_prototype/serverAPIPrototype.h"

#include "../qtpd_gui/PdLink.h"

//class AtomList;

using namespace std;

void Observer::update(){};

void PropertyObserver::update(){};

// -------------------------------

void ServerProperties::addObserver(PropertyObserver* p){};
void ServerProperties::removeObserver(PropertyObserver* p){};

// ---------------------------------------
ServerObject::ServerObject()
{
    _parent = 0;
    _pdObject = 0;
    _type = typeObject;
    _properties = 0;
}

ServerObject::ServerObject(ServerObject* parent, string text)
{

    _parent = 0;
    _pdObject = 0;
    _type = typeObject;
    _properties = 0;

    if (parent->type() == typeCanvas) {
        t_canvas* canvas = static_cast<t_canvas*>(reinterpret_cast<ServerCanvas*>(parent)->canvasObject());
        _pdObject = cmp_create_object(canvas, text, 0, 0);
    }

    setType(typeObject);
}

//void ServerObject::setParent(ServerObject* parent) { _parent = parent; };
ServerObject* ServerObject::parent() { return _parent; };

void ServerObject::message(string str)
{
    string* msg = new string;
    *msg = str;

    cout << "msg " << msg << endl;

    if (_pdObject) {
        cout << "send-> " << this << " " << _pdObject << endl;
        cmp_sendstring(static_cast<t_pd*>(_pdObject), *msg);
    } else {
        cmp_post("internal pdObject error");
        cout << "pdobject error" << endl;
    }
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

void ServerObject::connectUI(void* uiObject, t_updateUI uiFunction)
{
    cmp_connectUI((t_pd*)_pdObject, uiObject, uiFunction);
};

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
    std::cout << "canvas ptr " << _canvas << std::endl;
    setType(typeCanvas);
}

ServerObject* ServerCanvas::createObject(string name)
{
    //ServerCanvas* ret = new ServerCanvas();

    ServerObject* ret = new ServerObject(this, name);
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

ServerPatchcord* ServerCanvas::patchcord(ServerObject* src, int srcIdx, ServerObject* dest, int destIdx)
{
    cmp_patchcord((t_object*)src->_pdObject, srcIdx, (t_object*)dest->_pdObject, destIdx);
};

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

void ServerCanvas::loadbang()
{
    if (_pdObject)
        cmp_loadbang((t_canvas*)_pdObject);
}

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
            if (c) {
                //cout << "print hook: " << str << endl;
                c->setText(str);
                c->update();
            }
        }
    }
};

vector<ConsoleObserver*> printHook::_consoleObservers;

// ----------------------------------------

ServerInstance::ServerInstance()
{
    cout << "######### new server instance" << endl;

    cmp_pdinit();
    cmp_setprinthook(&printHook::hookFunction);

    _consoleObserver = 0;
    _midiDevice = 0;
    _audioDevice = 0;
    _path = 0;
}

ServerCanvas* ServerInstance::createCanvas()
{
    ServerCanvas* ret = new ServerCanvas();
    ret->setParentInstance(this);
    _canvases.push_back(ret);
    return ret;
};

void ServerInstance::deleteCanvas(){
    // TODO
};

void ServerInstance::dspOn() { cmp_switch_dsp(true); };
void ServerInstance::dspOff() { cmp_switch_dsp(false); };
void ServerInstance::dspSwitch(bool value) { cmp_switch_dsp(value); };

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

TheServer::TheServer()
{
    createInstance();
}
ServerInstance* TheServer::firstInstance()
{
    return _instances[0];
}

vector<ServerInstance*> TheServer::instances() { return _instances; };


ServerInstance* TheServer::createInstance()
{
    ServerInstance* ret = new ServerInstance();
    _instances.push_back(ret);
    return ret;
}
