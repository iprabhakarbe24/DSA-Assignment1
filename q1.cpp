#include<iostream>
using namespace std;
int main(){
    int arr[100],n=0,ch,pos,val,key;
    while(true){
        cout<<"-----MENU-----\n";
        cout<<"1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n";
        cout<<"Enter choice:";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"enter number of elements:";
                cin>>n;
                cout<<"enter elements:";
                for(int i=0;i<n;i++){
                    cin>>arr[i];
                }
                break;
            case 2:
                cout<<"array elements:";
                for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                break;
            case 3:
                cout<<"enter position and value:";
                cin>>pos>>val;
                for(int i=n;i>pos;i--){
                    arr[i]=arr[i-1];
                }
                arr[pos]=val;
                n++;
                break;
            case 4:
                cout<<"enter position to delete:";
                cin>>pos;
                
                for(int i=pos;i<n-1;i++){
                    arr[i]=arr[i+1];
                }
                n--;
                
                break;
            case 5:
                cout<<"enter value to search:";
                cin>>key;
                {
                    int f=-1;
                    for(int i=0;i<n;i++){
                        if(arr[i]==key){
                            f=i;
                            break;
                        }
                    }
                    if(f!=-1)
                        cout<<"element found at position:"<<f<<endl;
                    else
                        cout<<"element not found\n";
                }
                break;
            case 6:
                return 0;
            default:
                cout<<"invalid choice\n";
        }
    }
}
