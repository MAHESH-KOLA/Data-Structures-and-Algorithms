#include<bits/stdc++.h>
using namespace std;
struct node{
 int data;
 int priority;
 node *next;
 node(int v,int p){
    data=v;
    priority=p;
    next=0;
}
};

void display(node *head){
 while(head!=0){
  cout<<head->data<<" ";
  head=head->next;
  }
  cout<<endl;
  }
node *insert_head(node *head,node *nn){
  node *temp=head;
  nn->next=head;
  head=nn;
  return head;
 }
  
node *enque(node *head, int val, int pri){
  node *temp=head;
  node *nn=new node(val,pri);
  if(temp==0 || pri<temp->priority){
     head=insert_head(head,nn);
   }
  else{
  while(temp->next && temp->next->priority < pri ){
     temp=temp->next;
     }
     nn->next=temp->next;
     temp->next=nn;
     }
     return head;
     }
node *deque(node *head){
   node *temp=head;
   temp=temp->next;
   delete(head);
   return temp;
   }
int main(){
node *head=0;
vector<int> v={1,2,3,4,5};
int n=v.size();
for(auto &i: v){
 head=enque(head,i,n-i+1);
  }
/*
head=enque(head,20,2);
head=enque(head,10,1);
head=enque(head,30,6);
head=enque(head,80,10);
head=enque(head,40,7);
head=enque(head,50,8);
*/
display(head);
//head=deque(head);
display(head);
}
