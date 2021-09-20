#include<iostream>
using namespace std;

void swap(int x,int y,int a[]){
    int temp;
    temp=a[x];
    a[x]=a[y];
    a[y]=temp;
}

void quicksort(int l,int h,int a[],int p){
    if(l<h){
    int pivot=p;
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

    quicksort(0,j-1,a,0);
    quicksort(j+1,h,a,j+1);
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

    int pivot;
    cout<<"Enter the pivot:"<<endl;
    cin>>pivot;
     
    traversal(n,arr);
    quicksort(low,high,arr,pivot);
    traversal(n,arr);
    return 0;
}