#include<bits/stdc++.h>
using namespace std;

struct Stack{
   stack<int> s1;
   stack<int> s2;
    void enQueue (int val){
	while(!s1.empty()){
	  s2.push(s1.top());
	  s1.pop();
	  }
	  s1.push(val);   
	  while(!s2.empty()){
	   s1.push(s2.top());   
	   s2.pop();   
	 }
	 }
   int deQueue(){
   	if(s1.empty()){
   	  cout<<"stack is empty";
   	  exit(0);
   	 }
   	int  x=s1.top();
   	 s1.pop();
   	 return x;
   	}
   };
int main(){
  cout<<"hello";
  Stack s;
  s.enQueue(1);
  s.enQueue(2);
  cout<<s.deQueue();
  cout<<s.deQueue();
  return 0;
  }
