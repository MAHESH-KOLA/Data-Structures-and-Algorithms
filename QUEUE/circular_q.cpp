#include<bits/stdc++.h>
using namespace std;

#define n 5
int a[n];
int front=-1;
int rear=-1;

void array_push(int val){
  if((rear+1)%n==front)
     cout<<"q is full";
  else if(front==-1 && rear==-1){
  rear=0;
  front=0;
      a[rear]=val;
  
      }
  else{
     rear=(rear+1)%n;
     a[rear]=val;
       
     }
  }
  
void display(){
  for(int i=front;i<=(rear);i=(i+1)%n)
      cout<<a[i]<<" ";

}
  
int main(){
  array_push(1);
  array_push(2);
  array_push(3);
  array_push(4);
  array_push(5);
  cout<<front<<endl;
  cout<<rear<<endl;
  display();
}
