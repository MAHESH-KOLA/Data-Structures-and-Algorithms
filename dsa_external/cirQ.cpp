#include<iostream>
using namespace std;

#define size 5
int front=-1, rear=-1;
int a[size];

class Queue{
public:
   void enque(int n){
    if((rear+1)%size==front)
      cout<<"q is full: ";
     else if(front==-1 && rear==-1){
         front=0;
         rear=0;
         a[rear]=n;
         }
     else{
       rear=(rear+1)%size;
       a[rear]=n;
       }
     }
    int deque(){
    int d;
     if(rear==-1 && front==-1)
       cout<<"q is empty";
     else if(rear==front){
       d=a[front];
       front=rear=-1;
        
       }
      else{
         d=a[front];
        front=(front+1)%size;
       }
       return d;
    }
    
    void display(){
    for(int i=front;i!=rear;i=(i+1)%size)
       cout<<a[i]<<" ";
    cout<<a[rear];
    }
};

int main(){
  Queue q;
  q.enque(1);
  q.enque(2);
  q.enque(3);
  q.enque(4);
   q.display();

  q.enque(6);
   q.display();
  //q.enque(7);
  q.enque(5);
     cout<<endl;
 cout<<q.deque();
 q.enque(5);
  q.display();
  cout<<endl;
 cout<<q.deque();
 cout<<endl;
 cout<<q.deque();
 cout<<endl;
 cout<<q.deque();
 cout<<endl;
 cout<<q.deque();
  q.display();
  cout<<q.deque();
  cout<<q.deque();
}
