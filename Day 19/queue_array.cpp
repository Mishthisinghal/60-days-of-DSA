#include<iostream>
using namespace std;

class queue{
    int *arr;
    int frontind;
    int nextind;
    int size;
    int capacity;
    public:
    queue(int s){
        arr=new int[s];
        frontind=-1;
        nextind=0;
        size=0;
        capacity=s;
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
            return;
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
    queue q(4);
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