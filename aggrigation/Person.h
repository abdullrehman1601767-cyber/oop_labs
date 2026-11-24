#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "Name.h"
class Person
{
    private :
     Name pName{};
     int age{};
    public :
     Person();
     Person(const char*,char,const char *,int);

     void setage(int);

     Name getname()const;
     int getage()const;

};
#endif
ostream& operator<<(ostream&,const Person&);