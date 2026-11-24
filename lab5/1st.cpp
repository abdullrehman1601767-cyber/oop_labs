#include<iostream>
using namespace std;

int isSubstring(const char,const char);

int main()
{
    char txt[] {"abcdpat"};
    char pat[] {"pat"};
    cout<<isSubstring(txt,pat);
    return 0;
}
int isSubstring(const char * txt,const char * pat)
{
 if(!txt || !pat)
 {
   return -1;
 }   
 for(int i{0};txt[i] != '\0';i++){
    int flag = 0;
    for(int j{i};pat[j] != '\0';j++){
        if(txt[j] != pat[j])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        return i;
    }
 }
 return -1;
}