/*two types of loops = Entry level and Exit level*/
// pattern printing
#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 4; row++)
    {
        for (int row = 0; row < 4; row++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}