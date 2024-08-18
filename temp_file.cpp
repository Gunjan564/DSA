#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int k=1;
    while (k<=t)
    {
    string str;
    cin>>str;
    char* p = &str[0];

    string samp;
    char* q = &samp[0];
    
        for (int i = 1,j=0;j<=2; i++)
        {
           if(*(p+i)!=*(p+i-1)&&j==0)
           {
            j++;
            samp[j]=str[i];
           }
           else if(*(p+i)!=*(p+i-1)&&(*(p+i)!=samp[0])&&*(p+i)!=samp[1])
           {
                j++;
                samp[j]=str[i];
                break; 
           }
        }
        int count=0;
        for(int i=0;i<str.size();i++)
        {
            if(*(p+i)==samp[0]||*(p+i)==samp[2])
            {
                count++;
            }
            else count--;
        }
        if(count==0)
        cout<<"YES\n";
        else cout<<"NO\n";
        k++;
        
    }
    
return 0;
}
