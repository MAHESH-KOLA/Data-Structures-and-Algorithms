#include<iostream>
using namespace std;
 
#define MAX 10
int a[MAX];
int front=-1;
int rear=-1;

void enque(int ele){
  if((rear+1)%MAX==front){
   cout<<" q is full";
   }
   else if(front==-1 && rear==-1){
    front=rear=0;
    a[rear]=ele;
    }
    else{
    rear+=1;
    a[(rear+1)%MAX]=ele;
    }
    } 
    
 void deque(){
  if(front==rear){
    cout<<"q is empty";
    front++;
  }
 /* else if(front==0 && rear==0){
    front=-1;
    rear=-1;
    }
   */else{
      front++;
      } 
 
 }
 
 
 void display(){
  for(int i=front;i<=rear;i++){
      cout<<a[i]<<" ";
      
      }
      cout<<endl;
      }


int main(){
 enque(2);
 enque(3);
  enque(4);
   enque(5);
   display();
   deque();
   display();
    deque();
   display();

   enque(2);
 enque(3);
  display();
}
