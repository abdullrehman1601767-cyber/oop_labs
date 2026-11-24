#include <iostream>
#include "derived1_3.h"
using namespace std;

Derived1::Derived1()
{
    Base();
    cout<<"Derived1 : defult constructor"<<endl;
}
Derived1::Derived1(int _bnum,int _d1num):Base{_bnum},num{_d1num}
{
   cout<<"Derived1 : parameterized constructor"<<endl; 
}
void Derived1::print()const
{
    Base::print();
    cout<<"Derived1 : print()"<<endl;
    
    cout<<num<<' ';
}
Derived1::~Derived1()
{
    cout<<"Derived1 : destructor"<<endl;
}
Derived1::Derived1(const Derived1 &rhs):Base{rhs},num{rhs.num}
{
    cout<<"Derived1 : copy constructor"<<endl;;
}
Derived1& Derived1::operator=(const Derived1& rhs)
{
    static_cast<Base>(*this)=(rhs);
    cout<<"Derived1 : operator=()"<<endl;
    num = rhs.num;
    return *this;
}