#include"string.h"
#include<iostream>
using namespace std;
int main()
{
    String str1{"Object"},str2{"Oriented"},str3{str2};
    cout<<str1<<'\t'<<str2<<'\t'<<str3<<endl;
    String str4 = str3; 
    cout<<str4<<endl;
    String str5 = str1 + str2;
    cout<<str5<<endl;
    if(str5 < str5)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
    if(str1.ends_with("ec"))
    {cout<<str1<<" Ends with ect \n";}
    else 
    {
        cout<<str1<<" Not ends with ect \n";
    }
    return 0;
}