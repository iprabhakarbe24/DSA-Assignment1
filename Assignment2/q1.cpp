#include<iostream>
using namespace std;
int main(){
    int n,i,key;
    cout<<"enter size of array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements:"<<endl;
    for(i=0;i<n;i++) cin>>a[i];
    cout<<"enter element to search:"<<endl;
    cin>>key;

    int l=0,h=n-1,mid,flag=0;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==key){ flag=1; break; }
        else if(a[mid]<key) l=mid+1;
        else h=mid-1;
    }
    if(flag==1) cout<<"element found at index "<<mid<<endl;
    else cout<<"not found"<<endl;
}
