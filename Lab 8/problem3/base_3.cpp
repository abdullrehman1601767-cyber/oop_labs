#include <iostream>
#include "base_3.h"

using namespace std;

Base::Base()
{
    cout<<"Base : defult constuctor"<<endl;
}
Base::Base(int _num)
{
    cout<<"Base : parameterized constructor"<<endl;
    num = _num;
}
void Base::print()const
{
    cout<<"Base : print()"<<endl;
    cout<<num<<' ';
}
Base::~Base()
{
    cout<<"Base : destructor"<<endl;
}
Base::Base(const Base & rhs):num{rhs.num}
{
    cout<<"Base : copy constructor"<<endl;
}
Base& Base::operator=(const Base& rhs)
{
    cout<<"Base : operator="<<endl;
    num = rhs.num;
    return *this;
}
