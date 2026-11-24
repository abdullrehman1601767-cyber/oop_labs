#ifndef BASE_4_H
#define BASE_4_H
#include<iostream>
using namespace std;
class Base
{
    private:
     int num{};
    public:
     Base();
     Base(int);
     Base (const Base&);
     ~Base();

     int getnum()const;

     Base& operator=(const Base&);
};
#endif
ostream& operator<<(ostream&,const Base&);