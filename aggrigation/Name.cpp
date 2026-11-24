#include <iostream>
#include "Name.h"
using namespace std;

int Name::namelen(const char * obj)
{
    int len{0};
    while(obj[len] != '\0')
    {
        len++;
    }
    return len;
}
void Name::namecopy(char * des,const char * scr)
{
    int i{0};
    for(;scr[i] != '\0';i++)
    {
        des[i] = scr[i];
    }
    des[i] = '\0';
}
Name::Name()
{
    fname = nullptr;
    mi = '\0';
    lname = nullptr;
}
Name::Name(const char* _fname,char _mi,const char * _lname)
{
    cout<<"NAME PARAMETERSIZED CONSTRUCTOR"<<endl;
     int flen {namelen(_fname)};
     fname = new char[flen + 1];
     namecopy(fname,_fname);
   
   mi = _mi;
    int llen {namelen(_lname)};
    lname = new char[llen + 1];
    namecopy(lname,_lname);
   
}
Name::Name(const Name& rhs)
{
       int flen {namelen(rhs.fname)};
       fname = new char[flen + 1];
       namecopy(fname,rhs.fname);
    
    mi = rhs.mi;
        int llen {namelen(rhs.lname)};
        lname = new char [llen + 1];
        namecopy(lname ,rhs.lname);
    
}
Name::~Name()
{
    cout<<"NAME DESTRUCTOR"<<endl;
    delete [] fname;
    delete [] lname;
}
const char* Name::getfname()const
{
    return fname;
}
const char* Name::getlname()const
{
    return lname;
}
char Name::getmi()const
{
    return mi;
}        
ostream& operator<<(ostream& os,const Name& rhs)
{
    cout<<"n ostream"<<endl;
    os<<rhs.getfname()<<' '<<rhs.getmi()<<' '<<rhs.getlname();
    return os;
}
Name& Name::operator=(const Name& rhs)
{
    if(this != &rhs){
        delete [] fname;
        int flen = namelen(rhs.fname);
        fname = new char [flen + 1];
        namecopy(fname,rhs.fname);   
    
        mi = rhs.mi;

        delete [] lname;
        int llen = namelen(rhs.lname);
        lname = new char [llen + 1];
        namecopy(lname,rhs.lname);   
    
  }
    return *this;
}
