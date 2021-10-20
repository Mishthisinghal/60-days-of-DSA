#include <iostream>
using namespace std;
class stack
{
    char *arr;
    int top;
    int size;

public:
    stack(int sz)
    {
        top = 0;
        size=sz;
        arr=new char[size];

    }

    bool isempty()
    {
        if (top == 0)
        {
            return true;
        }
        return false;
    }
    char high(){
        if(!isempty()){
        return arr[top-1];
        }
    }

    void push(char num)
    {

        arr[top] = num;
        top++;
    }

    char pop()
    {
        char c = arr[top-1];
        top--;
        return c;
    }

   
};

int prec(char c){
    if(c=='+' || c=='-'){
        return 1;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else{
        return -1;
    }
}

string infixtopost(string s){
      char ch;
      int size=s.length();
      stack st(size);
      string str;
      for(int i=0;i<size;i++){
          if(s[i]>='a' && s[i]<='z'){
              str+=s[i];
          }
          else if(s[i]=='('){
              st.push(s[i]);
          }
          else if(s[i]==')'){
              while(st.high()!='('){
                  ch=st.pop();
                  str+=ch;
              }
              st.pop();
          }
          
          else if(!st.isempty() && prec(s[i])<=prec(st.high())){
              ch=st.pop();
              str+=ch;
              st.push(s[i]);

          }
          else {
              st.push(s[i]);
          }
      } 
      while(!st.isempty()){
          ch=st.pop();
          str+=ch;
      } 
      return str;
}


int main()
{
    string mystr="p-r+s";
    cout<<infixtopost(mystr)<<endl;

    // stack s(3);
    // s.push('a');
    // s.push('b');
    // s.push('c');
    // cout<<s.high()<<endl;
    // cout<<s.pop()<<endl;
    // cout<<s.pop()<<endl;
    // cout<<s.isempty()<<endl;
    // cout<<s.high()<<endl;
    return 0;
}