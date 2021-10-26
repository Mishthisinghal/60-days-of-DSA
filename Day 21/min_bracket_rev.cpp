#include<iostream>
using namespace std;
#include<stack>

int bracrev(string s){
    stack<int>st1;
    stack<int>st2;

    for(int i=0;i<s.length();i++){
        if(s[i]=='{'){
            st1.push(s[i]);
        }
        if(s[i]=='}'){
            st2.push(s[i]);
        }
    }
    int op=0,cl=0;
    while(!st1.empty()){
        op++;
        st1.pop();
    }
    while(!st2.empty()){
        cl++;
        st2.pop();
    }
    int res;
    if(op>cl){
        res=op-cl;
    }
    else if(cl>op){
        res=cl-op;
    }
    else if(cl==op){
        return 0;
    }
    if(res%2==0){
        return res/2;
    }else{
        return -1;
    }


}

int main(){
    
    string str;
    cout<<"Enter string"<<endl;
    cin>>str;
    cout<<"Output:"<<bracrev(str);

    

    return 0;
}