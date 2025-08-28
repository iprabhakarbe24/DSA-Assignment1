#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    int t[3*n-2]; // tri-diagonal storage
    cout<<"enter elements row by row:"<<endl;
    for(int i=0;i<3*n-2;i++) cin>>t[i];
    cout<<"matrix:"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i-j==0 || i-j==1 || j-i==1) cout<<t[k++]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
