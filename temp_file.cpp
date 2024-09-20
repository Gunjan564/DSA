#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(i<=t)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int j=1;
        bool ans=true;
        for(;j<n;)
        {
                if(str[j]!=str[j+1])
                {
                    ans=false;
                    break;
                }
            j+=3;
        }
        if(ans==true)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        i++;
    }
return 0;
}