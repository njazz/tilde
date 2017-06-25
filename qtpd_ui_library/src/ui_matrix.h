#ifndef UI_MATRIX_H
#define UI_MATRIX_H

#include <ceammc_object.h>

using namespace ceammc;

class UIpdMatrix : public BaseObject
{
private:
    float _value;

public:
   UIpdMatrix(const PdArgs& a);
   void onBang();
   void onAny(t_symbol *, const AtomList &);
   void onFloat(float);

   float value();

};
#endif // UI_BANG_H
