#include <iostream>
using namespace std;
int main()
{
    int n,sum, product, difference;
    for(;n!=0;)
    {
        sum = sum + n%10;
        product = product*(n%10);
        n=n/10;
    }
    difference = product - sum;
    return difference;
}
