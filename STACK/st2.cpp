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
   
void infix_postfix(string s){
stack <char> st;
string res;
for(int i=0;i<s.length();i++){
  char c=s[i];
  if((c>='a' && c<='z') || (c>='a' && c<='z') || (c>='0' && c<='9') ){
     res=res+c;
     }
  else if( c=='('){
     st.push(c);
   }
  else if(c==')'){
     while(st.top()!='('){
        res=res+st.top();
        st.pop();
        }
        st.pop();
        }
  else {
			while (!st.empty()
				&& prec(s[i]) <= prec(st.top())) {
				res += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while (!st.empty()) {
		res += st.top();
		st.pop();
	}
        reverse(res.begin(),res.end());
	cout << res << endl;
}


int main(){

string s="k+l-m*n+o^p*w/u/v*t+q";
reverse(s.begin(), s.end());
//cout<<s;
infix_postfix(s);
return 0;
}
