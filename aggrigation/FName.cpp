#include <iostream>
#include "Name.h"
#include "FName.h"

int FName::length(const char * obj)
{
    int len{0};
    while(obj[len] != '\0')
    {
        len++;
    }
    return len;
}
void FName::titlecopy(char * des,const char * scr)
{
    int i{0};
    for(; scr[i] != '\0';i++)
    {
        des[i] = scr[i];
    }
    des[i] = '\0';
}
FName::FName()
{
    title = new char[1];
}
FName::FName(const char* _title,const char* fn,char MI,const char * ln):Name{fn,MI,ln}
{
    title = new char[length(_title) + 1];
    titlecopy(title,_title);
}
FName::~FName()
{
    cout<<"FNAME DESTRUCTOR"<<endl;
    delete [] title;
}
const char * FName::gettitle()const
{
    return title;
}
