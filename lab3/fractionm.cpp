#include"fraction.h"
using namespace std;
int main()
{
    fraction f1(4,5),f2{f1};
    fraction f3;
    f3 = f1;
    cout<<" F1 :"<<f1<<" F2 : "<<f2<<" f3 : "<<f3<<endl;
    fraction add = f1 + f2;
    cout<<"Add f1 and f2 : "<<add<<endl;
    fraction sub = f1 - f2;
    cout<<"Sub is : "<<sub<<endl;
    fraction mul = f1 * f2;
    cout<<"Mul is : "<<mul<<endl;
    fraction div = f1 / f2;
    cout<<"div is : "<<div<<endl;
    int lessthen = f1 < f2;
    cout<<"Lessthen : "<<lessthen<<endl;
    int lessorequal = f1 <= f2;
    cout<<"Equal or less"<<lessorequal<<endl;
    int equal = f1 == f2;
    cout<<"Equal : "<<equal<<endl;
    int great = f1 > f2;
    cout<<"Great : "<<great<<endl;
    int greatorequal = f1 >= f2;
    cout<<"Greatorequal : "<<greatorequal<<endl;
    int notequal= f1 != f2;
    cout<<"Notequal : "<<notequal<<endl;
    fraction incpre = ++f1;
    fraction incpost = f2++;
    fraction decpre = --f3;
    fraction decpost = f3--;
    cout<<"inc pre and post : "<<incpre<<" "<<incpost<<endl;
    cout<<"dec pre and post : "<<decpre<<" "<<decpost<<endl;
    fraction getval{};
    cin>>getval;
    cout<<"getval : "<<getval<<endl;
    return 0;
}