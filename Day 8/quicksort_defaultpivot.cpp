#include<iostream>
using namespace std;

void swap(int x,int y,int a[]){
    int temp;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;
}

void quicksort(int l,int h,int a[]){
    if(l<h){
    int pivot=l;
    int i=l;
    int j=h;
    
        while(i<j){
        while(a[i]<=a[pivot] && i<h){
            i++;
        }
        while(a[j]>=a[pivot] && j>l){
            j--;
        }
        if(i<j){
       swap(i,j,a);
        }
        }
    
    swap(l,j,a);

    quicksort(0,j-1,a);
    quicksort(j+1,h,a);
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
    quicksort(low,high,arr);
    traversal(n,arr);
    return 0;
}