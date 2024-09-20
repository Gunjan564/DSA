#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    cout <<"a = "<< a <<endl;

    char hello = 'v';
    cout<< "hello = "<< hello<<"\n" ;

    bool bo = true;
    cout<< "bo = " << bo<<"\n";

    float f=2.5;
    cout<<"f= "<<f<<"\n";

    double d= 1.2564;
    cout<<"d = "<<d<<"\n";

    cout<<"size of int = "<<sizeof(int)<<"\n";
    cout<<"size of float = "<<sizeof(float)<<"\n";
    cout<<"size of char = "<<sizeof(char)<<"\n";
    cout<<"size of double = "<<sizeof(double)<<"\n";
    cout<<"size of long = "<<sizeof(long)<<"\n";
    
    bool check = (f==d);
    cout<<"check = "<<check<<"\n";

    bool checkagain = (f!=d);
    cout<<"checkagain = "<<checkagain;

    return 0;
}