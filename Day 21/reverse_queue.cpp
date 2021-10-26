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
        q.push(num);
    }
    for(int j=0;j<n;j++){
        int data=q.front();
        q.pop();
        s.push(data);

    }
    for(int k=0;k<n;k++){
        int info=s.top();
        s.pop();
        q.push(info);
    }
    cout<<"Output"<<endl;
    for(int m=0;m<n;m++){
        int res=q.front();
        q.pop();
        cout<<res<<" ";
    }
    return 0;
}