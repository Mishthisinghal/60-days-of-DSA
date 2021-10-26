#include<iostream>
using namespace std;
#include<stack>
#include<queue>


int main(){
    int n;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    stack<int>s;
    queue<int>q;
    cout<<"Input"<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        s.push(num);
    }
    cout<<"Top of stack before reversal:"<<s.top()<<endl;
    for(int j=0;j<n;j++){
        int data=s.top();
        s.pop();
        q.push(data);

    }
    for(int k=0;k<n;k++){
        int info=q.front();
        q.pop();
        s.push(info);
    }
    cout<<"Top of stack after reversal:"<<s.top()<<endl;
    cout<<"Output:"<<endl;
    for(int m=0;m<n;m++){
        int res=s.top();
        s.pop();
        cout<<res<<" ";
    }
    return 0;
}