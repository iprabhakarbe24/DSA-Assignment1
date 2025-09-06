#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
#define MAX 100
int main(){
    char exp[MAX];int stack[MAX],top=-1;
    cin>>exp;
    for(int i=0;i<strlen(exp);i++){
        char c=exp[i];
        if(isdigit(c)) stack[++top]=c-'0';
        else{
            int b=stack[top--],a=stack[top--];
            if(c=='+') stack[++top]=a+b;
            else if(c=='-') stack[++top]=a-b;
            else if(c=='*') stack[++top]=a*b;
            else if(c=='/') stack[++top]=a/b;
            else if(c=='^') stack[++top]=pow(a,b);
        }
    }
    cout<<stack[top];
}
