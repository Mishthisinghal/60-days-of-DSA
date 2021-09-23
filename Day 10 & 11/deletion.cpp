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

Node* deleteati(Node*head,int i){
    Node*ptr=head;

    if(head==NULL){
        cout<<"Underflow"<<endl;
        return head;
    }
    else if(i==0){
        head=ptr->link;
        delete ptr;
        return head;
    }else{
    for(int j=0;j<i-1;j++){
        ptr=ptr->link;
        if(ptr==NULL){
            break;
        }
    }
    if(ptr==NULL){
        cout<<"index "<<i<<" not present in list"<<endl;
        return head;
    }else{
    Node*q=ptr->link;
    ptr->link=q->link;
    delete q;
    return head;
    }
    }
}
int main(){
    Node*head=newinput();
    traversal(head);
    head=deleteati(head,4);
    traversal(head);
    return 0;

}