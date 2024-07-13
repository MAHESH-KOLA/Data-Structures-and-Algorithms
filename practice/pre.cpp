#include<bits/stdc++.h>
using namespace std;

int prec(char ch){
if(ch=='^')
  return 2;
else if(ch=='/' || ch=='*')
 return 1;
else if(ch=='+' || ch=='-')
  return 0;
else
  return -1;
  }
  
void postfix(string s){
  stack<int> st;
  int n=s.size();
  string result;
  for(int i=n-1;i>=0;i--){
    if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>=0 && s[i]<=9))
      result=result+s[i];
    else if(s[i]==')')
      st.push(s[i]);
    else if(s[i]=='('){
      while(st.top()!=')'){
         result+=st.top();
         st.pop();
         }
         st.pop();
         }
    else{
	while(!st.empty() && prec(s[i])<prec(st.top())){
               result+=st.top();
               st.pop();
               }
               st.push(s[i]);
               }
     }
           while(!st.empty()){
     result+=st.top();
     st.pop();
     }
     reverse(result.begin(),result.end());
     cout<<result;	
}

int main(){
string s;
s="k+l-m*n+(o^p)*w/u/v*t+q";
postfix(s);
return 0;
}
