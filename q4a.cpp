#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input the number of elements in the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Input the array contents:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    } 

    cout<<"Reversed array is:"<<endl;
    for(int i=0;i<n;i++){
    
        cout<<arr[i]<<endl;
    }

    return 0;
}