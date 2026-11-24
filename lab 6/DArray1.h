#include<iostream>
#ifndef DARRAY_H
#define DARRAY_H
using namespace std;
class DArray
{
    private :
     int * iptr{};
     int size{};
     int capacity{};

    public :
     DArray();
     DArray& operator=(const DArray&);
     ~DArray();
     int getsize()const;
     void push_back(int);

     const int& operator[](int)const;
};
ostream& operator<<(ostream&,const DArray&);
#endif
