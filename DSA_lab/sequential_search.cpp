#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool sequential_search(int n,int arr[],int k){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==k)
        {
            return true;
        }
    }
    return false;
    
}
int main()
{
    int arr[]={1,3,6,2,4,7,7,5,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter an integer for linear search: ";
    cin>>k;
    int result=sequential_search(n,arr,k);
    cout<<result;
return 0;
}