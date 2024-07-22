#include <iostream>
using namespace std;
int main()
{
    int n, row, col, triangle;
    char alpha = 'A', letter;
    cin >> n;
    /*for (row = 1; row <= n; row++)
    {
        alpha = 'A' + n - row + 1;
        letter = alpha;
        for (col = 1; col <= row; col++)
        {
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if(col<=n-row+1)
            {
                cout <<"*"<< " ";
            }
            else
            cout<<"  ";
        }
        cout << endl;
    }
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if(col>=n-row+1)
            {
                cout <<row<< " ";
            }
            else
            cout<<"  ";
        }
        cout << endl;
    }
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if(col>=row)
            {
                cout <<"*"<< " ";
            }
            else
            cout<<"  ";
        }
        cout << endl;
    }
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if(col>=row)
            {
                cout <<row<< " ";
            }
            else
            cout<<"  ";
        }
        cout << endl;
    }
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if(col>=row)
            {
                cout <<col<< " ";
            }
            else
            cout<<"  ";
        }
        cout << endl;
    }*/
    for (row = 1; row <= n; row++)
    {
        triangle=1;
        for (col = 1; col <= 2*n; col++)
        {
            
            if(col<=n-1+row&&col>=n+2-row)
            {
                cout <<"* ";
                
            }
            else
            {
                cout <<triangle<<" ";
            }            
            if(col<n)
            {
                triangle++;
            }
            else if(col>n)
            {
                triangle--;
            }
        }
        cout << endl;
    }
}