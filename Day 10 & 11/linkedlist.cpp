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

Node* insertati(Node*head,int i,int info){
    Node*n=new Node();
    n->data=info;
    Node*p=head;

    if(head==NULL){
        cout<<"The list is empty"<<endl;
        head=n;
        n->link=NULL;
        return head;
    }

    else if(i==0 && head!=NULL){
        n->link=head;
        head=n;
        return head;
    }
    else{
    for(int j=0;j<i-1;j++){
        if(p->link==NULL){
            break;
        }else{
        p=p->link;
        }
    }
    if(p->link==NULL){
        p->link=n;
        n->link=NULL;    
        }else{
    Node*q=p->link;
    p->link=n;
    p=p->link;
    p->link=q;
    }
    
    return head;
    }

}

int main(){
    Node*head=newinput();
    traversal(head);
    head=insertati(head,0,11);
    traversal(head);
    return 0;
} 