#include<iostream>
using namespace std;
struct element{int row,col,val;};
int main(){
    int r,c,n;
    cout<<"enter rows cols and nonzero count:"<<endl;
    cin>>r>>c>>n;
    element a[n],b[n];
    cout<<"enter triplets (row col val):"<<endl;
    for(int i=0;i<n;i++) 
      cin>>a[i].row>>a[i].col>>a[i].val;
    for(int i=0;i<n;i++){
        b[i].row=a[i].col;
        b[i].col=a[i].row;
        b[i].val=a[i].val;
    }
    cout<<"transpose triplets:"<<endl;
    for(int i=0;i<n;i++) cout<<b[i].row<<" "<<b[i].col<<" "<<b[i].val<<endl;
}
