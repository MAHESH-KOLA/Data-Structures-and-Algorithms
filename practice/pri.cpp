#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  int pri;
  node* next;
node(int pri, int val){
  data=val;
  pri=pri;
  next=NULL;
  }
};

node* enque(int pri, int val, node* head){
 node* temp=head;
 node* nn=new node(pri,val)
 if(head==NULL){
   head=nn;
   temp=nn;
   }
  else{
   
   
int main(){
node *head=NULL;
 head=enque(1,2,head);
 
 return 0;
 }
