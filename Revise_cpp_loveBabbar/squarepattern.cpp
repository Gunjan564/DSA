// pattern printing
#include <iostream>
using namespace std;
int main()
{
    int i, r, x, n;
    cout << "GUNJAN" << endl;
    cout << "Enter the number of squares you want to print: ";
    cin >> n;
    for (x = 1; x <= n; x++)
    {
        for (i = 1; i < 5; i++)
        {
            for (r = 1; r < 5; r++)
            {
                if ((i == 2 && r == 2) || (i == 2 && r == 3) || (i == 3 && r == 2) || (i == 3 && r == 3))
                {
                    cout << "  ";
                    continue;
                }
                cout << "* ";
            }
            cout << endl;
        }
        cout << endl;
    }
    int row, col,count;
    char alpha='A';
    for (row = 1; row <= n; row++)
    {
        
        for (col = 1;col<=n;col++)
        {
            cout <<alpha<<" ";
            alpha++;
        }
        alpha=alpha-2;
        cout << endl;
    }
}