#ifndef NAME_H
#define NAME_H
#include<iostream>
using namespace std;
class Name
{
    private :
     char * fname{};
     char mi{};
     char * lname{};

     int namelen(const char*);
     void namecopy(char *,const char *);
    
     public :
      Name();
      Name(const char*,char,const char *);
      Name(const Name&);
      ~Name();

      const char* getfname()const;
      char getmi()const;
      const char* getlname()const;

      Name& operator=(const Name&);
};
#endif
ostream& operator<<(ostream&,const Name&);
