#include <iostream>
#include "Name.h"
#include "Person.h"
using namespace std;
Person::Person():pName{},age{0}
{}
Person::Person(const char * fN,char MI,const char * lN,int _age):pName{fN,MI,lN},age{_age < 0? 1 : _age}
{}
void Person::setage(int _age)
{
    age = _age < 0 ? 1 : _age;
}
int Person::getage()const
{
    return age;
}
Name Person::getname()const
{
    return pName;
}
ostream& operator<<(ostream& os,const Person& rhs)
{
    cout<<"p ostream"<<endl;
    os<<rhs.getname()<<' '<<rhs.getage();
    return os;
}
