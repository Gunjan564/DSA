#include <iostream>
using namespace std;
int main()
{
    int a[]={1,2,4,5},n;
    cin>>n;
    for(int i=0;i<n;)
    {
        if(a[i]==n)
        {
            cout<<i;
        }
        i++;
    }
}