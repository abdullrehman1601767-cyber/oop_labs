#include "name1.h"
#include <iostream>

using namespace std;

void print(const Name& name)
{
    cout << "NAME OF SUBJECT IS : " << name << endl;
}

int main()
{
    cout<<"START"<<endl;
    Name name1{"Object", 'O', "Programming"};

    cout << name1 << endl;
    print(name1);
    cout<<"END";
    return 0;
}