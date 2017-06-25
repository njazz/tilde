#ifndef UI_BANG_H
#define UI_BANG_H

#include <ceammc_object.h>

using namespace ceammc;

class UIpdToggle : public BaseObject
{
private:
    float _value;

public:
   UIpdToggle(const PdArgs& a);
   void onBang();
   //void onAny(t_symbol *, const AtomList &);
   void onFloat(float);

   float value(){return _value;}

};
#endif // UI_BANG_H
