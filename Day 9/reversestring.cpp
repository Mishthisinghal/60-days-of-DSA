#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }
    string st=s.substr(1);
    reverse(st);
    cout<<s[0];
}
int main(){
    string str;
    cout<<"Enter a string:"<<endl;
    cin>>str;
    reverse(str);
    return 0;
}
