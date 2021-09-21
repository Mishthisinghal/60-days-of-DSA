#include<iostream>
using namespace std;
int stairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    else{
        return stairs(n-1)+stairs(n-2)+stairs(n-3);
    }
}
int main(){
    int num;
    cout<<"Enter the number of stairs-"<<endl;
    cin>>num;
    int ways= stairs(num);
    cout<<"the number of ways are:"<<ways<<endl;
    return 0;
}