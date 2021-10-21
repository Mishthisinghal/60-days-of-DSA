#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int num){
        data=num;
        next=NULL;
    }
};

class queue{
    node*head;
    node*tail;
    
    int size;

    public:
    queue(){
        head=NULL;
        tail=NULL;
        size=0;
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
        node*newn=new node(num);
        if(head==NULL){
            head=newn;
            tail=newn;
        }
        else{
            tail->next=newn;
            tail=tail->next;
        }
        size++;

    }

    int dequeue(){
        node*ptr=head;
        if(size!=0){
        head=head->next;
        int data=ptr->data;
        delete ptr;
        size--;
        return data;
        }
        else{
            return -1;
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
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.getsize()<<endl;
    cout<<q.isempty()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.isempty()<<endl;

    return 0;
}