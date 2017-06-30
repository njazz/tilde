#ifndef UI_SCRIPT_H
#define UI_SCRIPT_H

#include <ceammc_object.h>

using namespace ceammc;

//typedef void t_symbol;

class UIpdScript : public BaseObject
{
private:
    float _value;
    //t_symbol* _inSymbol;

public:
   UIpdScript(const PdArgs& a);
   void onBang();
   void onAny(t_symbol *, const AtomList &);
   void onFloat(float f);

   float value(){return _value;}

};
#endif // UI_BANG_H
