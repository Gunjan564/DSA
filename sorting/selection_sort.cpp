#include<iostream>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
//Selection sort with library function
int* selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int maxElementindex=distance(arr,max_element(arr+i,arr+n));
        swap(arr[maxElementindex],arr[i]);        
    }
    return arr;
}
//Selection sort without library function
// int* selection_sort(int arr[],int n)
// {
//     int minElement,index=0;
//     for(int i=0;i<n-1;i++)
//     {
//         minElement=arr[i];
//         index =i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<minElement)
//             {
//                 minElement=arr[j];
//                 index=j;
//             }
//         }  
//         if(i!=index)
//         {
//             swap(arr[i],arr[index]); 
//         }  
//     }
//     return arr;
// }
int main()
{
    int arr[]={2,6,4,8,4,1,6,4,5,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *sorted_array=selection_sort( arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<sorted_array[i]<<" ";
    }
    
return 0;
}