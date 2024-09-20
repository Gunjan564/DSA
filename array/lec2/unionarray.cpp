#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 2, 3, 4, 5}, b[] = {2, 3, 3, 5, 6, 6}, n, i, j;
    int u[sizeof(a) + sizeof(b)];
    n= sizeof(a) + sizeof(b);
    for (int i = 0, j = 0, k = 0; i < n; i++)
    {
        for(;a[j] == a[j + 1];)
        {
            j++;
        }
        for (;b[k] == b[k + 1];)
        {
            k++;
        }
        if (a[j] < b[k])
        {
            u[i] = a[j];
            j++;
        }
        else if (a[j] > b[k])
        {
            u[i] = b[k];
            k++;
            continue;
        }
        else if (a[j] == b[k])
        {
            u[i] = a[j];
            j++;
            k++;
        }
    }
    cout << u[0] << u[1] << u[2] << u[3] << u[4] << u[5]; 
}