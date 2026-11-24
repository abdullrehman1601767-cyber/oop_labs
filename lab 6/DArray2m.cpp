#include<iostream>
#include "DArray2.h"
using namespace std;
int main()
{
    DArray darr1,darr2;
    for(int i{};i < 15;i++)
    {
        darr1.push_back(i * 2);
        cout<<darr1.size()<<"\t"<<darr1.capasity()<<endl;
    }
    cout<<darr1<<endl;
    darr2 = darr1;
    for(int i{} ;i < 15;i++)
    {
        darr2[i] += i;
    }
    darr1[7] = 0;
    cout<<darr2<<endl;
    cout<<darr1<<endl;
    return 0;
}