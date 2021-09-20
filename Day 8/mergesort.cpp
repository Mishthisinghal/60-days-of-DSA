#include<iostream>
using namespace std;

void merge(int low,int mid,int high,int a[]){
    int i=low;
    int j=mid+1;
    int b[high];
    int k=low;
    while(i<=mid && j<=high){
    if(a[i]<a[j]){
        b[k]=a[i];
        i++;
        k++;
     }
    else if(a[i]>a[j]){
        b[k]=a[j];
        j++;
        k++;
    }
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }

    while(j<=high){
        b[k]=a[j];
        j++;
        k++;
    }

    for(int i=low;i<=high;i++){
        a[i]=b[i];
    }

}

void mergesort(int l,int h,int a[]){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(l,mid,a);
        mergesort(mid+1,h,a);
        merge(l,mid,h,a);
    }
}

void traversal(int n,int a[]){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
     
    traversal(n,arr);
    mergesort(low,high,arr);
    traversal(n,arr);
    return 0;
}