#include <iostream>
#include "derived2_3.h"
using namespace std;

Derived2::Derived2()
{
    Derived1();
    cout<<"Derived2 : defult constructor"<<endl;
}
Derived2::Derived2(int _bnum,int _d1num,int _d2num):Derived1{_bnum,_d1num},num{_d2num}
{
    cout<<"Derived2 : perameterized constructor"<<endl;
}
Derived2::Derived2(const Derived2& rhs):Derived1{rhs},num{rhs.num}
{
    cout<<"Derived2 :copy constructor"<<endl;
}
void Derived2::print()const
{
    Derived1::print();
    cout<<"Derived2 :print()"<<endl;
    
    cout<<num<<' ';
}
Derived2::~Derived2()
{
    cout<<"Derived2 : Destructor"<<endl;
}
void Derived2::setValue(int _num)
{
    cout<<"Derived2 : Setvalue"<<endl;
    num = _num;
}
Derived2& Derived2::operator=(const Derived2& rhs)
{
    static_cast<Derived1>(*this) = rhs;
    cout<<"Derived2 : operator="<<endl;
    num = rhs.num;
    return *this;
}