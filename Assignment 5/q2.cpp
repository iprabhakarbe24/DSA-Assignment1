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

void countDelete(int key){
    int c=0;
    while(head && head->data==key){ Node* t=head; head=head->next; delete t; c++; }
    Node* p=head;
    while(p && p->next){
        if(p->next->data==key){ Node* t=p->next; p->next=p->next->next; delete t; c++; }
        else p=p->next;
    }
    cout<<"Count: "<<c<<endl;
}

void display(){
    Node* p=head;
    while(p){ cout<<p->data<<" "; p=p->next; }
    cout<<endl;
}

int main(){
    int n,x,key;
    cin>>n;
    for(int i=0;i<n;i++){ cin>>x; insertEnd(x); }
    cin>>key;
    countDelete(key);
    display();
    return 0;
}
