#include<iostream>
#include "base_2.h"
#include "derived1_2.h"
#include "derived2_2.h"
using namespace std;
int main()
{
    Derived1 d1(2,4);
    Derived2 d2(10,20,30);
    d2.print();
    cout<<endl;
    return 0;
}