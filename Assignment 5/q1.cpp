#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head=NULL;

void insertBeg(int x){
    Node* t=new Node;
    t->data=x;
    t->next=head;
    head=t;
}

void insertEnd(int x){
    Node* t=new Node;
    t->data=x;
    t->next=NULL;
    if(head==NULL){ head=t; return; }
    Node* p=head;
    while(p->next) p=p->next;
    p->next=t;
}

void insertBefore(int val,int x){
    if(head==NULL) return;
    if(head->data==val){ insertBeg(x); return; }
    Node* p=head;
    while(p->next && p->next->data!=val) p=p->next;
    if(p->next){
        Node* t=new Node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}

void insertAfter(int val,int x){
    Node* p=head;
    while(p && p->data!=val) p=p->next;
    if(p){
        Node* t=new Node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}

void deleteBeg(){
    if(head==NULL) return;
    Node* t=head;
    head=head->next;
    delete t;
}

void deleteEnd(){
    if(head==NULL) return;
    if(head->next==NULL){ delete head; head=NULL; return; }
    Node* p=head;
    while(p->next->next) p=p->next;
    delete p->next;
    p->next=NULL;
}

void deleteVal(int x){
    if(head==NULL) return;
    if(head->data==x){ Node* t=head; head=head->next; delete t; return; }
    Node* p=head;
    while(p->next && p->next->data!=x) p=p->next;
    if(p->next){ Node* t=p->next; p->next=p->next->next; delete t; }
}

void search(int x){
    Node* p=head; int pos=1;
    while(p){ if(p->data==x){ cout<<"Found at position "<<pos<<endl; return;} p=p->next; pos++; }
    cout<<"Not found"<<endl;
}

void display(){
    Node* p=head;
    while(p){ cout<<p->data<<" "; p=p->next; }
    cout<<endl;
}

int main(){
    int ch,x,val;
    while(1){
        cout<<"1.InsertBeg 2.InsertEnd 3.InsertBefore 4.InsertAfter 5.DeleteBeg 6.DeleteEnd 7.DeleteVal 8.Search 9.Display 0.Exit\n";
        cin>>ch;
        if(ch==0) break;
        if(ch==1){cin>>x; insertBeg(x);}
        else if(ch==2){cin>>x; insertEnd(x);}
        else if(ch==3){cin>>val>>x; insertBefore(val,x);}
        else if(ch==4){cin>>val>>x; insertAfter(val,x);}
        else if(ch==5){deleteBeg();}
        else if(ch==6){deleteEnd();}
        else if(ch==7){cin>>x; deleteVal(x);}
        else if(ch==8){cin>>x; search(x);}
        else if(ch==9){display();}
    }
    return 0;
}
