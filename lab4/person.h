#ifndef PERSON_H
#define PERSON_H
#include "name.h"
class person
{
    private :
     Name pName;
     int age{};
     char gender{};
    public :
     person();
     person(const char*,const char,const char*,const int,const char);

     void setage(int);

};
#endif