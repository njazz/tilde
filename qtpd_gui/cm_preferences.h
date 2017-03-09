#ifndef CM_PREFERENCES_H
#define CM_PREFERENCES_H


//#define cmp_font "Monaco"
#define cmp_font "Source Code Pro"
//#define cmp_font "Bitstream Vera Sans Mono"


//todo singleton

class cm_prefs
{
public:
    static cm_prefs& inst()
    {
        static cm_prefs    instance;
        return instance;
    }
private:
    cm_prefs() {}
    cm_prefs(cm_prefs const&);
    void operator=(cm_prefs const&);

public:
    cm_prefs(cm_prefs const&)        = delete;
    void operator=(cm_prefs const&)  = delete;
};


//ideas:
// -compatibility level for saving files

#endif // CM_PREFERENCES_H
