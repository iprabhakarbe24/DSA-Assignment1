#include <iostream>
#include <cstring>
using namespace std;
#define MAX 100
int main(){
    char str[MAX],stack[MAX];
    int top=-1;
    cin>>str;
    int n=strlen(str);
    for(int i=0;i<n;i++) stack[++top]=str[i];
    for(int i=0;i<n;i++) cout<<stack[top--];
}
