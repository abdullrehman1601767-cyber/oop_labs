#include <iostream>
#include "derived2_2.h"
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
void Derived2::print()const
{
    cout<<"Derived2 :print()"<<endl;
    Derived1::print();
    cout<<num<<' ';
}
Derived2::~Derived2()
{
    cout<<"Derived2 : Destructor"<<endl;
}