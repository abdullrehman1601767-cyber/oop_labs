#include<iostream>
using namespace std;
int Binarysearch(int * arr,const int &size,const int &key)
{
    int mid{},start{},end{size - 1};
    while(start <= end)
    {
        mid = (start + end) / 2;
        if(key == arr[mid])
        return mid;
        else if(key < arr[mid])
        end = mid - 1;
        else 
         start = mid + 1;
    }
    if(key < arr[mid])
    return mid;
    else 
    return mid+1;
}
int main()
{
    const int size = 10;
    int arr[size]{0,2,4,6,8,10,12,14,16,18};
    int key{};
    cin>>key;
    cout<<Binarysearch(arr,size,key);
    return 0;
}