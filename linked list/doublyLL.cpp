#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
    node* prev;
    node(int data1)
    {
        data=data1;
        next = nullptr;
        prev=nullptr;
    }    
};
node* convertArrToDoublyLL(vector<int> arr){

    node* head = new node(arr[0]);
    node* mover = head;
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        temp->prev=mover;
        mover = temp;

    }
    return head;
}

void traverseLL(node* head){
    while(head!=nullptr){
        cout <<head->data <<" ";
        head = head->next;
        if(head->next==nullptr)
        {
            cout<<head->data;
            cout<<endl;
            while(head!=nullptr)
            {
                cout <<head->data <<" ";
                head = head->prev;
            }
            cout<<endl;
            break;
        }
    }
}

node* DeleteHead(node* head)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    node* new_head=head->next;
    head->next=nullptr;
    new_head->prev=nullptr;
    return new_head;
}
node* DeleteTail(node* head)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    node*temp=head;
    while(temp!=nullptr)
    {
        temp=temp->next;
        if(temp->next==nullptr)
        {
            node* newTail;
            newTail=temp->prev;
            newTail->next=nullptr;
            temp->prev=nullptr;
            break;
        }
    }
    return head;
}
node* Delete_Kth_ele(node* head,int k)
{
    if(head==nullptr||head->next==nullptr)
    {
        return head;
    }
    int count=1;
    node* temp=head;
    node* mover;
    while(count<=k)
    {
        if(count==k)
        {
            if(temp->next==nullptr)
            {
                mover=temp->prev;
                mover->next=nullptr;
                temp->prev=nullptr;
                break;
            }
            else if(temp->prev==nullptr)
            {
                mover=temp->next;
                mover->prev=nullptr;
                temp->next=nullptr;
                return mover;
            }
            mover=temp->prev;
            mover->next=temp->next;
            mover=temp->next;
            mover->prev=temp->prev;
            break;
        }
        temp=temp->next;
        count++;

    }
    return head;
}
node* Insert_head(node* head,node* new_head)
{
    new_head->next=head;
    head->prev=new_head;
    return new_head;
}
node* Insert_tail(node* head,node* new_tail)
{
    node* temp=head;
    while(temp!=nullptr)
    {
        temp=temp->next;
        if(temp->next==nullptr)
        {
            temp->next=new_tail;
            new_tail->prev=temp;
            return head;
        }
    }
}
node* Insert_node(node* head,node* new_node,int k)
{
    node* temp=head;
    int count=1;
    while(temp!=nullptr)
    {
        if(count==k)
        {
            if(temp->next==nullptr)
            {
                head=Insert_tail(head,new_node);
                return head;
            }
            else if(temp->prev==nullptr)
            {
                head=Insert_head(head,new_node);
                return head;
            }
            else{
                node*mover=temp->prev;
                mover->next=new_node;
                new_node->prev=mover;
                temp->prev=new_node;
                new_node->next=temp;
                return head;
            }
        }
        temp=temp->next;
        count++;
    }
}
int main(){
    vector<int> arr = {11,2,3,4,5,6,7,8,9};
    node* head = convertArrToDoublyLL(arr);
    // cout << head->data;
    cout<<"Traverse: "<<endl;
    traverseLL(head);
    cout<<"Delete head: "<<endl;
    head=DeleteHead(head);
    traverseLL(head);
    cout<<"Delete Tail: "<<endl;
    head=DeleteTail(head);
    traverseLL(head);
    cout<<"Delete kth element: "<<endl;
    head=Delete_Kth_ele(head,4);
    traverseLL(head);
    cout<<"Insert head node: "<<endl;
    node* new_head=new node(100);
    head=Insert_head(head,new_head);
    traverseLL(head);
    cout<<"Insert tail node: "<<endl;
    node* new_tail=new node(876);
    head=Insert_tail(head,new_tail);
    traverseLL(head);
    cout<<"Insert node at kth position: "<<endl;
    node* new_node=new node(712);
    head=Insert_node(head,new_node,4);
    traverseLL(head);
}