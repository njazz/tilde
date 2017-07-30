// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CM_AudioSettings_H
#define CM_AudioSettings_H

#include <QString>
#include <map>
#include <string.h>

#include "PropertyList.h"

#include <QDebug>

#include "Preferences.h"

#include "pdServer.hpp"

#define AUDIOSETTINGS_QSTRING(x) qtpd::AudioSettings::inst().getQString(x)
#define QTPD_AUDIOSETTINGS_INIT qtpd::AudioSettings::inst().init()
#define AUDIOSETTINGS_LISTENER(x, y) connect(get(x), &Property::changed, this, y)

//move
//#define QTPD_PREF_STR(x) AtomList(gensym(x))

namespace qtpd {

////
/// \brief app AudioSettings singleton
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


        // TODO
        create("AudioDriver", "Basic", QTPD_APP_VERSION, QString(ServerInstance::getAudioAPIs().c_str()).split(","));

        get("AudioDriver")->setType(ptEnum);

        create("AudioInput", "Basic", QTPD_APP_VERSION, QString(ServerInstance::getAudioInDevices().c_str()).split(","));
        get("AudioInput")->setType(ptEnum);
        create("AudioOutput", "Basic", QTPD_APP_VERSION, QString(ServerInstance::getAudioOutDevices().c_str()).split(","));
        get("AudioOutput")->setType(ptEnum);

        create("BufferSize", "Settings", QTPD_APP_VERSION, 256);
        get("BufferSize")->setType(ptInt);
        create("BlockSize", "Settings", QTPD_APP_VERSION, 64);
        get("BlockSize")->setType(ptInt);
        create("InputCount", "Settings", QTPD_APP_VERSION, 2);
        get("InputCount")->setType(ptInt);
        create("OutputCount", "Settings", QTPD_APP_VERSION, 2);
        get("OutputCount")->setType(ptInt);

        AUDIOSETTINGS_LISTENER("AudioDriver", &AudioSettings::slotSetAudioDriver);
        AUDIOSETTINGS_LISTENER("AudioInput", &AudioSettings::slotSetAudioInput);
        AUDIOSETTINGS_LISTENER("AudioOutput", &AudioSettings::slotSetAudioOutput);
    }

   private slots:
    void slotSetAudioDriver(){qDebug() << "audio driver";}
    void slotSetAudioInput(){}
    void slotSetAudioOutput(){}
};
}

#endif // CM_AudioSettings_H
