//postfix to infix

#include<bits/stdc++.h>
using namespace std;

void postfixToInfix(string s){
   stack<string> st;
   string a,b;
   int n=s.length();
     for(int i=n-1;i>=0;i--){
      if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
        string op(1, s[i]);
        st.push(op);
       }
      else{
          a=st.top();
         st.pop();
          b=st.top();
         st.pop();
         st.push('('+a+s[i]+b+')');
         }
         }
   cout<<st.top();       
     }
      
int main(){
string s;
s="*+ab/ef";
postfixToInfix(s);

return 0;
}
