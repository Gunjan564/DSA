#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5}, n = sizeof(a)/4,times=7;
    for (int k = 1; k <= times%n; k++)
    {
        for (int i = 0, j = n - 1; j > 0; j--)
        {
            swap(a[i],a[j]);
        }
    }
    cout << a[0] << a[1] << a[2] << a[3] << a[4];
}