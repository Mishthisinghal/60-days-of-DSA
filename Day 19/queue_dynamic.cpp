#include<iostream>
using namespace std;

class queue{
    int *arr;
    int frontind;
    int nextind;
    int size;
    int capacity;
    public:
    queue(){
        frontind=-1;
        nextind=0;
        size=0;
        capacity=4;
        arr=new int[capacity];
    }

    int getsize(){
        return size;
    }

    bool isempty(){
        if(size==0){
            return true;
        }
        return false;
    }

    void enqueue(int num){
        if(frontind==-1){
            frontind=0;
        }
        if(size==capacity){
            int *newarr=new int[2*capacity];
            int j=0;
            for(int i=nextind;i<capacity;i++){
                newarr[j]=arr[i];
                j++;
            }
            for(int i=0;i<frontind;i++){
                newarr[j]=arr[i];
                j++;
            }
            delete []arr;
            arr=newarr;
            frontind=0;
            nextind=capacity;
            capacity*=2;

        }
        arr[nextind]=num;
        nextind=(nextind+1)%capacity;
        size++;
    }

    int dequeue(){
        if(isempty()){
            return -1;
        }
        else{
            int data=arr[frontind];
            frontind++;
            size--;
            if(frontind==capacity){
                frontind=0;
            }
            return data;
        }
    }

};

int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.getsize()<<endl;
    cout<< q.dequeue()<<endl;
    cout<< q.dequeue()<<endl;
    cout<< q.getsize()<<endl;
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    cout<< q.dequeue()<<endl;
    cout<< q.dequeue()<<endl;
    cout<< q.dequeue()<<endl;
    cout<< q.dequeue()<<endl;
    cout<< q.getsize()<<endl;
    return 0;
}