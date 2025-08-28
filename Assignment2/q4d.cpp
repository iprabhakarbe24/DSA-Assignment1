#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of strings:"<<endl;
    cin>>n;
    char s[20][50];
    for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(s[i],s[j])>0){
                char temp[50];
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    cout<<"sorted strings:"<<endl;
    for(int i=0;i<n;i++) cout<<s[i]<<endl;
}
