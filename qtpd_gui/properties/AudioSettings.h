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

#include "Preferences.h"

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
    QString getQString(QString key)
    {
        if (get(key))
            return get(key)->asQString();

        return "";
    }

    void init()
    {

        // TODO fix: these values are tcl {} lists
        // t_cmp_audio_info* info = cmp_get_audio_device_info();

        create("Driver", "Audio", QTPD_APP_VERSION, cmp_get_audio_apis());

        //create("Input", "Audio", QTPD_APP_VERSION, info->inputDeviceList);
        //create("Output", "Audio", QTPD_APP_VERSION, info->outputDeviceList);

        create("BufferSize", "Settings", QTPD_APP_VERSION, 256);
        create("BlockSize", "Settings", QTPD_APP_VERSION, 64);
        create("InputCount", "Settings", QTPD_APP_VERSION, 2);
        create("OutputCount", "Settings", QTPD_APP_VERSION, 2);
    }
};
}

//ideas:
// -compatibility level for saving files

#endif // CM_AudioSettings_H
