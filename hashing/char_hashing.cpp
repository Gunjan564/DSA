#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    // /----character hashing for lower case letters(same for uppercase letter)
    // int hash_array[27]={0};
    // for(int i=0;i<str.length();i++)
    // {
    //     hash_array[(str[i])-'a']++;
    // }
    // int t;
    // char test_character;
    // cin>>t;
    // while(t>0)
    // {
    //     cin>>test_character;
    //     cout<<hash_array[(test_character)-'a']<<endl;
    //     t--;
    // }
    // charater hashing for other letters or both uppercase and lowercase
    int hash_array[256]={0};
    for(int i=0;i<str.length();i++)
    {
        hash_array[str[i]]++;
    }
    int t;
    cin>>t;
    char test_character;
    while(t>0)
    {
        cin>>test_character;
        cout<<hash_array[test_character]<<endl;
        t--;
    }
return 0;
}