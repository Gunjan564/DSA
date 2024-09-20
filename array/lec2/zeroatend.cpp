#include <iostream>
using namespace std;
int main()
{
    int a[] = {2, 3, 0, 1, 4, 6, 3}, n = sizeof(a) / 4, j = n -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            swap(a[i],a[j]);
            j--;
            n--;
        }
    }
    cout << a[0] << a[1] << a[2] << a[3] << a[4] << a[5] << a[6];
}