#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    int s[n*(n+1)/2];
    cout<<"enter lower triangular elements:"<<endl;
    for(int i=0;i<n*(n+1)/2;i++) cin>>s[i];
    cout<<"matrix:"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<s[k++]<<" ";
        }
        for(int j=i+1;j<n;j++){
            cout<<s[i*(i+1)/2+j]<<" "; // symmetric part
        }
        cout<<endl;
    }
}
