//header file of String class
#include<iostream>
#ifndef _STRING_
#define _STRING_
class String
{
    private :
     char * str;
     int len{0};
     int strlen(const char*);
     void strcopy(char*,const char*);
    public :
    //defalt constructor
     //String();
     //copy constructor
     String(const char * obj = "");
     //paramiterized constructor
     String(String&);
     //destructor
     ~String();
     //member function that return str length
     int length();
     //member function that set string
     void setstr(char*);
     //member function that return string
     char* getstr()const;
     //operator = overloading
     String& operator=(const String&);
     //operator [] overloading
     char operator[](int)const;
     //concatination
     String operator+(const String&);
     //operator < overloading
     bool operator<(String&);
     //operator > overloading
     bool operator>(String&);
     //operator == overloading
     bool operator==(String&);
     bool operator!=(String &);
};
//operator >> overloading
std::istream& operator>>(std::istream&,String&);
//operator << overloading
std::ostream& operator<<(std::ostream&,String&);
#endif