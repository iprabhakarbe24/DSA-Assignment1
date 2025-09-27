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

void reverse(){
    Node* prev=NULL;
    Node* curr=head;
    Node* nxt=NULL;
    while(curr){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    head=prev;
}

void display(){
    Node* p=head;
    while(p){ cout<<p->data<<" "; p=p->next; }
    cout<<endl;
}

int main(){
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){ cin>>x; insertEnd(x); }
    reverse();
    display();
    return 0;
}
