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

Node*appendlast(Node*head,int n){
    Node*ptr=head;
    Node*q=head;
    int c=1;
    if(head==NULL){
        cout<<"Empty list"<<endl;
        return head;
    }else if(n>=c){
        return head;
    }else{
    while(q->link!=NULL){
        c++;
        q=q->link;
    }
    q->link=head;
    for(int i=0;i<c-n-1;i++){
        ptr=ptr->link;
    }
    Node*newp=ptr->link;
    ptr->link=NULL;
    head=newp;
    return head;
    }
}

int main(){
    Node*head=newinput();
    traversal(head);
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    head=appendlast(head,n);
    traversal(head);
    return 0;
}