/*check wheher the bride or groom 
are eligible for marriage or not*/
//Check whether you are eligible to vote or not 
#include<iostream>
using namespace std;
int main()
{
    int age,age2;
    cout<<"Enter Bride's age: ";
    cin>>age;
    if (age>18 || age==18)
    {
        cout<<"Bride is eligible for marriage";
    }
    else
    {
        cout<<"Bride is not eligible for marriage"<<endl;
    }
    /*endl */
    cout<<"\nEnter Groom's age: ";
    cin>>age2;
    if (age2>21 || age2==21)
    {
        cout<<"Groom is eligible for marriage"<<endl;
    }
    else
    {
        cout<<"Groom is not eligible for marriage";
    }
}
