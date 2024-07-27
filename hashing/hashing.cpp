#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int *maxElement = max_element(arr, arr + size);
    int hash_array[*maxElement + 1] = {0};
    for (int i = 0; i < size; i++)
    {
        hash_array[arr[i]] += 1;
    }
    int t, test_number;
    cin >> t;
    while (t--)
    {
        cin >> test_number;
        cout << hash_array[test_number] << endl;
    }
    return 0;
}