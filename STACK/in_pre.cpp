#include<bits/stdc++.h>
using namespace std;

int prec(char c){
   if(c=='^')
     return 2;
   else if(c=='/' || c=='*')
     return 1;
   else if(c=='+' || c=='-')
     return 0;
   else
     return -1;
}

void infix_postfix(string s){
  stack<char> st;
  string res;
  int n=s.length();
  for(int i=n-1;i>=0;i--){
   if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') ){
          res=res+s[i];
       }
    else if(s[i]==')'){
       st.push('(');
       }
    else if(s[i]=='('){
       while(st.top()!='('){
          res=res+st.top();
          st.pop();
          }
          st.pop();
          }
   else{
     while(!st.empty() && prec(s[i])<prec(st.top())){
            res=res+st.top();
            st.pop();
            }
            st.push(s[i]);
   }
   }
while(!st.empty()){
  res=res+st.top();
  st.pop();
  }
  reverse(res.begin(), res.end());
cout<<res;
}

int main(){
  string s;
  s="k+l-m*n+(o^p)*w/u/v*t+q";
  infix_postfix(s);
  return 0;
  }
