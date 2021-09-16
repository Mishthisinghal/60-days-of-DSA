#include<bits/stdc++.h>
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
    sort(arr,arr+n);

    int l=0,h=n-1;
    

    int key,flag=0;
    cout<<"Enter the value to be searched-"<<endl;
    cin>>key;

    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]<key){
            l=m+1;
        }
        if(arr[m]>key){
            h=m-1;
        }
        if(arr[m]==key){
            cout<<"Element "<<key<<" found at "<<m<<" index"<<endl;
            flag=1;
            break;
        }
    }
    
    if(flag==0){
        cout<<"Element "<<key<<" not found in the array"<<endl;
    }

    return 0;
}