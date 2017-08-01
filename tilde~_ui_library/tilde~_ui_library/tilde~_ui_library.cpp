#include <m_pd.h>

#include "tilde~_ui_library.h"

extern "C" {

extern void setup_ui0x2ebang();
extern void setup_ui0x2efloat();
extern void setup_ui0x2ematrix();
extern void setup_ui0x2emsg();
extern void setup_ui0x2escript();
extern void setup_ui0x2esliders();
extern void setup_ui0x2etoggle();
extern void setup_ui0x2etext();

extern void setup_ui0x2edsp();

extern void setup_ui0x2earray();
}

extern "C" void setup() //0x2e //TILDE_UI_
{

    post("tilde~ UI library loaded");

    setup_ui0x2ebang();
    setup_ui0x2efloat();

    setup_ui0x2ematrix();
    setup_ui0x2emsg();
    setup_ui0x2escript();
    setup_ui0x2esliders();
    setup_ui0x2etoggle();

    setup_ui0x2earray();

    setup_ui0x2etext();

    setup_ui0x2edsp();
}
