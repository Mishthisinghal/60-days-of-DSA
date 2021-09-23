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

Node* eliminateduplicate(Node*head){
    Node*p=head;
    Node*q=head->link;
    if(head==NULL){
        cout<<"Empty list"<<endl;
        return head;
    }else{
    while(q!=NULL){
        if(p->data==q->data){
            p->link=q->link;
            q=q->link;
        }
        else{
            p=p->link;
            q=q->link;
        }
    }
    return head;
    }
}
int main(){
    Node*head=newinput();
    traversal(head);
    head=eliminateduplicate(head);
    traversal(head);

    return 0;
}