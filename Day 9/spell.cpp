#include<bits/stdc++.h>
using namespace std;

void spell(int num){
    int n=num%10;
    int newn=(num-n)/10;
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0){
        return;
    }else{
        spell(newn);
        cout<<arr[n]<<" ";
    }
}
int main(){
    spell(1567);
    return 0;
}