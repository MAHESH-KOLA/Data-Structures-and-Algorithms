#include<bits/stdc++.h>
using namespace std;


int prec(char c){
 if(c=='^')
  return 3;
 else if(c=='/' || c=='*')
  return 2;
 else if(c=='+' || c=='-')
  return 1;
 else
  return -1;
  } 
  
 

void infixToPostfix(string s){
	string res;
	stack<char> st;
	int l=s.length();
	for(int i=l-1;i>=0;i--){
	  if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') ){
	  res=res+s[i];
	  }
	  else if(s[i]==')'){
	    st.push(s[i]);
	    }
	   else if(s[i]=='('){
	     while(st.top()!='('){
	       res=res+st.top();
	       st.pop();
	       }
	       st.pop();
	}
	   else{
	    while(!st.empty()  && prec(s[i])<=prec(st.top())){
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
 reverse(res.begin(),res.end());
  cout<<res<<endl;
}

int main(){
 string s;
 s="k+l-m*n+(o^p)*w/u/v*t+q";
 infixToPostfix(s);
 return 0;
 }
