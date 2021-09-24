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
void midpoint(Node*head){
    if(head==NULL){
        cout<<"The given list is empty"<<endl;
    }else{
    
    Node*ptr=head;
    int c=0;
    while(ptr!=NULL){
        ptr=ptr->link;
        c++;
    }
    Node*q=head;
    if(c%2==0){
        c=c-1;
    }
    for(int i=0;i<c/2;i++){
        q=q->link;
    }
  
    cout<<"The value of center node is: "<<q->data<<endl;
}
}
int main(){
    Node*head=newinput();
    traversal(head);
    midpoint(head);
    return 0;
}