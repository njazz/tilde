#ifndef FILEPARSERCONVERTER_H
#define FILEPARSERCONVERTER_H

class QString;

namespace tilde {

////
/// \brief Escape/unescape functiond for FileParser moved here for easier testing
class FileParserConverter {
public:

    static QString unescapeString(QString input);   ///> parse string from file
    static QString escapeString(QString input);     ///> parse string to file
};
}
#endif // FILEPARSERCONVERTER_H
