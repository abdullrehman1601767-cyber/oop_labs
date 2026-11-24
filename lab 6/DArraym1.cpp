#include<iostream>
#include "DArray1.h"
using namespace std;
int main()
{
    DArray darr1,darr2;
    for(int i{};i < 15;i++)
    {
        darr1.push_back(i * 2);
    }
    cout<<darr1<<endl;
    darr2 = darr1;
    for(int i{15} ;i > 0;i--)
    {
        darr2.push_back(i * 3);
    }
    cout<<darr2<<endl;
    return 0;
}