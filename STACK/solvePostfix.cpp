#include<bits/stdc++.h>
using namespace std;

int postfixEvalution(vector<string> &s){
	//string res;
	int l=s.size();
	stack<int> st;
	for(int i=0;i<l;i++){
	 if( s[i]!="+" && s[i]!="-" and s[i]!="*" && s[i]!="/"){
	   st.push(stoi(s[i]));
	   }
	else{
	  int op1=st.top();
	  st.pop();
	  int op2=st.top();
	  st.pop();
	  string op= s[i];
	  switch(op){
	  case '+':{
	    st.push(op2+op1);
	    break;
	    }
	  case '-':{
	    st.push(op2-op1);
	    break;
	    }
	  case '*':{
	    st.push(op2*op1);
	    break;
	    }
	  case '/':{
	    st.push(float(op2/op1));
	    break;
	    }
	  // case '^':{
	  //   st.push(pow(op2,op1));
	  //   break;
	  //   }
	   default:
	   break;
	   
	}  
	}
	
	
	}
	return st.top();
}
int main(){
vector<string> s = {"2","1","+","3","*"};
cout<<postfixEvalution(s)<<endl;

}
