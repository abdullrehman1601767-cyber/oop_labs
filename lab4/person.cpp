#include "person.h"
#include "name.h"
person::person()
{
    age = 0;
    gender = '\0';
}
person::person(const char * fn,const char mi,const char *ln,const int _age,const char gen):pName {fn,mi,ln},age{_age},gender{gen}
{}
void person::setage(int _age)
{
    age = _age;
}