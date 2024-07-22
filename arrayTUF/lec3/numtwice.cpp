#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,2,3,4,5},sum=0,i,originalsum;
    for(i=0;i<sizeof(a)/4;i++){
        sum=sum+a[i];
    }
    originalsum=((a[i-1])*(a[i-1]+1))/2;
    cout<<sum-originalsum;
}