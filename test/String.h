#ifndef STRING_H
#define STRING_H
#include <iostream>
using namespace std;
class String
{
    private :
      char * str;
      int length{0};
      int strlen(const char *);
      void strcopy(char*,const char*);
    public :
     String ();
     String(const char*);
     String(const String&);
     ~String();
     
     String operator+(const String&);
     String operator+=(const String&);

     char& operator[](const int&);
     const char& operator[](const int&)const;

     String& operator=(const String&);
     
     //int size();

     //void dosomething(String&);

     bool end_with(const String&)const;

     friend ostream& operator<<(ostream&,const String&);
     //friend istream& operator>>(istream&,String&);

};
#endif