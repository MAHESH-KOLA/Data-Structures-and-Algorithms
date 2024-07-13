#include<bits/stdc++.h>
using namespace std;
class CPP{
public:
 stack<int> s1;
 stack<int> s2;
 
 void st_push(int val){
  // s1.push(val);
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
 int st_pop(){
  if(s1.empty()){
    cout<<"stack is empty..";
    return -1;
    }
  int n=s1.top();
  s1.pop();
  return n;
  }
  int q_rear(){
    return s1.top();
    }
  int q_front(){
    while(!s1.empty()){
      s2.push(s1.top());
      s1.pop();
      }
    int n=s2.top();
    while(!s2.empty()){
     s1.push(s2.top());
     s2.pop();
     }
     return n;
     }    
 };
 
int main(){
 CPP c;
 c.st_push(1);
 c.st_push(2);
 c.st_push(3);
 c.st_push(4);
 c.st_push(5);
 cout<<c.st_pop()<<" ";
  c.st_push(6);
  c.st_push(8);
  cout<<c.st_pop()<<" ";
  cout<<c.q_rear()<<" ";
  cout<<c.q_front()<<" ";
 return 0;
 }
