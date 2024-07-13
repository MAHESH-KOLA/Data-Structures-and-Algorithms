#include<iostream>
using namespace std;

void push(int a[10], int n){
int top;
top=-1;
if(top<n){
a[++top]=n;
}
}

int pop(int a[10], int n){
int top;
top=n-1;
if(top>-1)
 top--;
 return top;
}

int main(){
 int n;
 cout<< "enter n: ";
 cin>> n;
 int a[n];
 push(a,2);
  push(a,3);
   push(a,4);
 int top;
top=pop(a,n);
 int i;
 for(i=0;i<top;i++)
  cout<< a[i]<<" ";
}
