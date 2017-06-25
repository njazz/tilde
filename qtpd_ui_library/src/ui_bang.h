#ifndef UI_BANG_H
#define UI_BANG_H

#include <ceammc_object.h>

using namespace ceammc;

class UIpdBang : public BaseObject
{
public:
   UIpdBang(const PdArgs& a);
   void onBang();
   void onAny(t_symbol *, const AtomList &);

};

#endif // UI_BANG_H
