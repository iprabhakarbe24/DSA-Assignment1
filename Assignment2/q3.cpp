#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    int diff=a[0]-0,missing=-1;
    for(int i=0;i<n;i++){
        if(a[i]-i!=diff){
            missing=i+diff;
            break;
        }
    }
    if(missing!=-1) cout<<"missing number is "<<missing<<endl;
    else cout<<"no missing number"<<endl;
}
