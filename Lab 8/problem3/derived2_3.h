#ifndef DERIVED2_3_H
#define DERIVED2_3_H
#include "derived1_3.h"
class Derived2 : public Derived1
{
    private:
     int num{};
    public :
      Derived2();
      Derived2(int,int,int);
      Derived2(const Derived2&);
      ~Derived2();
      void print()const;
      void setValue(int);
      Derived2& operator=(const Derived2&);
};
#endif