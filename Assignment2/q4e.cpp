#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"enter uppercase character:"<<endl;
    cin>>c;
    if(c>='A' && c<='Z') c=c+32;
    cout<<"lowercase: "<<c<<endl;
}
