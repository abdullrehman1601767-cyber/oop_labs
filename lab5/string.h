#ifndef STRING_H
#define STRING_H
#include<iostream>
using namespace std;
class String
{
    private :
     char * str;
     int length{};
     int strlen(const char*);
     void strcopy(char*,const char*);
    public :
     String(const char *obj = "");
     String (const String&);
     ~String();
     
     bool ends_with(const char*);
     const char* getstr()const;

     String operator+(const String&)const;

     bool operator<(const String&)const;
};
std::ostream& operator<<(std::ostream&,const String&);
#endif