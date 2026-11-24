#include <iostream>
#include "base_3.h"
#include "derived1_3.h"
#include "derived2_3.h"
using namespace std;
int main()
{
    Derived2 d2(10,20,30);
    Derived2 d3{d2};
    d2.print();
    cout<<endl;

    d3.print();
    cout<<endl;
    d3.setValue(-12);
    d2 = d3;
    d3.print();
    cout<<endl;

    return 0;
}