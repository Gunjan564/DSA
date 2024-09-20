#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int data1)
    {
        data=data1;
        next = nullptr;
    }    
};

node* convertArrToLL(vector<int> arr){

    node* head = new node(arr[0]);
    node* mover = head;
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void traverseLL(node* head){
    while(head!=nullptr){
        cout <<head->data <<" ";
        head = head->next;
    }
}

int main(){
    vector<int> arr = {11,2,3,4,5,6,7,8,9};
    node* head = convertArrToLL(arr);
    // cout << head->data;
    traverseLL(head);
}
