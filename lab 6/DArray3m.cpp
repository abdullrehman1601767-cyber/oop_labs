#include<iostream>
#include "DArray3.h"
using namespace std;
int main()
{
    DArray darr1;
    for(int i{};i < 15;i++)
    {
        darr1.push_back(i * 2);
    }
    cout<<darr1<<endl;
    const DArray darr2 {darr1};
    for(int i{0};i < 15;i++)
    {
        cout<<darr2[i]<<' ';
    }
    cout<<endl;
    if(darr1 == darr2)
    {
        cout<<"darr1 and darr2 are equal"<<endl;
    }
    else
    {
        cout<<"darr1 and darr2 are not equal"<<endl;
    }
    return 0;
}