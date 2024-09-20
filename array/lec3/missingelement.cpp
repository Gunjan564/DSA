#include <iostream>
using namespace std;
int main()
{
    int a[]={1,2,4,5},sum=0,originalsum,i,j;
    //brute approach
    for(i=1;i<sizeof(a)/4;i++){
        if(a[i]-a[i-1]!=1){
            cout<<a[i]-1;
            break;
        }
    }
    //optimal approach
    for(i=0;i<sizeof(a)/4;i++){
        sum=sum+a[i];
    }
    originalsum=((a[i-1])*(a[i-1]+1))/2;
    cout<<originalsum-sum;
    //another approach
    for(i=0,j=1;i<sizeof(a)/4;j++,i++){
        if((a[i]^j)!=0){
            cout<<j;
            break;
        }
    }
}
