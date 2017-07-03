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

// dummy object example


static t_class* ui_text_class;
//static t_class* ui_array_class;

void* new_ui_text()
{

    return (void*)pd_new(ui_text_class);
}

//void* new_ui_array()
//{

//    return (void*)pd_new(ui_array_class);
//}
extern "C" void setup_ui0x2etext()
{
    //ObjectFactory<UIpdText> obj("ui.text");
    ui_text_class = class_new(gensym("ui.text"),(t_newmethod)&new_ui_text,0,sizeof(t_object),CLASS_NOINLET,A_NULL);
    //TEMP
    //ui_array_class = class_new(gensym("ui.array"),(t_newmethod)&new_ui_array,0,sizeof(t_object),CLASS_NOINLET,A_NULL);


}


