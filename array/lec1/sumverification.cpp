#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5},
    n=sizeof(a)/4, sum=6;
    for (int i = 0; i < n; i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[j]+a[i]==sum)
            {
                cout<<i<<j;
                break;
            }
        }
    }
    return 0;
}
