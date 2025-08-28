#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of diagonal matrix:"<<endl;
    cin>>n;
    int d[n];
    cout<<"enter diagonal elements:"<<endl;
    for(int i=0;i<n;i++) cin>>d[i];
    cout<<"matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) cout<<d[i]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
