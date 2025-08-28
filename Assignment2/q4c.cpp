#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[100];
    cout<<"enter string:"<<endl;
    cin>>s;
    int j=0;
    for(int i=0;s[i]!='\0';i++){
        if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
             s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')){
            s[j++]=s[i];
        }
    }
    s[j]='\0';
    cout<<"string without vowels: "<<s<<endl;
}
