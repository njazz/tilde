#ifndef QTPD_UI_LIBRARY_H
#define QTPD_UI_LIBRARY_H

#include <m_pd.h>

extern "C" void setup_ui0x2ebang();
extern void setup_ui0x2efloat();
extern void setup_ui0x2ematrix();
extern void setup_ui0x2emsg();
extern void setup_ui0x2escript();
extern void setup_ui0x2esliders();
extern void setup_ui0x2etoggle();

extern "C" void qtpd_ui_setup() //0x2e
{

    post("loading Qtpd ui library");

    setup_ui0x2ebang();

    //    setup_ui0x2efloat();
    //    setup_ui0x2ematrix();
    //    setup_ui0x2emsg();
    //    setup_ui0x2escript();
    //    setup_ui0x2esliders();
    //    setup_ui0x2etoggle();
}

#endif // QTPD_UI_LIBRARY_H
