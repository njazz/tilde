// (c) 2017 Alex Nadzharov
// License: GPL3

#ifndef CONTROLLEROBSERVER
#define CONTROLLEROBSERVER

namespace qtpd {

class PatchWindowController;

////
/// \brief The observer stub
///
class ControllerObserver : Observer {
public:
    ControllerObserver(PatchWindowController* ){};

    virtual void update();
};
}

#endif // CM_PDLINK_H
