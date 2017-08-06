// License: GPL3
//
//  OOPDClassBase.h
//
//
//  Created by Alex Nadzharov on 26/03/17.
//
//

#include "OOPDClassBase.h"

namespace oopd {

void OOPDClassBase::addMethod(string methodName)
{
     string referenceName = getFunctionName(methodName);
    _methodNames[methodName] = referenceName;
}

void OOPDClassBase::freeMethod(string methodName)
{
    _methodNames.erase(methodName);
}

void OOPDClassBase::addProperty(string propertyName)
{
    string referenceName = getFunctionName("set_"+propertyName);
    _propertySetterNames[propertyName] = referenceName;
    referenceName = getFunctionName("get_"+propertyName);
    _propertyGetterNames[propertyName] = referenceName;
}

void OOPDClassBase::freeProperty(string propertyName)
{
    _propertySetterNames.erase(propertyName);
     _propertyGetterNames.erase(propertyName);
}

void OOPDClassBase::addSignal(string signalName)
{
    string referenceName = getFunctionName("signal_"+signalName);
    _signalNames[signalName] = referenceName;
}

void OOPDClassBase::freeSignal(string signalName)
{
    _signalNames.erase(signalName);
}

// -------------------

stringstream OOPDClassBase::getPropertyList()
{
    stringstream ret;

    for (map<string, string>::iterator it = _propertySetterNames.begin(); it != _propertySetterNames.end(); ++it) {
        ret << (it->first);
    }

    return ret;
}

stringstream OOPDClassBase::getMethodList()
{
    stringstream ret;

    for (map<string, string>::iterator it = _methodNames.begin(); it != _methodNames.end(); ++it) {
        ret << (it->first);
    }

    return ret;
}

stringstream OOPDClassBase::getSignalList()
{
    stringstream ret;

    for (map<string, string>::iterator it = _signalNames.begin(); it != _signalNames.end(); ++it) {
        ret << (it->first);
    }

    return ret;
}

// --------------------

map<string, string> OOPDClassBase::getMethodNames()
{
    return _methodNames;
}

map<string, string> OOPDClassBase::getPropertySetterNames()
{
    return _propertySetterNames;
}

map<string, string> OOPDClassBase::getPropertyGetterNames()
{
    return _propertyGetterNames;
}

map<string, string> OOPDClassBase::getSignalNames()
{
    return _signalNames;
}

// ---------------------
bool OOPDClassBase::hasProperty(string propertyName)
{
    return _propertySetterNames.find(propertyName) != _propertySetterNames.end();
}

bool OOPDClassBase::hasMethod(string methodName)
{
    return _methodNames.find(methodName) != _methodNames.end();
}

bool OOPDClassBase::hasSignal(string signalName)
{
    return _signalNames.find(signalName) != _signalNames.end();
}

// ----------
//void OOPDClassBase::setPropertyNames(map<string, string> pNames)
//{
//    _propertyNames = pNames;
//}
}
