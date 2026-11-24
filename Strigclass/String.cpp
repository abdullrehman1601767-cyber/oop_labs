//CPP file of String class
#include<iostream>
#include "String.h"
//privale member function that return string object length
int String::strlen(const char * str)
{
   int _len{0};
   for(;str[_len] != '\0';)
    _len++;
    len = _len;
    return _len;
}
//member function that copy Local string object into class object
void String::strcopy(char * dest,const char * ref)
{
    int i {0};
    for(;ref[i] != '\0';i++)
    {
        dest[i] = ref[i];
    }
    dest[i] = '\0';
}
//member fucnction that set String object 
void String::setstr(char * _str)
{
    delete [] str;
    str = new char[strlen(_str) + 1];
    strcopy (str,_str);
}
//member function that return string object
char* String::getstr()const
{
    return str;
}
//member function that return no of character of a string
int String::length()
{
     return len;
}
//defalt constructor
/*String::String()
{
    str = nullptr;
    len = 0;
}*/
//copy constructor
String::String(const char * obj)
{
    str = new char[strlen(obj) + 1];
    strcopy(str,obj);
}
//argoment constructor
String::String(String & _str)
{
    str = new char[_str.length()+ 1];
    strcopy(str,_str.getstr());
}
//destructor
String::~String()
{
    delete [] str;
}
//operator = overloading
String& String::operator=(const String &rhs)
{
    if(this != &rhs)
    {
        delete [] str;
        len = rhs.len;
        str = new char[len + 1];
        strcopy(str,rhs.str);
    }
    return *this;
}
std::ostream& operator<<(std::ostream& os,String &_str)
{
    os<<_str.getstr();
    return os;
}
std::istream& operator>>(std::istream& is, String& obj)
{
    int size = 1;
    int count = 0;

    char* temp = new char[size];
    char ch;

    // Skip leading spaces
    do
    {
        if (!is)
        {
            delete[] temp;
            return is;
        }

        ch = (char)is.rdbuf()->sbumpc();

    } while (ch == ' ' || ch == '\t' || ch == '\n');

    while (is && ch != ' ' && ch != '\t' && ch != '\n')
    {
        if (count == size - 1)
        {
            size *= 2;
            char* newstr = new char[size];

            for (int i = 0; i < count; i++)
                newstr[i] = temp[i];

            delete[] temp;
            temp = newstr;
        }

        temp[count++] = ch;
        ch = (char)is.rdbuf()->sbumpc();
    }

    temp[count] = '\0';
    obj.setstr(temp);

    delete[] temp;
    return is;
}
//operator [] overloading
char String::operator[](int index) const
{
    if (index < 0 || index >= len)
        return '\0';

    return str[index];
}
//concatination
String String::operator+(const String & rhs)
{
    int coneltlen = len + rhs.len;
    char * _str = new char[coneltlen + 1];
    int i{0};
    for(;str[i] != '\0';i++)
     {
         _str[i] = str[i];
     }
    for(int j{0};rhs.str[j] != '\0';j++)
    {
        _str[i] = rhs.str[j];
        i++;
    }
        _str[i] = '\0';
        return _str; 
     }
//operator < overloading
bool String::operator<(String &rhs)
{
    for(int i{0};rhs[i] !='\0';i++)
    {
        if(rhs[i] > str[i])
        return 0;
    }
    return 1;
}
//operator > overloading
bool String::operator>(String &rhs)
{
    for(int i{0};rhs[i] !='\0';i++)
    {
        if(rhs[i] < str[i])
        return 0;
    }
    return 1;
}
//operator == overloading
bool String::operator==(String &rhs)
{
    for(int i{0};rhs[i] !='\0';i++)
    {
        if(rhs[i] != str[i])
        return 0;
    }
    return 1;
}
//operator != overloading
bool String::operator!=(String &rhs)
{
    for(int i{0};rhs[i] !='\0';i++)
    {
        if(rhs[i] == str[i])
        return 0;
    }
    return 1;
}
