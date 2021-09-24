#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*link;
};

Node* newinput(){
    Node*head=NULL;
    int info;
    cin>>info;
    
    while(info!=-1){
        
       
        Node*n=new Node();
        n->data=info;
        

        if(head==NULL){
            head=n;
        }
        else{
            Node*ptr=head;
            while(ptr->link != NULL){
                ptr=ptr->link;
            }
            ptr->link=n;
        }
        cin>>info;
    }
    return head; 
}

void traversal(Node *head){
    Node*temp=head;
    while(temp!=NULL){
    
    cout<<temp->data<<" ";
    temp=temp->link;
    }
    cout<<endl;
}

Node*reverseiter(Node*head){
    Node*prev=NULL;
    Node*curr=head;
    Node*next;
    while(curr!=NULL){
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;

    }
    head=prev;
    return head;
}
int main(){
    Node*head=newinput();
    traversal(head);
    head=reverseiter(head);
    traversal(head);
    return 0;
}