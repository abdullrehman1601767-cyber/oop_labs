#include<iostream>
#include "String.h"
using namespace std;
int main()
{
    String name[10]{"AKHUWET","INSTITUTE","KASUR"};
    cout<<name[0]<<endl;
    name[4] = name[0] + name[1] + "LAHORE";
    cout<<name[4]<<endl;
    name[4][6] = 'z';
    cout<<name[4]<<endl;
    if(name[4].end_with("LAHORE"))
    {
        cout<<name[4]<<" End with LAHORE"<<endl;
    }
    else 
    {
        cout<<name[4]<<" Not end with LAhore"<<endl;
    }
    return 0;
}