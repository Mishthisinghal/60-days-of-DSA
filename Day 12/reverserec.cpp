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
Node*reverserec(Node*head){

    if(head==NULL || head->link==NULL){
        return head;
    }
    Node*ans=reverserec(head->link);
    Node*tail=head->link;
    tail->link=head;
    head->link=NULL;
    
    return ans;
}

int main(){
    Node*head=newinput();
    traversal(head);
    head=reverserec(head);
    traversal(head);
    return 0;
}