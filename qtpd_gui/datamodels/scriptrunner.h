#ifndef SCRIPTRUNNER_H
#define SCRIPTRUNNER_H

#include "PythonQt.h"
#include "python/wrappers/py_wrappers.h"

class ScriptRunner      ///> minimal class to run python scripts (from menu)
{
    PythonQtObjectPtr _context;
public:
    ScriptRunner() ;

    void runScriptFile(QString fName) {
        const QString f =  QString(fName);
        _context.evalFile(f);
    };
};

#endif // SCRIPTRUNNER_H
