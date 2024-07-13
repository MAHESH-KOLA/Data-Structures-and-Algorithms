#include<bits/stdc++.h>
using namespace std;

int prefixEvalution(string s){
	string res;
	int l=s.length();
	stack<int> st;
	for(int i=l-1;i>=0;i--){
	 if( s[i]>='0' && s[i]<='9'){
	   st.push(s[i]-'0');
	   }
	else{
	  int op1=st.top();
	  st.pop();
	  int op2=st.top();
	  st.pop();
	  
	  switch(s[i]){
	  case '+':{
	    st.push(op1+op2);
	    break;
	    }
	  case '-':{
	    st.push(op1-op2);
	    break;
	    }
	  case '*':{
	    st.push(op1*op2);
	    break;
	    }
	  case '/':{
	    st.push(op1/op2);
	    break;
	    }
	  case '^':{
	    st.push(pow(op1,op2));
	    break;
	    }
	   default:
	   break;
	   
	}  
	}
	
	
	}
	return st.top();
}
int main(){
//cout<<'1'-'0';
string s="-+7*45+20";
cout<<prefixEvalution(s)<<endl;

}
