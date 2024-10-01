
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int row;
        cin >> row;
        int col;
        cin >> col;
        int arr[row][col];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
        }
        map<int,int> swapping ;
        map<int,int> no_swap;
        vector<int> swap_arr;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col-1; j++)
            {
                
                if (arr[i][j] > arr[i][j + 1])
                {
                    
                    swap_arr.push_back(j);
                    swapping[j]++;
                }
                else if(arr[i][j] < arr[i][j + 1])
                {
                    no_swap[j]++;
                }
                if(j==col-2&&arr[i][j] > arr[i][j + 1])
                {
                    cout<<col-1;
                }
            }
        }
        swap(swap_arr.begin(),swap_arr.end());
        cout<<swap_arr;
        t--;
    }
    return 0;
}
