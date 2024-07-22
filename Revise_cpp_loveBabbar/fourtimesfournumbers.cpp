#include <iostream>
using namespace std;
int main()
{
    int row, i = 1, n;
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        for (;; i++)
        {
            cout << i << " ";
            if (i % n == 0)
            {
                i++;
                break;
            }
        }
        cout << endl;
    }
}