#include<iostream>
#include"DArray2.h"
using namespace std;
DArray::DArray()
{
    iptr = new int[1];
    Size = 0;
    Capacity = 1;
}
DArray::~DArray()
{
    delete [] iptr;
}
DArray& DArray::operator=(const DArray& rhs)
{
    if(this != &rhs)
    {
        int* newptr = new int[rhs.Capacity];

        for(int i{0}; i < rhs.Size; i++)
        {
            newptr[i] = rhs.iptr[i];
        }

        delete [] iptr;

        iptr = newptr;
        Size = rhs.Size;
        Capacity = rhs.Capacity;
    }

    return *this;
}
void DArray::push_back(int num)
{
    if(Size == Capacity)
    {
        Capacity *= 2;

        int* newptr = new int[Capacity];

        for(int i{0}; i < Size; i++)
        {
            newptr[i] = iptr[i];
        }

        delete [] iptr;
        iptr = newptr;
    }

    iptr[Size] = num;
    Size++;
}
int DArray::size()const
{
    return Size;
}
int DArray::capasity()const
{
    return Capacity;
}
const int& DArray::operator[](int index)const
{
   return iptr[index];
}
int& DArray::operator[](int num)
{
    return iptr[num];
}
int DArray::operator+=(int num)
{
    return iptr[num] + num;
}

ostream& operator<<(ostream& os,const DArray& rhs)
{
    for(int i{0};i < rhs.size();i++)
    {
        os<<rhs[i]<<" ";
    }
    return os;
}
