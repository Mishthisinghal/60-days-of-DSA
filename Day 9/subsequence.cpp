#include<bits/stdc++.h>
using namespace std;

void subsequence(string input,string output,int index){

    if(index==input.length()){
        cout<<output<<endl;
        return;
    }
    else{
    char str=input[index];
    
    subsequence(input,output+str,index+1);
    subsequence(input,output,index+1);
    }
    

}
int main(){
    subsequence("abc","",0);
    return 0;
}