#include "string.h"
#include<iostream>
using namespace std;
String::String(const char * obj)
{
    length = strlen(obj);
    str = new char[length + 1];
    strcopy(str,obj);
}
String::String(const String &obj)
{
    str = new char[obj.length + 1];
    strcopy(str,obj.str);
}
String::~String()
{
    delete [] str;
}
int String::strlen(const char * obj)
{
    int len{0};
    while(obj[len] != '\0')
    {
        len++;
    }
    return len;
}
void String::strcopy(char * dest,const char * copy)
{
    int i{0};
    for(;copy[i] != '\0';i++)
    {
       dest[i] = copy[i];
    }
    dest[i] = '\0';
}
std::ostream& operator<<(std::ostream& os,const String &obj)
{
   os<<obj.getstr();
   return os;
}
const char* String::getstr()const 
{
    return str;
}
String String::operator+(const String &rhs)const
{
    int len = length + rhs.length;
    char *_str = new char[len + 1];
    int i{0};
    for(;str[i] != '\0';i++)
    {
        _str[i] = str[i];
    }
    for(int j {0};rhs.str[j] != '\0';j++)
    {
        _str[i] = rhs.str[j];
        i++;
    }
    _str[i] = '\0';
    return _str;
}
bool String::operator<(const String &rhs)const
{
    for(int i{0};str[i] != '\0';i++)
    {
        if(str[i] > rhs.str[i])
        {
            return 0;
        }
    }
    return 1;
}
bool String::ends_with(const char * _str)
{
    if(!_str)
    return false;
    int _strlen = strlen(_str);
    if(length < _strlen)
    return false;
    for(int i1{_strlen - 1},i2{length - 1};i1 >= 0;i1--,i2--)
    {
        if(str[i2] != _str[i1])
        {
            return false;
        }
    }
    return true;
}