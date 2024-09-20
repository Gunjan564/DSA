#include <iostream>
using namespace std;
int main()
{
    char c;
    int asciivalue;
    cout << "Enter the character: ";
    cin >> c;
    asciivalue = c;
    if (97<=asciivalue&&asciivalue<=122)
    {
        cout << "This is lowercase";
    }
    else if (65<=asciivalue&&asciivalue<=90)
    {
        cout << "This is Uppercase";
    }
    else if (48<=asciivalue&&asciivalue<=57)
    {
        cout << "This is numeric";
    }
    else
    {
        cout << "Other character";
    }

    return 0;
}