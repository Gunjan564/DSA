#include<iostream>
using namespace std;
void traverse_array(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    traverse_array(arr,size);
    //array insertion at start
    //cin>>arr[size-1];
    //array insertion at the end
    for(int i=size-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    cin>>arr[0];
    traverse_array(arr,size);    
    int twoD_arr[3][4]={};
return 0;
}