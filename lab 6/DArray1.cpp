#include<iostream>
#include"DArray1.h"
using namespace std;
DArray::DArray()
{
    iptr = new int[1];
    size = 0;
    capacity = 1;
}
DArray::~DArray()
{
    delete [] iptr;
}
DArray& DArray::operator=(const DArray& rhs)
{
    if(this != &rhs)
    {
        int* newptr = new int[rhs.capacity];

        for(int i{0}; i < rhs.size; i++)
        {
            newptr[i] = rhs.iptr[i];
        }

        delete [] iptr;

        iptr = newptr;
        size = rhs.size;
        capacity = rhs.capacity;
    }

    return *this;
}
void DArray::push_back(int num)
{
    if(size == capacity)
    {
        capacity *= 2;

        int* newptr = new int[capacity];

        for(int i{0}; i < size; i++)
        {
            newptr[i] = iptr[i];
        }

        delete [] iptr;
        iptr = newptr;
    }

    iptr[size] = num;
    size++;
}
int DArray::getsize()const
{
    return size;
}
const int& DArray::operator[](int index)const
{
   return iptr[index];
}
ostream& operator<<(ostream& os,const DArray& rhs)
{
    for(int i{0};i < rhs.getsize();i++)
    {
        os<<rhs[i]<<" ";
    }
    return os;
}
