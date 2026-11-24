#include<iostream>
#include"name2.h"
Name::Name(const char * firstname,const char middleinitial,const char * lastname)
{
    middle_initial = middleinitial;
    if(firstname != nullptr)
    {
        first_name = new char[objlen(firstname) + 1];
        objcopy(first_name,firstname);
    }
    else 
    {
        first_name = nullptr;
    }
    if(lastname != nullptr)
    {
        last_name = new char[objlen(lastname)];
        objcopy(last_name,lastname);
    }
    else 
    {
        last_name = nullptr;
    }
    
}
int Name::objlen(const char * obj)
{
    int len{0};
    for(int i = 0;obj[i] != '\0';i++)
    len++;
    return len;
}
void Name::objcopy(char*& desc, const char* surc)
{
    int i = 0;
    while (surc[i] != '\0')
    {
        desc[i] = surc[i];
        i++;
    }

    desc[i] = '\0';
}
Name::~Name()
{
    delete [] first_name;
    delete [] last_name;
}
const char* Name::getfirstname()const
{
    return first_name;
}
char Name::getmiddleinitial()const
{
    return middle_initial;
}
const char* Name::getlastname()const
{
    return last_name;
}
std::ostream& operator<<(std::ostream& os, const Name& obj)
{
    os << obj.getfirstname() << ' '
       << obj.getmiddleinitial() << ". "
       << obj.getlastname();

    return os;
}
Name::Name(const Name &obj)
{
    delete [] first_name;
    delete [] last_name;
    middle_initial = obj.getmiddleinitial();
    if(obj.getfirstname() != nullptr)
    {
        first_name = new char(objlen(obj.getfirstname()) + 1);
        objcopy(first_name,obj.getfirstname());
    }
    else 
    {
        first_name = nullptr;
    }
    if(obj.getlastname() != nullptr)
    {
        last_name = new char[objlen(obj.getlastname()) + 1];
        objcopy(last_name,obj.getlastname());
    }
    else 
    {
        last_name = nullptr;
    }  
}
Name& Name::operator=(const Name &rhs)
{
    if(this == &rhs){
        return *this;
    }
    middle_initial = rhs.middle_initial;
    delete [] first_name;
    delete [] last_name;
    if(rhs.first_name != nullptr)
    {
      first_name = new char[objlen(rhs.first_name) + 1];
      objcopy(first_name,rhs.first_name);
    }
    else 
      first_name = nullptr;
    if(rhs.last_name != nullptr)
    {
        last_name = new char[objlen(rhs.last_name) + 1];
        objcopy(last_name,rhs.last_name);
    }
    else 
     last_name = nullptr;
     return *this;
}
Name::Name()
{
    first_name = nullptr;
    last_name = nullptr;
    middle_initial = '\0';
}