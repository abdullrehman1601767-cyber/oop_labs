#include "fracnum.h"
#include <iostream>
using namespace std;
Numbers::Numbers()
{
    size = 0;
    arr = nullptr;
}
Numbers::~Numbers()
{
    delete [] arr;
}
void Numbers::setarrsize(const int &_size)
{
    size = _size;
    arr = new float[size];
}
void Numbers::setnum(const float &num,const int &index)
{
    arr[index] = num;
}
float Numbers::getnum(const int &index)
{
    return arr[index];
}
float Numbers::gethighnum()
{
    float max = arr[0];
    for(int i = 1;i < size;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
float Numbers::getlownum()
{
    float min = arr[0];
    for(int i = 1;i < size ;i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int Numbers::arrsize()
{
    return size;
}
float Numbers::getaverage()
{
    float ave{0};
    for(int i = 0;i < size;i++)
    {
        ave = ave + arr[i];
    }
    return ave/size;
}
void Numbers::print()
{
    for(int i = 0;i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
