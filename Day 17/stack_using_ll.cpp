#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int num){
        data=num;
        next=NULL;
    }
};
class stack{
    Node*head;
    public:
    stack(){
        head=NULL;
    }
    bool isempty(){
        if(head==NULL){
            return true;
        }
        return false;
    }

    void traversal(){
        Node*ptr=head;
        cout<<"Stack is:"<<endl;
        while(ptr!=NULL){
            cout<<ptr->data<<endl;
            ptr=ptr->next;

        }
    }
    void push(int element){
        Node*n=new Node(element);
        n->next=head;
        head=n;
        cout<<"Pushed "<<element<<" in stack"<<endl;
    }

    void pop(){
        if(!isempty()){
            Node*temp=head;
            int num=head->data;
            head=head->next;
            delete temp;
            cout<<"Popped "<<num<<" from the stack"<<endl;
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }


};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.traversal();

    s.isempty();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.isempty();
    

    return 0;
}