#include<bits/stdc++.h>
using namespace std;

void evalution(string s){
 int n=s.size();
 int res;
 stack<int> st;
 for(int i=n-1;i>=0;i--){
      if( (s[i]>='0' && s[i]<='9') ){
        st.push(s[i]-'0');
       }
       else{
        int b=st.top();
        st.pop();
        int a=st.top();
        st.pop();
        switch(s[i]){
        case '+':
          st.push((b+a));
          break;
       case '-':
          st.push((b-a));
          break;
       case '*':
          st.push((b*a));
          break;
       case '/':
          st.push((b/a));
          break;
       case '^':
          st.push(pow(b,a));
          break;
       default:
         break;
       }
}
}
cout<<st.top();

}

int main(){
string s="-+5*231";
evalution(s);

}
