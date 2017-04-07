// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_AudioSettings_H
#define CM_AudioSettings_H

#include <QString>
#include <map>
#include <string.h>

#include "PropertyList.h"

#include <QDebug>

#include "PdLink.h"

//#define cmp_font "Source Code Pro"

#define AUDIOSETTINGS_QSTRING(x) qtpd::AudioSettings::inst().getQString(x)
//#define PREF_INT(x) qtpd::AudioSettings::inst().getInt()

#define QTPD_AUDIOSETTINGS_INIT qtpd::AudioSettings::inst().init()

//move
//#define QTPD_PREF_STR(x) AtomList(gensym(x))

namespace qtpd {

////
/// \brief app AudioSettings singleton
///
class AudioSettings : public PropertyList // TODO
{
public:
    static AudioSettings& inst()
    {
        static AudioSettings instance;
        return instance;
    }

private:
    std::map<std::string, QString> _data;

    AudioSettings()
    {
    }

public:
    AudioSettings(AudioSettings const&) = delete;
    void operator=(AudioSettings const&) = delete;

    //temporary
    QString getQString(std::string key)
    {
        if (get(key))
            return get(key)->asQString();

        return "";
    }

    void init()
    {

        create("Driver", "Audio", QTPD_APP_VERSION, (std::string)"<portaudio>");
        create("Input", "Audio", QTPD_APP_VERSION, (std::string)"<input>");
        create("Output", "Audio", QTPD_APP_VERSION, (std::string)"<output>");

        create("BufferSize", "Settings", QTPD_APP_VERSION, 256);
        create("BlockSize", "Settings", QTPD_APP_VERSION, 64);
        create("Inputs", "Settings", QTPD_APP_VERSION, 2);
        create("Outputs", "Settings", QTPD_APP_VERSION, 2);
    }
};
}

//ideas:
// -compatibility level for saving files

#endif // CM_AudioSettings_H
