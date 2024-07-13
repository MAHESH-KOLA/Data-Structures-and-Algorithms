#include<bits/stdc++.h>
using namespace std;

void postfixToInfix(string s){
   stack<char> st;
   int n=s.size();
   for(int i=0;i<n;i++){
      if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') ){
        // string op(1,s[i]);
         st.push(s[i]);
         }
       else{
        string a= st.top();
        st.pop();
        string b= st.top();
        st.pop();
        st.push('('+ b+ s[i] +a +')');
        }
}
cout<<st.top();
}

int main(){
string s;
s="kl+mn*-op^w*u/v/t*+q+";
postfixToInfix(s);

return 0;
}
