#include<iostream>
using namespace std;

#define MAX 100   

int stack[MAX];
int top=-1;

//function to check if full
bool isFull(){
    return top==MAX-1;
}

//function to check if empty
bool isEmpty(){
    return top==-1;
}

//push
void push(int x){
    if(isFull()) cout<<"stack overflow"<<endl;
    else{
        stack[++top]=x;
        cout<<x<<" pushed"<<endl;
    }
}

//pop
void pop(){
    if(isEmpty()) cout<<"stack underflow"<<endl;
    else{
        cout<<stack[top]<<" popped"<<endl;
        top--;
    }
}

//peek
void peek(){
    if(isEmpty()) cout<<"stack is empty"<<endl;
    else cout<<"top element: "<<stack[top]<<endl;
}

//display
void display(){
    if(isEmpty()) cout<<"stack is empty"<<endl;
    else{
        cout<<"stack elements:"<<endl;
        for(int i=top;i>=0;i--) cout<<stack[i]<<" ";
        cout<<endl;
    }
}

int main(){
    int ch,val;
    while(1){
        cout<<"\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.isFull\n6.isEmpty\n7.Exit\n";
        cout<<"enter choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1: cout<<"enter value:"<<endl;
                    cin>>val;
                    push(val);
                    break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: if(isFull()) cout<<"stack is full"<<endl;
                    else cout<<"stack not full"<<endl;
                    break;
            case 6: if(isEmpty()) cout<<"stack is empty"<<endl;
                    else cout<<"stack not empty"<<endl;
                    break;
            case 7: return 0;
            default: cout<<"invalid choice"<<endl;
        }
    }
}
