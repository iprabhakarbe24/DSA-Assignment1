#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
int prec(char c){if(c=='^')return 3;if(c=='*'||c=='/')return 2;if(c=='+'||c=='-')return 1;return -1;}
int main(){
    char infix[MAX],stack[MAX],postfix[MAX];int top=-1,k=0;
    cin>>infix;
    for(int i=0;i<strlen(infix);i++){
        char c=infix[i];
        if(isalnum(c)) postfix[k++]=c;
        else if(c=='(') stack[++top]=c;
        else if(c==')'){while(top!=-1&&stack[top]!='(') postfix[k++]=stack[top--];top--;}
        else{while(top!=-1&&prec(stack[top])>=prec(c)) postfix[k++]=stack[top--];stack[++top]=c;}
    }
    while(top!=-1) postfix[k++]=stack[top--];
    postfix[k]='\0';
    cout<<postfix;
}
