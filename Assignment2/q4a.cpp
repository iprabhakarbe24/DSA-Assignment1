#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[50],s2[50];
    cout<<"enter first string:"<<endl;
    cin>>s1;
    cout<<"enter second string:"<<endl;
    cin>>s2;
    strcat(s1,s2);
    cout<<"concatenated string: "<<s1<<endl;
}
