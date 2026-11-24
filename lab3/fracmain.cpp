#include "fracnum.h"
#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    float num;
    Numbers arr1;
    arr1.setarrsize(size);
    for(int i = 0;i < size;i++)
    {
        cin>>num;
        arr1.setnum(num,i);
    }
    arr1.print();
    
    return 0;
}