#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head=NULL;

void insertEnd(int x){
    Node* t=new Node;
    t->data=x;
    t->next=NULL;
    if(head==NULL){ head=t; return; }
    Node* p=head;
    while(p->next) p=p->next;
    p->next=t;
}

void middle(){
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(slow) cout<<slow->data<<endl;
}

int main(){
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){ cin>>x; insertEnd(x); }
    middle();
    return 0;
}
