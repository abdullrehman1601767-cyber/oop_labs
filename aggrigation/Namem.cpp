#include<iostream>
#include "Name.h"
using namespace std;
int main()
{
    Name name1{"Object", 'O', "Programming"};
    Name name2 {name1};
    cout<<name2<<endl;
    Name name3 {"Certified", 'F',"Programmer"};
    cout<<name3<<endl;
    name3 = name2;
    cout<<name3<<endl;
    return 0;
}