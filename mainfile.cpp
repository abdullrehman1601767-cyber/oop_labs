#include<iostream>
#include"fraction.h"
using namespace std;
int main()
{
    fraction f1,f2,add,sub,div,mul;
    f1.setnum(5);
    f1.setdenum(9);
    f2.setnum(0);
    f2.setdenum(11);
    add = f1.addition(f2);
    sub = f1.subtraction(f2);
    div = f1.division(f2);
    mul = f1.multiply(f2);
    cout<<"Fraction 1 is : ";
    f1.print();
    cout<<"Fraction 2 is : ";
    f2.print();
    cout<<"Answer of addition these fractions is : ";
    add.print();
    cout<<"Answer of subtraction of these fractions is : ";
    sub.print();
    cout<<"Answer of division of these faractions is : ";
    div.print();
    cout<<"Answer of multiply of these fractions is : ";
    mul.print();
    return 0;
}