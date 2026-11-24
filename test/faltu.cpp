#include<iostream>
using namespace std;
int main(int argc,char * argv[])
{
    int num{};
    for(int i{0}; i < argc;i++)
    {
        cout<<*argv[i]<<' ';
    }
    cout<<num<<endl;
    return 0;
}