#ifndef DERIVED1_2_H
#define DERIVED1_2_H
#include "base_2.h"
class Derived1:public Base
{
    private:
     int num{};
    public :
      Derived1();
      Derived1(int,int);
      ~Derived1();
      void print()const;
};
#endif