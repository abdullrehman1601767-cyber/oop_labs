#ifndef DERIVED2_2_H
#define DERIVED2_2_H
#include "derived1_2.h"
class Derived2 : public Derived1
{
    private:
     int num{};
    public :
      Derived2();
      Derived2(int,int,int);
      ~Derived2();
      void print()const;
};
#endif