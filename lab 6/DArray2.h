#include<iostream>
#ifndef DARRAY_H
#define DARRAY_H
using namespace std;
class DArray
{
    private :
     int * iptr{};
     int Size{};
     int Capacity{};

    public :
     DArray();
  
     DArray& operator=(const DArray&);
     ~DArray();
     int size()const;
     int capasity()const;
     void push_back(int);

     const int& operator[](int)const;
     int& operator[](int);
     
     int operator+=(int);
};
ostream& operator<<(ostream&,const DArray&);
#endif
