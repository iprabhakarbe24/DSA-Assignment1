#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++) cin>>a[i];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]) count++;
        }
    }
    cout<<"no. of inversions: "<<count<<endl;
}
