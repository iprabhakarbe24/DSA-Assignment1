#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    int u[n*(n+1)/2];
    cout<<"enter upper triangular elements:"<<endl;
    for(int i=0;i<n*(n+1)/2;i++) cin>>u[i];
    cout<<"matrix:"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j) cout<<u[k++]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
