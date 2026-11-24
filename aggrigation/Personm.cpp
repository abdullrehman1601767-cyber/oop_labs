#include<iostream>
#include "Name.h"
#include "Person.h"
using namespace std;

int main()
{
    Person person1{"Certified", 'F', "Programmer",20};
    Person person2{person1};
    person2.setage(30);
    cout<<person2<<endl;
    return 0;
}