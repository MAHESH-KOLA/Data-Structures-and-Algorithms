#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
node(int x){
	data=x;
	next=NULL;
	}
};
void display(node *head){
node *temp=head;
while(temp!=NULL){
   cout << temp->data << " ";
   temp=temp->next;
   }
}
node *insert_head(node *head,int val){
 node *nn=new node(val);
 nn->next=head;
 head=nn;
 return head;
 }
node *insert_tail(node *head,int val){
 noe *temp=head;
 while(temp->next!=NULL)
   temp=temp->next;
  temp->next=new node(val);
  return head;
}
node *delete_head(node *head){
   node *temp=head;
   head=temp->next;
   delete(temp);
   return head;
}
node *delete_tail(node *head){
if(head==NULL)
   return NULL;
if(head->next==NULL){
     delete head;
     return NULL;
   }
   node *temp=head;
   while(temp->next->next!=NULL)
   temp=temp->next;
   delete(temp->next);
   temp->next=NULL;
   return head;
}


















 

