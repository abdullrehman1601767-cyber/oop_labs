#include <iostream>
#include "derived1_2.h"
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
    cout<<"Derived1 : print()"<<endl;
    Base::print();
    cout<<num<<' ';
}
Derived1::~Derived1()
{
    cout<<"Derived1 : destructor"<<endl;
}