#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
int main(){
    char exp[MAX],stack[MAX];
    int top=-1,ok=1;
    cout<<"Enter the expression:"<<endl;
    cin>>exp;
    for(int i=0;i<strlen(exp);i++){
        if(exp[i]=='(') stack[++top]=exp[i];
        else if(exp[i]==')'){
            if(top==-1){
             ok=0;
             break;
             }
            char c=stack[top--];
            if((exp[i]==')'&&c!='(')){ok=0;break;}
        }
    }
    if(top!=-1) ok=0;
    cout<<(ok?"Balanced":"Not Balanced");
}
