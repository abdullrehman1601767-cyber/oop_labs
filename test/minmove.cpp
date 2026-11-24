#include <iostream>
using namespace std;

int move(int * nums,int size)
{
    int count{0};
    int max {nums[0]};
    for(int i{1}; i < size;i++)
    {
        if(max < nums[i])
        {
            max = nums[i];
        }
    }
    for(int i{0};i < size;i++)
    {
        count += max - nums[i];
    }
    return count;
}

int main()
{
    const int size{3};
    int arr[size]{1,5,3};
    cout<<move(arr,size);
    return 0;
}