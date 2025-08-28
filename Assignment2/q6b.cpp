#include<iostream>
using namespace std;
struct element{int row,col,val;};
int main(){
    int n1,n2;
    cout<<"enter nonzero count of A and B:"<<endl;
    cin>>n1>>n2;
    element a[n1],b[n2],c[n1+n2];
    cout<<"enter A triplets:"<<endl;
    for(int i=0;i<n1;i++) cin>>a[i].row>>a[i].col>>a[i].val;
    cout<<"enter B triplets:"<<endl;
    for(int i=0;i<n2;i++) cin>>b[i].row>>b[i].col>>b[i].val;
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i].row<b[j].row || (a[i].row==b[j].row && a[i].col<b[j].col))
            c[k++]=a[i++];
        else if(b[j].row<a[i].row || (a[i].row==b[j].row && b[j].col<a[i].col))
            c[k++]=b[j++];
        else{
            c[k]=a[i];
            c[k++].val=a[i++].val+b[j++].val;
        }
    }
    while(i<n1) c[k++]=a[i++];
    while(j<n2) c[k++]=b[j++];
    cout<<"result triplets:"<<endl;
    for(int x=0;x<k;x++) cout<<c[x].row<<" "<<c[x].col<<" "<<c[x].val<<endl;
}
