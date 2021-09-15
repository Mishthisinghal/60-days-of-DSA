#include<bits/stdc++.h>
using namespace std;

class myarray{
    int totsize;
    int usedsize;
    int *p=new int[totsize];

    public:
    void createarray();
    void traversal();
    void push(int val);
    void insertatindex(int i,int val);
    void pop();
    void deleteatindex(int i);
    void arraysum();
    void reverse();

};

void myarray::createarray(){

    cout<<"Enter total size of array-"<<endl;
    cin>>totsize;
    cout<<"Enter size you want to use-"<<endl;
    cin>>usedsize;
    cout<<"Enter elements of array-"<<endl;
    for(int i=0;i<usedsize;i++){
        int num;
        cin>>num;
        p[i]=num;
    }
}

void myarray::traversal(){
    cout<<"The array is:"<<endl;
    for(int i=0;i<usedsize;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

void myarray::push(int val){
    if(usedsize<totsize){
    p[usedsize]=val;
    usedsize++;
    }
    else{
        cout<<"Cannot push due to overflow condition"<<endl;
    }
}

void myarray::insertatindex(int i,int val){
    if(usedsize<totsize){
        for(int j=usedsize-1;j>=i;j--){
            p[j+1]=p[j];


        }
        p[i]=val;
        usedsize++;
    }
}

void myarray::pop(){
    if(usedsize>0){
    usedsize--;
    }
    else{
        cout<<"Cannot pop due to underflow condition"<<endl;
    }
}

void myarray::deleteatindex(int i){
    if(usedsize>0 && i<usedsize){
    for(int j=i;j<usedsize;j++){
        p[j]=p[j+1];
    }
    usedsize--;
    }
    else if(usedsize<0 && i<usedsize){
        cout<<"Cannot delete due to underflow condition;"<<endl;
    }
    else{
        cout<<"Cannot delete because index is outside usedsize range"<<endl;
    }
}

void myarray::arraysum(){
    int sum=0;
    for(int i=0;i<usedsize;i++){
        sum+=p[i];
    }
}

void myarray::reverse(){
    for(int i=0;i<usedsize/2;i++){
        int temp=p[i];
        p[i]=p[usedsize-i-1];
        p[usedsize-i-1]=temp;
    }
}
int main(){
    myarray a;
    a.createarray();
    a.pop();
    a.deleteatindex(2);
    a.push(11);
    a.traversal();
    a.insertatindex(2,55);
    a.traversal();
    a.reverse();
    a.traversal();
    return 0;
}