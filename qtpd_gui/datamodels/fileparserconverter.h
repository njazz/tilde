#ifndef FILEPARSERCONVERTER_H
#define FILEPARSERCONVERTER_H

class QString;

namespace qtpd {

////
/// \brief Escape/unescape functiond for FileParser moved here for easier testing
class FileParserConverter {
public:
    ////
    /// \brief unescapeString
    /// \param input
    /// \return
    static QString unescapeString(QString input);

    ////
    /// \brief escapeString
    /// \param input
    /// \return
    static QString escapeString(QString input);
};
}
#endif // FILEPARSERCONVERTER_H
