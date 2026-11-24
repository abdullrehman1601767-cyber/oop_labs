#include<iostream>
#include"person.h"
using namespace std;

int main()
{
    person p1{"ALI",'a',"AHMAD",48,'M'};
    p1.print();
    person p2 = p1;
    p2.print();
    person p3;
    p3 = p1;
    p3.print();
    return 0;
}