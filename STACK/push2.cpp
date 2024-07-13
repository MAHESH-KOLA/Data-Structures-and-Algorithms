#include<iostream>
using namespace std;
int top=-1;
int a[5];
int push(int ele){
 
 a[++top]=ele;
 
return 0;
}
int pop(){
 top=top-1;
return top;
}
int main(){
 push(2);
 push(4);
 push(6);
 
 for(int i=0;i<top+1;i++)
  cout<<a[i]<<" ";
  cout<<endl;
  pop();
   for(int i=0;i<top+1;i++)
  cout<<a[i]<<" ";
  cout<<endl;
  pop();
  for(int i=0;i<top+1;i++)
  cout<<a[i]<<" ";
  cout<<endl;
  return 0;
 }
