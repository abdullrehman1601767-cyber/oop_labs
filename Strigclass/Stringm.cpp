#include<iostream>
#include "String.h"
using namespace std;
int main()
{
   String str1{"ALI"};
   String str2("AHMAD");
   String str3 = str1 + str2;
   cout<<str1<<'\t'<<str2<<'\t'<<str3<<endl;
   String str5;
   cin>>str5;
   cout<<str5<<endl;
   return 0;
}