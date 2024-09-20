#include <iostream>
using namespace std;
#include <bits/stdc++.h>
bool calculate_dis(int mid, vector<int>& stl, int c, int s)
{
    int down = 0;
    int cow = c;
    cow--;
    for (int up = 1; up < s; up++)
    {
        if (stl[up] - stl[down] >= mid)
        {
            cow--;
            down = up;
        }
        if (cow == 0)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t !=0)
    {
        int s;
        cin >> s;
        int c;
        cin >> c;
        vector<int> stl(s);
        for (int i = 0; i < s; i++)
        {
            cin >> stl[i];
        }
        int start = 1;
        int end = stl[s - 1] - stl[0];
        int mid = 0;
        int mini = 0;
        sort(stl.begin(), stl.end());
        for (; start <= end;)
        {
            mid = (start + end) / 2;
            bool ans = calculate_dis(mid, stl, c, s);
            if (ans == true)
            {
                start = mid + 1;
                mini = mid;
            }
            else
                end = mid - 1;
        }
        cout << mini;
        t--;
    }

    return 0;
}