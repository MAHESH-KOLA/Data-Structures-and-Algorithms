// queue using stack

#include<bits/stdc++.h>
using namespace std;
stack<int> st1;
stack<int> st2;

void display(){
 while(!st2.empty()){
   cout<< st2.top()<<" ";
   st2.pop();
   }
   }
int main(){
 st1.push(1);
 st1.push(2);
 st1.push(3);
 st1.push(4);
 st1.push(5);
 
while(!st1.empty()){
  st2.push(st1.top());
  st1.pop();
  }
 
display();
}
