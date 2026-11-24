#ifndef DERIVED2_4_H
#define DERIVED2_4_H
#include "derived1_4.h"
class Derived2 : public Derived1
{
    private:
     int num{};
    public :
      Derived2();
      Derived2(int,int,int);
      Derived2(const Derived2&);
      ~Derived2();
      
      int getnum()const;

      void setValue(int);
      Derived2& operator=(const Derived2&);
};
#endif
ostream& operator<<(ostream&,const Derived2&);