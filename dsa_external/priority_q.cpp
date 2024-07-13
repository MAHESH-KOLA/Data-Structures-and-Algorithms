#include<bits/stdc++.h>
using namespace std;

class node{
public:
  int data;
  int pri;
  node* next;
  node(){
  data;
  pri;
  next;
  }
  
  node(int v, int p){
    data=v;
    pri=p;
    next=NULL;
   }
  node* enque(node* head, int val, int pri){
      node* temp;
      node *nn= new node(val,pri);
      if(head==NULL || pri< head->pri){
        nn->next=head;
        head=nn;
        }
      else{
      temp=head;
       while(temp->next && pri > temp->next->pri){
          temp=temp->next;
          }
          nn->next=temp->next;
          temp->next=nn;
          }
   return head;
   }  
  void display(node* head){    
     while(head!=0){
       cout<<head->data<<" "<<head->pri<<endl;;
       head=head->next;
       }
       }
};

int main(){
 node pq;
 node* head=NULL;
 int check;
 cout<<"please enter:\n enque: 1 \n deque: 2 \n display: 3\n stop: 0\n";
 cin>>check;
 while(check){
  switch(check){
   case 1:
     int ele,pri;
     cout<< "enter element and priority: ";
     cin>>ele>>pri;
     head=pq.enque(head,ele,pri);
     break;
     
   case 3:
     pq.display(head);
      break;
   default:
    cout<<"invalid input";
    break;
  }
  cout<<"please enter:\n enque: 1 \n deque: 2 \n display: 3\n stop: 0\n";
 cin>>check;
  }
 /*
 head= pq.enque(head,10,1);
 head= pq.enque(head,30,3);
 head= pq.enque(head,20,2);
 head= pq.enque(head,60,6);
 head= pq.enque(head,80,8);
 head= pq.enque(head,0,0);
 head= pq.enque(head,50,5);
 pq.display(head);
 */
 return 0;
 }  
