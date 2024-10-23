#include<iostream>
using namespace std;
class MyQueue
{
private: 
    int front;
    int qu[100];
    int rear;
public:
    void push(int);
    int pop();
};
void MyQueue::push(int x)
{
    front ++;
    qu[front]=x;
}
int pop()
{
    int x=qu[rear];
    rear++;
    return x;
}
int main()
{
    
return 0;
}