//
//  ui_msg.cpp
//
//
//  Created by Alex Nadzharov on 03/03/17.
//
//

#include <ceammc_factory.h>
#include <pdUpdate.hpp>

#include "m_pd.h"
using namespace ceammc;

#include "ui_text.h"

UIpdText::UIpdText(const PdArgs& a)
    : BaseObject(a)
{

}

void* new_ui_text()
{

    return 0;
}

extern "C" void setup_ui0x2etext()
{
    //ObjectFactory<UIpdText> obj("ui.text");
    class_new(gensym("ui.text"),(t_newmethod)&new_ui_text,0,0,0,A_NULL);


}


