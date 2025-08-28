#include<iostream>
using namespace std;
struct element{int row,col,val;};
int main(){
    int r1,c1,r2,c2,n1,n2;
    cout<<"enter rows cols of A:"<<endl;
    cin>>r1>>c1;
    cout<<"enter nonzero count:"<<endl;
    cin>>n1;
    element a[n1];
    for(int i=0;i<n1;i++) cin>>a[i].row>>a[i].col>>a[i].val;

    cout<<"enter rows cols of B:"<<endl;
    cin>>r2>>c2;
    cout<<"enter nonzero count:"<<endl;
    cin>>n2;
    element b[n2];
    for(int i=0;i<n2;i++) cin>>b[i].row>>b[i].col>>b[i].val;

    if(c1!=r2){ cout<<"cannot multiply"<<endl; return 0; }

    int res[r1][c2];
    for(int i=0;i<r1;i++) for(int j=0;j<c2;j++) res[i][j]=0;

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i].col==b[j].row){
                res[a[i].row][b[j].col]+=a[i].val*b[j].val;
            }
        }
    }
    cout<<"result matrix:"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++) cout<<res[i][j]<<" ";
        cout<<endl;
    }
}
