#include<iostream>
using namespace std;
void smallernums(int * nums,const int size)
{
    for(int i{0};i < size;i++)
    {
        int min{0};
        int num = nums[i];
        for(int j{i + 1};j < size;j++)
        {
            if(min < num && num > nums[j])
            {
               int max = min;
               min = nums[j];
               if(max < min)
               min = nums[j];
            }
        }
        nums[i] = min;
    }
}
int main()
{
    int arr[4]{5,2,6,1};
    smallernums(arr,4);
    for(int i{0};i < 4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}