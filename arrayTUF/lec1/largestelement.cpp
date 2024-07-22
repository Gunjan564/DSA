//#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //optimal approach
    int arr[] = {5, 9, 3, 4, 8, 4, 3, 10};
    int largest = arr[0];
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << largest<<endl;
    //brute approach
    int nums[] = {5, 4, 3, 2, 1};
    for (int j = 0; j < sizeof(nums) / 4; j++){
        for (int i = 0; i < sizeof(nums) / 4; i++){
            if (nums[i] > nums[i + 1] && i < (sizeof(nums) / 4) - 1){
                swap(nums[i],nums[i+1]);
            }
        }
    }
    cout << nums[0]<<nums[1];    
}
