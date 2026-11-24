#include<iostream>
#ifndef _NAME_
#define _NAME_
class Name
{
    private :
     char * first_name;
     char middle_initial;
     char * last_name;
     int objlen(const char*);
     void objcopy(char *&,const char * );
    public :
    //defalt constructor
     Name();
    // constructor
     Name(const char*,const char,const char*);
     //copy constructor
      Name(const Name&);
     // destructor
     ~Name();
     //assignment operator overloading
     Name& operator=(const Name&);
     const char* getfirstname()const;
     char getmiddleinitial()const;
     const char* getlastname()const;
     void setfirstname(char*&);
     void setmiddleinitial(char);
     void setlastname(char*&);
     bool operator==(const Name&)const;
};
std::ostream& operator<<(std::ostream& os, const Name& obj);
std::istream& operator>>(std::istream& is,Name& obj);
#endif