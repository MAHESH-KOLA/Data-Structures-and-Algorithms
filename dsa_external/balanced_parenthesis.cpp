#include<bits/stdc++.h>
using namespace std;

bool balanced_parenthesis(string a){
   int l=a.size();
   stack<char> st;
   for(int i=0;i<l;i++){
     if(a[i]=='(' || a[i]=='[' || a[i]=='{' ){
        //string op(1,a[i]);
        st.push(a[i]);
        }
     else{
       if(!st.empty() && a[i]==')'){
           if(st.top()!='(')
              return false;
            else
              st.pop();
	}
	else if(!st.empty() && a[i]==']'){
           if(st.top()!='[')
              return false;
            else
              st.pop();
	}
	else if(!st.empty() && a[i]=='}'){
           if(st.top()!='{')
              return false;
            else
              st.pop();
	}
	else
	 cout<<"invalid input";
	}
	}
	if(!st.empty())
	  return false;
return true;
}
int main(){
string s="[]({})()";
  if(balanced_parenthesis(s))
      cout<<"balanced";
  else
     cout<<"not balanced";
 return 0;
 }
