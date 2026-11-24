#include <iostream>
#include "base_3.h"

using namespace std;

Base::Base()
{
    cout<<"Base : defult constuctor"<<endl;
}
Base::Base(int _num)
{
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
