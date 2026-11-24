#include<iostream>
#include "String.h"
using namespace std;
int String::strlen(const char* rhs)
{
    int len{0};
    while(rhs[len] != '\0')
    {
        len++;
    }
    return len;
}
void String::strcopy(char * dest,const char * sorc)
{
    int i{0};
    for(;sorc[i] != '\0';i++)
    {
        dest[i] = sorc[i];
    }
    dest[i] = '\0';
}
String::String()
{
    str = nullptr;
    length = 0;
}
String::String(const char* rhs)
{
    length = strlen(rhs);
    str = new char[length + 1];
    strcopy(str,rhs);
}
String::String(const String &rhs)
{
   length = strlen(rhs.str);
    str = new char[length + 1];
    strcopy(str,rhs.str);
}
String::~String()
{
    cout<<"Destructor"<<endl;
    delete [] str;
}
String& String::operator=(const String & rhs)
{
    cout<<"operator="<<endl;
    if(this != &rhs)
    {
        delete [] str;
        length = strlen(rhs.str);
        str = new char[length + 1];
        strcopy(str,rhs.str);
    }
    return *this;
}
String String::operator+=(const String& rhs)
{
    int newlength = length + rhs.length;

    String temp;
    temp = new char[newlength + 1];

    int i{0};

    for(; i < length; i++)
    {
        temp[i] = str[i];
    }

    for(int j{0}; rhs.str[j] != '\0'; j++)
    {
        temp[i] = rhs.str[j];
        i++;
    }

    temp[i] = '\0';

    return temp;
}
String String::operator+(const String& rhs)
{
    int newlength = length + rhs.length;

    String temp;
    temp = new char[newlength + 1];

    int i{0};

    for(; i < length; i++)
    {
        temp[i] = str[i];
    }

    for(int j{0}; rhs.str[j] != '\0'; j++)
    {
        temp[i] = rhs.str[j];
        i++;
    }

    temp[i] = '\0';

    return temp;
}
char& String::operator[](const int& i)
{
    return str[i];
}
const char& String::operator[](const int& i)const
{
    return str[i];
}
bool String::end_with(const String& rhs) const
{
    if(length < rhs.length)
    {
        return 0;
    }

    int i = length - rhs.length;

    for(int j{0}; str[i] != '\0'; j++)
    {
        if(str[i] != rhs.str[j])
        {
            return 0;
        }
        i++;
    }

    return 1;
}
ostream& operator<<(ostream & os,const String & rhs)
{
    os<<rhs.str;
    return os;
}