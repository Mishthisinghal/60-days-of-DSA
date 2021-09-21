#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char a,char b,char c){
    if(n==0){
        return;
    }else{
       towerofhanoi(n-1,a,c,b);
       cout<<"disk "<<n<<" moves from "<<a<<" to "<<c<<endl;
       towerofhanoi(n-1,b,a,c); 
    }
}
int main(){
    int n;
    cout<<"Enter number of disks:"<<endl;
    cin>>n;
    towerofhanoi(n,'A','B','C');
    return 0;
}