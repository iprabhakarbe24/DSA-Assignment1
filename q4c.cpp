#include<iostream>
using namespace std;
int main(){
    int r, c;

    cout<<"enter no. of rows and cols in the matrix:"<<endl;
    cin>>r>>c;
    int mat[r][c];
    cout<<"Enter elements of matrix\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
    int transmat[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transmat[j][i]=mat[i][j];
        }
    }
    cout<<"original matrix is:"<<endl;
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++){
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<"Transposed matrix is:"<<endl;
    for (int i=0;i<c;i++) {
        for (int j=0;j<r;j++){
            cout<<transmat[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}