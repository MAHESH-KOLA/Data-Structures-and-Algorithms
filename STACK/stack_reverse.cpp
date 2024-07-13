// reverse a string in stack
#include<iostream>
using namespace std;
#include<stack>

int main(){
 stack<char> a;
 string str;
 cin>> str;
 cout<< str<<endl;
 int i=0;
 while(str[i]!='\0'){
 a.push(str[i]);
 ++i;
 }
 for (i=0;i<str.size();i++){
 str[i]=a.top();
 a.pop();
 }
 
 cout<<str;
 }
 
