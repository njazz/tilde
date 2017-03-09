#ifndef CM_CLIPBOARD_H
#define CM_CLIPBOARD_H

////
/// \brief clipboard singleton
///
class cm_clipboard
{
public:
    static cm_clipboard& inst()
    {
        static cm_clipboard    instance;
        return instance;
    }
private:
    cm_clipboard() {}
    cm_clipboard(cm_clipboard const&);
    void operator=(cm_clipboard const&);

public:
    cm_clipboard(cm_clipboard const&)        = delete;
    void operator=(cm_clipboard const&)  = delete;
};

#endif // CM_CLIPBOARD_H
