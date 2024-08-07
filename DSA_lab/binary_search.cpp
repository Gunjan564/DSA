#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(int n,int arr[],int k){
    int low=0,high=n-1,m;
    sort(arr,arr+n);
    for(int i=0;;){
        m=(low+high)/2;
        if(k==arr[m])
        {
            return 1;
        }
        else if(k<arr[m])
        {
            low=0;
            high=m-1;
        }
        else if(k>arr[m])
        {
            low=m+1;
            high =n-1;
        }
        if(low>high)
        break;
    }
    return 0;
}
int main()
{
    int arr[]={1,3,6,2,4,7,7,5,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter an integer for binary search: ";
    cin>>k;
    int result=binary_search(n,arr,k);
    cout<<result;
return 0;
}