#include<iostream>
using namespace std;
int main(){
    int a[]={64,34,25,12,22,11,90};
    int n=7;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"sorted array:"<<endl;
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
