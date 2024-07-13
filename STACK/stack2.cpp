/* stack */
#include<iostream>
using namespace std;

#define MAX 10
int a[MAX];
int top=-1;

void push(int ele){
 if(top==(MAX-1)){
   cout<<" stack overflow";
  }
  else{
  top=top+1;
  a[top]=ele;
  }
  cout<<ele<<" pushed into stack"<<endl;
  }
void pop(){
 if(top==-1)
   cout<<"stack underflow: ";
 else
   top=top-1;
 }
int main(){
 push(1);
 push(2);
 push(3);
 push(4);
 for(int i=0;i<=top;i++)
   cout<<a[i]<<" ";
 cout<<endl;
 pop();
 pop();
 pop();
 pop();
 pop();
 for(int i=0;i<=top;i++)
   cout<<a[i]<<" ";
 cout<<endl;
 cout<<"top: "<<a[top];
 
 }
