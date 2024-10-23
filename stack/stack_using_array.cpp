#include<iostream>
using namespace std;
class MyStack
{
private: 
    int st[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
void MyStack::push(int x)
{
    top++;
    st[top]=x;
}
int MyStack::pop()
{
    int x=st[top];
    if(top==-1)
    {}
    else top--;
}
int main()
{
    
return 0;
}