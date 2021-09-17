#include<iostream>
using namespace std;

void traversal(int size,int *a){
    for(int j=0;j<size;j++){
        cout<<a[j]<<" ";
    }
    cout<<endl;
}

void insertionsort(int n,int *a){
    int temp;
    for(int i=1;i<n;i++){
        int val=a[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]>val){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
        }else{
            a[j+1]=val;
            break;
        }
    }
}
}
int main(){
    int n;
    cout<<"Enter the number of elements of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting:"<<endl;
    traversal(n,arr);
    insertionsort(n,arr);
    cout<<"After sorting:"<<endl;
    traversal(n,arr);
    return 0;
}