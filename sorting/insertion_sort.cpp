#include<iostream>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int* insertion_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            for(int j=i;j>=0;)
            {
                swap(arr[j],arr[j+1]);
                j--;
                if(arr[j]<=arr[j+1])
                {
                    break;
                }
            }
        }
    }
    return arr;
}
int main()
{
    int n=8;
    int arr[n]={2,1,5,3,7,29,7,4};
    int *sorted_array=insertion_sort( arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<sorted_array[i]<<" ";
    }
return 0;
}