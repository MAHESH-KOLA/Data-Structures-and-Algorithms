#include<iostream>
using namespace std;
#define max 5
int front=-1, rear=-1;
int a[max];
void enque(int val){
 if((rear+1)%max==front)
    cout<<"q is full";
 else{
 if(front==-1 && rear==-1){
    a[++front]=val;
    rear++;
    }
 else{
 rear=(rear+1)%max;
   a[rear]=val;
   }
 } 
}

int deque(){
  if(front==rear){
    cout<<"q is empty";
    return -1;
    }
  else{
   front=(front+1)%max;
   return front;
   }
 }
void display(){

for(int i=front;i!=rear;i=(i+1)%max)
   cout<<a[i]<<" ";
  cout<<a[rear]<<"\n";
 }
 
int main(){
enque(1);
enque(2);
enque(3);
enque(4);
enque(5);
display();
cout<< deque()<< " ";
cout<< deque()<< " ";
cout<<"\n";
display();
enque(7);
enque(9);
display();
cout<< deque()<< " ";
cout<<"\n";

display();
return 0;
}


