#include<iostream>
using namespace std;
class String
{
    private :
     char * str;
     int length;
     int strlen(char* str)
     {
        int len{0};
        while(str[len] != '\0')
        {
            len++;
        }
        length = len;
        return len;
     }
     void strcopy(char* dest,const char* ref)
     {
        if(dest != ref)
        {
            delete [] dest;
            int i{0};
            for(;ref[i] != '\0';i++)
            {
                dest[i] = ref[i];
            }
            dest[i] = '\0';
        }
     }
    public :
     char operator[](int i)
     {
        return str[i];
     }
    
     String(char * obj = "")
     {
        str = new char[strlen(obj) + 1];
        strcopy(str,obj);
     }
     char* getstr()const
     {
        return str;
     }
     void setstr(char * obj)
     {
        str = new char[strlen(obj) + 1];
        strcopy(str,obj);
     }
     int length()const
     {
        return length;
     }
     String operator+(const String & rhs)
     {
       int resultlen = length + rhs.length;
       char * _str = new char[resultlen + 1];
       int i{0};
       for(;str[i] != '\0';i++)
        _str[i] = str[i];
        for(;rhs.str[i] != '\0';i++)
        _str[i] = rhs.str[i];
        _str[i] = '\0';
        return _str; 
     }
};
