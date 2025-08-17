#include<iostream>
using namespace std;
int remDup(int arr[],int n){
    
    int j=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j++]=arr[i];        
        }   
    }
    arr[j++]=arr[n-1];
   return j;
}
int main(){
    cout<<"Input the number of elements in the array:\n";
    int n; 
    cin>>n;
    int arr[n];
    int i;
    cout<<"Input the array contents(sorted):\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    n=remDup(arr,n);
    cout<<"Array after removing duplicates:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}