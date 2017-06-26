//#ifndef QTPD_UI_LIBRARY_H
//#define QTPD_UI_LIBRARY_H

#include <m_pd.h>

extern "C" void setup_ui0x2ebang();
extern "C" void setup_ui0x2efloat();
extern "C" void setup_ui0x2ematrix();
extern "C" void setup_ui0x2emsg();
extern "C" void setup_ui0x2escript();
extern "C" void setup_ui0x2esliders();
extern "C" void setup_ui0x2etoggle();

extern "C" void setup_ui0x2earray();

extern "C" void qtpd_ui_setup() //0x2e
{

    post("loading Qtpd ui library");

    setup_ui0x2ebang();
    setup_ui0x2efloat();

    setup_ui0x2ematrix();
    setup_ui0x2emsg();
    setup_ui0x2escript();
    setup_ui0x2esliders();
    setup_ui0x2etoggle();

    setup_ui0x2earray();


}

//#endif // QTPD_UI_LIBRARY_H
