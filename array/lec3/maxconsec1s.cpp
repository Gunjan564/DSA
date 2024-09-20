#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,1,0,1,1,1,0,1},count=0;
    for(int i=0;i<sizeof(arr)/4;i++){
        if(arr[i]==0){
            count=0;
        }
        else count++;
    }
    cout<<count;
}