#include "scriptrunner.h"

ScriptRunner::ScriptRunner()
{
    _context = pyWrapper::inst().newContext();
}
