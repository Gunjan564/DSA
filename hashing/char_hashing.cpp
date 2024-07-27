#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int hash_array[27]={0};
    for(int i=0;i<str.length();i++)
    {
        hash_array[(str[i])-'a']++;
    }
    int t;
    char test_character;
    cin>>t;
    while(t>0)
    {
        cin>>test_character;
        cout<<hash_array[(test_character)-'a']<<endl;
        t--;
    }
return 0;
}