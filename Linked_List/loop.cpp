#include<iostream>
using namespace std;

struct node{
 int data;
 node *next;
 int flag=1;
 node (int val){
 data=val;
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
 
 int loop(node *head){
 node *temp=head;
 node *slow=head;
 node *fast=head;
 int flag=0;
 while(slow && fast && fast->next){
 slow=slow->next;
 fast=fast->next->next;
 if(slow==fast)
  return 1;
 }
 return 0;
 }
 
 int main(){
 int n;
 cout<<" enter no of elements: ";
 cin>>n;
 node *head=0,*temp,*extra;
 while(n--){
 int ele;
 cout<<"enter element: ";
 cin>>ele;
 node *nn=new node(ele);
 if(n==2)
  extra=nn;
 if(head==0){
 head=nn;
 temp=nn;
 }
 else{
 temp->next=nn;
 temp=nn;
 }
 }
 //temp->next=extra;
// display(head);
if(loop(head))
 cout<<"loop";
else
 cout<<"no loop";
 }
 
 
