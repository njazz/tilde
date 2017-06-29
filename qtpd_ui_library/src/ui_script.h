#ifndef UI_SCRIPT_H
#define UI_SCRIPT_H

#include <ceammc_object.h>

using namespace ceammc;

class UIpdScript : public BaseObject
{
private:
    float _value;

public:
   UIpdScript(const PdArgs& a);
   //void onBang();
   void onAny(t_symbol *, const AtomList &);
   //void onFloat(float);

   float value(){return _value;}

};
#endif // UI_BANG_H
