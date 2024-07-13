#include<bits/stdc++.h>
using namespace std;

class node{
public:
 int data;
 node *top;
 node(int val):
 data(val),
 top(NULL)
 {
 }
 }; 
 
 

int main(){
queue<node*> q;
int n=5;
while(n--){
  int ele;
  cout<<"enter ele: ";
  cin>>ele;
  node *nn=new node(ele);
  q.push(nn);
 }
 cout<<q.front()->data;
 q.pop();
  cout<<q.front()->data;
   cout<<q.back()->data;
   cout<<q.size();
  
 }
