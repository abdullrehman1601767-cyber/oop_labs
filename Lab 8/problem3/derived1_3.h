#ifndef DERIVED1_3_H
#define DERIVED1_3_H
#include "base_3.h"
class Derived1:public Base
{
    private:
     int num{};
    public :
      Derived1();
      Derived1(int,int);
      Derived1(const Derived1&);
      ~Derived1();
      void print()const;
      Derived1& operator=(const Derived1&);
};
#endif