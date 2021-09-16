#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key,flag=0;
    cout<<"Enter the value to be searched-"<<endl;
    cin>>key;

    for(int j=0;j<n;j++){
        if(arr[j]==key){
            cout<<"Element "<<key<<" found at "<<j<<" index"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Element "<<key<<" not found in the array"<<endl;
    }
    return 0;
}