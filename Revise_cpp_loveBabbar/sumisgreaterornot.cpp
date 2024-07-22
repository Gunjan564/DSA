// first code of c++ endeavour
// sum is greater then 10 or not
#include <iostream>
using namespace std;
int main()
{
    int a, b, i = 9;
    // float b;
    cout<<"Enter the value of a: ";
    cin>> a;
    cout<<"Enter the value of b: ";
    cin >> b;
    cout << "sum: "<<a + b<<endl;
    if (a + b > 10)
    {
        cout << "\nSum is greater than 10";
    }
    // cout<<"int "<<i<<" and";//no need to right %d, just right the variable name after <<
    else{
        cout<<"Sum is smaller than 10";
    }
    return 0;
}
