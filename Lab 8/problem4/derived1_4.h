#ifndef DERIVED1_3_H
#define DERIVED1_3_H
#include "base_4.h"
class Derived1:public Base
{
    private:
     int num{};
    public :
      Derived1();
      Derived1(int,int);
      Derived1(const Derived1&);
      ~Derived1();
      
      int getnum()const;

      Derived1& operator=(const Derived1&);
};
#endif
ostream& operator<<(ostream&,const Derived1&);