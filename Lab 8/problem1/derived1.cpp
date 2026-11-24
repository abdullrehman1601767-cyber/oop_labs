#include <iostream>
#include "derived1.h"
using namespace std;

Derived1::Derived1()
{
    Base();
    cout<<"Derived1 : defult constructor"<<endl;
}
Derived1::~Derived1()
{
    cout<<"Derived1 : Destructor"<<endl;
}