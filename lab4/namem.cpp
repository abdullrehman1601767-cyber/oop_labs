#include "name.h"
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
    {
        Name name2;
        name2 = name1;
        cout<<name2<<endl;
    }
    Name name3{name1};
    cout<<name3<<endl;
    cout<<name1<<endl;
    if(name1 == name3)
    {
        cout<<name1<<" is equal to "<<name3<<endl;
    }
    else 
    {
        cout<<name1<<" is not equal to "<<name3<<endl;
    }
    cout<<"END";
    return 0;
}