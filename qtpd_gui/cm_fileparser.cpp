// (c) 2017 Alex Nadzharov
// License: GPL3

#include "cm_fileparser.h"

namespace qtpd {
PatchWindow* FileParser::pdParserPrevWindow = 0;
PatchWindow* FileParser::pdParserWindow = 0;
PatchWindow* FileParser::pdParserFirstWindow = 0;
std::string FileParser::pdParserFileName = "";
}
