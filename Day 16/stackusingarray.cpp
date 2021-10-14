#include<iostream>
using namespace std;
class stackusingarray{
    int *arr;
    int top;
    int size;

    public:
    stackusingarray(int s){
        size=s;
        top=0;
        arr=new int[size];
    }

    bool isempty(){
        if(top==0){
            return true;
        }
        return false;

    }

    bool isfull(){
        if(top==size){
            return true;
        }
        return false;
    }

    void push(int num){
        if(!isfull()){
        arr[top]=num;
        cout<<num<<" entered in stack"<<endl;
        top++;
        }
        else{
            cout<<"Overflow"<<endl;
        }
    }

    void pop(){
        if(!isempty()){
            top--;
            cout<<arr[top]<<" removed from stack"<<endl;
        }
        else{
            cout<<"Underflow"<<endl;

        }
    }

    void traversal(){
        cout<<"Stack is:"<<endl;
        for(int i=0;i<top;i++){
            cout<<arr[i]<<endl;
        }
    }



};
int main(){
    stackusingarray s(2);
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.push(55);

    s.traversal();

    s.pop();
    s.pop();
    s.pop();
    

    s.traversal();
    cout<<s.isempty()<<endl;
    cout<<s.isfull()<<endl;
    return 0;
}