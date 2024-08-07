#include<iostream>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int* bubble_sort(int arr[],int n)
{
    int End=n;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<End-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        End--;
    }
    return arr;
}
int main()
{
    int n;
    n=5;
    int arr[n]={91, 23, 32, 74, 6};
    
    int *sorted_array=bubble_sort( arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<sorted_array[i]<<" ";
    }
    
return 0;
}