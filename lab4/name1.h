#include<iostream>
#ifndef _NAME_
#define _NAME_
class Name
{
    private :
     char * first_name{};
     char middle_initial;
     char * last_name;
     int objlen(const char*);
     void objcopy(char *&,const char * );
    public :
     Name(const char*,const char,const char*);
     ~Name();
     const char* getfirstname()const;
     char getmiddleinitial()const;
     const char* getlastname()const;
     Name(const Name&);

};
std::ostream& operator<<(std::ostream& os, const Name& obj);
#endif