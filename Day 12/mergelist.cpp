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
Node*mergelist(Node*head1,Node*head2){
     Node*p1=head1;
     Node*p2=head2;
     Node*head;
     if(head1==NULL){
         return head2;
     }
     else if(head2==NULL){
         return head1;
     }
     else{
     if(p1->data<p2->data){
         head=head1;
         p1=p1->link;
     }
     else{
         head=head2;
         p2=p2->link;
     }
     Node*temp=head;
     while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            temp->link=p1;
            temp=temp->link;
            p1=p1->link;
        }
        else{
            temp->link=p2;
            temp=temp->link;
            p2=p2->link;
        }

     }
     while(p1!=NULL){
        temp->link=p1;
        temp=temp->link;
        p1=p1->link;
     }
     while(p2!=NULL){
        temp->link=p2;
        temp=temp->link;
        p2=p2->link;
     }
     return head;
     }
}

int main(){
    cout<<"Enter list 1:"<<endl;
    Node*head1=newinput();
    traversal(head1);
    cout<<"Enter list 2:"<<endl;
    Node*head2=newinput();
    traversal(head2);

    Node*head=mergelist(head1,head2);
    traversal(head);

    return 0;
}