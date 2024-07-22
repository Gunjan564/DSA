//arrray is stored in contigous memory
#include<iostream>
using namespace std;
int main()
{
    //Array
    int i,marks[10];//[]tells that the variable is an array
    //Assigning the value to array
    for(i=1;i<=10;i++)
    {
        cout<<"Enter the marks of Roll.no."<<i<<": ";
        cin>>marks[i];
    }
    cout<<"Enter the roll no. of the student whom marks you want to know: ";
    cin>>i;
    cout<<marks[i];
    return 0;
}