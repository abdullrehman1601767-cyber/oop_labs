#include<iostream>
using namespace std;
int maxnum(const int * nums,int size)
{
     int count{0},num{0},max{-1},maxcount{0};
       for(int i{0};i < size;i++)
       {
        if(nums[i] % 2 == 0)
        {
            num = nums[i];
            count = 0;
            for(int j{i + 1};j < size;j++)
            {
                if(nums[j] == num)
                {
                    count++;
                }
            } 
            if(count > maxcount)
            {
                maxcount = count;
                max = num;
                cout<<maxcount<<' '<<max<<' '<<num<<endl;
            }
        }
       } 
       return max;
}
int main()
{
    const int size {7};
    int arr[size]{0,1,2,2,4,4,1};
    cout<<maxnum(arr,size)<<endl;
    return 0;
}