#include<iostream>
#include"date.h"
using namespace std;
int main()
{
    date date1(31,12,2026),date2{date1};
    date1.print();
    date1.printLong();
    date2.print();
    date2.increament();
    date1.printLong();
    cout<<endl;
    date2.printLong();
    return 0;
}