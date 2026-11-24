#include "Name.h"
#include <iostream>
#ifndef FNAME_H
#define FNAME_H
using namespace std;
class FName : public Name
{
    private :
     char * title{};

     int length(const char*);
     void titlecopy(char*,const char*);
    public :
     FName();
     FName(const char*,const char* ,char,const char*);
     const char* gettitle()const;
     ~FName();
};
#endif
