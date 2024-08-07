#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=n;
    for (int i = 1; i <=(n*2)-1;i++ )
    {
        for(int j=1;j<=f;j++)
        {
            cout<<"* ";
        }
        if(i<n)
        f--;
        else if(i>=n)
        f++;
        cout<<endl;
    }
    
return 0;
}