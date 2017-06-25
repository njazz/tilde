#ifndef UI_FLOAT_H
#define UI_FLOAT_H

#include <ceammc_object.h>

using namespace ceammc;

class UIpdFloat : public BaseObject
{
private:
    float _value;

public:
   UIpdFloat(const PdArgs& a);
   void onBang();
   void onAny(t_symbol *s, const AtomList &);
   void onFloat(float f);

   float value();

};

#endif // UI_BANG_H
