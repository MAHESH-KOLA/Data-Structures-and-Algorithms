#include<iostream>
using namespace std;

struct node{
 int data;
 node *next;
 node (int val){
   data=val;
   next=0;
}
};
void display(node *head){
	while(head!=0){
	 cout<< head->data<<" ";
	 head=head->next;
	 }
	 cout<<endl;
}
node *push(node *head, int val){
	node *nn=new node(val);
	node *temp;
	if(head==0){
	head=nn;
	temp=nn;
	}
	else{
	temp->next=nn;
	temp=nn;
	}
	return head;	
}

node *pop(node *head){
	node *temp=head;
	while(temp->next->next!=0){
	 temp=temp->next;
	 }
	 delete(temp->next);
	 temp->next=NULL;
	 return head;
}

int main(){
node *head=0;
head=push(head,2);
head=push(head,4);
head=push(head,6);
head=push(head,8);
head=pop(head);
head=pop(head);
display(head);
}
