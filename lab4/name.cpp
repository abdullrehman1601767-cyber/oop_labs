#include<iostream>
#include"name.h"
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
        last_name = new char[objlen(lastname)+1];
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
void Name::setfirstname(char*& fname)
{
    delete [] first_name;
    last_name = nullptr;
    if(fname != nullptr)
    {
    first_name = new char[objlen(fname) + 1];
    objcopy(first_name,fname);
    }

}
void Name::setmiddleinitial(char minitial)
{
    middle_initial = minitial;
}
void Name::setlastname(char *& lname)
{
    delete [] last_name;
    last_name = nullptr;
    if(lname != nullptr)
    {
    last_name = new char[objlen(last_name) + 1];
    objcopy(last_name,lname);
    }
}
bool Name::operator==(const Name &rhs)const
{
    if(this == &rhs)
    return 1;
    else 
    {
        if(middle_initial != rhs.middle_initial)
        return 0;
        for(int i = 0;first_name[i] != '\0';i++)
        {
            if(first_name[i] != rhs.first_name[i])
            return 0;
        }
        for(int i = 0;last_name[i] !='\0';i++)
        {
            if(last_name[i] != rhs.last_name[i])
            return 0;
        }
    }
    return 1;
}