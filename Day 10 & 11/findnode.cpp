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

int findnode(Node*head,int num){
    Node*ptr=head;
    int c=-1;
    
    while(ptr!=NULL){

        if(ptr->data==num){
            c++;
            return c;
            break;
        }
        c++;
        ptr=ptr->link;
    }
    return -1;
}
int main(){
    Node*head=newinput();
    traversal(head);
    int n=findnode(head,2);
    cout<<n<<endl;

    return 0;
}