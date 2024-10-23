#include<bits/stdc++.h>
#define EPSILON 0.000001
using namespace std;
double funcx(double y,double z){
return (17-(1*y)+(2*z))/20;
}
double funcy(double x,double z){
return (-18-(3*x)+z)/20;
}
double funcz(double x,double y){
return (25-(2*x)-(3*y))/20;
}
void jacobi(double x,double y,double z){
double x_new, y_new, z_new;
int maxI=100;
int i= 0;
cout<< endl<<"\tx_new\t\t\ty_new\t\t\tz_new"<< endl;
while(i<maxI) {
x_new = funcx(y, z);
y_new = funcy(x, z);
z_new = funcz(x, y);
if (fabs(x_new-x)<EPSILON && fabs(y_new-y)<EPSILON && fabs(z_new-z)<EPSILON)
{
break;
}
x=x_new;
y=y_new;
z=z_new;
i++;
cout <<"\t"<<x<<"\t\t"<<y<<"\t\t"<<z<< endl;
}
cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
}
int main(){