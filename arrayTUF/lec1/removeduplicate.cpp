#include <iostream>
using namespace std;
int main()
{
    int a[]={1,2,2,3,3,4},n=7,b[4];
    b[0]=a[0];
    for(int i=1,j=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            a[j]=a[i];
            j++;
        }
    }
    cout<<a[0]<<a[1]<<a[2]<<a[3];
}