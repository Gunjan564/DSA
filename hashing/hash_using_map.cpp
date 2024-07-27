#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    map<int,int > hash_map;
    for(int i=0;i<size;i++){
        hash_map[arr[i]]++;
    }
    int t,test;
    cin>>t;
    while(t>0){
        cin>>test;
        cout<<hash_map[test]<<endl;
        t--;
    }
return 0;
}