#include <iostream>
using namespace std;
int main()
{
     int i,ar[8]={1,2,2,3,3},different=0,a=4,b=5;
    for(i=0;i<=4;i++)
    {
        different ^= ar[i];
    }
    cout<<different<<endl;
    //swap two numbers using bitwise operator  
    cout<<"Before Swapping: "<<endl<<"a = "<<a<<" b = "<<b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"\nAfter Swapping: "<<endl<<"a = "<<a<<" b = "<<b;
}