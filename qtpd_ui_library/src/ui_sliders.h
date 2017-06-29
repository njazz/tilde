#ifndef UI_SLIDERS_H
#define UI_SLIDERS_H

#include <ceammc_object.h>

using namespace ceammc;

class UIpdSliders : public BaseObject
{
private:
    float _value;

public:
   UIpdSliders(const PdArgs& a);
   void onBang();
   void onAny(t_symbol *, const AtomList &);
   void onFloat(float);

   float value();

};
#endif // UI_BANG_H
