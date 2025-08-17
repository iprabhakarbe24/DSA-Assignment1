#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout<<"enter rows and cols for first matrix ";
    cin>>r1>>c1;
    cout << "enter rows and cols for second matrix ";
    cin>>r2>>c2;


    if (c1!=r2) {
        cout<<"multiplication not possible\n";
        return 0;
    }
    int A[r1][c1], B[r2][c2], C[r1][c2];
    cout<<"enter elements of first matrix:\n";
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            cin>>A[i][j];
        }    
    }
    cout<<"enter elements of second matrix:\n";
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            cin>>B[i][j];
        }
    }
    for (int i=0;i<r1;i++){
        for (int j=0; j<c2;j++){
            for (int k=0;k<c1;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout<< "Resultant matrix:\n";
    for (int i=0;i<r1;i++) {
        for (int j=0; j<c2;j++){
            cout<<C[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}
