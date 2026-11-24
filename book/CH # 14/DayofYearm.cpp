#include <iostream>
#include "DayofYear.h"
using namespace std;
int main()
{
    DayofYear d1{31},d2{32},d3{365};
    d1.print();
    d2.print();
    d3.print();
    ++d1;
    d3++;
    d1.print();
    --d2;
    d2.print();
    d3.print();
    d1--;
    d1.print();
    DayofYear d4{366};
    d4.print();
  
    return 0;
}