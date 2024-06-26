#include <iostream>
using namespace std;
class Complex_Analysis
{
private:
    int a, b;
public:
    friend Complex_Analysis product(Complex_Analysis z1,Complex_Analysis z2);
    void setno(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void sum(Complex_Analysis z1,Complex_Analysis z2)
    {
        a=z1.a+z2.a;
        b=z1.b+z2.b;
        cout<<"z(sum) = "<<a<<" + "<<b<<"i"<<endl;
    }
    void print(void){
        cout<<"z(product) = "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex_Analysis product(Complex_Analysis z1,Complex_Analysis z2)
{

    // a=(z1.a*z2.a)-(z1.b-z2.b);
    // b=(z1.a*z2.b)+(z1.b*z2.a);
    //cout<<"z = "<<a<<" + "<<b<<"i"<<endl;
    //above three lines are invalid because you can't access 
    //private members of the class with the friend function 
    Complex_Analysis member ;
    member.setno( ((z1.a*z2.a)-(z1.b*z2.b)), ((z1.a*z2.b)+(z1.b*z2.a)));
    member.print();
};
int main()
{
    Complex_Analysis w1,w2,w3;
    w1.setno(2,3);
    w1.print();

    w2.setno(4,7);
    w2.print();

    w3.sum(w1,w2);
    product(w1,w2);

    return 0;
}