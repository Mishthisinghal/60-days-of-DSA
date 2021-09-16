#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int l,int h,int k){
    int m=(l+h)/2;
    int flag=0;
    while(l<=h){
        if(arr[m]<k){
            return binary(arr,m+1,h,k);
        }
        if(arr[m]>k){
            return binary(arr,l,m-1,k);
        }
        if(arr[m]==k){
            cout<<"Element "<<k<<" found at "<<m<<" index in sorted array"<<endl;
            flag =1;
            return 1;
            break;
        }

    }
    if(flag==0){
        cout<<"Element "<<k<<" not found in array"<<endl;
        return 0;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array-"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int key;
    cout<<"Enter the element to be searched in array-"<<endl;
    cin>>key;
    binary(a,0,n-1,key);
    return 0;
}